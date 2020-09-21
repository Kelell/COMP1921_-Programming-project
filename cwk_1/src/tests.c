#include "stdio.h"
#include "stdlib.h"
#include "math.h"

#include "treeStructure.h"
#include "buildTree.h"
#include "writeTree.h"
#include "destroyTree.h"


void task1() {

  int part=0;
  int destroy=0;

  Node *test;

  // make the head node
  test = makeNode( 0.0,0.0, 0 );

  printf("This is the first test, please pick part 1 or part 2 accordingly\n");
  scanf("%i", &part);

  if (part == 1){
    // make full tree at Level 2
    makeChildren( test );
    makeChildren( test->child[0] );
    makeChildren( test->child[1] );
    makeChildren( test->child[2] );
    makeChildren( test->child[3] );
    printf("A full Level 2 tree has been created!\n");
  }

  else if (part == 2){
    //make non-uniform Level 3 tree
    makeChildren( test );
    makeChildren( test->child[0] );
    makeChildren( test->child[2] );
    makeChildren( test->child[0]->child[3]);
    makeChildren( test->child[2]->child[1]);
    printf("A non-uniform Level 3 tree has been created!\n");
  }

  else
    printf("You did not pick a valid option\n");

  if (part == 1 || part ==2 ){
    printf("If you would like to destroy the tree, enter 1\n");
    scanf("%i", &destroy);
    if (destroy == 1){
      destroyTree( test );
      printf("You have destroyed the tree!\n");
      printf("Valgrind is expected to show no memeory leaks\n");
    }
    else{
      printf("You did not destroy the tree.\n");
      printf("Valgrind is expected to show memeory leaks\n");
    }
  }
  return;
  }

  void task2() {

    int part=0;
    int grow=0;

    Node *test;

    // make the head node
    test = makeNode( 0.0,0.0, 0 );

    printf("This is the second test, please pick part 1 or part 2 accordingly\n");
    scanf("%i", &part);

    if (part == 1){
      // make full tree at Level 2
      makeChildren( test );
      makeChildren( test->child[0] );
      makeChildren( test->child[1] );
      makeChildren( test->child[2] );
      makeChildren( test->child[3] );
      printf("A full Level 2 tree has been created!\n");

    }

    else if (part == 2){
      //make non-uniform Level 3 tree
      makeChildren( test );
      makeChildren( test->child[0] );
      makeChildren( test->child[1] );
      makeChildren( test->child[2] );
      makeChildren( test->child[1]->child[3]);
      makeChildren( test->child[2]->child[0]);
      printf("A non-uniform Level 3 tree has been created!\n");
    }

    else
      printf("You did not pick a valid option\n");

      //Decide if you want to grow the tree or not.
    printf("If you would like to grow the tree, enter 1\n");
    scanf("%i", &grow);

    if (grow == 1){
      growTree( test);
        printf("You have grown the tree!\n");
      writeTree ( test);
      destroyTree ( test); // free all the memory on the tree
      printf("The tree should be one level deeper than before.\n");
    }
    else{
      printf("You have choosen not to grow the tree.\n");
      writeTree ( test);
      destroyTree ( test); // free all the memory on the tree
      printf("The tree should be identical to before.\n");
    }
    return;
    }


    void task3() {
      printf("This is the third test, due to it's nature, it can't be automated\n");
      Node *test;

      // make the head node
      test = makeNode( 0.0,0.0, 0 );

      int loop= 5; //arbitary number to try to grow the tree out of bounds
      int confirm= 0;

      //Use the non-uniform Level 3 treeS
      makeChildren( test );
      makeChildren( test->child[0] );

      printf("If you would like to run this test, enter 1\n");
      scanf("%i", &confirm);

      if (confirm ==1){
        int x =0;
      while (x< loop){
        growTree( test);
        x++;
      }
    }

      writeTree( test);

      destroyTree( test);

      return;
    }

    void task4() {
      printf("This is the fourth test, due to it's nature, it can't be automated\n");
      Node *test;

      // make the head node
      test = makeNode( 0.0,0.0, 0 );

      growTree( test);

      growTree( test); //create a level 2 treeStructure

      autoGrow( test);

      writeTree( test);

      destroyTree( test);

      return;
    }
