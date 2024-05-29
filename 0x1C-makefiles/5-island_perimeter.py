#!/usr/bin/python3
"""the perimeter of the island"""

def island_perimeter(grid):
    """Return the perimeter of an island.

    The grid represents 0 in water zone and 1 in land zone.

    Args:
        grid (list): The list of lists of integers to represent the island.
        
    Returns:
        The perimeter of the grid representing the island.
    """
    width = len(grid[0])
    height = len(grid)
    edges = 0
    size = 0

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                size += 1
                if j > 0 and grid[i][j - 1] == 1:
                    edges += 1
                if i > 0 and grid[i - 1][j] == 1:
                    edges += 1
    return size * 4 - edges * 2
