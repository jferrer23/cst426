#include "../Project/World.h"
/******************************Update Pattern***********************************/


/*Test for Update Pattern*/
void main() {
	cout << "Testing Update Pattern" << endl;

	World* gameWorld = new World();
	Entity* skel1 = new Skeleton();
	gameWorld->addEntity(skel1);
	Entity* stat1 = new Statue(10);
	gameWorld->addEntity(stat1);
	gameWorld->finiteGameLoop();

	cout << "Testing Update Pattern Complete" << endl;

	system("pause");
}