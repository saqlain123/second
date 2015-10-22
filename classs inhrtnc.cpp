#include<iostream>
using namespace std;
class adition
{
	private:
	 int a,b,result;
	 public:
	 void SetValues();
	 int GetA();
	 int GetB();
	 int Calculate();
	 void Display();
	 adition();	
	 adition(int A,int B);	
};
adition::adition()// y we dnt wrt any prototye befr
{
	a=0;
	b=0;
}
adition::adition(int A,int B)
{
	a=A;
	b=B;
}

void adition::SetValues()
{
cout<<"***************CALCULATOR Addition**************"<<endl;
   
    cout<<"  enter value 1:";
    cin>>a;
    cout<<"  enter value 2:";
	cin>>b;
	cout<<"______________________"<<endl;
}
int adition::GetA()// small a and A value use
{
	return a;
}
int adition::GetB()//
{
	return b;
}
int adition::Calculate()
{
	return result=GetA()+GetB();
}
void adition::Display()
{
	cout<<"  Result       :"<<Calculate()<<endl<<endl;

}

class subtraction
{
	private:
	int rzlt,max,min;
	public:
	void setvalue();
	int getMax();
	int getMin();
	int calculation();
	void function();
	subtraction();
	subtraction(int Max,int Min);
};
subtraction::subtraction()
{
	max=0;
	min=0;
}
subtraction::subtraction(int Max,int Min)
{
	max=Max;
	min=Min;
}
void subtraction::setvalue()
{
cout<<"***************CALCULATOR subtraction**************"<<endl;
   
    cout<<"  enter value 1:";
    cin>>max;
    cout<<"  enter value 2:";
	cin>>min;
	cout<<"______________________"<<endl;
	
}
	int subtraction::getMax()
{
	return max;
}
int subtraction::getMin()
{
	return min;
}
int subtraction::calculation()
{
    return rzlt=getMax()-getMin();
    cout<<endl;
}
void subtraction::function()
{
    cout<<"  result is   :"<<calculation()<<endl<<endl; 	
}

class multiplication
{
    private:
    int c,d,reslt;
    public:
	 void setvalue();
	 int getC();
	 int getD();
	 int calculation();
    void show();
    multiplication();
    multiplication(int C,int D);
};
multiplication::multiplication()
{
	c=0;
	d=0;
}
multiplication::multiplication(int C,int D)
{
	c=C;
	d=D;
}
void multiplication::setvalue()
{
    	cout<<"***************CALCULATOR Multiplication**************"<<endl;
    
    cout<<"  enter value 1:";
    cin>>c;
    cout<<"  enter value 2:";
	cin>>d;
	cout<<"______________________"<<endl;
}
int multiplication::getC()
{
	return c;
}
int multiplication::getD()
{
	return d;
}
int multiplication::calculation()
{
  return reslt=getC()*getD();
    cout<<endl;
}
void multiplication::show()
{
    cout<<"  result is   :"<<calculation()<<endl<<endl;
}
class division
{
    private:
    float e,f,rslt;
    public:
    void setvalue();
    int getE();
	int getF();
	int calculation();	
    void print();
    division();//can we use df
    division(int E,int F);
    void weldone();//y we use () after evry func
};
division::division()
{
	e=0;
	f=0;
}
division::division(int E,int F)// y we dnt use int before
{
	e=E;
	f=F;
}
void division::setvalue()
    {
      	cout<<"***************CALCULATOR Division**************"<<endl;
    
    cout<<"  enter value 1:";
    cin>>e;
    cout<<"  enter value 2:";
	cin>>f;
	cout<<"______________________"<<endl;
}
int division::calculation()
{
    rslt=e/f;
    cout<<endl;
}
void division::print()
{
    cout<<"  result is   :"<<rslt<<endl<<endl;
}
void division::weldone()
{
cout<<"*************************WELDONE************************************"<<"\n"<<endl;
}
int main()
{
	adition a;
	adition b(0,0);
	a.SetValues();
	a.Calculate();
	a.Display();
	subtraction e;
	subtraction c(0,0);
	e.setvalue();
	e.calculation();
	e.function();
	multiplication d;
	multiplication f(0,0);
	d.setvalue();
	d.calculation();
	d.show();
	division s;
	division h(0,0);
	h.setvalue();
	h.calculation();
	h.print();
	h.weldone();	
}
//call weldone after evry stp
