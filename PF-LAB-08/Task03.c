#include <stdio.h>
int main(){
    float temp[7][3] = {
    {20.5, 28.0, 22.0}, // Day 1 (Mon)
    {21.0, 30.5, 23.5}, // Day 2 (Tue)
    {22.0, 32.0, 24.0}, // Day 3 (Wed) -> 32.0 is the Weekly High
    {19.5, 27.5, 21.0}, // Day 4 (Thu)
    {20.0, 29.0, 22.5}, // Day 5 (Fri)
    {21.5, 31.0, 23.0}, // Day 6 (Sat)
    {18.0, 26.0, 19.5}  // Day 7 (Sun)
    };
    float total[7] = {0,0,0,0,0,0,0};
    float avg[7] = {0,0,0,0,0,0,0};
    float max = -99999;
    int a;
    for(int i = 0; i<7;i++){
        for(int j=0; j<3;j++){
            total[i] += temp[i][j];
            if(temp[i][j] > max){
                max = temp[i][j];
                a = i;
            }
        }
        avg[i] = total[i] / 3.0;
    }
    printf("Highest temperature was recorded at %.2f at day %d\n", max, a+1);
    for(int i = 0; i<7; i++){
        printf("Avg on day %d is %.2f\n", i+1, avg[i]);
    }
}
