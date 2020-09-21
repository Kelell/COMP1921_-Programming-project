#include "treeStructure.h"

void destroyTree(Node *node ) {

  int i;
  if( node->child[0] != NULL ){ //check for children
    for ( i=3; i >-1; --i ){
      destroyTree(node->child[i] ); //if it has children,call the function on them
    }
    free( node); //after the childern have been freed, free this node
  }
  else {
      free( node); //if the node has no children, free it
    }
  return;
}
