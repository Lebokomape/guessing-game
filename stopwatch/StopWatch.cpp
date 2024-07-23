#include "StopWatch.h"
#include <ctime>
using namespace std;

//Exercise 5.1
// returns the amount of time in seconds that has passed since the process (i.e. your program) started executing
double getProcessTime()
{
	clock_t time = clock();
	return static_cast<double>(time)/CLOCKS_PER_SEC;
}
StopWatch::StopWatch()
{
	running = false;
    startTime = 0;
    stopTime = 0;
}


void StopWatch::start() {
	if (running == false) {
		startTime = this->getProcessTime();
		running = true;
	}
}

void StopWatch::stop() {
	if (running == true) {
        stopTime = getProcessTime();
        running = false;
    }
}

double StopWatch::getElapsedTime(){
    if (running == false) {
        return stopTime - startTime;
    }
	return getProcessTime() - startTime;
}
