#include <cmath>
#include <iostream>
module student_1bib21046.Lab2.Variant9.Task4:fun2;
void RBPO::Lab2::Variant9::Task4::fun2(float x) {
    /*std::cout << "vvod x";
    double x;
    std::cin >> x;*/
    double result = (x > 3.6) ? (45 * x * x + 5) : ((5 * x) / (10 * x * x + 1));
    std::cout << "fun2= " << result << std::endl;
}