
//#define SFM
//#define FM
#define AF

#ifdef SFM
#include "Static Factory Method/Static Factory Method.h"
int main()
{
	Factory factory;
	SingleCore* coreA = factory.CreateSingleCore(COREA);
	coreA->Show();
	delete coreA;

	SingleCore* coreB = factory.CreateSingleCore(COREB);
	coreB->Show();
	delete coreB;

	system("pause");
	return 0;
}
#endif // SFM

#ifdef FM
#include "Factory Method/Factory Method.h"
int main()
{
	FactoryA factoryA;
	SingleCoreA* coreA = factoryA.CreateSingleCore();
	coreA->Show();
	delete coreA;

	FactoryB factoryB;
	SingleCoreB* coreB = factoryB.CreateSingleCore();
	coreB->Show();
	delete coreB;

	system("pause");
	return 0;
}
#endif // FM

#ifdef AF
#include "Abstract Factory/Abstract Factory.h"
int main()
{
	FactoryA factoryA;
	SingleCore* s_coreA = factoryA.CreateSingleCore();
	s_coreA->Show();
	delete s_coreA;
	MultiCore* m_coreA = factoryA.CreateMultiCore();
	m_coreA->Show();
	delete m_coreA;

	FactoryB factoryB;
	SingleCore* s_coreB = factoryB.CreateSingleCore();
	s_coreB->Show();
	delete s_coreB;
	MultiCore* m_coreB = factoryB.CreateMultiCore();
	m_coreB->Show();
	delete m_coreB;

	system("pause");
	return 0;
}
#endif // AF
