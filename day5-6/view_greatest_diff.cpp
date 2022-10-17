#include <iostream>
using namespace std;
#include "view_greatest_diff.h"
#include "controller_base.h"
#include "model_base.h"

void View_greatest_diff::update()
{
	int x = ptr_model_->getList().greatestDiff();
	if(x == -1){
		cout << "List is empty.\n";
		return;
	}
	cout << "Greatest Difference : " << x << "\n";
}

void View_greatest_diff::get_model(Model *ptr_model)
{
	ptr_model_ = ptr_model;
}

void View_greatest_diff::register_view(Controller_base* ptr_c)
{
	ptr_c->add(this);
};

void View_greatest_diff::deregister_view(Controller_base* ptr_c)
{
	ptr_c->remove(this);
};