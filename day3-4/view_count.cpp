#include <iostream>
using namespace std;
#include "view_count.h"
#include "controller_base.h"
#include "model_base.h"

void View_count::update()
{
	int x = ptr_model_->getList().count();
	cout << "Number of elements : " << x << "\n";
}

void View_count::get_model(Model *ptr_model)
{
	ptr_model_ = ptr_model;
}

void View_count::register_view(Controller_base* ptr_c)
{
	ptr_c->add(this);
};

void View_count::deregister_view(Controller_base* ptr_c)
{
	ptr_c->remove(this);
};