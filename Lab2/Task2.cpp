#include <cmath>
#include <iostream>
module student_1bib21046.Lab2.Variant9.Task2;
void RBPO::Lab2::Variant9::Task2::fun1() {
    double x, y;
    std::cout << "vvod x,y ";
    std::cin >> x >> y;
    double result = ((cos(x) - cos(y)) * (cos(x) - cos(y))) - ((sin(x) - sin(y)) * (sin(x) - sin(y)));
    std::cout << "fun1=" << result << std::endl;
}

void RBPO::Lab2::Variant9::Task2::fun2() {
    std::cout << "vvod x";
    double x;
    std::cin >> x;
    double result = (x > 3.6) ? (45 * x * x + 5) : ((5 * x) / (10 * x * x + 1));
    std::cout << "fun2= " << result << std::endl;
}

double funA(int i) {
    double result = (pow(-1, i) * (i + 1) / (pow(2, i - 1)));
    return result;
}


void RBPO::Lab2::Variant9::Task2::fun3() {
    std::cout << "vvod n ";
    int n;
    std::cin >> n;
    double sum = 0.0;
    int i = 0;
    while (i <= n)
    {
        sum += funA(i);
        i++;

    }
    std::cout << "fun3= " << sum << std::endl;
}

void RBPO::Lab2::Variant9::Task2::fun4() {
    std::cout << "vvod e ";
    double e;
    std::cin >> e;
    double sum = 0.0;
    /*int k = 0;*/
    int i = 0;
    while (std::abs(funA(i + 1) - funA(i)) > e)
    {
        sum += funA(i);
        i++;
    }
    /* for (int i = 0; std::abs(funA(i + 1) - funA(i)) > e; i++)
     {

         sum += funA(i);
         k = i;

     }*/
    std::cout << "fun4= " << sum << std::endl << "N = " << i - 1 << std::endl;
}