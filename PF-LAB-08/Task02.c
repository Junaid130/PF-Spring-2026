#include <stdio.h>
int main(){
    int hall[5][6] = {
        {0,0,0,0,0,0},
        {1,0,0,0,0,0},
        {1,1,0,0,0,0},
        {1,1,1,0,0,0},
        {1,1,1,1,0,0},
    };
    int row_total[5] = {0,0,0,0,0};
    int most = -10, q2,total=0;
    for(int i = 0; i<5;i++){
        for(int j = 0; j<6; j++){
            row_total[i] += hall[i][j];
            if(hall[i][j]== 0){
                total++;
            }
        }
        if(row_total[i] > most){
            q2 = i;
            most = row_total[i];
        }
    }

    printf("Total amount of seats left are %d\n", total);
    printf("Row with most full seats is %d", q2+1);

}