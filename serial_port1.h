#ifndef SERIALPORT_H_  
#define SERIALPORT_H_  
#include <iostream>
#include <string>
/*���ô������ò���*/
typedef struct
{
    char prompt;  //prompt after reciving data
    int  baudrate;  //baudrate
    char databit;  //data bits, 5, 6, 7, 8
    char  debug;  //debug mode, 0: none, 1: debug
    char  echo;   //echo mode, 0: none, 1: echo
    char fctl;   //flow control, 0: none, 1: hardware, 2: software
    char  tty;   //tty: 0, 1, 2, 3, 4, 5, 6, 7
    char parity;  //parity 0: none, 1: odd, 2: even
    char stopbit;  //stop bits, 1, 2
    const int reserved; //reserved, must be zero
}portinfo_t;

typedef portinfo_t *pportinfo_t;


/******************************************************************* 
* ���ƣ�                  PortOpen 
* ���ܣ�                �򿪴��ڼ����ʼ��
* ��ڲ�����        fd    :�ļ�������     port :���ں�(ttymxc1) 
* ���ڲ�����        ��ȷ����Ϊ1�����󷵻�Ϊ0 
*******************************************************************/  
int PortOpen();

/******************************************************************* 
* ���ƣ�                  ReadCom 
* ���ܣ�               
* ��ڲ�����        fd    :�ļ�������     port :���ں�(ttymxc1) 
* ���ڲ�����        ��ȷ����Ϊ1�����󷵻�Ϊ0 
*******************************************************************/ 
int ReadCom(char *pcom_data);

/******************************************************************* 
* ���ƣ�                  PortClose 
* ���ܣ�               
* ��ڲ�����        fd    :�ļ�������     port :���ں�(ttymxc1) 
* ���ڲ�����        ��ȷ����Ϊ1�����󷵻�Ϊ0 
*******************************************************************/ 
void PortClose();

int set_speed;

#endif //SERIALPORT_H_


