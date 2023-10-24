#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <unistd.h>

int Verify(int Option2){
        while (Option2 != 1 && Option2 !=2 && Option2 != 3 && Option2 != 4)
    {
        printf("The options are right there, choose one of them!");
        scanf("%d", &Option2);
    }
}
int main(){
//hwllo
int count,check,option;
char name[100];
int length = sizeof(name)/sizeof(name[0]);

    printf("Enter your name: ");
    fgets(name, 100, stdin);
    printf("Welcome, %s.", name);
    printf("'You wake up in a hospital, sirens blaring and red alarms going off, trapped in a locked room with no idea what’s going on...'\n");
    printf("What do you do: \nCry(1);\nLook around(2);\nCheck your pockets(3);\nDo nothing(4)?\n");
    scanf("%d",&option);
    check = Verify(option);

        if (check == 1){
printf("A");        
}
        else if (check == 2){
printf("B");
}
        else if (check == 3){
printf("C");
}
        else if (check == 4){
printf("D");
}
return 0;
}
//Adding more text later on to the code.
