#include <iostream>
#include <string>
using namespace std;
/******************************Subclass Sandbox Pattern***********************************/


class Superpower
{
public:
	virtual ~Superpower() {}

protected:
	//Subclass Sandbox Method that needs to be defined in subclasses.
	virtual void activate() = 0;

	/*********************************Methods shared by all superpowers******************************/
	void move(double x, double y, double z)
	{
		cout << "Calling move function of superclass Superpower" << endl;
		cout << "Going forward ";
	}

	void playSound(string sound, double volume)
	{
		cout << "Calling playSound function of superclass Superpower" << endl;
		cout << "Playing Hero Sound" << endl;
		cout << sound << endl;
	}

	void spawnParticles(string type, int count)
	{
		cout << "Calling spawnParticles function of superclass Superpower" << endl;
		cout << type << " particles start spawning" << endl;
	}
	/************************************************************************************************/
};