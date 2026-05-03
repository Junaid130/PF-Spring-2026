/*An IoT device collects three types of readings from different sensors in a smart
factory: an integer from a vibration sensor (vibrations per second), a float from a
temperature sensor (degrees Celsius), and a character code from a status sensor ('N'
for Normal, 'W' for Warning, 'C' for Critical). The embedded system has a single
generic pointer variable that must be reused across all three sensors to conserve
memory resources.
TASK
Write a C program declaring one void *sensor pointer. Assign it to an int variable (vibrations = 847), print the value by casting to (int *). Reassign to a float variable
(temperature = 73.6), print using (float *) cast. Reassign to a char variable (status =
'W'), print using (char *) cast. After each print, also print the memory address stored in
the pointer using %p. Finally, write a conditional that reads the status character
through the void pointer and prints an appropriate alert message for each of the three
status codes.
HINT Dereference pattern: *(int *)sensor. For the conditional: if(*(char *)sensor == 'W'). Print
addresses with %p and cast the pointer to (void *) in printf for correctness.
*/
#include <stdio.h>
int main(){
    int vibration = 100;
    float temp = 67.0;
    char sensor = 'W';
    void *p;
    p = &vibration;
    printf("Value :%d Adress:%p\n ", *(int *)p , (void *)p);
    p = &temp;
    printf("Value :%f Adress:%p\n ", *(float *)p , (void *)p);
    p = &sensor;
    printf("Value :%c Adress:%p\n ", *(char *)p , (void *)p);

    if(*(char *)p == 'N') printf("Normal");
    else if(*(char *)p == 'W') printf("Warning");
    else if(*(char *)p == 'C') printf("Critical");

}   
