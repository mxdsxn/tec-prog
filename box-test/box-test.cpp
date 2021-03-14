#include <iostream>
#include "./box.hpp"
#include "./box-test.hpp"

using namespace std;

BoxTest::BoxTest()
{
 box1 = nullptr;
 box2 = nullptr;
}

BoxTest ::~BoxTest() {}

void BoxTest::startTest()
{
 float width, height, depth;

 cout << "1 - Enter width, height and depth:\n";

 cin >> width;
 cin >> height;
 cin >> depth;

 Box *newBox1 = new Box();
 newBox1->setWidth(width);
 newBox1->setHeight(height);
 newBox1->setDepth(depth);

 box1 = newBox1;

 cout << "2 - Enter width, height and depth:\n";

 cin >> width;
 cin >> height;
 cin >> depth;

 Box *newBox2 = new Box();
 newBox2->setWidth(width);
 newBox2->setHeight(height);
 newBox2->setDepth(depth);

 box2 = newBox2;

 cout << "\nArea:\n";
 cout << "Box 1: " << box1->area() << endl;
 cout << "Box 2: " << box2->area() << endl;
 cout << "\n";

 cout << "\nVolume:\n";
 cout << "Box 1: " << box1->volume() << endl;
 cout << "Box 2: " << box2->volume() << endl;
 cout << "\n";
}