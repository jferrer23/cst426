#include "Skeleton.h"
/******************************Update Pattern***********************************/


class Statue : public Entity
{
public:
	Statue(int delay)
		: frames_(0),
		delay_(delay)
	{
		cout << "Instantiating statue entity using constructor in Entity class' subclass Statue" << endl;
	}

	//Update method that runs based on delay
	virtual void update()
	{
		if (++frames_ == delay_)
		{
			cout << "Update function is called in Statue class" << endl;
			shootLightning();

			// Reset the timer.
			frames_ = 0;
		}
	}

private:
	int frames_;
	int delay_;

	void shootLightning()
	{
		cout << "Statue shoots lightning" << endl;
	}
};