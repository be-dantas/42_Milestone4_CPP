#include "Zombie.hpp"

int main(void)
{
	Zombie* docin;

	randomChump("Pompom");
	
	docin = newZombie("Docin");
	docin->announce();
	delete docin;
	return (0);
}