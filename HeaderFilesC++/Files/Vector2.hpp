//
//  Vector2.hpp
//
//  Created by Neko on 2019/09/07.
//

#ifndef Vector2_h
#define Vector2_h
#include <string>
#include <iostream>
#include "Mathf.hpp"
using namespace std;
using namespace Mathf;

class Vector2{
public:
    double x;
    double y;
    Vector2(double a = 0.0,double b = 0.0) :x(a),y(b) {}
    
    Vector2 operator + (const Vector2 &A);
    Vector2 operator - (const Vector2 &A);
    double operator * (const Vector2 &A);
    Vector2 operator * (const int &A);
    template<typename T> Vector2 operator * (const T &A);
    template<typename T> Vector2 operator / (const T &A);
    bool operator ^ (const Vector2 &A);
    
    double size();
    string ToString();
};

Vector2 Vector2::operator+(const Vector2 &A){
    Vector2 C;
    C.x=x+A.x;
    C.y=y+A.y;
    return C;
}

Vector2 Vector2::operator - (const Vector2 &A){
    Vector2 C;
    C.x=x-A.x;
    C.y=y-A.y;
    return C;
}
double Vector2::operator*(const Vector2 &A){
    return x*A.x + y*A.y;
}
template<typename T> Vector2 Vector2::operator*(const T &A){
    Vector2 C;
    C.x=A*x;
    C.y=A*y;
    return  C;
}
template<typename T> Vector2 Vector2::operator/(const T &A){
    Vector2 C;
    C.x=x/A;
    C.y=y/A;
    return C;
}
bool Vector2::operator^(const Vector2 &A){
    double n=x*A.x+y*A.y;
    if(n==0){
        return true;
    }else{
        return false;
    }
}

double Vector2::size(){
    return sqrt(x*x + y*y);
}

string Vector2::ToString(){
    string S;
    S="("+to_string(x)+", "+to_string(y)+")";
    return  S;
}
#endif /* Vector2_h */
