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
	int num;
	cout << "Enter a number: ";
	cin >> num;
	Model1 m(num);
	Controller c(&m);
	m.set_controller(&c);
	
	int ch;

	View_sq view_sq;
	View_cube view_cube;
	View_bits view_bits;
	View_digit_sum view_digit_sum;

	while (true)
	{
		cout << "\nChoose the option:\n";
		cout << "1. Change the model\n\n2. Register Square view\n3. Register Cube view\n4. Register Bit count view\n"
			"5. Register Digits sum view\n\n6. Deregister Square view\n7. Deregister Cube view\n"
			"8. Deregister Bit count view\n9. Deregister Digits sum view\n"
			"Press 0 to EXIT\n\n";
		cin >> ch;

		switch(ch)
		{
			case 0: exit(0);
			case 1: cout << "Enter new number: ";
					cin >> num;
					m.change(num);
					break;
			case 2: view_sq.register_view(&c);
					view_sq.get_model(&m);
					break;

			case 3: view_cube.register_view(&c);
					view_cube.get_model(&m);
					break;
			
			case 4: view_bits.register_view(&c);
					view_bits.get_model(&m);
					break;

			case 5: view_digit_sum.register_view(&c);
					view_digit_sum.get_model(&m);
					break;

			case 6: view_sq.deregister_view(&c);
					break;

			case 7: view_cube.deregister_view(&c);
					break;

			case 8: view_bits.deregister_view(&c);
					break;

			case 9: view_digit_sum.deregister_view(&c);
					break;
		
			default: cout << "Invalid choice";
					break;
		}
	}
}