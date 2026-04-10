#include <iostream>
using namespace std;

class Engine {
    string engineType;
public:
    Engine(string engineType) {
        this->engineType = engineType;
    }

    void start() {
        cout << engineType << " engine is starting..." << endl;
    }
};

class Car {
    string model;
    int year;
    Engine engine;
public:
    Car(string model, int year, string engineType) : engine(engineType)  // üye başlatma listesi # Composition
    {
        this->model = model;
        this->year = year;
    }

    void start() {
        cout << model << " (" << year << ") ";
        engine.start();
    }
};

int main() {
    Car car("Nissan", 2014, "V8");
    car.start();
    return 0;
}
