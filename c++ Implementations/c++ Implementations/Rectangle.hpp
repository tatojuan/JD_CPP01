//
//  Rectangle.hpp
//  Inheritance
//
//  Created by Juan Davila on 9/27/16.
//  Copyright © 2016 Davila. All rights reserved.
//

#ifndef Rectangle_hpp
#define Rectangle_hpp

// #include <stdio.h>




#pragma once
#include "Shape.hpp"

class Rectangle: public Shape {
    
public:
    Rectangle(int newx, int newy, int newwidth, int newheight);
    int getWidth();
    int getHeight();
    void setWidth(int newwidth);
    void setHeight(int newheight);
    void draw();
    
private:
    int width;
    int height;
};

#endif /* Rectangle_hpp */

