#include "Monster.cpp"

class Spawner
{
public:
	Spawner(Monster* prototype)
		: prototype_(prototype)
	{
		cout << "Instantiating spawner for prototype" << endl;
	}

	//Creates new object based on the prototype object used to create Spawner
	Monster* spawnMonster()
	{
		return prototype_->clone();
	}

private:
	Monster* prototype_;
};
