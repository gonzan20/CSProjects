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

int GameOver(){
  int life;
  printf(GO"GAME OVER!\n"RESETB);
  life=twoUserinputs(PROMPT"Would you like to restart this life? (1=Yes,2=No): "USERINPUT);
  if (life==1){ //New Life
    return life;
  }
  else if (life==2){ //Game Over
    return life;
  }
} //Function that prompts the user with a question to ask whether they would like to retry the game or not.

int twoUserinputs(char choices[200]){
  int choice,error;
  printf("%s", choices);
  error = scanf("%d",&choice);
  while ((choice != 1 && choice !=2) || (error==0)){
    if(error==0);
      scanf("%*c");
      printf(PROMPT "The options are right there, choose one of them!\n"USERINPUT);
      error = scanf("%d", &choice);
  }
  return choice;
}//Error checking code that is similar to the readinput function, but with only 2 numbers instead of 4.

int readinput(char choices[200]){
  int choice,error;
  printf("%s", choices);
  error = scanf("%d",&choice);
  while ((choice != 1 && choice !=2 && choice != 3 && choice != 4) || (error==0)){
    if(error==0);
      scanf("%*c");
      printf(PROMPT "The options are right there, choose one of them!\n"USERINPUT);
      error = scanf("%d", &choice);
  }
  return choice;
}
//final and accepted attempt at error checking that worked the best for what we needed.

void choice1(){
  int check;
  printf(STORY"You wake up in a strage place, sirens blaring and red alarms going off, trapped in a locked room with no idea what’s going on...\n");
    do{
      check = readinput(QUESTION"What do you do?"OPTION"\nCry (1)\nLook around (2)\nCheck your pockets (3)\nDo nothing (4)?\n"USERINPUT);
      if (check == 1){ //Cry Option
        printf(STORY"After crying for 5 minutes you pull yourself together\n");
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
        printf(STORY"You check your pockets and find your cellphone and see it has no signal, you can't do much with it...\n");
        //printf("What do you do: \nCry(1);\nLook around(2);\nCheck your pockets(3);\nDo nothing(4)?\n");
        //scanf("%d",&check);
        //Wrong(option);
      }
      else if (check == 4){ //Correct Option (Look around)
        printf(STORY"Well, you have to do SOMETHING\n");
        //printf("What do you do: \nCry(1);\nLook around(2);\nCheck your pockets(3);\nDo nothing(4)?\n");
        //scanf("%d",&check);
      }
      //printf("What do you do?");
      //scanf("%d",&option);
      //check=Verify(option);
    } while(check!=2);
}

int choice2(){
  int check,restart;
  printf(STORY"You look around and see a filing cabinet, a closet, bathroom, medicine cabinet. \n"RESET);
    do{
      check = readinput(QUESTION"What do you investigate?\n"OPTION"Bathroom (1);\nMedicine Cabinet (2);\nA closet (3); \nFiling Cabinet (4)?\n"USERINPUT);
      if (check == 1){ //Bathroom option
        printf(STORY"You walk in, slip, hit your head on the sink...\n");
        restart=GameOver();
      }
      else if (check == 2){ //Medicine Cabinet Option
        printf(STORY"You see Oxycodone and take too much. You are now deceased...\n");
        restart=GameOver();
      }
      else if (check == 3){ //Closet Option
        printf(STORY"You find a lab coat and put it on. You are now wearing a lab coat. Cool.\n");
      }
      else if (check == 4){ //Correct Option (Filing Cabinet)
        Subsequence1();
      }
    } while(check!=4);
    printf(CORRECT "CONGRATULATIONS!\n");
    printf(PROMPT "You’ve escaped the room, but your goal is to leave this place so keep going!\n");
}

