// classes example
#include <iostream>
#include "rectangle.h"
using namespace std;


int main () {
  Rectangle rect;
  Rectangle rekt = rect;
  // In JAVA: You would have a reference.
  // In C++ you actually have a SECOND object.

  Rectangle &refRect = rect;
  // & for references, * for pointers
  Rectangle *pRect = new Rectangle;
  pRect->set_values(7,8);

  rect.set_values (3,4);
  //rekt.set_values(5,6);
  //refRect.set_values(10,5);
  cout << "area: " << rect.area() << endl;
  //cout << "ref area: " << refRect.area() << endl;
  cout << "pointer to rect " << pRect << endl;
  cout << "pointer area: " << pRect->area() << endl;
  //cout << "area 2: " << rekt.area();
  return 0;
}
