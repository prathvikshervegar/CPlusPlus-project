#ifndef VIEW_COUNT_H
#define VIEW_COUNT_H
#include "view_base.h"

class View_count : public View
{
	public:
	virtual void update();
	virtual void get_model(Model*);
	virtual void register_view(Controller_base*);
	virtual void deregister_view(Controller_base*);
	private:
	Model *ptr_model_;
	int flag = 0;
};

#endif