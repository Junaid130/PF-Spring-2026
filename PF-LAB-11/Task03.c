/*Q3 Maze Escape — Recursive Path Finder
📋 Scenario
A game developer is prototyping a simple 1-D maze. The player starts at position 0 and must reach position N. At each step the player can move either 1 step or 2 steps forward. The developer needs a recursive function that counts the total number of distinct ways the player can reach position N — this
is used to generate maze difficulty ratings.
✅ Your Tasks
1. Write a recursive function int countWays(int n) that returns the number of distinct ways to reach step n from step 0 using moves of 1 or 2.
2. Identify and implement the correct base cases (n == 0 and n == 1).
3. In main(), prompt for N (1 ≤ N ≤ 15) and print the result.
4. Print each unique path as a sequence of moves (e.g., 1+1+2) for N = 4 using a second
recursive helper that tracks the path so far.
💡 Hint: This is structurally similar to Fibonacci!             countWays(n)= countWays(n-1) + countWays(n-2). Start there and verify with small values.*/
#include <stdio.h>
int countWays(int x) {
    if(x == 0){
        return 1;
    }
    if(x == 1){
        return 1;
    }
    return countWays(x - 1) + countWays(x - 2);
}
void printPaths(int n, char path[], int top) {
    if (n == 0) {
        path[top] = '\0';
        printf("%s\n", path);
        return;
    }
    if (n >= 1) {
        path[top] = '1';
        printPaths(n - 1, path, top + 1);
    }
    if (n >= 2) {
        path[top] = '2';
        printPaths(n - 2, path, top + 1);
    }
}
int main() {
    int x;
    char pathData[100];
    printf("Enter the target position (1-15): ");
    scanf("%d", &x);
    if (x < 1 || x > 15) {
        printf("Invalid input. Please enter a number between 1 and 15. \n");
        return 0;
    }
    printf("number of ways to reach position %d: %d\n", x, countWays(x));
    printf("\n unique paths are ");
    printPaths(x, pathData, 0);
    return 0;
}