#pragma config(Sensor, port2,  lightSensorLeft, sensorVexIQ_ColorGrayscale)
#pragma config(Sensor, port3,  lightSensorRight, sensorVexIQ_ColorGrayscale)
#pragma config(Motor,  motor1,          LMotor,        tmotorVexIQ, PIDControl, driveLeft, encoder)
#pragma config(Motor,  motor6,          RMotor,        tmotorVexIQ, PIDControl, reversed, driveRight, encoder)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{
	int ThresholdLeft = 86;
	int ThresholdRight = 82;
	repeat(forever){
		setMotorSpeed(LMotor, 50);
		setMotorSpeed(RMotor, 50);

		if (getColorGrayscale(lightSensorLeft) < ThresholdLeft && getColorGrayscale(lightSensorRight) > ThresholdRight){
				setMotorSpeed(LMotor, 70);
				setMotorSpeed(RMotor, 30);
				displayText(line3
			}
		if (getColorGrayscale(lightSensorRight) < ThresholdRight && getColorGrayscale(lightSensorLeft) > ThresholdLeft){
			setMotorSpeed(LMotor, 30);
			setMotorSpeed(RMotor, 70);
		}
	}
}
