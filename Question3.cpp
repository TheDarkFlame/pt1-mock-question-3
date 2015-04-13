///////////////////////////////////////////////////////////////////////////////////////////////////
//                         COMPUTER METHODS 3 PRACTICAL TEST 1 (MOCK)
// Name:
// Student No:
// Date: 
///////////////////////////////////////////////////////////////////////////////////////////////////
#include <iostream>

using namespace std;

// ***** QUESTION 3 ******
// Question 3 has 3 parts
// 3.1 Using the MINIMAL "Fraction" class provided, overload the greater than operator to work with
//     objects of class Fraction as a NON-MEMBER FUNCTION.   You may modify the Fraction class to 
//     demonstrate friendship.  DO NOT USE FLOATING POINT MATH!!!
// 3.2 Overload two functions called "add" which take two arguements, an integer and a fraction (in 
//     either order) and return a fraction.  
// 3.3 create a driver program to test your overloaded > operators and your overloaded 

class Fraction {
private:
	int num;				// numerator;
	int denom;				// denominator;
public:
	Fraction(){};
	~Fraction(){};
	Fraction(int n, int d) : num(n), denom(d) { };
	void print() { cout << num << "/" << denom; };
	friend bool operator>(const Fraction A, const Fraction B);
	Fraction add(int integer, Fraction frac);
	Fraction add(Fraction frac, int integer);
};
bool operator>(const Fraction A, const Fraction B){
	int A_num, B_num;
	A_num = A.num*B.denom;
	B_num = B.num*A.denom;
	if (A_num > B_num) 
		return true;
	else
		return false;
};
Fraction Fraction::add(Fraction frac, int integer){
	frac.num += integer*frac.denom;//gets the integer into fraction's base value, then adds it to the numerator
	return frac;
};
Fraction Fraction::add(int integer, Fraction frac){
	frac.num += integer*frac.denom;//exactly the same method!
	return frac;
};
int main(){
	//Fraction fracArray[2];
	//fracA=
	//fracArray[0] = Fraction()
}