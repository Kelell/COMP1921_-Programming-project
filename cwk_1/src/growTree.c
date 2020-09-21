#include "treeStructure.h"
#include "buildTree.h"

void growTree(Node *node ) {

  int i;

  if( node->child[0] == NULL ) //check to see if the node has children
    makeChildren( node ); //if it doesn't, make children
  else {
    for ( i=0; i<4; ++i ) {
      // if the node has children, call the function on them
      growTree(node->child[i] );
    }
  }
  return;
}
