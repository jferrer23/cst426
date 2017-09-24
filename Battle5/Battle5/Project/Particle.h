#include <iostream>
using namespace std;
/******************************Object Pool Pattern***********************************/

class Particle
{
public:
	Particle()
		: framesLeft_(0)
	{}

	void init(double x, double y,
		double xVel, double yVel, int lifetime)
	{
		state_.live.x = x; state_.live.y = y;
		state_.live.xVel = xVel; state_.live.yVel = yVel;
		framesLeft_ = lifetime;
	}

	bool animate()
	{
		if (!inUse()) return false;

		framesLeft_--;
		state_.live.x += state_.live.xVel;
		state_.live.y += state_.live.yVel;

		return framesLeft_ == 0;
	}

	bool inUse() const { return framesLeft_ > 0; }

	Particle* getNext() const { return state_.next; }
	void setNext(Particle* next) { state_.next = next; }

private:
	int framesLeft_;

	union
	{
		// State when it's in use.
		struct
		{
			double x, y;
			double xVel, yVel;
		} live;

		// State when it's available.
		Particle* next;
	} state_;
};