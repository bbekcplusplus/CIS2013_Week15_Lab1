#include "Animal.h"
Animal::Animal()
{
	set_legs(4);
	set_alive(true);
	set_species("Cat");
}

Animal::Animal(int legs, bool alive, string spec)
{
	number_of_legs = legs;
	is_alive = alive;
	species = spec;

}
Animal::~Animal()
{
	//Leaving Empty
}

void Animal::set_legs(int legs)
{
	number_of_legs = legs;
}
int Animal::get_legs()
{
	return number_of_legs
}
int Animal::set_alive(bool)
{
	is_alive = alive;
}
int Animal::set_legs()
{
	return is_alive
}
int Animal::set_species(string spec)
{
	species = spec;
}
int Animal::get_species()
{
	return species
}
string Animal::describe() {
	return species <<"with"<<number_of_legs
}
