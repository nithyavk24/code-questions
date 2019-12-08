/* whoop Firmware interview */


/* question 1 */
/* assume ADCRead() returns a floating point number that represents voltage*/
/* what is wrong with this logic? */
/* place your answer in comments below*/

float myFloat;

myFloat = ADCRead();

if (myFloat == 3.2)
{
	//do something
}
/* end question 1*/


/* float usually creates a double precision variable but when comparing 3.2 which is a single precision float number it looses precision.
Float is created from a double and hence when declaring a float it will have different value beyond the precision point considered
myFLoat is a float
3.2 is of type double
The complier will convert the float to double and the result of conversion is not the same value. */


/* question 2 */
/* the following code is run on an 8 bit microprocessor*/
/* this is all contained in a single c file called main.c*/
/* name a few issues with this implementation*/
/* place your answer in comments below*/

int myTime;

/*ISR routine run from timer interrupt*/
void TimeISR(void)
{
	myTime++;
}

main()
{
	while (1)
	{
		if (myTime == 64007)
		{
			// do something
		}
	}
}
/*end question 2*/





/* There may be a race condition which may occur in accessing the global variable.
 A suitably large clock must be selected to give enough time for execution of the main function.
If a large clock is selected the performance of the Microcontrollers can be hindered 
If an interrupt is generated during the execution of main function the value may be corrupted.*/
