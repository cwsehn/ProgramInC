//
//  main.cpp
//  Fractions C++
//
//  Created by Chris William Sehnert on 3/26/17.
//  Copyright © 2017 Chris William Sehnert. All rights reserved.
//

#include <iostream>

class Fraction
{
private:
    int numerator;
    int denominator;
    
public:
    void setNumerator (int num);
    void setDenominator (int denom);
    int Numerator (void);
    int Denominator (void);
    void print (void);
};

void Fraction::setNumerator (int num)
{
    numerator = num;
}

void Fraction::setDenominator(int denom)
{
    denominator = denom;
}

int Fraction::Numerator (void)
{
    return numerator;
}

void Fraction::print (void)
{
    std::cout << "The value of the fraction is " << numerator << '/' << denominator << '\n';
}



int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    Fraction myFract;
    
    myFract.setNumerator(1);
    myFract.setDenominator(3);
    
    myFract.print ();
    
    return 0;
}
