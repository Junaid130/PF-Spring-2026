/* Q1 Tower Countdown — Staircase Power Bill
📋 Scenario
A building manager is calculating the electricity cost per floor in a skyscraper. The ground floor (floor 1) uses 100 kWh per day. Each floor above it uses exactly the same amount as the floor below it, doubled. The manager needs a recursive function to quickly compute how many total kWh a tower of N floors consumes in a single day.
✅ Your Tasks
1. Write a recursive function int totalPower(int floors) that returns the total kWh consumed by a building with the given number of floors.
2. Use the base case: a 1-floor building uses 100 kWh.
3. In main(), prompt the user to enter the number of floors, then print the total power consumption.
4. Trace the recursive call stack (on paper or as comments) for totalPower(4).
💡 Hint: Think of each call as handling one floor's power and adding it to the result of the floors below it. The base case is your stopping condition.*/
#include <stdio.h>

int totalPower(int floors) {
    if (floors == 1) {
        return 100;
    }
    int currentPower = 100;
    for(int i = 1; i < floors; i++) {
    currentPower *= 2;
    }
    return currentPower + totalPower(floors - 1);
}

int main() {
    int floors;
    printf("Enter the number of floors: ");
    scanf("%d", &floors);
    printf("Total power is %d kWh\n", totalPower(floors));
    return 0;
}