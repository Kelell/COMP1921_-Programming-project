#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#include "information.h"

//Runs through the token array looking for key speech patterns to give a reply
//based on context, then updates the users profile accordingly.

profile update( char array[50][51], int question, profile info){
    int i=0;
    profile user=info;
    user.answered=false;

    if (question ==1){
    while (strlen(array[i])>0) {
      if (strcmp(array[i], "you") == 0){
        printf("I'm doing great, thank you for asking!\n");
        user.answered=true;
      }
      if (strcmp(array[i], "good") == 0 || strcmp(array[i], "Good") == 0|| (strcmp(array[i], "well")
            == 0 && strcmp(array[i-1], "not") != 0)|| strcmp(array[i], "ok") == 0||
            (strcmp(array[i], "bad") == 0 && strcmp(array[i-1], "not") == 0)|| strcmp(array[i], "fine") == 0
            || strcmp(array[i], "Fine") == 0 || (strcmp(array[i], "great")
            == 0 && strcmp(array[i-1], "not") != 0)|| strcmp(array[i], "Great") == 0
           || strcmp(array[i], "Alright") == 0 || strcmp(array[i], "alright") == 0){
            printf("It's nice to know you're doing well! I hope you're ready for some cooking.\n");
            user.answered=true;
        }
        if ((strcmp(array[i], "bad") == 0 && strcmp(array[i-1], "not") != 0) || strcmp(array[i], "Bad") == 0|| strcmp(array[i], "terrible") == 0||
            strcmp(array[i], "Terrible") == 0|| (strcmp(array[i], "well") == 0 && strcmp(array[i-1], "not") == 0)
            || (strcmp(array[i], "great") == 0 && strcmp(array[i-1], "not") == 0)
            || (strcmp(array[i], "good") == 0 && strcmp(array[i-1], "not") == 0)){
             printf("I'm sorry to hear that. You know what always makes me feel better?\nFood!\n");
            user.answered=true;
        }
        i++;
        }
    }

    if (question ==3){
    while (strlen(array[i])>0) {
        if (strcmp(array[i], "lunch") == 0 || strcmp(array[i], "Lunch") == 0){
            user.lunch=true;
            user.dinner=false;
            user.dessert=false;
            user.breakfast=false;
            user.answered=true;
        }
       if (strcmp(array[i], "dinner") == 0 || strcmp(array[i], "Dinner") == 0){
            user.lunch=false;
            user.dinner=true;
            user.dessert=false;
            user.breakfast=false;
            user.answered=true;
        }
        if (strcmp(array[i], "dessert") == 0 || strcmp(array[i], "Dessert") == 0){
            user.lunch=false;
            user.dinner=false;
            user.dessert=true;
            user.breakfast=false;
            user.answered=true;
        }
        if (strcmp(array[i], "breakfast") == 0 || strcmp(array[i], "Breakfast") == 0){
            user.lunch=false;
            user.dinner=false;
            user.dessert=false;
            user.breakfast=true;
            user.answered=true;
        }
        i++;
        }
    }


    if (question ==4){
    while (strlen(array[i])>0) {
        if (strcmp(array[i], "yes") == 0 || strcmp(array[i], "Yes") == 0|| (strcmp(array[i], "do")
            == 0 && strcmp(array[i+1], "not") != 0)){
            user.meat=true;
            user.answered=true;
        }
        if (strcmp(array[i], "no") == 0 || strcmp(array[i], "No") == 0|| strcmp(array[i], "don't") == 0||
            (strcmp(array[i], "do") == 0 && strcmp(array[i+1], "not") == 0)){
            user.meat=false;
            user.answered=true;
        }
        i++;
        }
    }

    if (question ==5){
    while (strlen(array[i])>0) {
        if (strcmp(array[i], "vegetarian") == 0 || strcmp(array[i], "Vegetarian") == 0
        || strcmp(array[i], "Veggie") == 0 || strcmp(array[i], "vege") == 0){
            user.meat=false;
            user.vegan=false;
            user.answered=true;
        }
       if (strcmp(array[i], "vegan") == 0 || strcmp(array[i], "Vegan") == 0){
            user.meat=false;
            user.vegan=true;
            user.dairy=false;
            user.fish=false;
            user.eggs=false;
            user.answered=true;
        }
        i++;
        }
    }

    if (question ==7){
    while (strlen(array[i])>0) {
        if (strcmp(array[i], "yes") == 0 || strcmp(array[i], "Yes") == 0|| (strcmp(array[i], "do")
            == 0 && strcmp(array[i+1], "not") != 0)){
            user.fish=true;
            user.answered=true;
        }
        if (strcmp(array[i], "no") == 0 || strcmp(array[i], "No") == 0|| strcmp(array[i], "don't") == 0||
            (strcmp(array[i], "do") == 0 && strcmp(array[i+1], "not") == 0)){
            user.fish=false;
            user.answered=true;
        }
        i++;
        }
    }
    if (question ==8){
    while (strlen(array[i])>0) {
        if (strcmp(array[i], "Health") == 0 || strcmp(array[i], "health") == 0|| (strcmp(array[i], "farming")
            == 0 && strcmp(array[i+1], "not") == 0)){
            printf("Oh, for health reasons I see.\n");
            user.answered=true;
        }
        if (strcmp(array[i], "Farming") == 0 || strcmp(array[i], "farming") == 0|| strcmp(array[i], "cruel") == 0||
            (strcmp(array[i], "health") == 0 && strcmp(array[i+1], "not") == 0)){
            printf("For farming issues, I understand.\n");
            user.answered=true;
        }
        else{

        }
        i++;
        }
    }

    if (question ==10){
    while (strlen(array[i])>0) {
        if (strcmp(array[i], "good") == 0 || strcmp(array[i], "Good") == 0|| (strcmp(array[i], "well")
            == 0 && strcmp(array[i-1], "not") != 0)|| strcmp(array[i], "ok") == 0||
            (strcmp(array[i], "bad") == 0 && strcmp(array[i-1], "not") == 0)|| strcmp(array[i], "fine") == 0
            || strcmp(array[i], "Fine") == 0 || (strcmp(array[i], "great")
            == 0 && strcmp(array[i-1], "not") != 0)|| strcmp(array[i], "Great") == 0 ||strcmp(array[i], "love") == 0
            ||(strcmp(array[i], "like") == 0 && strcmp(array[i-1], "don't") != 0)){
            user.spicy=true;
            user.answered=true;
        }
        if ((strcmp(array[i], "bad") == 0 && strcmp(array[i-1], "not") != 0) || strcmp(array[i], "Bad") == 0|| strcmp(array[i], "terrible") == 0
            || strcmp(array[i], "terrible") == 0|| (strcmp(array[i], "well") == 0 && strcmp(array[i-1], "not") == 0)
            || (strcmp(array[i], "great") == 0 && strcmp(array[i-1], "not") == 0)
            || (strcmp(array[i], "like") == 0 && strcmp(array[i-1], "don't") == 0)
            || (strcmp(array[i], "hate") == 0 && strcmp(array[i-1], "not") != 0)){
            user.spicy= false;
            user.answered=true;
        }
        i++;
        }
    }

    if (question ==11){
    while (strlen(array[i])>0) {
        if (strcmp(array[i], "No") == 0 || strcmp(array[i], "no") == 0
            || (strcmp(array[i], "not") == 0 && strcmp(array[i-1], "I'm") == 0)
            || strcmp(array[i], "not") == 0){
            user.meat=false;
            user.vegan=false;
            user.answered=true;
        }
       if (strcmp(array[i], "vegan") == 0 || strcmp(array[i], "Vegan") == 0
           || strcmp(array[i], "yes") == 0 || strcmp(array[i], "yes") == 0
           || (strcmp(array[i], "am") == 0 && strcmp(array[i-1], "I") == 0)){
            user.meat=false;
            user.vegan=true;
            user.dairy=false;
            user.fish=false;
            user.eggs=false;
            user.answered=true;
        }
        i++;
        }
    }

    if (question ==12){
    while (strlen(array[i])>0) {
        if (strcmp(array[i], "Hot") == 0 || strcmp(array[i], "hot") == 0
        || strcmp(array[i], "Warm") == 0 || strcmp(array[i], "warm") == 0){
            user.hot=true;
            user.answered=true;
        }
       if (strcmp(array[i], "cold") == 0 || strcmp(array[i], "Cold") == 0
           || strcmp(array[i], "refreshing") == 0){
           user.hot=false;
           user.answered=true;
        }
        i++;
        }
    }

    if (question ==13){
    while (strlen(array[i])>0) {
        if (strcmp(array[i], "Dairy") == 0 || strcmp(array[i], "dairy") == 0
            || strcmp(array[i], "Dairy,") == 0 || strcmp(array[i], "dairy,") == 0){
            user.dairy=false;
            user.answered=true;
            printf("Adults weren't made to drink milk anyway.\n");
        }
        if (strcmp(array[i], "Fish") == 0 || strcmp(array[i], "fish" ) == 0
            || strcmp(array[i], "Shellfish") == 0|| strcmp(array[i], "shellfish") == 0){
            user.fish=false;
            user.answered=true;
            printf("It's a nightmare finding a good fishmongers, minor loss.\n");
        }
        if (strcmp(array[i], "Gluten") == 0 || strcmp(array[i], "gluten" ) == 0
            || strcmp(array[i], "Bread") == 0|| strcmp(array[i], "bread") == 0){
            user.gluten=false;
            user.answered=true;
             printf("Nowadays it's easy to find gluten free products.\n");
        }
        if (strcmp(array[i], "Nuts") == 0 || strcmp(array[i], "nuts" ) == 0
            || strcmp(array[i], "Nut") == 0|| strcmp(array[i], "nut") == 0
            || strcmp(array[i], "Peanuts") == 0|| strcmp(array[i], "peanuts") == 0) {
            user.nuts=false;
            user.answered=true;
            printf("You can't eat nuts and I don't eat nuts, I'll invite you over for lunch one day.\n");
        }
        if (strcmp(array[i], "Eggs") == 0 || strcmp(array[i], "eggs" ) == 0
            || strcmp(array[i], "Egg") == 0|| strcmp(array[i], "eggs") == 0){
            user.eggs=false;
            user.answered=true;
            printf("There's a lot of fat in eggs, might as well cut them anyway.\n");
        }
         if (strcmp(array[i], "no") == 0 || strcmp(array[i], "no" ) == 0
            || strcmp(array[i], "None") == 0|| strcmp(array[i], "none") == 0){
            user.answered=true;
            printf("You have no allergies, that really keeps a lot of doors open!\n");
        }
        i++;
        }
    }

    if (user.answered==false){
    printf("Could you you reword that?\n");
    }

    return user;
}
