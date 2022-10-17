#include <iostream>
using namespace std;
#include "controller_derived.h"
#include "view_base.h"

static int view_count = 0;

Controller::Controller(Model* ptr_m) : ptr_m_(ptr_m) { }

void Controller::add(View* ptr_v)
{
	for(int i=0; i<view_count; i++)
	{
		if(ptr_v_[i] == ptr_v){
			cout << "Requested view already registered.\n";
			return;
		}
	}
	ptr_v_[view_count++] = ptr_v;
	cout << "View added successfully.\n";
}

void Controller::update() 
{
	for(int i=0; i<view_count; i++)
	{
		if(ptr_v_[i] != nullptr)
		{
			ptr_v_[i]->update();
		}
	}
}

void Controller::remove(View* ptr_v)
{
	for(int i=0; i<view_count; i++)
	{
		if(ptr_v_[i] == ptr_v){
			ptr_v_[i] = nullptr;
			cout << "View has been removed.\n";
			return;
		}
	}
	cout << "Invalid degistering...\n";
}