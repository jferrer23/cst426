#include "Bjorn-Components.h"
/******************************Component Pattern***********************************/

/*
Different game components of game object are decoupled from GameObject class and 
are made into separate classes in Components.h. References to components are made into
private members of GameObject. This is the Component Pattern.
*/

class GameObject
{
public:
	int velocity;
	int x, y;

	GameObject(InputComponent* input,
		PhysicsComponent* physics,
		GraphicsComponent* graphics)
		: input_(input),
		physics_(physics),
		graphics_(graphics)
	{}

	void update()
	{
		cout << "Update function of GameObject is called" << endl;
		input_->update();
		physics_->update();
		graphics_->update();
		cout << "Update function of GameObject is finished" << endl;
	}

private:
	InputComponent* input_;
	PhysicsComponent* physics_;
	GraphicsComponent* graphics_;
};

GameObject* createBjorn()
{
	cout << "Game object Bjorn is created from GameObject class" << endl;
	return new GameObject(new BjornInputComponent(), new BjornPhysicsComponent(), new BjornGraphicsComponent());
}
