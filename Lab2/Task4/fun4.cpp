#include <cmath>
#include <iostream>
module student_1bib21046.Lab2.Variant9.Task4:fun4;
import :funA;
void RBPO::Lab2::Variant9::Task4::fun4(double e) {
   /* std::cout << "vvod e ";
    double e;
    std::cin >> e;*/
    double sum = 0.0;
    int k = 0;
    for (int i = 0; std::abs(funA(i + 1) - funA(i)) > e; i++)
    {

        sum += funA(i);
        k = i;

    }
    std::cout << "fun4= " << sum << std::endl << "N = " << k << std::endl;
}