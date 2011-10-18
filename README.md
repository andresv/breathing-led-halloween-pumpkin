# Hardware
This shield is meant for custom [Memsic Iris mote](http://www.memsic.com/products/wireless-sensor-networks/wireless-modules.html).

Basically the circuit for driving power LEDs is based on Dan Goldwater's [instructable](http://www.instructables.com/id/Circuits-for-using-High-Power-LED-s/).  
Circuit files are in [Eagle](http://www.cadsoftusa.com/) format.

# Software
## Arduino
Arduino software for prototyping this board is based on Tyler Brown's [Organic Breathing LED](http://www.tmatthew.net/blog/breathing_led)
It uses PWM to change LED brightness. Arduino PWM frequency is about 500 Hz.
PWM value graph can be seen [here](http://www3.wolframalpha.com/input/?i=plot+%28-250*abs%28sin%28x*0.01%29%29%29%2B255%2C+x%3D-500..500).
