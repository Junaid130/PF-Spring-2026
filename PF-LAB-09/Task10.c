#include <stdio.h>
int basic(int d, int h) {
printf("Basic attack.\n");
    return h - d;
}

int power(int d, int h) {
     int td = (int)(d * 2.5);
    printf("Power strike.\n");
    return h - td;
}

int medic(int d, int h) {
    printf("Healed.\n");
    return h + 20;
}

int toxic(int d, int h) {
    printf("Poison.\n");
    return h - (d / 2);
}

int main() {
    int hp = 100, dmg = 25, input, turn;
    int (*action)(int, int);

    for (turn = 1; turn <= 3; turn++) {
        printf("Turn %d. HP: %d. Choice: ", turn, hp);
        scanf("%d", &input);

        if (input == 1) action = basic;
        else if (input == 2) action = power;
        else if (input == 3) action = medic;
        else if (input == 4) action = toxic;
        else continue;

        hp = action(dmg, hp);
        printf("HP now: %d\n", hp);
    }

    return 0;
}
