#include <iostream>
using namespace std;

class Distance{
    private:
    int meter;

    friend int increaseDistance(Distance);
    public:
    Distance(){
        meter = 0;
    }
};

int increaseDistance(Distance d){
    d.meter += 10;
    return d.meter;
}

main(){
    Distance d1;
    cout << increaseDistance(d1);
}