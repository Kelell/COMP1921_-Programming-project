#ifndef INFORMATION_H
#define INFORMATION_H

typedef enum { false, true } bool;

typedef struct { //each foodstuff has categories that would make them invalid
  bool meat;
  bool vegan;
  bool dairy;
  bool fish;
  bool gluten;
  bool nuts;
  bool eggs;
  bool lunch;
  bool dinner;
  bool dessert;
  bool breakfast;
  bool spicy;
  bool hot;
  bool answered; //exists to determine if we got an answer for the last question
} profile;

#endif
