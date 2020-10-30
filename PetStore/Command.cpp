#include "Command.h"
#include <iostream>
#include <fstream>
using namespace std;

Command::Command()
{
}

Command::~Command()
{

}

void Command::Addanimals(animals& animals)
{
	animalRepository.Add(animals);
}


void Command::Writeanimals()
{
	animalRepository.ReadToFile();
}

string Command::GetMostPopularAnimal()
{
	int maxNrkinds = -1;
	string maxkinds = "";

	/*for (int i = 0; i <= lastAnimalsIndex; i++)
	{
		int nrOfMakes = 0;
		for (int j = i + 1; j <= lastAnimalsIndex; j++)
		{
			if (animalss[i].Getkinds() == animalss[j].Getkinds())
				nrOfMakes++;
		}
		if (nrOfMakes > maxNrkinds)
		{
			maxNrkinds = nrOfMakes;
			maxkinds = animalss[i].Getkinds();
		}
	}
	*/
	return maxkinds;
}