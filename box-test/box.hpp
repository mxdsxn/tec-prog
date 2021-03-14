#pragma once

class Box
{
private:
 float width, height, depth;

public:
 Box();
 ~Box();

 void setWidth(float width);

 void setHeight(float height);

 void setDepth(float depth);

 float getWidth();

 float getHeight();

 float getDepth();

 float volume();

 float area();
};