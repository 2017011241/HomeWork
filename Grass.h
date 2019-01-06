#pragma once
#include<iostream>
using namespace std;
class Grass
{
private:
	static int noble;
	static int middleclass;
	static int poor;
public:
	int  level;
	int  price;
public:
	Grass(int pricelevet);
	Grass();
	void setGrass(int pricelevel);
	Grass(int price, int mark);
};
