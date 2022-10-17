#include <iostream>
using namespace std;
#include "view_sum.h"
#include "controller_base.h"
#include "model_base.h"

void View_sum::update()
{
	int x = ptr_model_->getList().sum();
	cout << "Sum of elements : " << x << "\n";
}

void View_sum::get_model(Model *ptr_model)
{
	ptr_model_ = ptr_model;
}

void View_sum::register_view(Controller_base* ptr_c)
{
	ptr_c->add(this);
};

void View_sum::deregister_view(Controller_base* ptr_c)
{
	ptr_c->remove(this);
};