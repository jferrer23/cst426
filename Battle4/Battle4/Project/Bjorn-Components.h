#include "Components.h"
/******************************Component Pattern***********************************/

/*
Example of instanciating a specific game object using the component pattern.
*/

class BjornInputComponent : public InputComponent
{
public:
	virtual void update()
	{
		cout << "Update function of Bjorn Input Component is called" << endl;
	}

private:
	static const int WALK_ACCELERATION = 1;
};

class BjornPhysicsComponent : public PhysicsComponent
{
public:
	virtual void update()
	{
		cout << "Update function of Bjorn Physics Component is called" << endl;
	}
};

class BjornGraphicsComponent : public GraphicsComponent
{
public:
	virtual void update()
	{
		cout << "Update function of Bjorn Graphics Component is called" << endl;
	}
};

