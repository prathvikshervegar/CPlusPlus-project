#ifndef MODEL_BASE_H
#define MODEL_BASE_H

class Controller_base;

struct Node {
	int data_;
	Node* next_;
	Node* prev_;
};

class DoublyLinkedList {
  private:
	Node* head_;
  public:
    DoublyLinkedList();
	void display();
	int first();
	int last();
	int count();
	int sum();
	int greatestKey();
	int greatestDiff();
	void insert_front(int newData);
	void insert_end(int newData);
	void deleteByValue(int val);
};

class Model 
{
	public:
	virtual ~Model() { }
	virtual void set_controller(Controller_base* ptr_c) = 0;
	virtual void insertfront(int) = 0;
	virtual void insertend(int) = 0;
	virtual void deletebyvalue(int) = 0; 
	virtual void display() = 0;
	virtual DoublyLinkedList getList() = 0;
};

#endif