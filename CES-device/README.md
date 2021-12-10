Team 25: TA Pravallika
Danial Ross
Marina Chow
Thomas Cushion
Ryan Kasor

Task Allocation
Danial Ross:
-Initialized timer2 that was used in counting down for draining the battery when the device turns on.
-Variables to store frequency and waveforms. 
-Implementation of Change waveform and frequency functions.
-Slots to trigger timer2 and changing waveform.
-Stopping the battery drain after the device turns off/ is dead.
-Use Cases and Diagram
Marina Chow:
-UI design
-Device ON/OFF
-Admin panel and corresponding slots 
-Implemented user changing time and intensity 
-Implemented viewing of treatment history menu
-Battery charge indicator (warning message)
-Automatically and permanently disables device when current exceeds 700 μA
-Traceability Matrix and Sequence Diagrams
Thomas Cushion:
-Program the clock for a countdown
-Update ui countdown display
-Qtimer for smooth battery drain
-Qtimer for handling the 30 minute auto off
-q timer to count down as well as check for skin contact being lost for 5 seconds
-Integrating the timers with the on off switches
-Programming the countdown cycles
-Activity diagrams
Ryan Kasor:
-Commented code for clarity
-UML Diagram
-Created the Record struct for recording information
-made the QVector recordings & QStringList allRecordings to store/output the records
-The method to store Records in the QVector called recordings
-The method to convert the QVector to a QStringList using the Record toString()
-The method to delete Records from the QStringList and QVector

File Organization
main.cpp, main.h
-Runs the program
clock.cpp, clock.h
-Stores time values
record.cpp, record.h
-Stores treatment recordings
mainwindow.cpp, mainwindow.h, mainwindow.ui
-Displays the device simulation user interface
-Allows user to interact with buttons, drop-down menus and input boxes
-Creates all the values and data used to populate the simulation bases on the user interaction

Tested Scenarios
All tests work, see traceability matrix under column “Test” to see tested scenarios

