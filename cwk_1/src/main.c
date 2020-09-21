#include "stdio.h"
#include "stdlib.h"
#include "math.h"

#include "treeStructure.h"
#include "buildTree.h"
#include "writeTree.h"
#include "destroyTree.h"
#include "tests.h"
#include "growTree.h"
#include "maxLevel.h"
#include "autoGrow.h"


int main( int argc, char **argv )
{
  //this parameter will make it so you can't grow the tree past desired level
  int max= maxLevel();

  Node *head;

  // make the head node
  head = makeNode( 0.0,0.0, 0 );


  // make a tree
  makeChildren( head ); //step up a Level one tree


  //allows me to grow the tree without editing the code
  int loop =0;
  int loopCounter= 1;

  printf("If you would like to grow the tree, enter 1\n");
  scanf("%i", &loop);

  if (loop ==1){
  printf("Please enter the level you'd like the tree to be:\n");
  scanf("%i", &loop);

  //the loop lets you grow the tree evently up to the level you want
  // it should be noted that's there's a hard cap at level 9 and a parameter
  while (loopCounter< loop && loopCounter <max){
    growTree( head);
    loopCounter++;
    printf("The tree is now at level %i\n", loopCounter);
  }
}

  // print the tree for Gnuplot
	writeTree( head );

  destroyTree( head ); //free up memory



 //sets up the selection for each test
  int testCase =0;

  printf("Please enter a test:\n" );
  scanf("  %c", &testCase );

  switch (testCase)
  {
    case '1' :
    printf("You have choosen the first test\n");
    task1();
    break;

    case '2' :
    printf("You have choosen the second test\n");
    task2();
    break;

    case '3' :
    printf("You have choosen the third test\n");
    task3();
    break;

    case '4' :
    printf("You have choosen the fourth test\n");
    task4();
    break;
  }

  return 0;
}
