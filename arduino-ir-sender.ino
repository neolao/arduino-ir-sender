#include <IRremote.h>

IRsend irsend;

void setup()
{
}

void loop() {
	for (int i = 0; i < 3; i++) {
		irsend.sendNEC(0x807fd827, 32);
		delay(40);
	}
	delay(2000); // 2 second delay between each signal burst
}
