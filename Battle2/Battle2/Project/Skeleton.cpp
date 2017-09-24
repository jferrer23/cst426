#include "Entity.cpp"
/******************************Update Pattern***********************************/


class Skeleton : public Entity
{
public:
	Skeleton()
		: patrollingLeft_(false)
	{
		cout << "Instantiating skeleton entity" << endl;
	}

	//Update method that runs every frame.
	virtual void update()
	{
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