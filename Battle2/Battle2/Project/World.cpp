#include "Statue.cpp"
/******************************Update Pattern***********************************/

class World
{
public:
	World()
		: numEntities_(0), gameTime_(0)
	{
		cout << "Instantiating game World" << endl;
	}

	//To create true game loop, get rid of condition inside while loop.
	void finiteGameLoop()
	{
		cout << "Starting 100 Frames Game Loop" << endl << endl;
		while (gameTime_ <= 100)
		{
			cout << "Frame #" << gameTime_ << endl;

			// Handle user input...

			// Updates each entity by 1 frame.
			for (int i = 0; i < numEntities_; i++)
			{
				entities_[i]->update();
			}
			gameTime_++;
			// Physics and rendering...
			cout << endl;
		}
		cout << "Ending 100 Frames Game Loop" << endl;
	};


	void addEntity(Entity* object)
	{
		if (numEntities_ >= 4)
		{
			cout << "Too many entities" << endl;
			return;
		}
		cout << "Adding entity into game World" << endl;
		entities_[numEntities_] = object;
		numEntities_ += 1;
	};

private:
	Entity* entities_[4];
	int numEntities_;
	int gameTime_;
};

