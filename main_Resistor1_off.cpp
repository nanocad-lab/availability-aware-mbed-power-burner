/* main.cpp
 * Tested with mbed board: FRDM-KL46Z
 * Author: Mark Gottscho
 * mgottscho@ucla.edu
 */

#include "mbed.h"

using namespace std;

DigitalOut green(LED1);
DigitalOut red(LED2);
DigitalOut r1(PTA6);
DigitalOut r2(PTA7);

int main() {
	//Burn power in LEDs and two GPIO resistors
    green = 0;
	red = 1;
	r1 = 0;
	r2 = 1;

	while (1) {}
}
