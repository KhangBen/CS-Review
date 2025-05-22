#ifndef LINKEDLIST_H
#define LINKEDLIST_H

class Node {
  public: 
    int data;
    Node* next; 


    Node(int val);
};

class LinkedList {
  private:
    Node* head; 

  public:
    LinkedList(); 
    void insertAtHead(int val);
    void insertAtTail(int val);
    void deleteNode(int val);
    bool searchNode(int val);
    void reverseLinkedList();
    void print(); 

};


#endif