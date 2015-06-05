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
    green = 1;
	red = 1;
	r1 = 0;
	r2 = 0;

	while (1) {}
}
