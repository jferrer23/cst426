#include "Superpower.cpp"
/******************************Subclass Sandbox Pattern***********************************/


/*Subclasses that inherit from superpower. To create new powers, inherit from
  superpower and define the subclass sandbox method activate().
  */

class Superspeed : public Superpower
{
public:
	Superspeed()
	{
		activate();
	}
protected:

	//Defining the subclass sandbox method.
	virtual void activate()
	{
		creation("Superspeed");
		playSound("Whoosshhh", 1.0f);
		spawnParticles("Flash", 10);
		move(0, 0, 20); cout << "Really really fast" << endl << endl;
	}
};

class Flight : public Superpower
{
public:
	Flight()
	{
		activate();
	}
protected:
	virtual void activate()
	{
		creation("Flight");
		playSound("Wooowoooowooo", 1.0f);
		spawnParticles("Cloud", 10);
		move(0, 0, 20); cout << "While in the air" << endl << endl;
	}
};

class Swimming : public Superpower
{
public:
	Swimming()
	{
		activate();
	}
protected:
	virtual void activate()
	{
		creation("Swimming");
		playSound("blubblubblubblub", 1.0f);
		spawnParticles("Bubble", 10);
		move(0, 0, 20); cout << "Underwater" << endl << endl;
	}
};