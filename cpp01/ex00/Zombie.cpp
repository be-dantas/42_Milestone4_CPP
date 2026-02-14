#include "Zombie.hpp"

//arquivo para iniciar todos conteúdos da Class

Zombie::~Zombie()
{
	std::cout << name << " destroyed" << std::endl; //o c++ chama ele automaticamente quando ele para de exitir, não precisa chamar ~Zombie
}

Zombie::Zombie(std::string name) //classe zombie::mebro zombie
{
	this->name = name; //this pq as variaveis têm nomes iguais, então: this é um ponteiro implícito para o objeto atual.
}

void Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
