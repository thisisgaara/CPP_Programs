#include <iostream>

using namespace std;
class Fraction
{
private:
	int val1;
	int val2;
public:
	Fraction(int val1 = 0, int val2= 0);
	void print();
	friend Fraction operator*(const Fraction &p1,const Fraction &p2);
	friend Fraction operator*(Fraction &p1, int value);
	friend Fraction operator*(int value, Fraction &p1);
	friend ostream& operator<< (std::ostream &out, const Fraction &f1);
	friend istream& operator>> (std::istream &in, Fraction &f1);
	int gcd(int a, int b);
	void reduce();
};
std::ostream& operator<< (ostream &out, const Fraction &f1)
{
	out << f1.val1 << '/' << f1.val2 << '\n';
	return out;
}
std::istream& operator>> (istream &in, Fraction &f1)
{	
	char c;
	in >> f1.val1;
	in >> c;
	in >> f1.val2;
	return in;
}
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
	Fraction f1;
	std::cout << "Enter fraction1: ";
	std :: cin >> f1;
	
	Fraction f2;
	std::cout << "Enter fraction2: ";
	std :: cin >> f2;
	cout << f1 << " * " << f2 << " is " << f1 * f2 << '\n';
	return 0;
}
