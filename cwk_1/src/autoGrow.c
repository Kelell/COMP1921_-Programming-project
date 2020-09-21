#include "treeStructure.h"
#include "buildTree.h"
#include "valueTree.h"

void autoGrow(Node *node ) {

  int i;
  bool x;
  //initalise the counter as one to ensure that the loop starts
  int falseCounter=1;

  int choice= 1;
  double tolerance= 0.2;

  //loop endlessly until no changes have been made
  while (falseCounter> 0){
    falseCounter= 0; //reset the counter at the start of each loop
  if( node->child[0] == NULL ){
    x=indicator(node, tolerance, choice );
     if (x == false){
       makeChildren( node );
       falseCounter++; //count the number of falses returned
     }
  }
  else {
    for ( i=0; i<4; ++i ) {
      autoGrow(node->child[i] );
    }
  }
}
  return;
}
