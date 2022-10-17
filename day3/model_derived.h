#ifndef MODEL_DERIVED_H
#define MODEL_DERIVED_H
#include "model_base.h"

class Model1 : public Model 
{
	public:
	virtual void set_controller(Controller_base* ptr_c);
	void insertfront(int);
	void insertend(int);
	void deletebyvalue(int); 
	void display();
	DoublyLinkedList getList();
	private:
	Controller_base* ptr_c_;
	DoublyLinkedList list_;
};


#endif