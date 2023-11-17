#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <unistd.h>
#include <time.h>
#include "Coloredtext.h" //Custom Header file for making it easier to color code printf statements to match a certain prompt.

//int Verify(int Option2){
//  while (Option2 != 1 && Option2 !=2 && Option2 != 3 && Option2 != 4){
//    printf("The options are right there, choose one of them!");
//    scanf("%d", &Option2);
//  }
//}
//Intitial attempt at creating a function what would act as our error checking, ...
//forcing the user to only input one of the correct inputs.


//int Wrong(int Incorrect){
//  while (Incorrect!=1&& Incorrect!=2 && Incorrect!=3&& Incorrect!=4){
//    printf("What do you do?");
//    scanf("%d",&Incorrect);
//  }
//    Incorrect = Verify(Incorrect);
//return Incorrect;
//}
//Second atttempt at creating another function that would act as the error checking.

int readinput(char choices[200]){
  int choice,error;
  printf("%s", choices);
  error = scanf("%d",&choice);
  while ((choice != 1 && choice !=2 && choice != 3 && choice != 4) || (error==0)){
    if(error==0);
      scanf("%*c");
      printf(PROMPT "The options are right there, choose one of them!\n");
      error = scanf("%d", &choice);
  }
  return choice;
}
//final and accepted attempt at error checking that worked the best for what we needed.

void choice1(){
  int option,check;
  printf("\e[1;35mYou wake up in a hospital, sirens blaring and red alarms going off, trapped in a locked room with no idea what’s going on...\n");
    do{
      check = readinput("\e[1;37mWhat do you do:\e[1;33m \nCry (1)\nLook around (2)\nCheck your pockets (3)\nDo nothing (4)?\n");
      if (check == 1){ //Cry Option
        printf("After crying for 5 minutes you pull yourself together\n");
        //printf("What do you do: \nCry(1);\nLook around(2);\nCheck your pockets(3);\nDo nothing(4)?\n");
        //scanf("%d", &check);
        //Wrong(option);
      }
      else if (check == 2){ //Do nothing Option
        //printf("Well, you have to do SOMETHING\n");
        //printf("What do you do: \nCry(1);\nLook around(2);\nCheck your pockets(3);\nDo nothing(4)?\n");
        //scanf("%d",&option);
        //Wrong(option);
      }
      else if (check == 3){ //Check your Pockets Option
        printf("You check your pockets and find your cellphone and see it has no signal, you can't do much with it...\n");
        //printf("What do you do: \nCry(1);\nLook around(2);\nCheck your pockets(3);\nDo nothing(4)?\n");
        //scanf("%d",&check);
        //Wrong(option);
      }
      else if (check == 4){ //Correct Option (Look around)
        printf("Well, you have to do SOMETHING\n");
        //printf("What do you do: \nCry(1);\nLook around(2);\nCheck your pockets(3);\nDo nothing(4)?\n");
        //scanf("%d",&check);
      }
      //printf("What do you do?");
      //scanf("%d",&option);
      //check=Verify(option);
    } while(check!=2);
}

void choice2(){
  int option,check;
  printf("\e[1;35mYou look around and see a filing cabinet, a closet, bathroom, medicine cabinet. \n");
    do{
      check = readinput("\e[1;37mWhat do you investigate?\n\e[1;33mBathroom (1);\nMedicine Cabinet (2);\nA closet (3); \nFiling Cabinet (4)?\n");
      if (check == 1){ //Bathroom option
        printf("You walk in, slip, hit your head on the sink\n");
        printf(GO"GAME OVER, WOMP WOMP"RESET);
        //break;
      }
      else if (check == 2){ //Medicine Cabinet Option
        printf("You see Oxycodone and take too much. You are now deceased.\n");
        printf(GO"WOMP WOMP"RESET);
        //break;
      }
      else if (check == 3){ //Closet Option
        printf("You find a lab coat and put it on. You are now wearing a lab coat. Cool.\n");
      }
      else if (check == 4){ //Correct Option (Filing Cabinet)
        subchoice1();
      }
    } while(check!=4);
    printf(CORRECT "CONGRATULATIONS!\n");
    printf(PROMPT "You’ve escaped the room, but your goal is to leave this place so keep going!\n");
}

