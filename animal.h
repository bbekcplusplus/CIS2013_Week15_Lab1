#include <string>
#include <iostream>
using namespace std;

class Animal
{
private:
	int number_of_legs;
	bool is_alive;
	bool has_tail;
	string species;
public:
	Animal();
	Animal(int legs, bool alive, string species);
	~Animal();
	set_legs(int);
	get_legs();
	set_alive(bool);
	get_alive();
	set_species(string);
	get_species();
};