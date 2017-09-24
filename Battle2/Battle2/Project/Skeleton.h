#include "Entity.h"
/******************************Update Pattern***********************************/


class Skeleton : public Entity
{
public:
	Skeleton()
		: patrollingLeft_(false)
	{
		cout << "Instantiating skeleton entity using contructor in Entity class' subclass Skeleton" << endl;
	}

	//Update method that runs every frame.
	virtual void update()
	{
		cout << "Update function is called in Skeleton class" << endl;
		if (patrollingLeft_)
		{
			cout << "Skeleton is patrolling left" << endl;
			setX(x() - 1);
			if (x() == 0) patrollingLeft_ = false;
		}
		else
		{
			cout << "Skeleton is patrolling right" << endl;
			setX(x() + 1);
			if (x() == 10) patrollingLeft_ = true;
		}
	}

private:
	bool patrollingLeft_;
};