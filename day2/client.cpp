#include <iostream>
using namespace std;
#include "model_derived.h"
#include "controller_derived.h"
#include "view_sq.h"
#include "view_cube.h"
#include "view_bits.h"
#include "view_digit_sum.h"

int main()
{
	Model1 m(10);
	Controller c(&m);
	m.set_controller(&c);
	
	View_sq view_sq;
	view_sq.register_view(&c);
	view_sq.get_model(&m);

	View_cube view_cube;
	view_cube.register_view(&c);
	view_cube.get_model(&m);

	View_bits view_bits;
	view_bits.register_view(&c);
	view_bits.get_model(&m);

	View_digit_sum View_digit_sum;
	View_digit_sum.register_view(&c);
	View_digit_sum.get_model(&m);
	
	m.change(15);
}