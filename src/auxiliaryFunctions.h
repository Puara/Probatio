#ifndef AUX_F
#define AUX_F

#include "Wire.h"
#include "Block.h"
#include "BlockValue.h"
// #include "auxData.h"
#include "probatio_defs.h"

#include <WiFi.h>
#include <WiFiClient.h>
#include <WiFiUdp.h>
#include <OSCMessage.h>
#include "esp_wifi.h"

//extern WiFiUDP udp;
//
extern char ssid[];
extern char pass[];

extern const unsigned int destPort;

extern int cycle;

extern byte buffer[];
extern int indexBuffer;

extern boolean loopCycleControl;
extern int loopCycleTime;

extern int quantBlocksConnected;

extern bool isConnected;

extern Block* blocks[];

void requestI2C();
bool requestFromDevice(Block * _block);
void formatBufferWithBlocks();
void addActiveBlockValues(byte blockId, byte arraySize, BlockValue values[]);
void addInactiveBlockMessage(byte blockId, byte quantity);
void sendConsolidatedSerialMessage();
void sendIndividualOSCMessages();
void sendConsolidatedOSCMessage();
void debugDumpBuffer();

#endif