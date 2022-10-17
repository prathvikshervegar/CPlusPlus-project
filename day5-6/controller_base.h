#ifndef CONTROLLER_BASE_H
#define CONTROLLER_BASE_H

class Model;
class View;

class Controller_base 
{
	public:
	virtual ~Controller_base() { }
	virtual void update() = 0;
	virtual void add(View* ptr_v) = 0;
	virtual void remove(View* ptr_v) = 0;

};

#endif