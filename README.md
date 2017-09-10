Arduino Class to control DC motors with the popular A4988 Stepper Driver

Based on: http://www.robotshop.com/letsmakerobots/files/A4988RobotV2.txt

# Installation

Import A4988_DC.h in your project or copy & paste code before setup()

# ¿How to use?

1 - Declare Motor type var after setup() [Motor* myMotor]

2 - Instantiate new Motor in var created before [myMotor = new Motor()]

3 - Use predefined public methods [myMotor->method()]

# Public Methods

setPins((int) step, (int) enable, (int) reset)

setDirection((bool) direction) [0 Forward, 1 Reverse]

setSpeed((int) speed) [Min 0, Max 255]

toggleDirection()

run()

stop()