int choice3(){
  int check,restart;
  printf(STORY"You see a 3-way corridor, do you go straight, left, right, or just stand there?  \n");
    do{
      check = readinput(QUESTION"What do you do?\n"OPTION"Straight (1);\nLeft (2);\nRight (3); \nStand around (4)?\n"USERINPUT);
      if (check == 1){
        printf(STORY"It’s a dead end with a single water fountain. There's nothing here, go back down the hall where you started.\n");
      }
      else if (check == 2){
        printf(STORY"You go left and find a doctor's office. In the doctor's office you find a letter.\n"RESET);
        //LetterFound();//INSERT FILE I/O
        printf(STORY"Now you go back down the hallway where you started.\n"RESET);
      }
      else if (check == 3){
        restart = Subsequence2();
      }
      else if (check == 4){
        printf(STORY"You stand there and do nothing for %d minutes\n",rand()%20+1);
      }
    } while(check!=3);
}

int choice4(){
  int check;
  printf(STORY"You enter the stairwell and see a flight of stairs going both up and down... \n"RESET);
    do{
      check = readinput(QUESTION"What do you ?\n"OPTION"Walk up the stairs (1)\nRun up the stairs (2);\nWalk down the stairs (3) \nRun down the stairs (4)\n"USERINPUT);
      if (check == 1){ //Walk upstairs option
        printf(STORY"You decide to take it easy and walk up the stairs and find a door that leads to the roof...\n");
        return check;
      }
      else if (check == 2){ //Run upstairs option
        printf(STORY"You decide you are in a rush to escape so you run up the stairs and find a door that leads to the roof...\n");
        return check;        
      }
      else if (check == 3){ //Walk downstairs option
        printf(STORY"You decide to take it easy and walk down the stairs...\n");
        return check;      
      }
      else if (check == 4){ //Run downstairs option
        printf(STORY"You decide you are in a rush to escape so you run down the stairs and find an Emergency exit door and broken window...\n");
        return check;      
      }
    } while(check!=1&&check!=2&&check!=3&&check!=4);
}

int choice5(int option_number){
  int restart;
    if (option_number == 1){ //Walk upstairs option
      printf(STORY"After walking through the door you look around and see a helicopter!\n");
      restart=Subsequence3(); 
    }
    else if (option_number == 2){ //Run upstairs option
      printf(STORY"After running upstairs and bursting through the roof door with a loud bang, you can hear something coming from below...\n");  
      restart=Subsequence4();      
    }
    else if (option_number == 3){ //Walk downstairs option
      printf(STORY"After making your way downstairs, you see a broken glass window and an emergency exit sign.\n");
      restart=Subsequence5();
    }
    else if (option_number == 4){ //Run downstairs option
      printf(STORY"After running downstairs and reaching the bottom of the stairs you can hear something coming from above the stairs...\n");
      restart=Subsequence6();
    }
}

int choice6(){
  int restart,check;
    printf("After the zombie notices you, you realize you must defend yourself, you see 4 items on the ground a Pen, a Wrench, a gun, and a pipe. What do you use?\n");
      do{
        check = readinput(QUESTION"What do you use?\n"OPTION"A Pen (1)\nA Wrench (2)\nA gun (3)\nA Pipe (4)\n");
        if (check==1){
          printf(STORY"You quickly pick up the pen and use it to stab the zombie in the eye, giving you enough time to run around it to the exit...\n");
        }
        else if (check==2){
          printf(STORY"The wrench was too close to the zombie, and it bit you, now you’re a zombie.\n");
          restart=GameOver();
          return restart;
        }
        else if (check==3){
          printf(STORY"You grab the gun and aim it at the zombie. The Zombie rushes you and you miss your shot.\n");
          restart=GameOver();
          return restart;
        }
        else if (check==4){
          printf(STORY"As you run to pick up the Pipe, you slip on a puddle of water, falling and are attacked by the zombie.\n");
          restart=GameOver();
          return restart;
        }
      } while(check!=1);
}

