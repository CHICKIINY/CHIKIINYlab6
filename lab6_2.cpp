#include <iostream>
#include <cmath>
using namespace std;

double deg2rad(double a2){
    return (M_PI*a2)/180;
}  
double rad2deg(double a3){
    return (180*a3)/M_PI;
} 
double findXComponent(double a4,double b4,double c4,double d4){
    return (a4*cos(c4)) + (b4*cos(d4));
}
double findYComponent(double a5,double b5,double c5,double d5){
    return (a5*sin(c5)) + (b5*sin(d5));
} 
double pythagoras(double a6,double b6){
    return sqrt(pow(a6,2) + pow(b6,2));
}
void showResult(double a7,double b7){
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n";
    cout << "Length of the resultant vector = " << a7 <<"\n";
    cout << "Direction of the resultant vector (deg) = " << b7 <<"\n";
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n"; 
}

int main(){
    double l1,l2,a1,a2,xcomp,ycomp,result_vec_length,result_vec_direction;
    cout << "Enter length of the first vector: ";
    cin >> l1;
    cout << "Enter direction of the first vector (deg): ";
    cin >> a1;
    cout << "Enter length of the second vector: ";
    cin >> l2;
    cout << "Enter direction of the second vector (deg): ";
    cin >> a2;
    
    a1 = deg2rad(a1);
    a2 = deg2rad(a2);
    xcomp = findXComponent(l1,l2,a1,a2);
    ycomp = findYComponent(l1,l2,a1,a2);
    result_vec_length = pythagoras(xcomp,ycomp);
    result_vec_direction = rad2deg(atan2(ycomp,xcomp)); 

    showResult(result_vec_length,result_vec_direction);
}
