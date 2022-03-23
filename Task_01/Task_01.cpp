#include "Manipulator.h"

using namespace std;

double generate()
{
    int MIN = -100;
    int MAX = 100;

    std::random_device rd;
    std::default_random_engine eng(rd());
    std::uniform_real_distribution<double> distr(MIN, MAX);

    return distr(eng);
};

int main()
{
    pair<double, double> point;
    Manipulator first, second;

    point.first = generate();
    point.second = generate();

    generate(first);
    cout << "Manipulator 1" << endl;
    print_m(first);

    generate(second);
    cout << "Manipulator 2" << endl;
    print_m(second);

    cout << "coordinate P1 {" << point.first << ", " << point.second<< "}" << endl;
    cout << endl;

    if (get_distance(first, point) < get_distance(second, point))
    {
        cout << "optimal first manipulator, distance = " << get_distance(first, point) << endl;
    }
    else 
    {
        cout << "optimal second manipulator, distance = " << get_distance(first, point) << endl;
    }
}
