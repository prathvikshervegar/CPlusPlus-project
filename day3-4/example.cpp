#include <iostream>
using namespace std;
class Controller_base;
class Controller;
class View;
class View_Sq;
class Model;
class Model1;

class Controller_base 
{
	public:
	virtual ~Controller_base() { }
	virtual void update() = 0;
	virtual void add(View* ptr_v) = 0;

};
class Controller : public Controller_base
{
	public:
	Controller(Model* ptr_m) : ptr_m_(ptr_m) { }
	virtual void add(View* ptr_v)
	{
		ptr_v1_ = ptr_v; 
	}
	virtual void update();


	private:
	Model* ptr_m_;
	View *ptr_v1_;

};
class Model 
{
	public:
	virtual ~Model() { }
	virtual void set_controller(Controller_base* ptr_c) = 0;
	virtual void change(int) = 0;
	virtual int get_x() = 0;
};

class Model1 : public Model 
{
	public:
	Model1(int x) : x_(x) { }
	virtual void set_controller(Controller_base* ptr_c)
	{
		ptr_c_ = ptr_c;
	}
	void change(int x) 
	{
		x_ = x;
		ptr_c_->update();
	}
	int get_x()
	{
		return x_;
	}
	private:
	Controller_base* ptr_c_;
	int x_;
	
};

class View 
{
	public:
	virtual ~View() { }
	virtual void register_view(Controller_base* ptr_c) = 0;

	virtual void update() = 0;
	virtual void get_model(Model *ptr_model) = 0;
	
};
class View_sq : public View
{
	public:
	virtual void update()
	{
		int x = ptr_model_->get_x();
		cout << "Square : " << x * x << "\n";
	}
	virtual void get_model(Model *ptr_model)
	{
		ptr_model_ = ptr_model;
	}
	virtual void register_view(Controller_base* ptr_c)
	{
		ptr_c->add(this);
	};
	private:
	Model *ptr_model_;

};


void Controller::update() 
{
		ptr_v1_->update();
}

int main()
{
	Model1 m(10);
	Controller c(&m);
	m.set_controller(&c);
	
	View_sq view_sq;
	view_sq.register_view(&c);
	view_sq.get_model(&m);
	
	m.change(20);
	
	
	
	
}

