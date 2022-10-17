#include <iostream>
using namespace std;
#include "view_greatest_key.h"
#include "controller_base.h"
#include "model_base.h"

void View_greatest_key::update()
{
	int x = ptr_model_->getList().greatestKey();
	if(x == -1){
		cout << "List is empty.\n";
		return;
	}
	cout << "Greatest element : " << x << "\n";
}

void View_greatest_key::get_model(Model *ptr_model)
{
	ptr_model_ = ptr_model;
}

void View_greatest_key::register_view(Controller_base* ptr_c)
{
	ptr_c->add(this);
};

void View_greatest_key::deregister_view(Controller_base* ptr_c)
{
	ptr_c->remove(this);
};