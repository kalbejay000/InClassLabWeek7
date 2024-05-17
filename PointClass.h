//
// Created by Jayden on 5/17/2024.
//

#ifndef INCLASSLABWEEK7_POINTCLASS_H
#define INCLASSLABWEEK7_POINTCLASS_H
#include <string>
#include <sstream>
using namespace std;

class PointClass {
private:
    double _x;
    double _y;
    double _z;

    // class method
public:
    //constructor
    PointClass();
    PointClass(const double& X, const double& Y, const double& Z);
    // setter
    void SetX(const double& X);
    void SetY(const double& Y);
    void SetZ(const double& Z);
    // getter
    double GetX() const;
    double GetY() const;
    double GetZ() const;
    // to string
    string ToString() const;
};


#endif //INCLASSLABWEEK7_POINTCLASS_H
