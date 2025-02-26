#include <stdio.h>

// Global variable to count the number of valid paths
int totaljalan = 0;

void cari(int n, int m, int map[n][m], int vis[n][m], int c, int r) {
    // Check bounds
    if (c < 0 || c >= n || r < 0 || r >= m) return;

    // If cell is already visited, stop
    if (vis[c][r]) return;

    // Mark as visited
    vis[c][r] = 1;

    // Debugging: print current position
    printf("Visiting: (%d, %d) - Value: %d\n", c, r, map[c][r]);

    // If cell value is 1, it's a valid path to "home"
    if (map[c][r] == 1) {
        totaljalan++;
        vis[c][r] = 0; // Unmark to allow other paths
        return;
    }

    // If cell value is even or zero, it's a wall or invalid path
    if (map[c][r] % 2 == 0 && (c !=0 && r!=0)) {
        vis[c][r] = 0; // Unmark to allow other paths
        return;
    }

    // Recurse to all four possible directions
    cari(n, m, map, vis, c + 1, r); // Down
    cari(n, m, map, vis, c - 1, r); // Up
    cari(n, m, map, vis, c, r + 1); // Right
    cari(n, m, map, vis, c, r - 1); // Left

    // Backtrack: unmark the cell
    vis[c][r] = 0;
}

int main() {
    int n, m;

    // Input for the grid size
    scanf("%d %d", &n, &m);

    // Declare the map and visited arrays
    int arr[n][m];
    int vis[n][m];

    // Input the grid values and initialize visited array
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &arr[i][j]);
            vis[i][j] = 0; // Initially all cells are unvisited
        }
    }

    // Start pathfinding from (0, 0)
    cari(n, m, arr, vis, 0, 0);

    // Output the result
    if (totaljalan > 0) {
        printf("Terdapat %d jalan untuk kucing oren pulang\n", totaljalan);
    } else {
        printf("Kucing oren tidak bisa pulang ke rumah :(\n");
    }

    return 0;
}