void Subsequence1(){
  int check;
  printf(STORY"You open the cabinet and see a stapler, scotch tape, a key, a folder. Which would you like to investigate?\n");
    do{
      check = readinput(QUESTION"What do you investigate?\n"OPTION"Stapler (1);\nScotch Tape (2);\nA Key (3); \nA Folder (4)?\n");
      if (check == 1){ //Stapler Option
        printf(STORY"Just a plain old stapler...\n");
      }
      else if (check == 2){ //Scotch tape Option
        printf(STORY"Its just Scotch tape dude...\n");
      }
      else if (check == 3){ //Corret Option (a key)
        printf(STORY"You find a key that you quickly realise is the key to the door of the room.\n");
      }
      else if (check == 4){ //Folder Option
        printf(STORY"You open the folder to find nothing inside...\n");
      }
    } while(check!=3);
}

int Subsequence2(){
  int check,restart;
  printf(QUESTION"You come across a staircase and an elevator, what would you like to do?\n");
    do{
      check = readinput(OPTION"Take the stairs (1)\nor\nElevator (2)\n"USERINPUT);
      if (check == 1){ //Take Stairs Option
        printf(STORY"You decide to take the stairs...\n");
      }
      else if (check == 2){ //Elevator Option
        printf(STORY"You decide to take the Elevator...\n");
        printf(STORY"As the elevator doors begin to open, something lunges out at you, killing you.\n");
        restart=GameOver();
      }
      else if (check == 3){ //Wrong Option
        printf(PROMPT"The options are right there, choose one of them!\n");
      }
      else if (check == 4){ //Wrong Option
        printf(PROMPT"The options are right there, choose one of them!\n");
      }
    } while(check!=1); 
}

int Subsequence3(){
  int check,restart;
    printf(STORY"You decide to check the helicopter out and see that the keys are still in the door, but you also see a rope leading from the roof to the ground. What do you do?\n");
    do{
      check=twoUserinputs(QUESTION"what do you use to escape?\n"OPTION"Helicopter (1)\nRope ladder (2)\n");
        if (check==1){ //Helicopter
          printf(STORY"you decide to take the helicopter and escape this place...\n");
          printf(STORY"with the little knowledge you have, you manage to turn on the helicopter and use it to fly away from this place only to see the horrors below...\n");
        }
        else if (check==2){ //Rope Ladder
          printf(STORY"you decide to use the rope ladder to get down from the roof...\n");
          printf(STORY"Once you reach the ground, you see what you can only desribe as zombies rushing towards you, this is the end...\n");
          restart=GameOver();
          return restart;
        }
    } while (check!=1&&check!=2);
}

int Subsequence4(){
  int check,restart;
    printf(STORY"Scared, you need to quickly decide what do now that you're on the roof, you a see a Helicopter and rope ladder what do you do?\n");
    do{
      check=twoUserinputs(QUESTION"what do you use to escape?\n"OPTION"Helicopter (1)\nRope ladder (2)\n");
        if (check==1){ //Helicopter
          printf(STORY"you quickly investigate the helicopter, not noticing the keys near the helicopter...\n");
          printf(STORY"Unfortunately, you took to long attempting to figure out how to get into the helicopter and something lunges out from behind you, killing you.\n");
          restart=GameOver();
          return restart;
        }
        else if (check==2){ //Rope Ladder
          printf(STORY"you decide to use the rope ladder to get down from the roof...\n");
          printf(STORY"Once you reach the ground, you see what you can only desribe as zombies rushing towards you, this is the end...\n");
          restart=GameOver();
          return restart;
        }
    } while (check!=1&&check!=2);
}

