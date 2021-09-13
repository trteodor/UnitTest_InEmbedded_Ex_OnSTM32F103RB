/* AUTOGENERATED FILE. DO NOT EDIT. */
#ifndef _MOCK_SAMPLEFILETOUT_H
#define _MOCK_SAMPLEFILETOUT_H

#include "unity.h"
#include "SampleFileToUT.h"

/* Ignore the following warnings, since we are copying code */
#if defined(__GNUC__) && !defined(__ICC) && !defined(__TMS470__)
#if __GNUC__ > 4 || (__GNUC__ == 4 && (__GNUC_MINOR__ > 6 || (__GNUC_MINOR__ == 6 && __GNUC_PATCHLEVEL__ > 0)))
#pragma GCC diagnostic push
#endif
#if !defined(__clang__)
#pragma GCC diagnostic ignored "-Wpragmas"
#endif
#pragma GCC diagnostic ignored "-Wunknown-pragmas"
#pragma GCC diagnostic ignored "-Wduplicate-decl-specifier"
#endif

void mock_SampleFileToUT_Init(void);
void mock_SampleFileToUT_Destroy(void);
void mock_SampleFileToUT_Verify(void);


typedef void(*cmock_SampleFileToUT_func_ptr1)(uint16_t);


#define FakeUartPrintInfo_Ignore() FakeUartPrintInfo_CMockIgnore()
void FakeUartPrintInfo_CMockIgnore(void);
#define FakeUartPrintInfo_StopIgnore() FakeUartPrintInfo_CMockStopIgnore()
void FakeUartPrintInfo_CMockStopIgnore(void);
#define FakeUartPrintInfo_Expect(a, c) FakeUartPrintInfo_CMockExpect(__LINE__, a, c)
void FakeUartPrintInfo_CMockExpect(UNITY_LINE_TYPE cmock_line, uint8_t a, char* c);
#define FakeUartPrintInfo_ReturnThruPtr_c(c) FakeUartPrintInfo_CMockReturnMemThruPtr_c(__LINE__, c, sizeof(char))
#define FakeUartPrintInfo_ReturnArrayThruPtr_c(c, cmock_len) FakeUartPrintInfo_CMockReturnMemThruPtr_c(__LINE__, c, cmock_len * sizeof(*c))
#define FakeUartPrintInfo_ReturnMemThruPtr_c(c, cmock_size) FakeUartPrintInfo_CMockReturnMemThruPtr_c(__LINE__, c, cmock_size)
void FakeUartPrintInfo_CMockReturnMemThruPtr_c(UNITY_LINE_TYPE cmock_line, char* c, size_t cmock_size);
#define FakeI2cInit_Ignore() FakeI2cInit_CMockIgnore()
void FakeI2cInit_CMockIgnore(void);
#define FakeI2cInit_StopIgnore() FakeI2cInit_CMockStopIgnore()
void FakeI2cInit_CMockStopIgnore(void);
#define FakeI2cInit_Expect(I2cHandler, ReadingDataEndCB) FakeI2cInit_CMockExpect(__LINE__, I2cHandler, ReadingDataEndCB)
void FakeI2cInit_CMockExpect(UNITY_LINE_TYPE cmock_line, FakeStructHanldeI2c* I2cHandler, cmock_SampleFileToUT_func_ptr1 ReadingDataEndCB);
#define FakeI2cInit_ReturnThruPtr_I2cHandler(I2cHandler) FakeI2cInit_CMockReturnMemThruPtr_I2cHandler(__LINE__, I2cHandler, sizeof(FakeStructHanldeI2c))
#define FakeI2cInit_ReturnArrayThruPtr_I2cHandler(I2cHandler, cmock_len) FakeI2cInit_CMockReturnMemThruPtr_I2cHandler(__LINE__, I2cHandler, cmock_len * sizeof(*I2cHandler))
#define FakeI2cInit_ReturnMemThruPtr_I2cHandler(I2cHandler, cmock_size) FakeI2cInit_CMockReturnMemThruPtr_I2cHandler(__LINE__, I2cHandler, cmock_size)
void FakeI2cInit_CMockReturnMemThruPtr_I2cHandler(UNITY_LINE_TYPE cmock_line, FakeStructHanldeI2c* I2cHandler, size_t cmock_size);
#define ReadI2cSlaveDataRegister_Ignore() ReadI2cSlaveDataRegister_CMockIgnore()
void ReadI2cSlaveDataRegister_CMockIgnore(void);
#define ReadI2cSlaveDataRegister_StopIgnore() ReadI2cSlaveDataRegister_CMockStopIgnore()
void ReadI2cSlaveDataRegister_CMockStopIgnore(void);
#define ReadI2cSlaveDataRegister_Expect(I2cHandler, RegNum, DataRead) ReadI2cSlaveDataRegister_CMockExpect(__LINE__, I2cHandler, RegNum, DataRead)
void ReadI2cSlaveDataRegister_CMockExpect(UNITY_LINE_TYPE cmock_line, FakeStructHanldeI2c* I2cHandler, uint8_t* RegNum, uint8_t* DataRead);
#define ReadI2cSlaveDataRegister_ReturnThruPtr_I2cHandler(I2cHandler) ReadI2cSlaveDataRegister_CMockReturnMemThruPtr_I2cHandler(__LINE__, I2cHandler, sizeof(FakeStructHanldeI2c))
#define ReadI2cSlaveDataRegister_ReturnArrayThruPtr_I2cHandler(I2cHandler, cmock_len) ReadI2cSlaveDataRegister_CMockReturnMemThruPtr_I2cHandler(__LINE__, I2cHandler, cmock_len * sizeof(*I2cHandler))
#define ReadI2cSlaveDataRegister_ReturnMemThruPtr_I2cHandler(I2cHandler, cmock_size) ReadI2cSlaveDataRegister_CMockReturnMemThruPtr_I2cHandler(__LINE__, I2cHandler, cmock_size)
void ReadI2cSlaveDataRegister_CMockReturnMemThruPtr_I2cHandler(UNITY_LINE_TYPE cmock_line, FakeStructHanldeI2c* I2cHandler, size_t cmock_size);
#define ReadI2cSlaveDataRegister_ReturnThruPtr_RegNum(RegNum) ReadI2cSlaveDataRegister_CMockReturnMemThruPtr_RegNum(__LINE__, RegNum, sizeof(uint8_t))
#define ReadI2cSlaveDataRegister_ReturnArrayThruPtr_RegNum(RegNum, cmock_len) ReadI2cSlaveDataRegister_CMockReturnMemThruPtr_RegNum(__LINE__, RegNum, cmock_len * sizeof(*RegNum))
#define ReadI2cSlaveDataRegister_ReturnMemThruPtr_RegNum(RegNum, cmock_size) ReadI2cSlaveDataRegister_CMockReturnMemThruPtr_RegNum(__LINE__, RegNum, cmock_size)
void ReadI2cSlaveDataRegister_CMockReturnMemThruPtr_RegNum(UNITY_LINE_TYPE cmock_line, uint8_t* RegNum, size_t cmock_size);
#define ReadI2cSlaveDataRegister_ReturnThruPtr_DataRead(DataRead) ReadI2cSlaveDataRegister_CMockReturnMemThruPtr_DataRead(__LINE__, DataRead, sizeof(uint8_t))
#define ReadI2cSlaveDataRegister_ReturnArrayThruPtr_DataRead(DataRead, cmock_len) ReadI2cSlaveDataRegister_CMockReturnMemThruPtr_DataRead(__LINE__, DataRead, cmock_len * sizeof(*DataRead))
#define ReadI2cSlaveDataRegister_ReturnMemThruPtr_DataRead(DataRead, cmock_size) ReadI2cSlaveDataRegister_CMockReturnMemThruPtr_DataRead(__LINE__, DataRead, cmock_size)
void ReadI2cSlaveDataRegister_CMockReturnMemThruPtr_DataRead(UNITY_LINE_TYPE cmock_line, uint8_t* DataRead, size_t cmock_size);
#define validateData_IgnoreAndReturn(cmock_retval) validateData_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void validateData_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, int cmock_to_return);
#define validateData_StopIgnore() validateData_CMockStopIgnore()
void validateData_CMockStopIgnore(void);
#define validateData_ExpectAndReturn(I2cHandler, Data, len, cmock_retval) validateData_CMockExpectAndReturn(__LINE__, I2cHandler, Data, len, cmock_retval)
void validateData_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, FakeStructHanldeI2c* I2cHandler, uint8_t* Data, uint8_t len, int cmock_to_return);
#define validateData_ReturnThruPtr_I2cHandler(I2cHandler) validateData_CMockReturnMemThruPtr_I2cHandler(__LINE__, I2cHandler, sizeof(FakeStructHanldeI2c))
#define validateData_ReturnArrayThruPtr_I2cHandler(I2cHandler, cmock_len) validateData_CMockReturnMemThruPtr_I2cHandler(__LINE__, I2cHandler, cmock_len * sizeof(*I2cHandler))
#define validateData_ReturnMemThruPtr_I2cHandler(I2cHandler, cmock_size) validateData_CMockReturnMemThruPtr_I2cHandler(__LINE__, I2cHandler, cmock_size)
void validateData_CMockReturnMemThruPtr_I2cHandler(UNITY_LINE_TYPE cmock_line, FakeStructHanldeI2c* I2cHandler, size_t cmock_size);
#define validateData_ReturnThruPtr_Data(Data) validateData_CMockReturnMemThruPtr_Data(__LINE__, Data, sizeof(uint8_t))
#define validateData_ReturnArrayThruPtr_Data(Data, cmock_len) validateData_CMockReturnMemThruPtr_Data(__LINE__, Data, cmock_len * sizeof(*Data))
#define validateData_ReturnMemThruPtr_Data(Data, cmock_size) validateData_CMockReturnMemThruPtr_Data(__LINE__, Data, cmock_size)
void validateData_CMockReturnMemThruPtr_Data(UNITY_LINE_TYPE cmock_line, uint8_t* Data, size_t cmock_size);

#if defined(__GNUC__) && !defined(__ICC) && !defined(__TMS470__)
#if __GNUC__ > 4 || (__GNUC__ == 4 && (__GNUC_MINOR__ > 6 || (__GNUC_MINOR__ == 6 && __GNUC_PATCHLEVEL__ > 0)))
#pragma GCC diagnostic pop
#endif
#endif

#endif