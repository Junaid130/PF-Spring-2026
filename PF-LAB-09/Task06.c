#include <stdio.h>
float totalRevenue(float bills[], int n);
int bestTable(float bills[], int n);
int isProfitable(float total);
int main() {
    float bills[5];
    int n = 5;

    printf("Enter the bill amounts for tables: \n");
    for (int i = 0; i < n; i++) {
        printf("Table %d: ", i + 1);
        scanf("%f", &bills[i]);
    }

    
    float total = totalRevenue(bills, n);
    printf("Total Revenue: %.2f\n", total);
    
    printf("Best Performing Table: Table %d\n", bestTable(bills, n) + 1);
    
    if (isProfitable(total)) {
        printf("profitable\n");
    } else {
        printf("cooked\n");
    }

    return 0;
}

float totalRevenue(float bills[], int n) {
    float sum = 0;
    for (int i = 0; i < n; i++) {
        sum = sum + bills[i];
    }
    return sum;
}

int bestTable(float bills[], int n) {
    int maxIdx = 0;
    for (int i = 1; i < n; i++) {
        if (bills[i] > bills[maxIdx]) {
            maxIdx = i;
        }
    }
    return maxIdx;
}

int isProfitable(float total) {
    if (total > 10000.0) {
        return 1;
    } else {
        return 0;
    }
}
