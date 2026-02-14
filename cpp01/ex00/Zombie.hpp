#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	private:
		std::string name;
	public:
		~Zombie();
		Zombie(std::string name); // é apenas uma declaração do construtor, não o objeto ainda, por isso não recebe z. Diz: o tipo Zombie pode receber name
		void announce(void);
};

void randomChump(std::string name);
Zombie* newZombie(std::string name);

#endif