#include <cstdlib>
#include "List.h"
#include "List.cpp"

using namespace std;

int main() {

  List names;

  names.addNode(10);
  names.addNode(5);
  names.addNode(7);

  names.printList();

  names.deleteNode(5);
  names.printList();

  names.deleteNode(10);
  names.printList();

  names.deleteNode(7);
  names.printList();



  return 0;
}
