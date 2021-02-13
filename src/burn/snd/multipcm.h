UINT8 MultiPCMRead();
void MultiPCMWrite(INT32 offset, UINT8 data);
void MultiPCMSetBank(UINT32 leftoffs, UINT32 rightoffs);
void MultiPCMInit(INT32 clock, UINT8 *SndROM, INT32 bAdd);
void MultiPCMExit();
void MultiPCMReset();
void MultiPCMUpdate(INT16 *buffer, INT32 samples);
void MultiPCMScan(INT32 nAction, INT32 *pnMin);
