//
// Created by Jayden on 5/17/2024.
//

#include "PointClass.h"
PointClass::PointClass(){
    _x=0;
    _y=0;
    _z=0;
}

PointClass::PointClass(const double &X, const double &Y, const double &Z) {
    _x = X;
    _y = Y;
    _z = Z;
}

void PointClass::SetX(const double &X) {
    _x = X;
}

void PointClass::SetY(const double &Y) {
    _y = Y;
}

void PointClass::SetZ(const double &Z) {
    _z = Z;
}

double PointClass::GetX() const {
    return _x;
}

double PointClass::GetY() const {
    return _y;
}

double PointClass::GetZ() const {
    return _z;
}

string PointClass::ToString() const {
    stringstream temp;

    temp << "(" << _x << "," << _y << "," << _z << ")";
    return temp.str();
}