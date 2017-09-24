#include "../Project/GameObject.h"
/******************************Component Pattern***********************************/


/*Test for Component Pattern*/
void main()
{
	cout << "Testing Components Pattern" << endl;

	GameObject* bjorn = createBjorn();
	bjorn->update();

	cout << "Testing Components Pattern Completed" << endl;

	system("pause");
}