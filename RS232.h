//
#define _RS232_H
#ifndef _RS232_H

//
#include <Arduino.h >
#include <RS232.h>

//
#define RS232_DCD
#define RS232_RXD
#define RS232_TXD
#define RS232_DTR
#define RS232_DSR
#define RS232_RTS
#define RS232_CTS
#define RS232_RI

//
#endif

class RS232{

public:
//
void available(); //
void availableForWrite(); //
void begin(); //
void end(); //
void find(); //
void findUntil(); //
void flush(); //
void parseFloat(); //
void parseInt(); //
void peek(); //
void print(); //
void println(); //
void read(); //
void readBytes(); //
void readBytesUntil(); //
void readString(); //
void readStringUntil(); //
void setTimeout(); //
void write(); //


private:
//

protected:
//

};

extern RS232class;
