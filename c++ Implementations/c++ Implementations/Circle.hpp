//
//  Circle.hpp
//  Inheritance
//
//  Created by Juan Davila on 9/27/16.
//  Copyright © 2016 Davila. All rights reserved.
//

#ifndef Circle_hpp
#define Circle_hpp

// #include <stdio.h>





#pragma once
#include "Shape.hpp"

class Circle: public Shape {
    
public:
    Circle(int newx, int newy, int newradius);
    int getRadius();
    void setRadius(int newradius);
    void draw();
    
private:
    int radius;
};


#endif /* Circle_hpp */