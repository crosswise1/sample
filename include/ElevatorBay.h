#ifndef ELEVATORBAY_H
#define ELEVATORBAY_H
#include<vector>
#include<queue>
#include<iostream>

struct Person{
    string identifier;
    int floor;
};

struct Elevator{
    queue<Person> passengers;
    int floorsVisited;
};

class ElevatorBay
{
    public:
        Elevator();
        ~Elevator();
        Readfile (char*);
        void Allocatepeople();
        void Printresults();
        int nextFloor(); //new comment that i added

    protected:
    private:
        Elevator e1;
        Elevator e2;
        Elevator e3;



};

#endif // GRAPH_H