# TEST PLAN AND OUTPUT

## HIGH LEVEL TEST PLAN

|Test |Description |Input |Output |Requirement Met|
|--|-------------|------|------|---|
|01|Arduino UNO Board|Input from Microcontroller|Expected 5V output|Yes|
|02|Ultrasonic Sensor|Data from Arduino board|Detect Object|Yes|
|03|Display|Show the distance is too far or near|Displays either too far or near|Yes|
|04|Resistor|Restrict the flow|Restrict the flow of current|Yes|
|05|Potentiometer|Vary the resistance and regulates the voltage|Flow of voltage|Yes|

## LOW LEVEL TEST PLAN
|Test |Description |Input |Output |Requirement Met|
|--|-------------|------|------|---|
|01|Display|Shows too far if distance >15 cm|Too far|Yes|
|02|Display|Shows too near if distance <10cm|Too near|Yes|
|03|Potentiometer Regulation|Regulate the voltage flow|Yes|
