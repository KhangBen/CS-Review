#include <iostream>
#include "LinkedList.h"
using namespace std;

Node::Node(int val) {
  data = val; 
  next = nullptr; 

}

LinkedList::LinkedList() {
  head = nullptr; 
}

void LinkedList::insertAtHead(int val) {
  Node* newNode = new Node(val); 
  newNode->next = this->head; 
  this->head = newNode; 
}


void LinkedList::insertAtTail(int val) {
  // creating a new node
  Node* newNode = new Node(val);
  // if theres nothing in linked list
  if (head == nullptr) {
    head = newNode;
    return; 
  }

  // if there are elements in linked list, traverse to the end 
  Node* temp = head; 
  while (temp->next != nullptr) {
    temp = temp->next; 
  }

  temp->next = newNode; 
}

void LinkedList::deleteNode(int val) {
  if (head == nullptr) return;

  if (head->data == val) {
    Node* toDelete = head; 
    head = head->next; 
    delete toDelete;
    return;
  }

  Node* temp = head; 
  while(temp->next != nullptr && temp->next->data != val)
    temp = temp->next; 

  if (temp->next != nullptr) {
    Node* toDelete = temp->next; 
    temp->next = temp->next->next;
    delete toDelete;
  }
}

bool LinkedList::searchNode(int val) {
  Node* temp = head; 
  while(temp != nullptr) {
    if (temp->data == val) return true;
    temp = temp->next; 
  }

  return false;
}

void LinkedList::reverseLinkedList() {
  

}


void LinkedList::print() {
  Node* temp = head; 
  while (temp != nullptr) {
    cout << temp->data << " "; 
    temp = temp->next; 
  }
}