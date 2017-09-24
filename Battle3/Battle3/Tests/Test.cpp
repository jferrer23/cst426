#include "../Project/Subclass-Superpowers.h"
/******************************Subclass Sandbox Pattern***********************************/


/*Test for Subclass Sandbox Pattern*/
void main() {

	cout << "Testing Subclass Sandbox Pattern" << endl << endl;

	Superpower* speed = new Superspeed();
	Superpower* flight = new Flight();
	Superpower* underwater = new Swimming();

	cout << "Testing Subclass Sandbox Pattern Completed" << endl;

	system("pause");
}