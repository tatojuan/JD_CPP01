//
//  Circle.cpp
//  Inheritance
//
//  Created by Juan Davila on 9/27/16.
//  Copyright © 2016 Davila. All rights reserved.
//

//#include "Circle.hpp"


#include "Shape.hpp"
#include "Circle.hpp"
#include <iostream>

using namespace std;

// constructor
Circle::Circle(int newx, int newy, int newradius): Shape(newx, newy)
{
    setRadius(newradius);
}

// accessors for the radius
int Circle::getRadius()
{
    return radius;
}

void Circle::setRadius(int newradius)
{
    radius = newradius;
}

// draw the circle
void Circle::draw()
{
    cout << "Drawing a Circle at:(" << getX() << "," << getY() <<
    "), radius " << getRadius() << endl;
}