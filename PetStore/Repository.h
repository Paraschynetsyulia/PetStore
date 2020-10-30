#pragma once
#include"Reposutorii.h"
class Repository {
protected:
	Reposutorii** data;
	int n;
	int cur;
	bool sync;
	bool Add(Reposutorii*);
	virtual void ReadFromFile() {}
	virtual void WriteToFile() {}
public:
	Repository(bool sync = 0);
	~Repository();
};
