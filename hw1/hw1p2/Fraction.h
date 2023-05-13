//Xinle Xu 918744597
// Fraction.h
//

#ifndef FRACTION_H
#define FRACTION_H
# include <iostream>
using std::ostream;

class Fraction  // 类的实现
{
private:
	int num;
	int den;

public:
	Fraction(int n = 0, int d = 1);
	Fraction operator + (const Fraction & f) const;
	Fraction operator - (const Fraction & f) const;
	Fraction operator * (const Fraction &) const;
	Fraction operator / (const Fraction &) const;

	Fraction operator + (int) const;
	Fraction operator - (int) const;
	Fraction operator * (int) const;
	Fraction operator / (int) const;

	Fraction operator = (int) ;

	Fraction operator + () const;
	Fraction operator - () const;

	friend Fraction operator + (int, const Fraction &);
	friend Fraction operator - (int, const Fraction &);
	friend Fraction operator * (int, const Fraction &);
	friend Fraction operator / (int, const Fraction &);
	friend ostream & operator << (ostream &, const Fraction &);

	int getNum() const;
	int getDen() const;

};
#endif