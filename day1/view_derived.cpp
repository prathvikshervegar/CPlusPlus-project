#include <iostream>
using namespace std;
#include "view_derived.h"
#include "controller_base.h"
#include "model_base.h"

void View_sq::update()
{
	int x = ptr_model_->get_x();
	cout << "Square : " << x * x << "\n";
}

void View_sq::get_model(Model *ptr_model)
{
	ptr_model_ = ptr_model;
}

void View_sq::register_view(Controller_base* ptr_c)
{
	ptr_c->add(this);
};