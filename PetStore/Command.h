#ifndef COMMAND_H
#define COMMAND_H

#include"Animal.h"
#include"AnimalRepository.h"

class Command
{
	AnimalRepository animalRepository = AnimalRepository(true);

public:
	Command();
	~Command();

	void Addanimals(animals&);
	void Writeanimals();
	string GetMostPopularAnimal();

};

#endif 
