#include <stdlib.h>
#include <stdio.h>
#include <time.h>


enum signal {
    Red = 0,
    Amber,
    Green
};

enum signal signalEW = Red, signalWE = Red, signalNS = Red, signalSN = Red;


/* As it was only allowed to standard library for C
*  this function is created to sleep for required seconds and sleep()
*  function in unistd.h library is not used
*/

void delay(int timeToSleep)
{
    // Converting time into milli_seconds
    int mSec = CLOCKS_PER_SEC * timeToSleep;

    // Storing start time since program started
    clock_t currentTime = clock();

    // loop until required time
    while (clock() <= (currentTime + mSec));
}

const char* convertState(int signal)
{

    switch (signal)
    {
        case Red:
            return "Red\0";
            break;
        case Amber:
            return "Amber\0";
            break;
        case Green:
            return "Green\0";
            break;
        default:
            return "\0";
    }

}

void printState(int delayTime)
{
    printf("%s \t\t %s \t\t %s \t\t %s\t\t (Retain for %d Seconds)\n",
    convertState(signalEW),convertState(signalWE),convertState(signalNS),convertState(signalSN), delayTime);
    delay(delayTime);
}

int main()
{
    printf("Signal (E->W) \tSignal (W->E) \tSignal (N->S) \tSignal (S->NS)\n");
    while(1)
    {

        // Starting stage: All Red
        printState(2);

        signalEW = Green; signalWE = Green; signalNS = Red; signalSN = Red;
        printState(16);

        signalEW = Amber; signalWE = Amber; signalNS = Red; signalSN = Red;
        printState(2);;

        signalEW = Red; signalWE = Red; signalNS = Red; signalSN = Red;
        printState(2);

        signalEW = Red; signalWE = Red; signalNS = Green; signalSN = Green;
        printState(16);

        signalEW = Red; signalWE = Red; signalNS = Amber; signalSN = Amber;
        printState(2);

        signalEW = Red; signalWE = Red; signalNS = Red; signalSN = Red;
    }
    return 0;
}
