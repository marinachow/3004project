#include "clock.h"

Clock::Clock(int mins)
    :minutes(mins), seconds(0)
{

}

void Clock::setTime(int mins){
    minutes = mins;
    seconds = 0;
}

int Clock::getMinutes(){
    return minutes;
}

int Clock::getSeconds(){
    return seconds;
}

bool Clock::isFinished(){
    return (minutes == 0 && seconds == 0);
}

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
