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

class MultiCore
{
public:
	virtual void Show() = 0;
};

class MultiCoreA : public MultiCore
{
public:
	void Show()
	{
		cout << "MultiCore A" << endl;
	}
};

class MultiCoreB : public MultiCore
{
public:
	void Show()
	{
		cout << "MultiCore B" << endl;
	}
};

class Factory
{
public:
	virtual SingleCore* CreateSingleCore() = 0;
	virtual MultiCore* CreateMultiCore() = 0;
};

class FactoryA
{
public:
	SingleCore* CreateSingleCore()
	{
		return new SingleCoreA();
	}
	MultiCore* CreateMultiCore()
	{
		return new MultiCoreA();
	}
};

class FactoryB
{
public:
	SingleCore* CreateSingleCore()
	{
		return new SingleCoreB();
	}
	MultiCore* CreateMultiCore()
	{
		return new MultiCoreB();
	}
};