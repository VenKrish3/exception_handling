#include <iostream>

using namespace std;

class Excp1 : public exception 
{
    virtual const char *what() const throw()
    {
        return "argumentoneisnogood";
    }
    
} e1;

class Excp2 : public exception {
    virtual const char *what() const throw()
    {
        return "theycantbethesame";
    }
    
} e2;

class Excp3 : public exception {
    virtual const char *what() const throw()
    {
        return "theycantadd";
    }
    
} e3;

void my_exceptions(int num1, int num2, int num3) 
{	
    try
	{
    	if(num1 > 0)
    	{
    		throw e1;	
		}	
		if(num2 == num1)
		{
			throw e2;
		}	
		if(num1 + num2 == num3)
		{
			throw e3;
		}
		cout << num1 + num2 + num3 << endl;
	}
	catch(exception &ex)
	{
		cout << ex.what() << endl;
	}
}

int main() 
{
	int num1, num2, num3;
	
	cout << "enter first value" << endl;
	cin >> num1;
	cout << "enter second value" << endl;
	cin >> num2;
	cout << "enter third value" << endl;
	cin >> num3;
	
	my_exceptions(num1,num2,num3);
		
    return 0;
}
