#include <iostream>
using namespace std;
#include "model_derived.h"
#include "controller_derived.h"
#include "view_derived.h"

int main()
{
	Model1 m(10);
	Controller c(&m);
	m.set_controller(&c);
	
	View_sq view_sq;
	view_sq.register_view(&c);
	view_sq.get_model(&m);
	
	m.change(20);
	
}