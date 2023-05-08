#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <elf.h>
#include <sys/stat.h>
#include <fcntl.h>
void elf_check(unsigned char *a_ptr);
void elf_pnt(unsigned char *a_ptr);
void class_pnt(unsigned char *a_ptr);
void pnt_data(unsigned char *a_ptr);
void show_v(unsigned char *a_ptr);
void show_os_abi(unsigned char *a_ptr);
void pnt_abi-v(unsigned char *a_ptr);
void pnt_typ(unsigned int e_typ, unsigned char *a_ptr);
void show_entry(unsigned long int e_entry, unsigned char *a_ptr);
void exit_elf(int elf);
/**
 * elf_check- checks for an ELF
 * @a_ptr: pointer to the array conitaining elf numbers
 * exit code 98: not an ELF file
 */
void elf_check(unsigned char *a_ptr)
{
	int i;

	for (i = 0; i < 4; i++)
	{
		if (a_ptr[i] != 127 &&
				a_ptr[i] != 'E' &&
				a_ptr[i] != 'L' &&
				a_ptr[i] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}

