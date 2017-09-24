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
	void creation(string power)
	{
		cout << "Instantiating power " << power << endl;
		cout << "Activating power now!" << endl;
	}

	void move(double x, double y, double z)
	{
		cout << "Going forward ";
	}

	void playSound(string sound, double volume)
	{
		cout << "Playing Hero Sound" << endl;
		cout << sound << endl;
	}

	void spawnParticles(string type, int count)
	{
		cout << type << " particles start spawning" << endl;
	}
	/************************************************************************************************/
};