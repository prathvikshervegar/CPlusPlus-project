#include <iostream>
using namespace std;
#include "controller_derived.h"
#include "view_base.h"

Controller::Controller(Model* ptr_m) : ptr_m_(ptr_m) { }

void Controller::add(View* ptr_v)
{
	ptr_v1_ = ptr_v; 
}

void Controller::update() 
{
		ptr_v1_->update();
}