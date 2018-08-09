//
//  Inherit.cpp
//  c++ Implementations
//
//  Created by Juan Davila on 5/17/17.
//  Copyright © 2017 Davila. All rights reserved.
//

#include "Inherit.hpp"
#include <iostream>
#include "Circle.hpp"
#include "Rectangle.hpp"
using namespace std;

void runInherit()
{
    // set up array to the shapes
    Shape *scribble[2];
    scribble[0] = new Rectangle(10, 20, 5, 6);
    scribble[1] = new Circle(15, 25, 8);
    
    // iterate through the array and handle shapes polymorphically
    for (int i = 0; i < 2; i++) {
        scribble[i]->draw();
        scribble[i]->rMoveTo(100, 100);
        scribble[i]->draw();
    }
    
    // call a rectangle specific function
    Rectangle *arec = new Rectangle(0, 0, 15, 15);
    arec->setWidth(30);
    arec->draw();
}


