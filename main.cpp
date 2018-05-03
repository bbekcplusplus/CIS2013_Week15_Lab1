#include <string>
#include <iostream>
#include "Animal.h"
using namespace std;

int main()
{
	string species;
	char alive;
	int legs;
	bool is_alive;

	cout << "You making some animals..." << endl;
	cout << "What species of animal do you want to make first?" << endl;
	cin >> species;

	cout << "How many lgs does your animal have?" << endl;
	cin >> legs;

	cout << "Is it alive (y/n)?" << endl;
	cin >> alive;

	if (alive == 'y' || alive == 'Y')
	{
		is_alive = true;
	}
	else if (alive == 'n' || alive == 'N')
	{
		is_alive = false;
	}
	else
	{
		cout << "That as not an option..screw you... I'm killing your animal." << endl;
	}

	cout << "Also, I am going to make you a cat" << endl;
}