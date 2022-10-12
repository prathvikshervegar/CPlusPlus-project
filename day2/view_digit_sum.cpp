#include <iostream>
using namespace std;
#include "view_digit_sum.h"
#include "controller_base.h"
#include "model_base.h"

static int digit_sum(int num){
	int sum = 0;
	while(num){
		sum += num % 10;
		num /= 10;
	}
	return sum;
}

void View_digit_sum::update()
{
	int x = ptr_model_->get_x();
	cout << "Sum of digits : " << digit_sum(x) << "\n";
}

void View_digit_sum::get_model(Model *ptr_model)
{
	ptr_model_ = ptr_model;
}

void View_digit_sum::register_view(Controller_base* ptr_c)
{
	ptr_c->add(this);
};