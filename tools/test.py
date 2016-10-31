import serial

ser = serial.Serial(
    port='/dev/ttyUSB0',
    baudrate=9600
)

while True:
    response = ser.readline()
    print("read data: " + response)

