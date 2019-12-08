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
