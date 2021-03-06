#include "./box.hpp"

Box::Box() {}
Box::~Box() {}

void Box::setWidth(float width)
{
 this->width = width;
}

void Box::setHeight(float height)
{
 this->height = height;
}

void Box::setDepth(float depth)
{
 this->depth = depth;
}

float Box::getWidth()
{
 return this->width;
}

float Box::getHeight()
{
 return this->height;
}

float Box::getDepth()
{
 return depth;
}

float Box::volume()
{
 float valume = width * height * depth;

 return valume;
}

float Box::area()
{
 float areaWH = 2 * (width * height);
 float areaHD = 2 * (height * depth);
 float areaDW = 2 * (depth * width);

 float area = areaWH + areaHD + areaDW;

 return area;
}