#include "main.h"
/**
 *jack_bauer - el jack
 *Return: 0
 */
void jack_bauer(void)
{
int hours = 0;
int minutes = 0;

while(hours <= 23)
{
while(minutes <= 59) 
{
_putchar("%02d:%02d\n", hours, minutes);
minutes++;
}
hours++;
minutes = 0
}

}
