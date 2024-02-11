#include <iostream>
#include <string>

using namespace std;

class car {
public:
    class wheels {
    public:
        double disk_diameter;
        double wheel_diametr;
        double tire_thickness;
        int count_weels;
        class engine_pistons {
        public:
            int count_pistons;
            double diametr_pistons;
        };
    };
    class engine {
    public:
        int engine_liters;
        int engine_power;
    };
    string color;
    int number_of_seats;
    double car_mileage;
    double lenght;
    void drive() {
        car_mileage++;
    };
    void turn_around() {};
};
class cat {
public:
    class eye {
    public:
        string color;
        int size_eye;
    };
    class wool {
    public:
        string color;
        string silkiness;
    };
    string name;
    int age;
    bool hungry;
    void sleep() {};
    void meow() {};
    void eat() {};
};
int main()
{
    
}
