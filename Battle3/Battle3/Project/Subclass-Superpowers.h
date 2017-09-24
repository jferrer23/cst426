#include "Superpower.h"
/******************************Subclass Sandbox Pattern***********************************/


/*Subclasses that inherit from superpower. To create new powers, inherit from
  superpower and define the subclass sandbox method activate().
  */

class Superspeed : public Superpower
{
public:
	Superspeed()
	{
		cout << "Instantiating superpower Superspeed using Superspeed class constructor" << endl;
		activate();
	}
protected:

	//Defining the subclass sandbox method.
	virtual void activate()
	{
		cout << "Calling activate() function in Superspeed class" << endl;
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
		cout << "Instantiating superpower Flight using Flight class constructor" << endl;
		activate();
	}
protected:
	virtual void activate()
	{
		cout << "Calling activate() function in Flight class" << endl;
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
		cout << "Instantiating superpower Swimming using Swimming class constructor" << endl;
		activate();
	}
protected:
	virtual void activate()
	{
		cout << "Calling activate() function in Swimming class" << endl;
		playSound("blubblubblubblub", 1.0f);
		spawnParticles("Bubble", 10);
		move(0, 0, 20); cout << "Underwater" << endl << endl;
	}
};