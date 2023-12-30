#include <cmath>
#include <iostream>
module student_1bib21046.Lab2.Variant9.Task3;

void RBPO::Lab2::Variant9::Task3::fun4(double e) {
    /*std::cout << "vvod e ";
    double e;
    std::cin >> e;*/
    double sum = 0.0;
    int i = 0;
    do {
        if (std::abs(funA(i + 1) - funA(i)) > e)
        {
            sum += funA(i);
            i++;
        }
    } while (std::abs(funA(i + 1) - funA(i)) > e);
    std::cout << "fun4 = " << sum << std::endl << "N = " << i - 1 << std::endl;
}