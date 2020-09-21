#include <stdio.h>
#include <stdlib.h>


#include "information.h"
#include "scanner.h"
#include "suggest.h"


char answer[200];
int reply=5;

int main(void) {
  int question=1;
    profile user;
    int difficulty;
    user.answered=false;
    user.dairy=true;
    user.gluten=true;
    user.nuts=true;
    user.eggs=true;


  system ("clear");  //change to system (“cls”); when testing at home
  printf("Hello!\n");
  fgets(answer,200,stdin);

  while (question<15){ //number will increase until completion

    if (question==1){
    printf("How are you?\n");
    while(user.answered==false){
    fgets(answer,200,stdin);
    user=scanner(answer,question,user);
    }
    question=2;
    user.answered=false;
    }

    if (question==2){
    printf("From a scale of 1 to 10 with 1 being bad, how good would you say you are good at cooking?\n");
    scanf("%i", &reply);
    if(reply<4 && reply> 0){
        difficulty=1;
        printf("I see, I'll stick to easier recipes.\n");
        }
    if(reply>=4 && reply<8){
        difficulty=2;
        printf("Ok, so you have some confidence, you should able to handle most of the meals I know.\n");
        }
    if(reply>7 && reply<11){
        difficulty=3;
        printf("Oh, a skilled cook, I'll hold nothing back from you then.\n");
        }
    if(reply>10){
        difficulty=3;
        printf("Oh wow, a real pro! Maybe I should be taking notes from you.\n");
        }
    if(reply<1){
        difficulty=1;
        printf("Have a little self confidence!\n");
        }
        question=3;
        user.answered=false;
        fgets(answer,200,stdin); //consume the empty space left by the scanf function
    }

    if (question==3){
        printf("What Kind of meal do you want to talk about; lunch, dinner or dessert?\n");
        while(user.answered==false){
            fgets(answer,200,stdin);
            user=scanner(answer,question,user);
            }

        if (user.lunch== true){
            question=4;
            user.answered=false;
            printf("It's great to know you have the time to have lunch, I usually have to skip it.\n");
        }

        if (user.dinner== true){
            question=4;
            user.answered=false;
            printf("I didn't say it before but when I say dinner I was talking about the last meal of the day, I hope we were on the same page here.\n");
        }
        if (user.dessert== true){
            question=11;
            user.answered=false;
            printf("I hope you have a sweet tooth!\n");
        }
        if (user.breakfast== true){
            question=14;
            user.answered=false;
            printf("Breakfast wasn't really an option, but if that's what you really want I recommendation for I won't stop you.\n");
        }
    }

  if (question==4){

    printf("Do you eat meat?\n");
    while(user.answered==false){
    fgets(answer,200,stdin);
    user=scanner(answer,question,user);
    }

    if (user.meat== true){
        question=10;
        user.answered=false;
        printf("Great, I know lots of good recipes!\n");
    }

    if (user.meat== false){
        printf("Oh, are you a vegetarian or vegan?\n");
        question= 5;
        user.answered=false;
        while(user.answered==false){
            fgets(answer,200,stdin);
            user=scanner(answer,question,user);
        }
    }
  }


    if (question==5){
        if (user.vegan== true){
        question=6;
        user.answered=false;
        printf("A vegan, that's very impressive!\n");
        question=10;
        user.answered=false;
        }
        else{
        question=7;
        user.answered=false;
        printf("Do you eat fish?\n");
        while(user.answered==false){
        fgets(answer,200,stdin);
        user=scanner(answer,question,user);
    }

        if (user.fish== true){
        question=8;
        user.answered=false;
        printf("So you're a Pescetarian, is that that for health reasons or from your beliefs on animal farming polices?\n");
        while(user.answered==false){
            fgets(answer,200,stdin);
            user=scanner(answer,question,user);
        }
        user.answered=false;
        }
        if (user.fish== false){
        printf("So you put the vege in VEGEtarian!\n");
        }
        question=10;
        user.answered=false;
      }
    }

    if (question==10){
        printf("How good are you with spicy foods\n");
        while(user.answered==false){
            fgets(answer,200,stdin);
            user=scanner(answer,question,user);
        }
        if (user.spicy==true){
            printf("I could never enjoy spicy foods, why should my meal bite back?\n");
        }
        if (user.spicy==false){
            printf("I'm weak when it comes to spicy foods too.\n");
        }
         question=13;
        user.answered=false;
    }

    if (question==11){
        printf("Are you a vegan?\n");
        while(user.answered==false){
            fgets(answer,200,stdin);
            user=scanner(answer,question,user);
        }
        if (user.vegan==true){
            printf("Most of these recipes are also gluten free.\n");
        }
        if (user.vegan==false){
            printf("That keeps our options open.\n");
        }
        question=12;
        user.answered=false;
     }

     if (question==12){
        printf("Would you want to have a hot or cold dessert?\n");
        while(user.answered==false){
            fgets(answer,200,stdin);
            user=scanner(answer,question,user);
        }
         if (user.hot==true){
            printf("I see, something to warm you up on a cold night.\n");
        }
        if (user.hot==false){
            printf("These are refreshing on a hot day.\n");
        }
        question=13;
        user.answered=false;
     }

     if (question==13){
        printf("Do you have any food allergies, if so what are they?\n");
        while(user.answered==false){
            fgets(answer,200,stdin);
            user=scanner(answer,question,user);
        }
        question=14;
        user.answered=false;
     }

     if (question==14){
        printf("Ok, that's enough questions, I can see the perfect recipe now.\n");
        printf("\n");
        suggest(user, difficulty);
     }

    question=16;
  }

  printf("Bye, I hope you have a nice day.\n");

  return 0;
  }
