#include "turn.h"
int turning (int number){
	if(number < 0)
		return (-1)*turning(number*(-1));
	int newNumber = 0;
	while(number > 0){
		newNumber = newNumber*10 + number%10;
		number = number/10;
	}
	return newNumber;
}
