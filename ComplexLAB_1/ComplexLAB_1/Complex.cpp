#include <iostream>
#include "Complex.h"
using namespace std;


double Complex::getRe() const
{
	return Re;
}

double Complex::getIm() const
{
	return Im;
}

void Complex::setRe(double Re)
{
	this->Re = Re;
}

void Complex::setIm(double Im)
{
	this->Im = Im;

}

