//Skynet grid search

#include <iostream>
#include <string>
#include <random>
#include <ctime>

using namespace std;


int main()
{

	//to make the number random for the searches
	srand(time(0));
	int enemyLocation = (rand() % 64) + 1;


	//human code
	int humanTargetPrediction = 0;
	int humanLowNumber = 1, humanHighNumber = 64;
	int humanTracker = 0;

	bool didHumanFindTarget = false;
	//the function for the human to imput and display
	do
	{
		cout << "Find the target in the " << humanHighNumber << " Grid." << endl;

		cout << "\nWhat locatoin do you predict the target will be on? ";
		cin >> humanTargetPrediction;
		cout << "You have chosen " << humanTargetPrediction << " as you chose of location.";

		if (humanTargetPrediction < enemyLocation)
		{
			cout << "\nHint:: The target is higher than target predition.";
		}
		else if (humanTargetPrediction > enemyLocation)
		{
			cout << "\nHint:: The target is lower than target predition.";
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
		humanTracker++;
	} while (didHumanFindTarget == false);

	system("pause");


	//random ai
	int randomTargetPredict = 0;
	int randomLowNumber = 1, randomHighNumber = 64;
	int randomTracker = 0;
	
	bool didRandomFindTarget = false;

	do
	{
		cout << "\nRandom search is about to make a prediction\n";
		randomTargetPredict = (rand() % randomHighNumber) + randomLowNumber;
		if (randomTargetPredict == enemyLocation)
		{
			cout << "\n Search found the Target at " << enemyLocation << endl;
			didRandomFindTarget = true;
		}
		else
		{
			cout << "\nThe target was not found at the preddicted loaction " << randomTargetPredict << endl;
		}
		randomTracker++;

	} while (didRandomFindTarget == false);

	system("pause");

	//linear ai
	int linearTargetPrediction = 0;
	int linearLowNumber = 1, linearHighNumber = 64;
	int linearTracker = 0;

	bool didLinearFindTarget = false;
	// linear ai display
	do
	{
		cout << "\nLinear Search is about to make a prediction\n";
		linearTargetPrediction++;

		if (linearTargetPrediction == enemyLocation)
		{
			cout << "\nYou found the target at " << enemyLocation << endl;
			didLinearFindTarget = true;
		}
		else
		{
			cout << "\n Target is not found at this location " << linearTargetPrediction << " Enter new loaction on Grid." << endl;
			didLinearFindTarget = false;
		}
		linearTracker++;
	} while (didLinearFindTarget == false);

	system("pause");



	//Binary AI
	int binearyHighNumber = 64, binearyLowNumber = 1;
	int binearytarget = 0;
	int binearyTracker = 0;
	cout << "\nENEMY LOCATION: " << enemyLocation << "\n\n";
	// function to make the loop work that searches for the taget
	do
	{
		binearytarget = ((binearyHighNumber - binearyLowNumber) / 2) + binearyLowNumber;
		cout << "Guess: " << binearytarget << "\n";

		if (binearytarget < enemyLocation)
		{
			binearyLowNumber = binearytarget + 1;
		}
		if (binearytarget > enemyLocation)
		{
			binearyHighNumber = binearytarget - 1;
		}
		binearyTracker++;
	} while (binearytarget != enemyLocation);

	system("pause");

	cout << "\nHuman Time: " << humanTracker << endl;
	cout << "\nRandom Time: " << randomTracker << endl;
	cout << "\nLinear Time: " << linearTracker << endl;
	cout << "\nBineary Time: " << binearyTracker << endl;

	return 0;

}