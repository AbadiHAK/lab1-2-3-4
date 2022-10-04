#include <iostream>
#include <cmath>
using namespace std;
void trig_func(double* _sin , double* _cos , double angle)
{
    *_sin = sin(angle);
    *_cos = cos(angle);
    cout << *_sin<<endl;
    cout << *_cos<<endl;
}
int main() {
    double _sin;
    double _cos;
    double angle;
    cout <<"Please Enter the angle :"<<endl;
    cin>>angle;
    trig_func(&_sin,&_cos , angle);
}
