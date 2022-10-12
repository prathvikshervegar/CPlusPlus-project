#ifndef VIEW_CUBE_H
#define VIEW_CUBE_H
#include "view_base.h"

class View_cube : public View
{
	public:
	virtual void update();
	virtual void get_model(Model*);
	virtual void register_view(Controller_base*);
	private:
	Model *ptr_model_;

};

#endif