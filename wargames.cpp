//Skynet grid search

#include <iostream>
#include <string>
#include <random>
#include <ctime>

using namespace std;


int main()
{

	//to make the number random for the binary to search for
	srand(time(0));
	int enemyLocation = (rand() % 64) + 1;

	int highNumber = 64, lowNumber = 1;
	int target = 0;

	int humanTargetPrediction = 0;
	int humanLowNumber = 1, humanHighNumber = 64;

	bool didHumanFindTarget = false;

	do
	{
		cout << "Find the target in the " << humanHighNumber << " Grid." << endl;

		cout << "\nWhat locatoin do you predict the target will be on? ";
		cin >> humanTargetPrediction;
		cout << "You have chosen " << humanTargetPrediction << " as you chose of location.";

		if (humanTargetPrediction < enemyLocation)
		{
			cout << "\nHint:: The target is higher than target predition."
		}
		else if (humanTargetPrediction > enemyLocation)
		{
			cout << "\nHint:: The target is lower than target predition."
		}

		if (humanTargetPrediction == enemyLocation)
		{
			cout << "\nYou found the target at " << enemyLocation << endl;
			didHumanFindTarget = true;
		}
		else
		{
			cout << "\n Target is not found at this location " << humanTargetPrediction << "Enter new loaction on Grid." << endl;
			didHumanFindTarget = false;
		}
	} while (didHumanFindTarget == false);


	//linear ai
	int linearTargetPrediction = 0;
	int linearLowNumber = 1, linearHighNumber = 64;

	bool didLinearFindTarget = false;
	do
	{
		cout << "\nLinear Search is about to make a prediction\n";
		linearTargetPrediction++;

		if (linearTargetPrediction == enemyLocation)
		{
			cout << "\nYou found the target at " << enemyLocation << endl;
			didlinearFindTarget = true;
		}
		else
		{
			cout << "\n Target is not found at this location " << linearTargetPrediction << "Enter new loaction on Grid." << endl;
			didLinearFindTarget = false;
		}
	} while (didLinearFindTarget = false);



	//Random AI
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