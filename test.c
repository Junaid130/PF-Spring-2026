/* A 2D combat game engine needs to handle different attack types that a player selects
during their turn: a basic attack (deals damage directly), a power strike (multiplies
damage by 2.5), a heal (restores 20 HP regardless of damage), and a poison attack
(deals half damage and prints a status effect message). The battle engine must invoke
the correct action at runtime based on the player's menu selection — without using a
long if-else chain inside the combat loop itself.

TASK
Write four C functions: basicAttack(int dmg, int hp), powerStrike(int dmg, int hp),
heal(int dmg, int hp) which ignores dmg and adds 20 to hp, and poisonAttack(int dmg,
int hp) which deals dmg/2 and prints a poison message — all returning the new HP as
int. Declare a function pointer int (*action)(int, int). In main(), set hp = 100 and dmg =
25. Show a menu, assign action to the appropriate function based on user input (no if-
else inside the call), call action(dmg, hp), update hp with the result, and repeat this for
3 consecutive turns.
HINT
Assign without calling: action = basicAttack; (no parentheses after the name). Call
through the pointer: hp = action(dmg, hp);. All four functions must share the exact
same signature int(int, int) for the pointer to be compatible.*/
#include <stdio.h>
int basicAttack(int dmg, int hp); 
int powerStrike(int dmg, int hp);
int heal(int dmg, int hp); 
int poisonAttack(int dmg,int hp);
int main(){
    int (*action)(int, int);
    int hp = 100;
    int dmg = 25;
    int option;
    printf("What action would you like to take?\n1.Basic Attack\n2.Power Strike\n3.Heal\n4.Poison Attack\n");
    scanf("%d" , &option);
    switch(option){
        case 1:
            action = basicAttack;
            break;
        case 2:
            action = powerStrike;
            break;
        case 3:
            action = heal;
            break;
        case 4:
            action = poisonAttack;
            break;
        default:
            printf("Wrong option try again later");
            action = NULL;
            break;
        
    }
    hp = action(dmg, hp);
    printf("Final hp is %d", hp);
}

int basicAttack(int dmg, int hp){
    return(hp - dmg);
}

int powerStrike(int dmg, int hp){
    int damage = (int)(dmg * 2.5);
    return(hp - damage);
}

int heal(int dmg, int hp){
    return(hp + 20);
}

int poisonAttack(int dmg, int hp){
    printf("\nPoisoned\n");
    int damage = (int)(dmg * 0.5);
    return(hp - damage);
}