#include <iostream>
using namespace std;
#include "view_bits.h"
#include "controller_base.h"
#include "model_base.h"

static int get_bits(int num)
{
	int count;
	while (num)
	{
		++count;
		num >>= 1;
	}
	return count;
}

void View_bits::update()
{
	int x = ptr_model_->get_x();
	cout << "Bit count : " << get_bits(x) << "\n";
}

void View_bits::get_model(Model *ptr_model)
{
	ptr_model_ = ptr_model;
}

void View_bits::register_view(Controller_base* ptr_c)
{
	ptr_c->add(this);
};

void View_bits::deregister_view(Controller_base* ptr_c)
{
	ptr_c->remove(this);
};