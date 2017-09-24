#include <iostream>
using namespace std;
/******************************Component Pattern***********************************/

/*
Abstract classes of different components of a game object. To create custom components
of a game object, inherit from component classes and define virtual function update().
*/

class InputComponent
{
public:
	virtual ~InputComponent() {}
	virtual void update() = 0;
};

class PhysicsComponent
{
public:
	virtual  ~PhysicsComponent() {}
	virtual void update() = 0;

private:
	int volume_;
};

class GraphicsComponent
{
public:
	virtual ~GraphicsComponent() {}
	virtual void update() = 0;

private:
	char spriteStand_;
	char spriteWalkLeft_;
	char spriteWalkRight_;
};

