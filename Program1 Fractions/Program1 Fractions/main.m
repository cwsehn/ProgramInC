//
//  main.m
//  Program1 Fractions
//
//  Created by Chris William Sehnert on 3/24/17.
//  Copyright © 2017 Chris William Sehnert. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <stdio.h>
//#import <objc/Object.h>

//------ @interface section ---------

@interface Fraction: NSObject
{
    int numerator;
    int denominator;
}
-(void) setNumerator: (int) n;
-(void) setDenominator: (int) d;
-(void) print;

@end

//------- @implementation section --------

@implementation Fraction;

// getters

-(int) numerator
{
    return numerator;
}

-(int) denominator
{
    return denominator;
}

// setters

-(void) setNumerator: (int) num
{
    numerator = num;
}

-(void) setDenominator: (int) denom
{
    denominator = denom;
}

// other

-(void) print
{
    printf ("The value of the fraction is %i/%i\n", numerator, denominator);
}

@end

int main(int argc, const char * argv[]) {
    @autoreleasepool {
        // insert code here...
        Fraction *myFract;
        
        
        myFract = [Fraction new];
        
        [myFract setNumerator: 1];
        [myFract setDenominator: 3];
        
        printf ("The numerator is %i, and the denominator is %i\n", [myFract numerator], [myFract denominator]);
        
        [myFract print]; // use the method to display the fraction
        
        // [myFract free]; // @autoreleasepool frees the allocated memory...
    }
    return 0;
}
