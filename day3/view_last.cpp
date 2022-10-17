#include <iostream>
using namespace std;
#include "view_last.h"
#include "controller_base.h"
#include "model_base.h"

void View_last::update()
{
	int x = ptr_model_->getList().last();
	if(x == -1){
		cout << "List is empty.\n";
		return;
	}
	cout << "Last element : " << x << "\n";
}

void View_last::get_model(Model *ptr_model)
{
	ptr_model_ = ptr_model;
}

void View_last::register_view(Controller_base* ptr_c)
{
	ptr_c->add(this);
};

void View_last::deregister_view(Controller_base* ptr_c)
{
	ptr_c->remove(this);
};