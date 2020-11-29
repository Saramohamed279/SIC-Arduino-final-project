# SIC-Arduino-final-project
# Door Sensor
## Overview
<br>This project main aim is to act as a program that senses the the passage of a person or so infront of the sensor and depending on that it opens the door.</br>
<br>The door opens only for 5 people from the outside, so only 5 people can be inside. However, if a person from the inside leaves the the sensor will allow another perosn to replace him.</br>

## Explanation
<br>This program is done using Arduino and it depends on light sensor (LDR) to open the door.</br>
<br>There are two sensors, one from the outside to sense if someone is entering and one from the outside to sense of someone is leaving. The sensors only start functioning when the button on the kit is clicked.</br>
<br>The door should be connected to servo motor, where it opens the door momentarily to allow one person to get in then closes. The program allows on 5 people to get inside and when another person attempts to get in, a peep sound would go off for two seconds and then stop and the servo motor won't open the door. The only way a person can enter is when another person leaves the room. The inner sensor would detect a person leaving the room and open the door for him.</br>
