#include "MarketSpace.h"

MarketSpace::MarketSpace()
{
}

MarketSpace::MarketSpace(int newCost, int newCoal, int newOil, int newGarbage, int newUranium)
{
	cost = newCost;

	for (int i = 0; i < newCoal; i++)
		coal.push_back(new Coal());

	for (int i = 0; i < newOil; i++)
		oil.push_back(new Oil());

	for (int i = 0; i < newGarbage; i++)
		garbage.push_back(new Garbage());

	for (int i = 0; i < newUranium; i++)
		uranium.push_back(new Uranium());
}

MarketSpace::MarketSpace(int newCost, int newUranium)
{
	cost = newCost;

	for (int i = 0; i < newUranium; i++)
		uranium.push_back(new Uranium());
}

MarketSpace::~MarketSpace()
{
}

void MarketSpace::setCost(int newCost)
{
	cost = newCost;
}

void MarketSpace::setCoal(int newCoal)
{
	for (int i = 0; i < newCoal; i++)
		coal.push_back(new Coal());
}

void MarketSpace::takeCoal(int newCoal)
{
	for (int i = 0; i < newCoal; i++)
		coal.pop_back();
}

void MarketSpace::setOil(int newOil)
{
	for (int i = 0; i < newOil; i++)
		oil.push_back(new Oil());
}

void MarketSpace::takeOil(int newOil)
{
	for (int i = 0; i < newOil; i++)
		oil.pop_back();
}

void MarketSpace::buyResource(int number, string res) {
	for (int i = 0; i < number;i++) {
		
	}
}



void MarketSpace::setGarbage(int newGarbage)
{
	for (int i = 0; i < newGarbage; i++)
		garbage.push_back(new Garbage());
}

void MarketSpace::takeGarbage(int newGarbage)
{
	for (int i = 0; i < newGarbage; i++)
		garbage.pop_back();
}

void MarketSpace::setUranium(int newUranium)
{
	for (int i = 0; i < newUranium; i++)
		uranium.push_back(new Uranium());
}

void MarketSpace::takeUranium(int newUranium)
{
	for (int i = 0; i < newUranium; i++)
		uranium.pop_back();
}

int MarketSpace::getCost()
{
	return cost;
}

vector<Coal*> MarketSpace::getCoal()
{
	return coal;
}

vector<Oil*> MarketSpace::getOil()
{
	return oil;
}

vector<Garbage*> MarketSpace::getGarbage()
{
	return garbage;
}

vector<Uranium*> MarketSpace::getUranium()
{
	return uranium;
}