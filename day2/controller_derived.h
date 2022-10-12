#ifndef CONTROLLER_DERIVED_H
#define CONTROLLER_DERIVED_H
#include "controller_base.h"

class Controller : public Controller_base
{
	public:
	Controller(Model*);
	virtual void add(View*);
	virtual void update();

	private:
	Model* ptr_m_;
	View *ptr_v_[10];

};

#endif