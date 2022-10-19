#include <iostream>
using namespace std;
#include "model_derived.h"
#include "controller_base.h"

void Model1::set_controller(Controller_base* ptr_c)
{
	ptr_c_ = ptr_c;
}

void Model1::insertfront(int data){
	list_.insert_front(data);
	//ptr_c_->update();
}

void Model1::insertend(int data){
	list_.insert_end(data);
	//ptr_c_->update();
}

void Model1::deletebyvalue(int val){
	list_.deleteByValue(val);
	//ptr_c_->update();
}

void Model1::display(){
	list_.display();
}

DoublyLinkedList Model1::getList(){
	return list_;
}

// void Model1::change(int x) 
// {
// 	//x_ = x;
// 	ptr_c_->update();
// }

// int Model1::get_x()
// {
// 	return x_;
// }