#include <iostream>

using namespace std;
class Fraction
{
private:
	int val1;
	int val2;
public:
	Fraction(int val1, int val2);
	void print();
	friend Fraction operator*(const Fraction &p1,const Fraction &p2);
	friend Fraction operator*(Fraction &p1, int value);
	friend Fraction operator*(int value, Fraction &p1);
	int gcd(int a, int b);
	void reduce();
};
void Fraction :: reduce()
{
	int val = gcd(this -> val1, this -> val2);
	this -> val1 = this -> val1 / val;
	this -> val2 = this -> val2 / val;
}
int Fraction::gcd(int a, int b)
{
	return b == 0 ? a: gcd(b, a % b);
}
Fraction :: Fraction(int val1, int val2)
{
	cout << "Calling constructor" << "\n";
	this -> val1 = val1;
	this -> val2 = val2;
}
Fraction operator*(const Fraction &op1,const  Fraction &op2)
{
	Fraction dummy = Fraction(op1.val1* op2.val1, op1.val2 * op2.val2);
	dummy.reduce();
	return dummy;
}
Fraction operator*(Fraction &op1, int value)
{
	Fraction dummy = Fraction(op1.val1* value, op1.val2);
	dummy.reduce();
	return dummy;
}
Fraction operator*(int value, Fraction &op1)
{
	return(op1 * value);
}
void Fraction::print()
{
	cout << val1 << '/' << val2 << "\n";
}
int main()
{
	Fraction f1(2,5);
	f1.print();

	Fraction f2(3,8);
	f2.print();
	
	Fraction f3 = f1 * f2;
	f3.print();

	Fraction f4 = f1 * 2;
	f4.print();
	
	Fraction f5 = 2 * f2;
	f5.print();

	Fraction f6 = Fraction(1,2) * Fraction(2,3) * Fraction(3,4);	
	f6.print();
	return 0;
}
