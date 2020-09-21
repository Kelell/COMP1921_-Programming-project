
#include "stdio.h"
#include "stdlib.h"
#include "math.h"

// tree data structure

struct qnode {
  int level; //each node has it's level (important)
  double xy[2]; // each node has its x and y co-ordinates
  struct qnode *child[4]; // each node has 4 child nodes, each with a level and xy cords
};
typedef struct qnode Node;

// function definitions

Node *makeNode( double x, double y, int level );
void makeChildren( Node *parent );
void writeTree( Node *head );
void writeNode( FILE *fp, Node *node );
void printOut( FILE *fp, Node *node );

// main

int main( int argc, char **argv ) {

  Node *head; //initalise a new head of the tree

  // make the head node
  head = makeNode( 0.0,0.0, 0 ); // asign the head to position (0.0x,0.0y) at level 1

  // make a tree
  makeChildren( head ); //create 4 child nodes off of the head node
  makeChildren( head->child[1] ); //create  4 child nodes of the 2nd child node of the head node
  makeChildren(head->child[1]->child[3]); //create 4 child nodes from the 4th child of the 2nd child of the head

  // print the tree for Gnuplot
	writeTree( head );

  return 0;
}

// make a node at given location (x,y) and level

Node *makeNode( double x, double y, int level ) { // takes an x cord, y cord and level

  int i;

  Node *node = (Node *)malloc(sizeof(Node)); //dynamically assigns a pointer to a node

  node->level = level; //assigns the current level to the variable level (like an update of sorts?)

  node->xy[0] = x; //assigns the x value of the node to the variable x
  node->xy[1] = y;  //assigns the y value of the node to the variable y

  for( i=0;i<4;++i ) //cycles through every child from the node
    node->child[i] = NULL; //I have no idea what this does, it's setting a pointer to NULL for every child (so I guess every child now equals NULL)

  return node;
}

// split a leaf nodes into 4 children

void makeChildren( Node *parent ) {

  double x = parent->xy[0]; //assign the value of the parent's x value to a variable for later use
  double y = parent->xy[1]; //assign the value of the parent's y value to a variable for later use

  int level = parent->level; //assigns the level variable to the level of the parent

  double hChild = pow(2.0,-(level+1)); //some type of calculation to work out the position of the next node on the image

  parent->child[0] = makeNode( x,y, level+1 ); //creation of the child nodes
  parent->child[1] = makeNode( x+hChild,y, level+1 );
  parent->child[2] = makeNode( x+hChild,y+hChild, level+1 );
  parent->child[3] = makeNode( x,y+hChild, level+1 );

  return;
}

// write out the tree to file 'quad.out'

void writeTree( Node *head ) {

  FILE *fp = fopen("quad.out","w");

  writeNode(fp,head);

  fclose(fp);

  return;
}

// recursively visit the leaf nodes

void writeNode( FILE *fp, Node *node ) {

  int i;

  if( node->child[0] == NULL )
    printOut( fp, node );
  else {
    for ( i=0; i<4; ++i ) {
      writeNode( fp, node->child[i] );
    }
  }
  return;
}

// write out the (x,y) corners of the node

void printOut( FILE *fp, Node *node ) {
  double x = node->xy[0];
  double y = node->xy[1];
  int level = node->level;
  double h = pow(2.0,-level);

  fprintf(fp, " %g %g\n",x,y);
  fprintf(fp, " %g %g\n",x+h,y);
  fprintf(fp, " %g %g\n",x+h,y+h);
  fprintf(fp, " %g %g\n",x,y+h);
  fprintf(fp, " %g %g\n\n",x,y);

  return;
}
