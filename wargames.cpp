//Skynet grid search

#include <iostream>
#include <string>
#include <random>
#include <ctime>

using namespace std;


int main()
{

	//to make the number random for the binary to saerch for
	srand(time(0));
	int enemyLocation = (rand() % 64) + 1;

	int highNumber = 64, lowNumber = 1;
	int target = 0;

	cout << "\nENEMY LOCATION: " << enemyLocation << "\n\n";



	// function to make the loop work that searches for the taget
	do
	{
		target = ((highNumber - lowNumber) / 2) + lowNumber;
		cout << "Guess: " << target << "\n";

		if (target < enemyLocation)
		{
			lowNumber = target + 1;
		}
		if (target > enemyLocation)
		{
			highNumber = target - 1;
		}
	} while (target != enemyLocation);


	return 0;

}