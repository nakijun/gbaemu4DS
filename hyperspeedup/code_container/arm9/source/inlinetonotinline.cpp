#include "GBAinline.h"

//#include "fatfileextract.h"

u32 CPUReadMemoryreal(u32 address);
 

u32 CPUReadMemory(u32 address)
 {
	return CPUReadMemoryreal(address);
 }

u32 CPUReadHalfWordreal(u32 address);

u32 CPUReadHalfWord(u32 address)
 {
	return CPUReadHalfWordreal(address);
 }
u8 CPUReadBytereal(u32 address);

u8 CPUReadByte(u32 address)
{
	return CPUReadBytereal(address);
}











void CPUWriteMemory(u32 address, u32 value);

void CPUWriteMemoryextern(u32 address, u32 value)
 {
	CPUWriteMemory(address,value);
 }

void CPUWriteHalfWord(u32 address, u16 value);

void CPUWriteHalfWordextern(u32 address, u16 value)
 {
	CPUWriteHalfWord(address,value);
 }
void CPUWriteByte(u32 address, u8 b);

void CPUWriteByteextern(u32 address, u8 b)
{
	CPUWriteByte(address,b);
}






u8 ichfly_readu8(int pos);

u32 ichfly_readu8extern(int pos)
 {
	return ichfly_readu8(pos);
 }

u16 ichfly_readu16(int pos);

u16 ichfly_readu16extern(int pos)
 {
	return ichfly_readu16(pos);
 }
u32 ichfly_readu32(int pos);

u32 ichfly_readu32extern(int pos)
 {
	return ichfly_readu32(pos);
 }
