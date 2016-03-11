#ifndef LIST_H
#define LIST_H

class List{
private:

  typedef struct node{
      int data;
      node *next;
  } *nodePtr;


  nodePtr head;
  nodePtr curr;
  nodePtr temp;

public: //Functions
  List();
  void addNode(int addData);
  void deleteNode(int delData);
  void printList();

};

#endif
