#include <iostream>
#include "LinkedList.h"
using namespace std;



int main() {
  LinkedList list;
  list.insertAtHead(10); 
  list.insertAtHead(20); 
  list.insertAtHead(30); 

  list.insertAtTail(40);
  list.deleteNode(30);
  cout << endl << list.searchNode(40) << endl;

  list.print();
  cout << endl;
  return 0;
}