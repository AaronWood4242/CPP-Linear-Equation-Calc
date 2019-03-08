//----------------------------------------------------------
//  Aaron Wood
//  a program for creating basic 2 x 2 linear equations
//----------------------------------------------------------

#include <iostream>
using namespace std;

class LinearEquation{
	private:
		double a, b, c, d, e, f; // different variables in the equation
	public:
		LinearEquation(double a, double b, double c, double d, double e, double f);
		double getA();
		double getB();
		double getC();
		double getD();
		double getE();
		double getF();
		
		double getX();
		double getY();
		bool isSolvable();
};

// Constructor for the LinearEquation class
LinearEquation::LinearEquation(double A, double B, double C, double D, double E, double F){
	a = A;
	b = B;
	c = C;
	d = D;
	e = E;
	f = F;
}

// accessor functions for the LinearEquation class
double LinearEquation::getA(){
	return(a);
}
double LinearEquation::getB(){
	return(b);
}
double LinearEquation::getC(){
	return(c);
}
double LinearEquation::getD(){
	return(d);
}
double LinearEquation::getE(){
	return(e);
}
double LinearEquation::getF(){
	return(f);
}

// returns the value of X for the equation
double LinearEquation::getX(){
	return((e * d - b * f) / (a * d - b * c));
}

// returns the value of Y for the equation
double LinearEquation::getY(){
	return((a * f - e * c) / (a * d - b * c));
}

// tells if the equation can be solved or not
bool LinearEquation::isSolvable(){
	double sol = a * d - b * c; // this is the equation that determines if a solution exists
	if(sol == 0){
		return(false);
	}
	else{
		return(true);
	}
}

int main(){
	// this is a test program for the LinearEquation class
	double A, B, C, D, E, F;
	
	cout << "Enter the 'a' component of the linear equation: ";
	cin >> A;
	cout << endl << "Enter the 'b' component of the linear equation: ";
	cin >> B;
	cout << endl << "Enter the 'c' component of the linear equation: ";
	cin >> C;
	cout << endl << "Enter the 'd' component of the linear equation: ";
	cin >> D;
	cout << endl << "Enter the 'e' component of the linear equation: ";
	cin >> E;
	cout << endl << "Enter the 'f' component of the linear equation: ";
	cin >> F;
	
	LinearEquation linEq = LinearEquation(A, B, C, D, E, F);
	
	// test the accessor functions
	cout << "A is " << linEq.getA() << endl;
	cout << "B is " << linEq.getB() << endl;
	cout << "C is " << linEq.getC() << endl;
	cout << "D is " << linEq.getD() << endl;
	cout << "E is " << linEq.getE() << endl;
	cout << "F is " << linEq.getF() << endl;
	
	// test isSolvable()
	if (linEq.isSolvable() == true){
		cout << "The equation is solvable!" << endl;
	}
	
	else if (linEq.isSolvable() == false){
		cout << "The equation is not solvable." << endl;
	}
	
	// test getX() and getY()
	cout << "X equals " << linEq.getX() << endl;
	cout << "Y equals " << linEq.getY() << endl;
	
}
