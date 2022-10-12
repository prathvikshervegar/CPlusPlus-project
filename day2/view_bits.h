#ifndef VIEW_BITS_H
#define VIEW_BITS_H
#include "view_base.h"

class View_bits : public View
{
	public:
	virtual void update();
	virtual void get_model(Model *ptr_model);
	virtual void register_view(Controller_base* ptr_c);
	private:
	Model *ptr_model_;

};

#endif