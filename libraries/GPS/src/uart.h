#ifndef _UART_H
#define _UART_H

#include <Arduino.h>

#define UART1_PATH  "/dev/ttyS0"
#define UART2_PATH  "/dev/ttyS4"

#define UART_A  1
#define UART_B  2

class UART {
    protected:
        string m_sPath;
        int m_iFile;
        //设置串口参数
        
    public:
        UART();
        UART(int num);
        ~UART(void);
        
        int setUART(void);
        
        int sendData(char *data, int len);
        int reviceData(char *data, int len);
};

#endif 


