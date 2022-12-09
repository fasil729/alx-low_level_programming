#!/usr/bin/python3
""" grid island"""


def island_perimeter(grid):
    """ calculates the perimeter of the the island """
    perimeter = 0
    j = 0
    leng = 1
    while j < len(grid):
        i = 0
        isl_cell = 0
        while i < len(grid[j]):
            if grid[j][i] == 1:
                if j != len(grid) - 1:
                    if grid[j+1][i] == 1:
                        perimeter -= leng*2
                if i != len(grid[j]) - 1:
                    if grid[j][i+1] == 1:
                        perimeter -= leng*2
                perimeter += leng*4
            i += 1
        j += 1
    return perimeter
