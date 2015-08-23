const int AOUTpin=0;//the AOUT pin of the alcohol sensor goes into analog pin A0 of the arduino
const int DOUTpin=8;//the DOUT pin of the alcohol sensor goes into digital pin D8 of the arduino
const int ledPin=13;//the anode of the LED connects to digital pin D13 of the arduino

int limit;
int value;

void setup() {
Serial.begin(115200);//sets the baud rate
pinMode(DOUTpin, INPUT);//sets the pin as an input to the arduino
pinMode(ledPin, OUTPUT);//sets the pin as an output of the arduino
}

void loop()
{
value= analogRead(AOUTpin);//reads the analaog value from the alcohol sensor's AOUT pin
limit= digitalRead(DOUTpin);//reads the digital value from the alcohol sensor's DOUT pin
Serial.print("Pollutant Value: ");
Serial.println(value);//prints the alcohol value
Serial.print("Pollutants Limit: ");
Serial.print(limit);//prints the limit reached as either LOW or HIGH (above or underneath)
delay(100);
}
