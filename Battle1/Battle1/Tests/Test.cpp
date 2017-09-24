#include "../Project/Spawner.cpp"

/*Test for Prototype Pattern*/
int main()
{
	cout << "Testing Prototype Pattern" << endl;

	Monster* goblinPrototype = new Goblin(10, 5);
	Spawner* goblinSpawner = new Spawner(goblinPrototype);
	goblinSpawner->spawnMonster();

	cout << "Testing Prototype Pattern Complete" << endl;

	system("pause");

	return 0;
}