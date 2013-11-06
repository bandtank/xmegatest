#include <avr/io.h>

int main(void)
{
    PORTD.OUTCLR = PIN3_bm;
    PORTD.DIRSET = PIN3_bm;
        
    while(1);
}
