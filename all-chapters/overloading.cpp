#include <cstdio>
#include <iostream>

using namespace std;

class Rational {
    int _n{};
    int _d{};
public:
    Rational(int numerator=0, int denominator=1) : _n(numerator), _d(denominator){};
    Rational(const Rational &rhs) : _n(rhs._n), _d(rhs._d){}; //COPY CONSTRUCTOR
    ~Rational();
    int numerator() const {return _n;};
    int denominator() const {return _d;};
    Rational & operator = (const Rational &);
    Rational operator + (const Rational &) const;
    Rational operator - (const Rational &) const;
    Rational operator * (const Rational &) const;
    Rational operator / (const Rational &) const;
};

Rational & Rational::operator = (const Rational &rhs){
    if (this!=&rhs){
        _n=rhs.numerator();
        _d=rhs.denominator();         
    }
    return *this;
}

Rational Rational::operator + (const Rational &rhs) const {
    return Rational((_n * rhs._d) + (_d * rhs._n), _d * rhs._d);
}

Rational Rational::operator - (const Rational &rhs) const {
    return Rational(( _n * rhs._d) - (_d * rhs._n), _d * rhs._d);
}
Rational Rational::operator * (const Rational &rhs) const{
    return Rational(_n*rhs._n, _d * rhs._d);
}
Rational Rational::operator / (const Rational &rhs) const{
    return Rational(_n*rhs._d, _d*rhs._n);
}


Rational::~Rational() {
    _n = 0; _d = 1;
}   

std::ostream & operator << (std::ostream & o, const Rational & r) {
    if(r.denominator() == 1) return o << r.numerator();
    else return o << r.numerator() << '/' << r.denominator();
}



int main(){
    Rational a = 7; // object a nume=7 and deno=1{default}
    cout << "a is: "<< a << endl;
    Rational b(5,3); // object b would 5/3
    std::cout << "b is: " << b << std::endl;
    Rational c=b;   // this is copy constructor
    std::cout<< "c is: " << c << std::endl;
    Rational d;  //default constructor
    std::cout << "d is: " << d << std::endl;
    d = c; // this is assignment operator. 
    std::cout << "d now is: "<< d << std::endl;
    Rational &e=d; //this is reference
    d=e; ///assignment to self!! 
    std::cout << "e is: " << e << std::endl;
    
    /*
    Do the Operations now
    */

   std::cout << a << " + "<< " = "<< a + b<< std::endl;
   std::cout<< a << " - " << " = " << a - b<< std::endl;
   std::cout << a << " * " << " = " << a * b << std::endl;
   std::cout << a << " / " << " = " << a / b<< std::endl;


    return 0;
}