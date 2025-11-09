#include<stdio.h>
#include<string.h>
/*
char board[3][4] = {
    {'A','B','C','E'},
    {'S','F','C','S'},
    {'A','D','E','E'}
};

char word[] = "ABCCED";
int visited[3][4] = {0};
int rows = 3, cols = 4;
int found = 0;

void dfs(int x, int y, int index) {
    if (found) return; // already found, stop further search
    if (index == strlen(word)) { // matched whole word
        printf("True\n");
        found = 1;
        return;
    }
    if (x < 0 || y < 0 || x >= rows || y >= cols) return; // out of bounds
    if (visited[x][y]) return; // already visited
    if (board[x][y] != word[index]) return; // letter mismatch

    visited[x][y] = 1; // mark

    dfs(x+1, y, index+1);
    dfs(x-1, y, index+1);
    dfs(x, y+1, index+1);
    dfs(x, y-1, index+1);

    visited[x][y] = 0; // unmark
}

int main() {
    for (int i = 0; i < rows && !found; i++) {
        for (int j = 0; j < cols && !found; j++) {
            if (board[i][j] == word[0]) {
                dfs(i, j, 0);
            }
        }
    }
    if (!found) printf("False\n");
    return 0;
}

*/