#ifndef GAME_HPP
#define GAME_HPP
#include "Complexity_Timer.hpp"
#include "Complexity_Recorder.hpp"
#include <iostream>

timer timer1;

void breakTime( int seconds)//function that is used to add a delay
{
    clock_t temp;
    temp = clock () + seconds * CLOCKS_PER_SEC ;
    while (clock() < temp) {}
}


void scan_ticket(int waiters, int wait_time, int your_ticket)
{
//    vector<recorder<timer> > stats(10);
//    vector<recorder<timer> > stats2(10);
//    vector<recorder<timer> > stats3(10);



    Queue<int> ride;
waiters=86;
//waiters=(rand()%100+1);
//timer1.restart();
    for (int i=0; i<waiters; i++)
    ride.push(rand()%100+1);//pushes random elements into the queue
    ride.push(your_ticket);
    waiters+=1;
    //timer1.stop();
    //stats[0].record(timer1);
    //cout<<endl;
    //stats[0].report(cout);//prints out time taken to insert


while(waiters>10)
{
    cout<<endl;
    cout<<"Current ticket numbers in Queue from front to back-";
    cout<<endl<<ride<<endl;

    wait_time=waiters;//it takes 10 seconds for 10 waiters to get on the ride. so you wait 1 second per person.

    cout<<"Wait time until you board is about " <<floor((wait_time/10))*10<<" seconds. There are "<<waiters-1<<" people waiting in front of you";
    cout<<endl;
    cout<<endl<<endl<<endl;

    breakTime(10);
    for (int j=0; j<10; j++)//pops 10 waiters off the queue
            ride.pop();
    waiters-=10;//updates amount of waitiers
}
cout<<endl;
cout<<"Hey Will! Its almost time to board! there are "<<waiters-1<<" people in front of you! Follow them onto the ride"<<endl;
}


#endif
