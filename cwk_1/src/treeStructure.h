#ifndef TREESTRUCTURE_H
#define TREESTRUCTURE_H

#include "stdio.h"
#include "stdlib.h"
#include "math.h"

struct qnode {
  int level;
  double xy[2];
  struct qnode *child[4];
};
typedef struct qnode Node;

typedef enum { false, true } bool;

#endif
