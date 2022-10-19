#include <iostream>
using namespace std;
#include "view_sum.h"
#include "controller_base.h"
#include "model_base.h"

void View_sum::update()
{
	if(flag == 0){
		cout << "View not registered\n\n";
		return;
	}
	int x = ptr_model_->getList().sum();
	cout << "Sum of elements : " << x << "\n\n";
}

void View_sum::get_model(Model *ptr_model)
{
	ptr_model_ = ptr_model;
}

void View_sum::register_view(Controller_base* ptr_c)
{
	flag = 1;
	ptr_c->add(this);
};

void View_sum::deregister_view(Controller_base* ptr_c)
{
	flag = 0;
	ptr_c->remove(this);
};