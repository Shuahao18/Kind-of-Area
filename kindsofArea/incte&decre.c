// INCREMENT & DECREMENT

#include <stdio.h>
#include <stdlib.h>

int opt, x, y;

int main () {
    printf("\t\tIncrement % Decrement\n\n");
    printf("\t\tPre-Increment  [1]\n");
    printf("\t\tPost-Increment [2]\n");
    printf("\t\tPre-Decrement  [3]\n");
    printf("\t\tPost-Decrement [4]\n\n");

    printf("\t\tPick a number : ");
    scanf("%i",&opt);

    system("cls");
    switch(opt){
        case 1:
            printf("\t\tEnter a number : ");
            scanf("%i", &x);
            ++x;
            system("cls");
            printf("\t\tPre-Increment\n");
            printf("\t\tThe updated value of X: %i ", x);
            break;

        case 2:
            printf("\t\tEnter a number : ");
            scanf("%i", &x);
            y = x++;
            system("cls");
            printf("\t\tPost-Increment\n\n");
            printf("\t\tThe original value of X : %i \n ", y);
            printf("\t\tThe updated value of Y : %i \n", x);
            break;

        case 3:
            printf("\t\tEnter a number : ");
            scanf("%i", &x);
            --x;
            system("cls");
            printf("\t\tPre-Decrement\n\n");
            printf("\t\tThe updated value of Y : %i \n", x);

            break;

        case 4:
            printf("\t\tEnter a number : ");
            scanf("%i", &x);
            y =x--;
            system("cls");
            printf("\t\tPost-Decrement\n\n");
            printf("\t\tThe updated value of Y : %i \n", x);

        default:
            system("cls");
            printf("Invalid");

            break;

        }
    return 0;
    }
