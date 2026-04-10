#include <iostream>
using namespace std;

class Time {
private:
    int hour;
    int minute;
public:
    Time (int h = 0, int m = 0) : hour(h), minute(m){};

    int get_hour(){return hour;}
    int get_minute(){return minute;}

    Time operator-(const Time& t) const {
        int total1 = hour * 60 + minute;
        int total2 = t.hour * 60 + t.minute;
        int diff = total1 - total2;
        if (diff < 0) diff = -diff;
        return Time(diff / 60, diff % 60);
    }

};

class TempWorker {
private:
    Time startWork;
    Time endWork;
    double ratePerHour;

public:
    TempWorker(const Time& start, const Time& end, double rate) : startWork(start), endWork(end), ratePerHour(rate){}

    double pay(){
        Time timeWorked = endWork - startWork;
        return (timeWorked.get_hour() + timeWorked.get_minute() / 60.0) * ratePerHour; // 60.0 yazılır çünkü double türüne çevrilir
    }


};

int main() {
    TempWorker w(Time(8,30), Time(16,0), 8.5);
    cout << "Total pay: $" << w.pay() << endl;
    return 0;
}
