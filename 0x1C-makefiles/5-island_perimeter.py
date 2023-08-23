#!/usr/bin/python3
"""
A python function that returns the perimeter of the island described in grid
"""


def island_perimeter(grid):
    '''defines and check for grid values
    then returns perimeter
    '''
    if not grid:
        return 0

    rows = len(grid)
    cols = len(grid[0])
    perimeter = 0

    if rows == 0 or cols == 0:
        return 0

    '''calculates perimeter'''
    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                if i == rows - 1 or grid[i + 1][j] == 0:
                    perimeter += 1
                if j == cols - 1 or grid[i][j + 1] == 0:
                    perimeter += 1
                if i == 0 or grid[i - 1][j] == 0:
                    perimeter += 1
                if j == 0 or grid[i][j - 1] == 0:
                    perimeter += 1
    return perimeter
