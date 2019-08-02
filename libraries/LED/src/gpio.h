#ifndef GPIO_H
#define GPIO_H

#include <Arduino.h>

#define GPIO0 (3*32+3*8+0)
#define GPIO1 (3*32+3*8+1)
#define GPIO2 (3*32+3*8+2)
#define GPIO3 (3*32+3*8+3)
#define GPIO4 (3*32+3*8+4)

class GPIO {
    private:
        int m_iPin;
        string m_sPath;
        
    public:
        GPIO(void);
        GPIO(int pin);
        
        void setPin(int pin);
        int getPin(void);   
        
        void setPath(int pin);
        string getPath(void);
        
        int setDirection(int dir);
        int getDirection(void);
        
        int setValue(int val);
        int getValue(void);
        
        int exportGPIO(void);
        int unexportGPIO(void);
};

#endif