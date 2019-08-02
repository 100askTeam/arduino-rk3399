#ifndef _LED_H
#define _LED_H

#include "gpio.h"


#define LED_A (2*32+3*8+0)
#define LED_B (2*32+3*8+1)
#define LED_C (2*32+3*8+2)

class LED : public GPIO {
    public:

        LED(int pin);
        ~LED(void);
        
        int on(void);
        int off(void);
};


#endif 


