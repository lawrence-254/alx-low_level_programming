#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <elf.h>
#include <sys/stat.h>
#include <fcntl.h>
void elf_check(unsigned char *e_ident);
void elf_pnt(unsigned char *e_ident);
void class_pnt(unsigned char *e_ident);
void pnt_data(unsigned char *e_ident);
void show_v(unsigned char *e_ident);
void show_os_abi(unsigned char *e_ident);
void pnt_abi_v(unsigned char *e_ident);
void pnt_typ(unsigned int e_type, unsigned char *e_ident);
void show_entry(unsigned long int e_entry, unsigned char *e_ident);
void exit_elf(int elf);
/**
 * elf_check- checks for an ELF
 * @e_ident: pointer to the array conitaining elf numbers
 * exit code 98: not an ELF file
 */
void elf_check(unsigned char *e_ident)
{
	int i;

	for (i = 0; i < 4; i++)
	{
		if (e_ident[i] != 127 &&
				e_ident[i] != 'E' &&
				e_ident[i] != 'L' &&
				e_ident[i] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}
/**
 * elf_pnt - prints magic nums of ELF header
 * @e_ident: pointer to the array conitaining elf numbers
 */
void elf_pnt(unsigned char *e_ident)
{
	int i;

	printf(" Magic: ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x", e_ident[i]);

		if (i == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}
/**
 * class_pnt - prints class of an ELF header
 * @e_ident: pointer to the array conitaining elf class
 */
void class_pnt(unsigned char *e_ident)
{
	printf(" Class: ");

	switch (e_ident[EI_CLASS])
	{
		case ELFCLASS64:
			printf("ELF64\n");
			break;
			case ELFCLASS32:
			printf("ELF32\n");
			break;
			case ELFCLASSNONE:
			printf("none\n");
			break;
			default:
			printf("<unknown: %x>\n",
					e_ident[EI_CLASS]);
	}
}
/**
 * pnt_data - of an ELF header
 * @e_ident: pointer to the array conitaining elf class
 */
void pnt_data(unsigned char *e_ident)
{
	printf(" Data: ");

	switch (e_ident[EI_DATA])
	{
		case ELFDATA2MSB:
			printf("2's complement, big endian\n");
			break;
			case ELFDATA2LSB:
			printf("2's complement, little endian\n");
			break;
			case ELFDATANONE:
			printf("none\n");
			break;
			default:
			printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}
/**
 * show_v -  version of an ELF header.
 * @e_ident: pointer to the array conitaining elf version
 */
void show_v(unsigned char *e_ident)
{
	printf(" Version: %d", e_ident[EI_VERSION]);
	switch (e_ident[EI_VERSION])
	{
		case EV_CURRENT:
			printf(" (current)\n");
			break;
			default:
			printf("\n");
			break;
	}
}
/**
 * show_os_abi - OS/ABI of an ELF header
 * @e_ident: pointer to the array conitaining elf os/abi header
 */
void show_os_abi(unsigned char *e_ident)
{
	printf(" OS/ABI: ");
	switch (e_ident[EI_OSABI])
	{
		case ELFOSABI_LINUX:
			printf("UNIX - Linux\n");
			break;
			case ELFOSABI_HPUX:
			printf("UNIX - HP-UX\n");
			break;
			case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris\n");
			break;
			case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD\n");
			break;
			case ELFOSABI_ARM:
			printf("ARM\n");
			break;
			case ELFOSABI_STANDALONE:
			printf("Standalone App\n");
			break;
			case ELFOSABI_TRU64:
			printf("UNIX - TRU64\n");
			break;
			case ELFOSABI_FREEBSD:
			printf("UNIX - FreeBSD\n");
			break;
			case ELFOSABI_IRIX:
			printf("UNIX - IRIX\n");
			break;
			case ELFOSABI_NONE:
			printf("UNIX - System V\n");
			break;
			default:
			printf("<unknown: %x>\n", e_ident[EI_OSABI]);
	}

}
/**
 * pnt_abi_v - ABI version of an ELF header
 * @e_ident: pointer to the array conitaining elf version header
 */
void pnt_abi_v(unsigned char *e_ident)
{
	printf(" ABI Version: %d\n", e_ident[EI_ABIVERSION]);
}
/**
 * pnt_typ - of an ELF header
 * @e_type: ELF type.
 * @e_ident: pointer to the array conitaining elf class
 */
void pnt_typ(unsigned int e_type, unsigned char *e_ident)
{
	if (e_ident[EI_DATA] == ELFDATA2MSB)
		e_type >>= 8;
	printf(" Type: ");
	switch (e_type)
	{
		case ET_CORE:
			printf("CORE (Core file)\n");
			break;
			case ET_EXEC:
			printf("EXEC (Executable file)\n");
			break;
			case ET_DYN:
			printf("DYN (Shared object file)\n");
			break;
			case ET_REL:
			printf("REL (Relocatable file)\n");
			break;
			case ET_NONE:
			printf("NONE (None)\n");
			break;
			default:
			printf("<unknown: %x>\n", e_type);
	}
}
/**
 * show_entry - the entry point of an ELF header
 * @e_ident: pointer to the array conitaining elf class
 * @e_entry: address of the ELF entry point.
 */
void show_entry(unsigned long int e_entry, unsigned char *e_ident)
{
	printf(" Entry point address: ");
	if (e_ident[EI_DATA] == ELFDATA2MSB)
	{
		e_entry = ((e_entry << 8) & 0xFF00FF00) |
			 ((e_entry >> 8) & 0xFF00FF);
		e_entry = (e_entry << 16) | (e_entry >> 16);
	}
	if (e_ident[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)e_entry);
	else
		printf("%#lx\n", e_entry);
}
/**
 * exit_elf - exits the ELF file
 * @elf: file descriptor of the ELF file.
 */
void exit_elf(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", elf);
		exit(98);
	}
}
/**
 * main - Entry point to my programm
 * @argc: number of arguments
 * @argv: value of arguments
 * Return: 0 on success else exit code 98.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	Elf64_Ehdr *header;
	int o, r;

	o = open(argv[1], O_RDONLY);
	if (o == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	header = malloc(sizeof(Elf64_Ehdr));
	if (header == NULL)
	{
		exit_elf(o);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	r = read(o, header, sizeof(Elf64_Ehdr));
	if (r == -1)
	{
		free(header);
		exit_elf(o);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}
	elf_check(header->e_ident);
	printf("ELF Header:\n");
	elf_pnt(header->e_ident);
	class_pnt(header->e_ident);
	pnt_data(header->e_ident);
	show_v(header->e_ident);
	show_os_abi(header->e_ident);
	pnt_abi_v(header->e_ident);
	pnt_typ(header->e_type, header->e_ident);
	show_entry(header->e_entry, header->e_ident);

	free(header);
	exit_elf(o);
	return (0);
}
