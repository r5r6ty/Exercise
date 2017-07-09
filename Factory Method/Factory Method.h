#pragma once
#include <iostream>

using namespace std;

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
	virtual SingleCore* CreateSingleCore() = 0;
};

class FactoryA : public Factory
{
public:
	SingleCoreA* CreateSingleCore()
	{
		return new SingleCoreA();
	}
};

class FactoryB : public Factory
{
public:
	SingleCoreB* CreateSingleCore()
	{
		return new SingleCoreB();
	}
};