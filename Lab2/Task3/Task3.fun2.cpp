#include <cmath>
#include <iostream>
module student_1bib21046.Lab2.Variant9.Task3;

void RBPO::Lab2::Variant9::Task3::fun2(float x) {
    /*std::cout << "vvod x";
    double x;*/
   /* std::cin >> x;*/
    double result;
    if (x > 3.6)
        result = 45 * x * x + 5;
    else
        result = (5 * x) / (10 * x * x + 1);

    std::cout << "fun2= " << result << std::endl;
    
}