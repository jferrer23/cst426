#include "Skeleton.cpp"
/******************************Update Pattern***********************************/


class Statue : public Entity
{
public:
	Statue(int delay)
		: frames_(0),
		delay_(delay)
	{
		cout << "Instantiating statue entity" << endl;
	}

	//Update method that runs based on delay
	virtual void update()
	{
		if (++frames_ == delay_)
		{
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