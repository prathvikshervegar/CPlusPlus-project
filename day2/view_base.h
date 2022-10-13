#ifndef VIEW_BASE_H
#define VIEW_BASE_H

class Controller_base;
class Model;

class View 
{
	public:
	virtual ~View() { }
	virtual void register_view(Controller_base* ptr_c) = 0;
	virtual void deregister_view(Controller_base* ptr_c) = 0;

	virtual void update() = 0;
	virtual void get_model(Model *ptr_model) = 0;
	
};

#endif