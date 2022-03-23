#pragma once
#include <iostream>
#include <random>
#include <iomanip>

class Manipulator
{
private:
    double m_x, m_y;
    double m_radius;

public:
    Manipulator() : m_x{ 0 }, m_y{ 0 }, m_radius{ 0 } {}
    Manipulator(double x, double y, double rad) : m_x{ x }, m_y{ y }, m_radius{ rad } {}

    friend void generate(Manipulator& m);
    friend void print_m(const Manipulator& m);
    friend double get_distance(const Manipulator& m, const std::pair<double, double> p);
};