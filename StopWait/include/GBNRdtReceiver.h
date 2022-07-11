#ifndef GBN_RDT_RECEIVER_H
#define GBN_RDT_RECEIVER_H
#include "RdtReceiver.h"
class GBNRdtReceiver : public RdtReceiver {
  private:
    int expectSequenceNumberRcvd; // 期待收到的下一个报文序号
    int seqSize;
    int windowSize;
    Packet lastAckPkt; //上次发送的确认报文

  public:
    void receive(const Packet &packet); //接收报文，将被NetworkService调用

  public:
    GBNRdtReceiver();
    virtual ~GBNRdtReceiver();
};

#endif