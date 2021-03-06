#include<iostream>
#include<ctime>
using namespace std;
int PlayGame(int);
int main()
{
	int value = 1;
	int difficulty = 1;
	int max_difficulty = 10;
	while (difficulty <= max_difficulty)
	{
		value = PlayGame(difficulty);
		if (value == 0)
			break;
		cin.clear();
		cin.ignore();
		++difficulty;

	}
	if (difficulty == 11)
		cout << "You've mastered the game!" << endl;

	return 0;
}

int PlayGame(int difficulty)
{
	srand(time(NULL));
	int arr[3];
	 int a = rand() % difficulty + 1;
	 int b = rand() % difficulty + 1;
	 int c = rand() % difficulty + 1;
	 int sum = a + b + c;
	 int product = a * b * c;
	cout << "Welcome to level " << difficulty << endl;
	cout << "Unlock! safe Box by Below hints- " << endl;
	cout << "Code Hint 1: " << "Sum of 3-digit code is: " << sum << endl;
	cout << "Code Hint 2: " << "Product of 3-digit code is: " << product << endl;
	cout << "Enter Code: ";
	for (int i = 0; i < 3; i++)
		cin >> arr[i];
	int trialsum = 0;
	int trialproduct = 1;
	for (int i = 0; i < 3; i++)
		trialsum += arr[i];
	for (int i = 0; i < 3; i++)
		trialproduct *= arr[i];
	if (sum == trialsum && product == trialproduct)
	{
		cout << "Congratulations! You've entered next level" << endl;
		cout << "------------------------------------------" << endl<<endl<<endl;
		return 1;
	}
	else
	{
		cout << "You've failed!!" << endl;
		cout << "Hahahaha! Police caught you." << endl;
		return 0;
	}
}