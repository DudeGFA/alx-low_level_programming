#!/usr/bin/python3
"""Defines a function that returns perimeter of an island"""


def island_perimeter(grid):
    """Return the perimeter of an island.
    The grid represents water by 0 and land by 1.
    Args:
        grid (list): A list of list of integers representing an island.
    Returns:
        The perimeter of the island defined in grid.
    """
    height = len(grid)
    width = len(grid[0])
    borders = 0
    no_of_squares = 0

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                no_of_squares += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    borders += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    borders += 1
    return no_of_squares * 4 - borders * 2
