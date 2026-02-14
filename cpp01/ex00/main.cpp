#include "Zombie.hpp"

int main(void)
{
	Zombie* docin;

	randomChump("Pompom"); //cria, anuncia e destroi
	
	docin = newZombie("Docin");
	docin->announce();
	delete docin;
	return (0);
}