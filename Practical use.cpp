#include <iostream>
using namespace std;
#include "Cqueue.h"
#include "Cqueue.cpp"
class Process
{
public:
    string processName;
    int burstTime;

    Process()
    {
        processName = "";
        burstTime = 0;
    }

    Process(string name, int time)
    {
        processName = name;
        burstTime = time;
    }
};

int main()
{
    Queue<Process> readyQueue;

    readyQueue.Enqueue(Process("P1",3));
    readyQueue.Enqueue(Process("P2",2));
    readyQueue.Enqueue(Process("P3",1));

    cout << "===== CPU Round Robin Scheduling =====\n\n";

    while(!readyQueue.isEmpty())
    {
        Process current = readyQueue.dequeue();

        cout << "Executing "
             << current.processName
             << " (Burst Time = "
             << current.burstTime
             << ")" << endl;

        current.burstTime--;

        if(current.burstTime > 0)
        {
            cout << current.processName
                 << " is not completed.\n";

            cout << "Adding it back to the Queue.\n\n";

            readyQueue.Enqueue(current);
        }
        else
        {
            cout << current.processName
                 << " Completed.\n\n";
        }
    }

    cout << "All Processes Executed Successfully.";

    return 0;
}