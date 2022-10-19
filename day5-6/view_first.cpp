#include <iostream>
using namespace std;
#include "view_first.h"
#include "controller_base.h"
#include "model_base.h"

void View_first::update()
{
	if(flag == 0){
		cout << "View not registered\n\n";
		return;
	}
	int x = ptr_model_->getList().first();
	if(x == -1){
		cout << "List is empty.\n";
		return;
	}
	cout << "First element : " << x << "\n\n";
}

void View_first::get_model(Model *ptr_model)
{
	ptr_model_ = ptr_model;
}

void View_first::register_view(Controller_base* ptr_c)
{
	flag = 1;
	ptr_c->add(this);
};

void View_first::deregister_view(Controller_base* ptr_c)
{
	flag = 0;
	ptr_c->remove(this);
};