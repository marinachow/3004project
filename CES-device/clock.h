#ifndef CLOCK_H
#define CLOCK_H

/* Purpose of Class: It's a seconds and minutes clock
 *
 * Data Members:
 * - int seconds: integer representation of the seconds
 * - int minutes: integer representation of the minutes
 */

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
