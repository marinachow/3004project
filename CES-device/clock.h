#ifndef CLOCK_H
#define CLOCK_H


class Clock
{
public:
    Clock(int = 20);
    void setTime(int = 20);
    int getSeconds();
    int getMinutes();
    bool isFinished();
    void countdown();

private:
    int minutes;
    int seconds;

};

#endif // CLOCK_H
