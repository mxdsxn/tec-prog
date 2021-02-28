#pragma once

class Box
{
private:
 float width, height, depth;

public:
 Box() {}
 ~Box() {}

 void setWidth(float width)
 {
  this->width = width;
 }

 void setHeight(float height)
 {
  this->height = height;
 }

 void setDepth(float depth)
 {
  this->depth = depth;
 }

 float getWidth()
 {
  return this->width;
 }

 float getHeight()
 {
  return this->height;
 }

 float getDepth()
 {
  return depth;
 }

 float volume()
 {
  float valume = width * height * depth;

  return valume;
 }

 float area()
 {
  float areaWH = 2 * (width * height);
  float areaHD = 2 * (height * depth);
  float areaDW = 2 * (depth * width);

  float area = areaWH + areaHD + areaDW;

  return area;
 }
};