#include <cmath>
#include <iostream>
export module student_1bib21046.Lab2.Variant9.Task1;

namespace RBPO::Lab2::Variant9::Task1 {

    export void fun1(float x,float y) {
        //double x, y;
        //std::cout << "vvod x,y ";
        //std::cin >> x >> y;
        double result = ((cos(x) - cos(y)) * (cos(x) - cos(y))) - ((sin(x) - sin(y)) * (sin(x) - sin(y)));
        std::cout << "fun1=" << result << std::endl;
    }

    export void fun2(float x) {
        //std::cout << "vvod x";
       // double x;
        //std::cin >> x;
        double result = (x > 3.6) ? (45 * x * x + 5) : ((5 * x) / (10 * x * x + 1));
        std::cout << "fun2= " << result << std::endl;
    }


    /*export*/ double funA(int i) {
        double result = (pow(-1, i) * (i + 1) / (pow(2, i - 1)));
        return result;
    }

    export void fun3(int n) {
        //std::cout << "vvod n ";
        //int n;
        //std::cin >> n;
        double sum = 0.0;
        for (int i = 0; i <= n; i++) {
            sum += funA(i);
        }
        std::cout << "fun3= " << sum << std::endl;
    }

    export void fun4(double e) {
        //std::cout << "vvod e ";
        //double e;
        //std::cin >> e;
        double sum = 0.0;
        int k = 0;
        for (int i = 0; std::abs(funA(i + 1) - funA(i)) > e; i++)
        {

            sum += funA(i);
            k = i;

        }
        std::cout << "fun4= " << sum << std::endl << "N = " << k << std::endl;
    }

}