#include "Grass.h"
int Grass::noble = 150;
int Grass::middleclass = 70;
int Grass::poor = 20;
Grass::Grass(int pricelevel)
{
	if (pricelevel != 0 && pricelevel != 1 && pricelevel != 2)
	{
		cout << "out of range";
	}
	else
	{
		level = pricelevel;
		if (level == 0)
		{
			this->price = this->noble;
		}
		if (this->level == 1)
		{
			this->price = this->middleclass;
		}
		if (this->level == 2)
		{
			this->price = this->poor;
		}
	}
}
void Grass::setGrass(int pricelevel)
{
	if (pricelevel != 0 && pricelevel != 1 && pricelevel != 2)
	{
		cout << "out of range";
	}
	else
	{
		level = pricelevel;
		if (level == 0)
		{
			this->price = this->noble;
		}
		if (this->level == 1)
		{
			this->price = this->middleclass;
		}
		if (this->level == 2)
		{
			this->price = this->poor;
		}
	}
}
Grass::Grass(int price, int mark)
{
	this->price = price;
}
Grass::Grass()
{
}
