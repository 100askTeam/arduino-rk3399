#ifndef _KEYBOARD_H
#define _KEYBOARD_H

#include <Arduino.h>

#define KEY_A (30)  
#define KEY_B (48)  
#define KEY_C (46)  

#define KEYBOARD_EVENT_PATH   "/dev/input/event0"

class KEYBOARD  {
    private:
        string m_sPath;
        int m_iFileEvent;
        int m_iCode;
        int m_iValue;
    
    public:
        KEYBOARD();
        virtual int readKey(void);
        virtual int getCode(void);
        virtual int getValue(void);
        ~KEYBOARD(void);
};


#endif 

