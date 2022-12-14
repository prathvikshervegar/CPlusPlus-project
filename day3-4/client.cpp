#include <iostream>
using namespace std;
#include "model_derived.h"
#include "controller_derived.h"
#include "view_first.h"
#include "view_last.h"
#include "view_count.h"
#include "view_sum.h"


int main()
{
	int num;
	Model1 m;
	Controller c(&m);
	m.set_controller(&c);
	
	int op;

	View_first view_first;
	View_last view_last;
	View_count view_count;
	View_sum view_sum;

	while (true)
	{
		cout << "\n1. Model operations\n\n2. Register First node view\n3. Register Last node view\n"
			"4. Register Node count view\n5. Register Node sum view\n\n6. Deregister First node view\n"
			"7. Deregister Last node view\n8. Deregister Node count view\n9. Deregister Node sum view\n\n"
			"Press 0 to EXIT\n\n";
		cout << "\nChoose the option: ";
		cin >> op;

		switch(op)
		{
			case 0: exit(0);
			case 1: char ch;
					while(true) {
						cout << "a. Insert front\nb. Insert end\nc. Delete\nd. Display list\ne. Close\n";
						cout << "Enter the choice: ";
						cin >> ch;
						if(ch == 'a') {
							cout << "Enter the number: ";
							cin >> num;
							m.insertfront(num);
						}
						else if(ch == 'b') {
							cout << "Enter the number: ";
							cin >> num;
							m.insertend(num);
						}
						else if(ch == 'c') {
							cout << "Enter the value to be deleted: ";
							cin >> num;
							m.deletebyvalue(num);
						}
						else if(ch == 'd') {
							m.display();
						}
						else if (ch == 'e') {
							cout << "\n";
							break;
						}
						else {
							cout << "Invalid choice\n\n";
						}
					}
					break;
			case 2: view_first.register_view(&c);
					view_first.get_model(&m);
					view_first.update();
					break;

			case 3: view_last.register_view(&c);
					view_last.get_model(&m);
					view_last.update();
					break;
			
			case 4: view_count.register_view(&c);
					view_count.get_model(&m);
					view_count.update();
					break;

			case 5: view_sum.register_view(&c);
					view_sum.get_model(&m);
					view_sum.update();
					break;

			case 6: view_first.deregister_view(&c);
					break;

			case 7: view_last.deregister_view(&c);
					break;

			case 8: view_count.deregister_view(&c);
					break;

			case 9: view_sum.deregister_view(&c);
					break;
		
			default: cout << "Invalid choice\n";
					break;
		}
	}
}