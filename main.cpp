#include <iostream>
#include <cmath>
#include "PointClass.h"
double Distance(const PointClass& p1, const PointClass& p2) {
    double total;
    total = (p1.GetX() - p2.GetX()) * (p1.GetX() - p2.GetX());
    total += (p1.GetY() - p2.GetY()) * (p1.GetY() - p2.GetY());
    total += (p1.GetZ() - p2.GetZ()) * (p1.GetZ() - p2.GetZ());
    return sqrt(total);
}

int main() {
    PointClass p1(1, 2, 3);
    PointClass p2(1, 2, 3);
    PointClass p3; // default constructor
    p3.SetX(7);
    p3.SetY(8);
    p3.SetZ(9);
    cout << p3.ToString() << endl;
    cout << p3.GetX() << endl;
    cout << p3.GetY() << endl;
    cout << p3.GetZ() << endl;
    cout << Distance(p1,p2) << endl;
    return 0;
}