void choice3(){
  int option,check;
  printf("\e[1;35mYou see a 3-way corridor, do you go straight, left, right, or just stand there?  \n");
    do{
      check = readinput("\e[1;37mWhat do you do?\n\e[1;33mStraight (1);\nleft (2);\nright (3); \nstand around (4)?\n");
      if (check == 1){
        printf("It’s a dead end with a single water fountain. There's nothing here, go back down the hall where you started.\n");
      }
      else if (check == 2){
        printf("You go left and find a doctor's office. In the doctor's office you find a letter.\n");
        //LetterFound();//INSERT FILE I/O
        printf("Now you go back down the hallway where you started.\n");
      }
      else if (check == 3){
        subchoice2();
      }
      else if (check == 4){
        printf("\e[1;35mYou stand there and do nothing for 18 minutes\n");
      }
    } while(check!=3);
}

void choice4(){
  int option,check;
  printf(STORY"You enter the stairwell and see a flight of stairs going both up and down... \n");
    do{
      check = readinput(QUESTION"mWhat do you ?\n"OPTION"Walk up the stairs (1)\nRun downd the stairs (2);\nWalk down the stairs (3) \nRun down the stairs (4)\n");
      if (check == 1){ //Walk upstairs option
        printf(STORY"You decide to take it easy and walk up the stairs and find a door that leads to the roof.\n");
      }
      else if (check == 2){ //Run upstairs option
        printf(STORY"You decide you are in a rush to escape so you run up the stairs and find a door that leads to the roof.\n");
      }
      else if (check == 3){ //Walk downstairs option
        printf(STORY"You decide to take it easy and walk down the stairs and find an Emergency exit door and broken window...");
      }
      else if (check == 4){ //Run downstairs option
        printf(STORY"You decide you are in a rush to escape so you run down the stairs and find an Emergency exit door and broken window...");
      }
    } while(check!=1&&check!=2&&check!=3&&check!=4);
}

void subchoice1(){
  int option,check;
  printf("\e[1;35mYou open the cabinet and see a stapler, scotch tape, a key, a folder. Which would you like to investigate?\n");
    do{
      check = readinput("\e[1;37mWhat do you investigate?\n\e[1;33mStapler (1);\nScotch Tape (2);\nA Key (3); \nA Folder (4)?\n");
      if (check == 1){ //Stapler Option
        printf("Just a plain old stapler...\n");
      }
      else if (check == 2){ //Scotch tape Option
        printf("Its just Scotch tape dude...\n");
      }
      else if (check == 3){ //Corret Option (a key)
        printf("You find a key that you quickly realise is the key to the door of the room.\n");
      }
      else if (check == 4){ //Folder Option
        printf("You open the folder to find nothing inside...\n");
      }
    } while(check!=3);
}

void subchoice2(){
  int option,check;
  printf(QUESTION"You come across a staircase and an elevator, what would you like to do?\n");
    do{
      check = readinput(OPTION"Take the stairs (1)\nor\nElevator (2)\n");
      if (check == 1){ //Take Stairs Option
        printf(STORY"You decide to take the stairs...\n");
      }
      else if (check == 2){ //Elevator Option
        printf(STORY"You decide to take the Elevator...\n");
        printf("As the elevator doors begin to open, something lunges out at you, killing you.\n");
        printf(GO"GAME OVER\n"RESET);
        //GameOver();
      }
      else if (check == 3){ //Wrong Option
        printf(PROMPT"The options are right there, choose one of them!\n");
      }
      else if (check == 4){ //Wrong Option
        printf(PROMPT"The options are right there, choose one of them!\n");
      }
    } while(check!=2 && check!=1);
}

int main(){
  int count,check,option;
  char name[100];
  int length = sizeof(name)/sizeof(name[0]);
    printf(PROMPT"Enter your name: " USERINPUT);
    fgets(name, 100, stdin);
    printf(PROMPT"Welcome, " USERINPUT "%s" , name);
    choice1();
    choice2();
    choice3();
    choice4();
/*    choice5();
    choice6();
    choice7();
    choice8();
    choice9();
    choice10();
*/
return 0;
}
