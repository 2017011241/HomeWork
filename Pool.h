#pragma once
#include<iostream>
using namespace std;
class Pool
{
private:
	static int noble;
	static int middleclass;
	static int poor;
public:
	int  level;
	int  price;
public:
	Pool();
	Pool(int pricelevel);
	Pool(int price,int mark);
};
