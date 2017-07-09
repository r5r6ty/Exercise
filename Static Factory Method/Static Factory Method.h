#pragma once
#include <iostream>

using namespace std;

enum TYPE { COREA, COREB };

class SingleCore
{
public:
	virtual void Show() = 0;
};

class SingleCoreA : public SingleCore
{
public:
	void Show()
	{
		cout << "SingleCore A" << endl;
	}
};

class SingleCoreB : public SingleCore
{
public:
	void Show()
	{
		cout << "SingleCore B" << endl;
	}
};

class Factory
{
public:
	SingleCore* CreateSingleCore(TYPE type)
	{
		if (type == COREA)
		{
			return new SingleCoreA();
		}
		else if (type == COREB)
		{
			return new SingleCoreB();
		}
		else
		{
			return nullptr;
		}
	}
};