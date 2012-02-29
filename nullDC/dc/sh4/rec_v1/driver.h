#pragma once
#include "types.h"

#include <emitter/emitter.h>

#define FRZERO 16
#define FRONE 15
#define FRHALF 14
#define RCYCLES 13
#define RPC 15
#define CPU_TIMESLICE	(BLOCKLIST_MAX_CYCLES)

//interface
void rec_Sh4_int_Run();
void rec_Sh4_int_Stop();
void rec_Sh4_int_Step();
void rec_Sh4_int_Skip();
void rec_Sh4_int_Reset(bool Manual);
void rec_Sh4_int_Init();
void rec_Sh4_int_Term();
bool rec_Sh4_int_IsCpuRunning();  
void rec_sh4_ResetCache();
void __fastcall rec_sh4_int_RaiseExeption(u32 ExeptionCode,u32 VectorAddress);