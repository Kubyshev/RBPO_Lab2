#include <cmath>
#include <iostream>
module student_1bib21046.Lab2.Variant9.Task4:fun1;
void RBPO::Lab2::Variant9::Task4::fun1(float x,float y) {
    /*double x, y;
    std::cout << "vvod x,y ";
    std::cin >> x >> y;*/
    double result = ((cos(x) - cos(y)) * (cos(x) - cos(y))) - ((sin(x) - sin(y)) * (sin(x) - sin(y)));
    std::cout << "fun1=" << result << std::endl;
}