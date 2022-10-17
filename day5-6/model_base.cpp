#include <iostream>
using namespace std;
#include "model_base.h"

DoublyLinkedList::DoublyLinkedList() : head_(NULL) { }

void DoublyLinkedList::display() {
	if(head_ == NULL){
		cout<< "List is empty.\n";
		return;
	}
	Node* temp = head_;
	cout << "The elements are:\n";
    while (temp != NULL) {
		cout << temp->data_ << " ";
		temp = temp->next_;
	}
	cout << "\n";
}

int DoublyLinkedList::first(){
	if(head_ == NULL){
		return -1;
	}
	return head_->data_;
}

int DoublyLinkedList::last(){
	if(head_ == NULL){
		return -1;
	}
	Node* last = head_;
	while (last->next_ != NULL)
		last = last->next_;
	return last->data_;
}

int DoublyLinkedList::count(){
	if(head_ == NULL){
		return 0;
	}
	Node* temp = head_;
	int count = 0;
	while (temp != NULL) {
		++count;
		temp = temp->next_;
	}
	return count;
}

int DoublyLinkedList::sum(){
	if(head_ == NULL){
		return 0;
	}
	Node* temp = head_;
	int sum = 0;
	while (temp != NULL) {
		sum += temp->data_;
		temp = temp->next_;
	}
	return sum;
}

int DoublyLinkedList::greatestKey()
{
	if(head_ == NULL){
		return -1;
	}
	Node* temp = head_;
	Node* max = head_;
	// traverse the whole doubly linked list
	while (temp != NULL)
	{
		if (temp->data_ > max->data_)
			max = temp;
		temp = temp->next_;
	}
	return max->data_;
}

int DoublyLinkedList::greatestDiff()
{
	if(head_ == NULL){
		return -1;
	}
	Node* temp = head_;
	int diff = temp->data_;
	// traverse the whole doubly linked list
	while (temp->next_ != NULL)
	{
		int new_diff = abs(temp->next_->data_ - temp->data_);
		if (new_diff > diff)
			diff = new_diff;
		temp = temp->next_;
	}
	return diff;
}

void DoublyLinkedList::insert_front(int newData) {
   	Node* newNode = new Node;
   	newNode->data_ = newData;
   	newNode->prev_ = NULL;
   	newNode->next_ = head_;
   	if(head_ != NULL)
   		head_->prev_ = newNode ;
   	head_ = newNode;
    cout << newData << " added to list.\n\n";
}

void DoublyLinkedList::insert_end(int newData) {
   	Node* newNode = new Node;
   	Node* last = head_;
   	newNode->data_ = newData;
   	newNode->next_ = NULL;
   	if (head_ == NULL) {
   		newNode->prev_ = NULL;
   		head_ = newNode;
		cout << newData << " added to list.\n\n";
		return;
	}
	while (last->next_ != NULL)
		last = last->next_;
	last->next_ = newNode;
	newNode->prev_ = last;
    cout << newData << " added to list.\n\n";
}

void DoublyLinkedList::deleteByValue(int val) {
    Node* cur = head_;
    while(cur && cur->data_ != val){
		cur = cur->next_;
	}
	if(cur != NULL){
		if(cur->prev_ == NULL){
			head_ = cur->next_;
			if(head_ != NULL)
				head_->prev_ = NULL;
			delete cur;
			return;
		}
		cur->prev_->next_ = cur->next_;
		delete cur;
        cout << val << " removed from list.\n\n";
	}
	else {
		cout << "Value not in the list.\n\n";
	}
}