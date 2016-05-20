#include "list.hpp"
#include "queue.hpp"
#include "game.hpp"
#include <iostream>



using namespace std;







int main()
{
    int waiters=(rand()%100)+1;//people currently in the queue waiting to ride
    int wait_time=(waiters);//time
    int your_ticket=999;
    scan_ticket(waiters,wait_time,your_ticket);




}
