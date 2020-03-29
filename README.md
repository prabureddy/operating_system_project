A Condition based program of operating system using C language

Following set of question- Consider that a system has P resources of same type. These resources are shared by Q processes time to time. All processes request and release the resources one at a time.Generate a solution to demonstrate that, the system is in safe state when following conditions are satisfied.

Conditions:

1. Maximum resource need of each process is between 1 and P.

2. Summation of all maximum needs is less than P+Q


This problem is based on Round Robin Algorithm. In this problem we are taking input from user and user can enter limited no of jobs. 
While solving this first we take value from user and store it in a queue. The value of front and rear used here is -1 as initial they are not at any position. Now process run in queue and if its burst time is less than time given quantum then this process will be completed and we take out that process from queue. If time quantum is less than burst time then the process will again enter in the queue. This will happen till all process are completed.
