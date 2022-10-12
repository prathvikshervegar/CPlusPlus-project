#include <iostream>
using namespace std;
#include "controller_derived.h"
#include "view_base.h"

static int view_count = 0;

Controller::Controller(Model* ptr_m) : ptr_m_(ptr_m) { }

void Controller::add(View* ptr_v)
{
	ptr_v_[view_count++] = ptr_v;
}

void Controller::update() 
{
	for(int i=0; i<view_count; i++)
	{
		ptr_v_[i]->update();
	}
}