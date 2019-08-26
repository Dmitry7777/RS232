#ifndef RS232_H
#define RS232_H

#define RS232_DCD INPUT
#define RS232_RXD INPUT
#define RS232_TXD OUTPUT
#define RS232_DTR OUTPUT
#define RS232_DSR INPUT
#define RS232_RTS OUTPUT
#define RS232_CTS INPUT
#define RS232_RI INPUT

//#line Update

/*Bits per second*/
#define RATE_BAUD75 75
#define RATE_BAUD110 110
#define RATE_BAUD134 134
#define RATE_BAUD150 150
#define RATE_BAUD300 300
#define RATE_BAUD600 600
#define RATE_BAUD1200 1200
#define RATE_BAUD1800 1800
#define RATE_BAUD2400 2400
#define RATE_BAUD4800 4800
#define RATE_BAUD7200 7200
#define RATE_BAUD9600 9600
#define RATE_BAUD14400 14400
#define RATE_BAUD19200 19200
#define RATE_BAUD38400 38400
#define RATE_BAUD57600 57600
#define RATE_BAUD115200 115200
#define RATE_BAUD128000 128000

/*Resource type*/
#define IRQ 0x00000004
#define IO_Range0 0x03F8
#define IO_Range1 0x03F9
#define IO_Range2 0x03FA
#define IO_Range3 0x03FB
#define IO_Range4 0x03FC
#define IO_Range5 0x03FD
#define IO_Range6 0x03FE
#define IO_Range7 0x03FF

uint8_t PROCESS_RS232_DCD;
uint8_t PROCESS_RS232_RXD;
uint8_t PROCESS_RS232_TXD;
uint8_t PROCESS_RS232_DTR;
uint8_t PROCESS_RS232_DSR;
uint8_t PROCESS_RS232_RTS;
uint8_t PROCESS_RS232_CTS;
uint8_t PROCESS_RS232_RI;

class RS232{
  public:
  RS232(uint8_t DCD, uint8_t RXD, uint8_t TXD, uint8_t DTR, uint8_t DSR, uint8_t RTS, uint8_t CTS, uint8_t RI){
  /*Defining the process of the COM-port*/
  PROCESS_RS232_DCD = DCD; //
  PROCESS_RS232_RXD = RXD; //
  PROCESS_RS232_TXD = TXD; //
  PROCESS_RS232_DTR = DTR; //
  PROCESS_RS232_DSR = DSR; //
  PROCESS_RS232_RTS = RTS; //
  PROCESS_RS232_CTS = CTS; //
  PROCESS_RS232_RI = RI; //
  /*Defining the pin modes of the COM-port*/
  pinMode(DCD, RS232_DCD); //
  pinMode(RXD, RS232_RXD); //
  pinMode(TXD, RS232_TXD); //
  pinMode(DTR, RS232_DTR); //
  pinMode(DSR, RS232_DSR); //
  pinMode(RTS, RS232_RTS); //
  pinMode(CTS, RS232_CTS); //
  pinMode(RI, RS232_RI); //
    }; //
    
    void begin(uint8_t PORT){
      }; //It functions the beginning
      void write(){
      digitalWrite(PRVT_TXD, LOW); //
      digitalWrite(PRVT_DTR, LOW); //
      digitalWrite(PRVT_RTS, LOW); //
      int PROCESS_IO_TXD;
      int PROCESS_IO_DTR;
      int PROCESS_IO_RTS;
      }; //It functions the write from the port
      void read(){
      int PROCESS_IO_DCD;
      PROCESS_IO_DCD = digitalRead(RS232_DCD); //
      int PROCESS_IO_RXD;
      PROCESS_IO_RXD = digitalRead(RS232_RXD); //
      int PROCESS_IO_DSR;
      int PROCESS_IO_CTS;
      int PROCESS_IO_RI;
      }; //It functions the read with the aid of the port
      void available(){
        }; //
      void flush(){
        }; //It functions the flush access of the port
      void setTimeout(){
        }; //It functions the time out to the port
      void find(){
        }; //
      void print(){
        }; //
      void println(){
        }; //
      void peek(){
        }; //
      void findUntil(){
        }; //
      void availableForWrite(){
        }; //
      void parseFloat(){
        }; //
      void parseInt(){
        }; //
      void readString(){
        }; //
      void readStringUntil(){
        }; //
      void readBytes(){
        }; //
      void readBytesUntil(){
        }; //
      void end(){
        }; //It functions the end of the operating of the port
  
  private:
  uint8_t PRVT_DCD; //
  uint8_t PRVT_RXD; //
  uint8_t PRVT_TXD; //
  uint8_t PRVT_DTR; //
  uint8_t PRVT_DSR; //
  uint8_t PRVT_RTS; //
  uint8_t PRVT_CTS; //
  uint8_t PRVT_RI; //
  int PROCESS_IO_DCD;
  
  protected:
};

#endif