int Subsequence5(){
  int check,restart;
    printf(STORY"You need to decide which way you want to leave this place, the Emergency exit or Broken window. What do you attempt?\n");
    do{
      check=twoUserinputs(QUESTION"what do you use to escape?\n"OPTION"Emergency Exit (1)\nBroken Window (2)\n");
        if (check==1){ //Emergency Exit
          printf(STORY"You decide to make your way to the Emergency exit only to see something blocking the path...\n");
          printf(STORY"You can only describe the thing in front of you as a zombie...\n");
        }
        else if (check==2){ //Broken Glass Window
          printf(STORY"you decide to make your way to the Broken window, only to cut yourself on the glass...\n");
          printf(STORY"You quickly begin to bleed out...\n");
          restart=GameOver();
          return restart;
        }
    } while (check!=1&&check!=2);
}

int Subsequence6(){
  int check,restart;
    printf(STORY"After hearing scary noises coming from the above floors, you need to quickly decide what to do, use the Emergency exit or Broken window?\n");
    do{
      check=twoUserinputs(QUESTION"what do you use to escape?\n"OPTION"Emergency Exit (1)\nBroken Window (2)\n");
        if (check==1){ //Emergency Exit
          printf(STORY"You quickly run out of the stairwell shutting the door behind you, only catching a glimpse of something running down the stairs...\n");
          printf(STORY"You turn around to see something charging towards you...\n");
        }
        else if (check==2){ //Broken Glass Window
          printf(STORY"You quickly turn towards the broken glass window and make get a running start to jump through it, only to cut yourself badly on the way out...\n");
          printf(STORY"You quickly begin to bleed out...\n");
          restart=GameOver();
          return restart;
        }
    } while (check!=1&&check!=2);
}

int main(){
  srand(time(NULL));
  int count,check,option,Integer_for_Choice[10];
  char name[100],Lose[30]=(GO"Game Over!"RESETB RESET);
  int length = sizeof(name)/sizeof(name[0]);
    printf(PROMPT"Enter your name: " USERINPUT);
    fgets(name, 100, stdin);
  Start:
    printf(PROMPT"Welcome, " USERINPUT "%s\n" , name);
    choice1(); //Choice 1 Function
      Integer_for_Choice[2]=choice2(); //Choice 2 Function
        if (Integer_for_Choice[2]==1){
          printf(PROMPT"You've chosen to restart, restarting...\n"RESETB RESET);
          goto Start;
        }
        else if (Integer_for_Choice[2]==2){
          printf(GO"Game Over!\n"RESETB RESET);
          return Lose;
        }// End for Choice 2 function
      Integer_for_Choice[3]=choice3(); //Choice 3 Function
        if (Integer_for_Choice[3]==1){
          printf(PROMPT"You've chosen to restart, restarting...\n"RESET RESET);
          goto Start;
        }
        else if (Integer_for_Choice[3]==2){
          printf(GO"Game Over!\n"RESETB RESET);
          return Lose;
        } // End for Choice 3 function
      Integer_for_Choice[4]=choice4(); //Choice 4 Function
      Integer_for_Choice[5]=choice5(Integer_for_Choice[4]); //Choice 5 Function
        if (Integer_for_Choice[5]==1){
          printf(PROMPT"You've chosen to restart, restarting...\n"RESET RESET);
          goto Start;
        }
        else if (Integer_for_Choice[5]==2){
          printf(GO"Game Over!\n"RESETB RESET);
          return Lose;
        }// End for Choice 5 function
      Integer_for_Choice[6]=choice6(); //Choice 6 Function
        if (Integer_for_Choice[6]==1){
          printf(PROMPT"You've chosen to restart, restarting...\n"RESET RESET);
          goto Start;
        }
        else if (Integer_for_Choice[6]==2){
          printf(GO"Game Over!\n"RESETB RESET);
          return Lose;
        }
    printf(CORRECT"CONGRATULATIONS!\n");// GAME OVER, YOU WIN!
    printf(STORY"You push the door open; the bright sun blinds you for a moment and you feel a sense relief...\n");
    printf(STORY"You did it, you made it out of the hospital. You open your eyes and see a herd of zombies all turning their attention to you. Good luck...."PROMPT"\nTO BE CONTINUED\n");
return 0;
}
