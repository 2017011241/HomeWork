#include "Circle.h"
Circle::Circle()
{
	
}
Circle::Circle(double rad)
{
	this->r=rad;
}
double Circle::getarea()
{
	return this->r*this->r*pi;
}
double Circle::getPrimier()
{
	return this->r*pi*2;
}
