#include "StoryRepository.h"
#include <fstream>
using namespace std;

StoreRepository::StoreRepository(bool sync) : Repository(sync)
{
	ReadToFile();
}

StoreRepository::~StoreRepository()
{
}
bool StoreRepository::Add(NetPetShop&NetPetShopp)
{
	return Repository::Add(&NetPetShopp);
}
void StoreRepository::ReadToFile()
{
	ifstream fin("Store.txt");
	int maxLen = 50;
	char* name = new char[maxLen],
		* address = new char[maxLen];
	char d = ',';
	while (!fin.eof())
	{
		fin.get(name, maxLen,d);
		fin.get();
		fin.get(address, maxLen);


		NetPetShop NetPetShop(name, address);
		Add(NetPetShop);
	}

	fin.close();
}
void StoreRepository::WriteToFile()
{
	ofstream fout("Animal.txt");

	for (int i = 0; i <= cur; i++)
	{
		NetPetShop* NetPetShopp = (NetPetShop*)data[i];

		fout << NetPetShopp->GetName() << ","
			<< NetPetShopp->GetAddress();

		if (i < cur)
			fout << endl;
	}

	fout.close();
}