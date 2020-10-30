#ifndef COMMANDSTORE_H
#define COMMANDSTORE_H
#include"Store.h"
#include"StoryRepository.h"

class CommandStore
{
	StoreRepository storeRepository = StoreRepository(true);

public:
	CommandStore();
	~CommandStore();

	void Addpetshop(NetPetShop&);
	void Writepetshop();
};

#endif 
