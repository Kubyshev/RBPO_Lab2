#include <cmath>
#include <iostream>
module student_1bib21046.Lab2.Variant9.Task4:fun3;
import :funA;
void RBPO::Lab2::Variant9::Task4::fun3(int n) {
    /*std::cout << "vvod n ";
    int n;
    std::cin >> n;*/
    double sum = 0.0;
    for (int i = 0; i <= n; i++) {
        sum += funA(i);
    }
    std::cout << "fun3= " << sum << std::endl;
}