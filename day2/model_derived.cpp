#include <iostream>
using namespace std;
#include "model_derived.h"
#include "controller_base.h"

Model1::Model1(int x) : x_(x) { }

void Model1::set_controller(Controller_base* ptr_c)
{
	ptr_c_ = ptr_c;
}

void Model1::change(int x) 
{
	x_ = x;
	ptr_c_->update();
}

int Model1::get_x()
{
	return x_;
}