#include "clock.h"

Clock::Clock(int mins)
    :minutes(mins), seconds(0)
{

}

//Sets the time on the clock
void Clock::setTime(int mins){
    minutes = mins;
    seconds = 0;
}

//Is the clock finished boolean
bool Clock::isFinished(){
    return (minutes == 0 && seconds == 0);
}

//Countsdown the clock
void Clock::countdown(){
    if(!isFinished()){
        if(seconds == 0){
            seconds = 59;
            minutes--;
        }
        else{
            seconds--;
        }
    }
}

//Get Methods
int Clock::getMinutes(){return minutes;}
int Clock::getSeconds(){return seconds;}
