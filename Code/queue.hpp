#ifndef QUEUE_HPP
#define QUEUE_HPP
#include "list.hpp"
#include <cmath>
#include <ctime>
//#include <list>
//#include <queueue>
template<typename T>
struct Queue
{

    List<T> que;//que is of type list.

    Queue()//default constructor.
    :que(){};




      Iterator<T> start()
        {
            return que.begin();
        }

        Iterator<T> end()
        {
            return que.end();
        }

        int size()
        {
            return que.sizeOf;
        }


      void push(T const& x)
        {
            que.push_back(x);
        }

      void pop()
        {
           que.pop_front();
       }

      bool is_empty() const
      {
        return que.is_empty1();
      }


};

template<typename T>
ostream& operator<< (ostream& os, Queue<T>& que)
{

   	Iterator<T> it = que.start();
   	while(it!=que.end())
    {

		os<<*it;
        cout<<" ";
		++it;
	}
    cout<<" ";
    os<<*it;
	return os;
}


#endif
