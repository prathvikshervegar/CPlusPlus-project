#include <iostream>
using namespace std;
#include "view_count.h"
#include "controller_base.h"
#include "model_base.h"

void View_count::update()
{
	if(flag == 0){
		cout << "View not registered\n\n";
		return;
	}
	int x = ptr_model_->getList().count();
	cout << "Number of elements : " << x << "\n\n";
}

void View_count::get_model(Model *ptr_model)
{
	ptr_model_ = ptr_model;
}

void View_count::register_view(Controller_base* ptr_c)
{
	flag = 1;
	ptr_c->add(this);
};

void View_count::deregister_view(Controller_base* ptr_c)
{
	flag = 0;
	ptr_c->remove(this);
};