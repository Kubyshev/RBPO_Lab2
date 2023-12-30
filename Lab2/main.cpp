#include <iostream>
import student_1bib21046.Lab2.Variant9.Task1;
import student_1bib21046.Lab2.Variant9.Task2;
import student_1bib21046.Lab2.Variant9.Task3;
import student_1bib21046.Lab2.Variant9.Task4;
import student_1bib21046.Lab2.Variant9.Task5;

int main()
{
    std::cout << "vvod x,y,n,e";
        float x, y;
        int n;
        double e;

        std::cin >> x >> y >> n >> e;
    int rep;
    do{
        


    int z;

    std::cout << " 1-5: ";
    std::cin >> z;
    switch (z) {
    case 1: {
        //Задание 1
        std::cout << "Task1 ";
        RBPO::Lab2::Variant9::Task1::fun1(x,y);
        RBPO::Lab2::Variant9::Task1::fun2(x);
        RBPO::Lab2::Variant9::Task1::fun3(n);
        RBPO::Lab2::Variant9::Task1::fun4(e);
        std::cout << "=======================" << std::endl;
        break;
    }
    case 2: {
        //Задание 2
        std::cout << "Task2 ";
        RBPO::Lab2::Variant9::Task2::fun1(x,y);
        RBPO::Lab2::Variant9::Task2::fun2(x);
        RBPO::Lab2::Variant9::Task2::fun3(n);
        RBPO::Lab2::Variant9::Task2::fun4(e);
        std::cout << "======================="<<std::endl;
        break;
    }
    case 3: {
        //Задание 3
        std::cout << "Task3 ";
        RBPO::Lab2::Variant9::Task3::fun1(x,y);
        RBPO::Lab2::Variant9::Task3::fun2(x);
        RBPO::Lab2::Variant9::Task3::fun3(n);
        RBPO::Lab2::Variant9::Task3::fun4(e);
        std::cout << "=======================" << std::endl;
        break;
    }
    case 4: {
        //Задание 4
        std::cout << "Task4 ";
        RBPO::Lab2::Variant9::Task4::fun1(x,y);
        RBPO::Lab2::Variant9::Task4::fun2(x);
        RBPO::Lab2::Variant9::Task4::fun3(n);
        RBPO::Lab2::Variant9::Task4::fun4(e);
        std::cout << "=======================" << std::endl;
        break;
    }
    case 5: {
        //Задание 5
        std::cout << "Task5 ";
        RBPO::Lab2::Variant9::Task5::fun1(x,y);
        RBPO::Lab2::Variant9::Task5::fun2(x);
        RBPO::Lab2::Variant9::Task5::fun3(n);
        RBPO::Lab2::Variant9::Task5::fun4(e);
        std::cout << "=======================" << std::endl;
        break;
    }
          
    }
    std::cout << "Enter any numbutton except 0 for repeat or 0 for interrapt";
    std::cin >> rep;
         
    } while (rep != 0);

 return 0;

}