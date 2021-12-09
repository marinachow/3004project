#include "record.h"

Record::Record(const QString& waveform, const QString& frequency, const QDateTime& startTime, const int powerLevel, const int duration) {

    if (startTime.isValid()) {
        this->waveform = waveform;
        this->frequency = frequency;
        this->startTime = startTime;
        this->powerLevel = powerLevel;
        this->duration = duration;
    }
}

//toString for the records
QString Record::toString() {
    QString newString =
            startTime.toString("ddd h:mm ap") + "\n"
            + "   Waveform: " + waveform + "\n"
            + "   Frequency: " + frequency + "\n"
            + "   Power Level: " + QString::number(powerLevel) + "\n"
            + "   Duration: " + QString::number(duration/60) + ((duration%60 < 10) ? + ":0" + QString::number(duration%60) : + ":" + QString::number(duration%60));

    return newString;
}


// Get Methods
QString Record::getWaveform() { return waveform; }
QString Record::getFrequency() { return frequency; }
QDateTime Record::getStartTime() { return startTime; }
int Record::getPowerLevel() { return powerLevel; }
int Record::getDuration() { return duration; }
