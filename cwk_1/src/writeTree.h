#ifndef WRITETREE_H
#define WRITETREE_H
// write out the tree to file 'quad.out'
void writeTree( Node *head );
void writeNode( FILE *fp, Node *node );
void printOut( FILE *fp, Node *node );

#endif
