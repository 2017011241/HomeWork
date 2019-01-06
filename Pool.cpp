#include "Pool.h"
int Pool::noble=300;
int Pool::middleclass=180;
int Pool::poor=90;
Pool::Pool()
{

}
Pool::Pool(int pricelevel)
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
Pool::Pool(int price,int mark)
{
this->price=price;
}
