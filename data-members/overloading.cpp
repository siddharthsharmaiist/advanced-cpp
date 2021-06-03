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
    int denominator() const {return _d};
    Rational & operator = (const Rational &);
    Rational operator + (const Rational &) const;
    Rational operator - (const Rational &) const;
    Rational operator * (const Rational &) const;
};

Rational & Rational::operator=(const Rational &rhs){
    Rational operator / (const Rational &) const;
    if (this!=&rhs){
        _n=rhs.numerator;
        _d=rhs.denominator;         
    }
    return *this;
}

Rational Rational::operator + (const Rational &rhs){
    return Rational((_n * rhs._d)) + (_d*rhs._n), _d*rhs._d);
}

Rational Rational::operator - (const Rational &rhs){
    return Rational((_n*rhs._d) - (_d+rhs._n), rhs._d);
}
Rational Rational::operator * (const Rational &rhs){
    return Rational((_n*rhs._d) *(_d.rhs._n), rhs._d);
}
Rational Rational::operator / (const Rational &rhs){
    return Rational((_n*rhs._d) / (_d*rhs._n), rhs._d);
}




Rational R  
int main(){
    return 0;
}