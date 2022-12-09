#!/usr/bin/python3
""" grid island"""


def island_perimeter(grid):
    """ calculates the perimeter of the the island """
    leng = 1
    j = 0
    perimeter = 0
    while j < len(grid):
        i = 0
        isl_cell = 0
        while i < len(grid[j]):
            if grid[j][i] == 1:
                isl_cell += 1
                if i != len(grid[j]) - 1:
                    if grid[j+1][i]:
                        perimeter -= 2*leng
            i += 1
        perimeter += (leng*4)*isl_cell - 2*(isl_cell - 1)
        j += 1
    return perimeter
