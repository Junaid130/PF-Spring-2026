#include <stdio.h>
int main(){
    int marks[4][3] = {
    {80, 75, 90},
    {60, 70, 85},
    {88, 92, 79},
    {55, 65, 70},
};
int total[3] = {0,0,0};
int subtotal[4]= {0,0,0,0};
float avg[3] = {0,0,0};

for(int i = 0; i<3; i++){
    for(int j = 0; j<4; j++){
        total[i] = total[i] + marks[j][i];
    }
    avg[i] = total[i] / 4.0;
}

for(int i=0; i<4; i++){
    for(int j=0; j<3; j++){
        subtotal[i] = subtotal[i] + marks[i][j];
    }
}

for(int i = 0; i<4; i++){
    printf("\nTotal for student %d is %d",i+1,subtotal[i]);
}
for(int i = 0; i<3; i++){
    printf("\nAverage for subject %d is %.2f",i+1,avg[i]);
}
}