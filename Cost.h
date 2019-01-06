#include "Cost.h"

Cost::Cost(double a,double p)
{
	this->currentarea=a;
	this->currentprice=p;
}
void Cost::reporting()
{
	cout << "当前剩余的钱：" << (this->complectprice) - (this->currentprice) << "\n" << "当前剩余的土地" << this->complectarea - this->currentarea << "\n";
}
 int Cost::waring(double currentarea,double currentprice)
 {
	if(this->currentarea>this->complectarea)
	{
		cout<<"面积范围超过预算,此规划提议失败,此次提议将不录入系统"<<"\n";
		this->currentarea=this->currentarea-currentarea;
		this->currentprice=this->currentprice-currentprice;
		cout << "该提议通过，当前以占用面积为：" << this->currentarea << "\n" << "当前占用预算为：" << this->currentprice << "\n";
		cout << "当前剩余的钱：" << (this->complectprice) - (this->currentprice) << "\n" << "当前剩余的土地" << this->complectarea - this->currentarea << "\n";
		return 0;
	}
	else if(this->currentprice>this->complectprice)
	{
		cout<<"价格范围超过预算,此规划提议失败,此次提议将不录入系统"<<"\n";
		this->currentarea = this->currentarea - currentarea;
		this->currentprice = this->currentprice - currentprice;
		cout << "该提议通过，当前以占用面积为：" << this->currentarea << "\n" << "当前占用预算为：" << this->currentprice << "\n";
		cout << "当前剩余的钱：" << (this->complectprice) - (this->currentprice) << "\n" << "当前剩余的土地" << this->complectarea - this->currentarea << "\n";
		return 0;
	}
	else
	{
		cout<<"该提议通过，当前以占用面积为："<<this->currentarea<<"\n"<<"当前占用预算为："<<this->currentprice<<"\n";
		cout<<"当前剩余的钱："<<(this->complectprice)-(this->currentprice)<<"\n"<<"当前剩余的土地"<<this->complectarea-this->currentarea<<"\n";
		return 1;
	}
 }
