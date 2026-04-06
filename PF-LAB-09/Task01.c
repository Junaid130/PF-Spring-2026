#include <stdio.h>
float triageScore(int severity, int age, int vitals);
int main(){
  int severity[10] = {1,2,3,4,5,6,7,8,9};
  int age[10] = {1,2,3,4,5,6,7,8,9};
  int vitals[10] = {1,2,3,4,5,6,7,8,9};
  for(int i = 0; i<9; i++){
    float score = triageScore(severity[i],age[i],vitals[i]);
    if(score > 7.0){
      printf("Immediate attention required");
    }else if(score > 4.0){
      printf("Moderate policy");
    }else printf("Can wait");
    printf("\n");
  }
}

float triageScore(int severity, int age, int vitals){
  float score = 0;
  score = (severity * 0.5) + (age * 0.3) + (vitals * 0.2);
  return score;
}

