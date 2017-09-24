#include <iostream>
using namespace std;
/******************************Update Pattern***********************************/


/*
Abstract entity class shared by all sub-class entities. To
create more subclasses inherit Entity class and define
update method.
*/

class Entity
{
public:
	Entity()
		: x_(0), y_(0)
	{}

	virtual ~Entity() {}
	virtual void update() = 0;

	double x() const { return x_; }
	double y() const { return y_; }

	void setX(double x) { x_ = x; }
	void setY(double y) { y_ = y; }

private:
	double x_;
	double y_;
};