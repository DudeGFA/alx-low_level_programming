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
    no_of_squares = 0
    for horizontal_grid in grid:
        no_of_squares += horizontal_grid.count(1)
    return (2 * no_of_squares) + 2
