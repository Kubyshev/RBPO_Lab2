#include <cmath>
#include <iostream>
module student_1bib21046.Lab2.Variant9.Task4:funA;

double RBPO::Lab2::Variant9::Task4::funA(int i) {
    double result = (pow(-1, i) * (i + 1) / (pow(2, i - 1)));
    return result;
}