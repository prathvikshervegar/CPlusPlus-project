#ifndef MODEL_DERIVED_H
#define MODEL_DERIVED_H
#include "model_base.h"

class Model1 : public Model 
{
	public: 
	Model1(int x);
	virtual void set_controller(Controller_base* ptr_c);
	void change(int x);
	int get_x();
	private:
	Controller_base* ptr_c_;
	int x_;
	
};


#endif