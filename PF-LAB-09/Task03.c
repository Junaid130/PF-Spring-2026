#include <stdio.h>
int totalRuns(int arr[], int n);
int highestScore(int arr[], int n);
int aboveAverage(int arr[], int n, float avg);

int main(){
    int runs[10] = {10, 10, 10, 10, 10, 10, 10, 10, 10, 10};
    int n = 10, total;
    float avg;
    total = totalRuns(runs, n);
    printf("Total Runs = %d\n", total);
    printf("Highest score = %d\n", highestScore(runs, n));
    avg = total/10.0;
    printf("Above Average runs = %d\n", aboveAverage(runs,n, avg));
}

int totalRuns(int arr[], int n){
    int total=0;
    for(int i=0; i<n; i++){
        total = arr[i] + total;
    }
    return(total);
}
int highestScore(int arr[], int n){
    int highest=0;
    for(int i=0; i<n; i++){
        if(arr[i] > highest){
            highest = arr[i];
        }
    }
    return(highest);
}
int aboveAverage(int arr[], int n, float avg){
    int count = 0;
    for(int i=0; i<n; i++){
        if(arr[i] > avg){
            count++;
        }
    }
    return count;
}