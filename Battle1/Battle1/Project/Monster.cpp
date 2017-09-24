#include <iostream>
using namespace std;

/*
*  This class defines different types of monsters like goblin, ghost, orc, etc.
*
*  To create new type of monster, inherit from Monster
*
*  Author: Jason Ferrer (c) 2017
*/

class Monster
{
public:
	virtual ~Monster() {}

	//Later needs to define function in all sub-classes of Monster class.
	virtual Monster* clone() = 0;

	//Other additional stuff
};

class Goblin : public Monster
{
public:
	Goblin(int health, int speed)
		:health_(health),
		speed_(speed)
	{
		cout << "Creating goblin" << endl;
	}

	//Main component of prototype pattern
	//Hides a copy of constructed object to be called by the spawner.
	virtual Monster* clone()
	{
		cout << "Spawning clone from Goblin Prototype" << endl;
		return new Goblin(health_, speed_);
	}

private:
	int health_;
	int speed_;
};