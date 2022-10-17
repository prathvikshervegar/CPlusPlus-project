#ifndef VIEW_GREATEST_DIFF_H
#define VIEW_GREATEST_DIFF_H
#include "view_base.h"

class View_greatest_diff : public View
{
	public:
	virtual void update();
	virtual void get_model(Model *ptr_model);
	virtual void register_view(Controller_base* ptr_c);
	virtual void deregister_view(Controller_base* ptr_c);
	private:
	Model *ptr_model_;

};

#endif