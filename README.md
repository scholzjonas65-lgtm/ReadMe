### my readme : Smarthome
## my smarthome is more a project to learn than to create a real smarthome
** I used many sensors in order to learn how to assemble them and how to code them**
** and included also hardware stuff like a pinwheel, which can produce electricity
**sensors**
1. Waterlevelsensor for detecting rain and other liquids, when detected it shows on the LCD
2. Movement Sensor, to give the instruction to open the door, when motion is detected
3. Thermistor for measurering the temperature analogue and and advising to use a fan,when it is too hot to cool down, which I also build. And to produce warmth trough friction (rubbing your fingers for example) and connects to a passive buzzer,c
4. The LDR detects the lights levels and either prints dimm lights or brighten lights

**outputs**
1. the maincomponent is the LCD Display. It prints out the inputs from the sensors.
2. the passive buzzer, who buzzes when the heat limit is reached
3. LED, which also lights up if the heat limit is reached

**CAD** I also designed components for the smarthome.
1. first I designed a house with a roof and all of that.
then I realized that the object was way too big to slice and I had to reduce the volume of the house.
But then the print took way too long so I had to cut out stuff till it was ready to be printed through the night.
After all I ended up with a baseplate and a wall with an real big window.
[[House with roof](<../../Downloads/readme.hackclub/Haus SH full.stl>)],
[[finally optimized version for my printer (6+ Version or some)](<../../Downloads/readme.hackclub/Haus SH Result 1.stl>)]
2. I also desigend another component beforehand to possibly hold the movement Sensor and or hold jumperwires/cables
[[experimental addition as a structuring component ](../../Downloads/readme.hackclub/Baseplate.stl)]
3. Then I desigend a stand for one of the self built fans.
[[first version](<../../Downloads/Ventillator Halterung.stl>)],
[[2. version + more stability](<../../Downloads/Ventillator Halterung + Stützen.stl>)],
[[other measurements](<../../Downloads/Andere Maße Ventilator Halterung.stl>)]

4. I also designed a diffenrent case for the movement sensor, but preferred the other component (2)
[[alternative case movemnt sensor](<../../Downloads/readme.hackclub/Movement Sensor.stl>)]
5. last but not least I designed a case for the lcd, because it is one of the main components.
[[final design](<../../Downloads/readme.hackclub/LCD Schutz.stl>)]
6. actually not last: I also designed and printed a better holder for the water sensor, which you can clip on the roof (where actually is no roof), but atleast you can clip it on the top of the window.
[[first and final water sensor holder](../../Downloads/readme.hackclub/WaterCase.stl)]

**More stuff**
In addition I assembeld a pinwheel for generating Energy and connected it with wires, I prepared myself, to the fan I built and for which I designed and printed the stand.
So either you follow the instruction from the lcd and press a button yourself to activate the fan or you power the fan with green energy from the wind!

***tech stack*** 
1. for CAD stuff I mainly used *Autodesk Fusion 360* 
(and sketched(+measured and so on) on paper)
2. for Coding stuff I used *Arduino IDE*, because I primarily coded simple sensors,( which was sometimes quite hard for me so please dont think I did nothing in these waiting times, in addition I also had to wait quite a bit, when I was testing my hardware, because the smarthome is always booting up 10+ seconds and stuff. Im new so I hope that doesnt causes any fraud problems, I would also work additional hours or some idk. Maybe someone can tell me more? Thanks in advance!)
3. and now for the readme I use *Visual Studio* Code



# my final version of my house (or something like that),
# I didnt print the other versions, because they either took too long or were consuming too much filament, most likely both
!(![final house printed](<Haus printed.jpg>))

# on the one hand this CAD design was helpful to learn the fundamentals of autodesk fusion, while on the other hand I imagined it could be helpful for various reasons, as a structuring element.
!(![only Baseplate printed](<Baseplate printed.jpg>))

# but primarily it became home to the movement sensor
!(![movement sensor in Baseplate](<PXL_20260807_173236019 (1).jpg>))
# It hadnt had a perfectly fine grip, atleast for the sensitivity of the sensor, so I fixed it with some tape
!(![assembled base + movement sensor](<second overview.jpg>))

# here is my first design for the fan stand
!(![first fan stand, not stable enough, fan stand](<first fan stand printed.jpg>))

# it wasnt as stable, so I designed a new more stable fan stand
!(![stabil fan stand printed](<fan stand printed-1.jpg>))

# after I finished the fan stand I connected the fan to the pinwheel and tested, if it could provide enough electricity. It did!Even with not too much or little wind.
!(![fan + pinwheel](<pinwheel conn to fan.jpg>))

# here is the final printed version of the case for the lcd display, I somehow destroyed the first one, also because the print quality wasnt as good.
!(![lcd display printed](<lcd display printed.jpg>))

# the servo wasnt working with the arduin, so I tried it with probably higher external voltage
!(![extern + servo](<extern+ servo.jpg>))

# failed fix for the servo problem
# using higher voltage and tanking the too strong backlashing current with a diode didnt work
!(![failed alternative](<failed alt. servo.jpg>))

# then I tested the whole thing in order to fix the problem, but figured the servo itself was somehow broken (after some time I may have been a little harsh on the poor thing)
!(![ozs.](oszillokop.jpg))
!(![testing](<testing servo.jpg>))

# after I spent too much time on my attempt of fixing a not working servo I took the breadboard where I assembled  diode,transistor +external voltage and used it for adding a passive buzzer, who makes noise, when the temperature on the thermistor is too hot.
!(![passive buzzer as an output for the thermistor](<buzzer bb.jpg>))


# here is the waterlevel sensor, for which I, after I had to tape it first, I also printed a case
!(![waterlevel sensor without case](<Waterlevel without case.jpg>))

# overview without servo,fan and pinwheel 
!(![overview 2](<second overview-2.jpg>))

## now Ill go fix the journal
## I hope my project isnt a too big headache, I will better with the next projects :)














