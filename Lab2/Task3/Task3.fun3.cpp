#include <cmath>
#include <iostream>
module student_1bib21046.Lab2.Variant9.Task3;

void RBPO::Lab2::Variant9::Task3::fun3(int n) {
    /*std::cout << "vvod n: ";
    int n;
    std::cin >> n;*/
    double sum = 0.0;
    int i = 0;
    do {
        sum += funA(i); 
        i++;
    } while (i <= n);
    std::cout << "fun3 = " << sum << std::endl;
}