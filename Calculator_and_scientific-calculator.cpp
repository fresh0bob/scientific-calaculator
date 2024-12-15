#include<iostream>
#include<string>
#include<cmath>
using namespace std;

class Calculator
{
	public:
		double add(double a, double b)
		{
			return a + b;
		}
		
		double subtract(double a, double b)
		{
			return a - b;
		}
		
		double divide(double a, double b)
		{
			if(b == 0)
		{
			cerr<<"Error division not possible...";
			return -1;
		}
		
		return a / b;
		}
		
		double multiply(double a, double b)
		{
			return a * b;
		}
		
};

class ScientificCalculator : public Calculator
{
	public:
		double power(double base, double exponent)
		{
			return pow(base, exponent);
		}
		
		double logarithm(double value)
		{
			if(value <= 0)
			{
				cout<<"REQUIRED POSITIVE INTEGERS FOR LOGARITHM";
				return -1;
			}
			
			return log(value);
		}
		
		double sine(double angle)
		{
			return sine(angle);
		}
		
		double cosine(double angle)
		{
			return cos(angle);
		}
		
		double tangent(double angle)
		{
			return tan(angle);
		}
		
		
		
	void display()
	{
			int ch;
			int a,b;
			double base, exponent, valueL, angleS, angleC, angleT; 
			
		cout<<"\n\n\n***CALCULATORRRRR***\n\n";
		cout<<"1. Add\n";
		cout<<"2. Subtract\n";
		cout<<"3. Divide\n";
		cout<<"4. Multiply\n";
		cout<<"5 Power\n";
		cout<<"6 Logarithm\n";
		cout<<"7 Sine\n";
		cout<<"8 Cosine\n";
		cout<<"9 Tangent\n";
		cout<<"\nEnter your choice...\n";
		cin>>ch;
		
				cout<<"Enter the first number: ";
				cin>>a;
			
				cout<<"Enter the second number: ";
				cin>>b;
		
		switch(ch)
		{
			case 1:
				cout<<"The sum is:"<<add(a,b);
				break;
			case 2:
				cout<<"The sum is:"<<add(a,b);
				
				cout<<"The difference is:"<<subtract(a,b);
				break;
			case 3:
				
				cout<<"The sum is:"<<add(a,b);
				cout<<"The division result is: "<<divide(a,b);
				break;
			case 4:
			
				cout<<"The sum is:"<<add(a,b);
				cout<<"The multiplication result is: "<<multiply(a,b);
				break;
				default:
					cout<<"error";
			}
			
		cout<<"Do you want to perform scientific calculator functions?(y/n): ";
		cin>>ch;
		
		while(ch == 'y' || ch == 'Y')
		{
			switch(ch)
			{
			
				cout<<"Enter the base and the exponent: ";
				cin>>base, exponent;
				
				cout<<"Enter the vlaue for logarithm: ";
				cin>>valueL;
				
				
				cout<<"Enter the angle: ";
				cin>>angleS;
				
				cout<<"Enter the angle: ";
				cin>>angleC;
				
				cout<<"Enter the angle: ";
				cin>>angleT;
					
				case 5:
				
					cout<<"Power of the given value is: "<<power(base, exponent);
					break;
				case 6:
					{
						
						cout<<"The logarithm of the given value is: "<<logarithm(valueL);
						break;
					}
				case 7:
					{
						cout<<"Sine of the given angle is: "<<sine(angleS);
						break;
					}
				case 8:
					{
						
						cout<<"Cosine of the given angle is: "<<cosine(angleC);
						break;
					}
				case 9:
					{
						
						cout<<"Tangent of the given angle is: "<<tangent(angleT);
						break;
					}
				default:
					cout<<"Muthote ji diso bhul hoise...";
				}//while	
			}//switch
					
		}//display
};//class

int main()
{
	ScientificCalculator calc;
	
	calc.display();
	
	
}
