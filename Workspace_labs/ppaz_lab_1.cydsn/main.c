#include <project.h>
int main()
{
	/* Start LCD and PWM */
	LCD_Char_Start();
	PWM_Start();
	
	/* Print Hello World on LCD */
	LCD_Char_PrintString("Hello World");

    /* Loop forever */
	for(;;)
    {
    }
}
