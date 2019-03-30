/*
 *  Copyright (C)
 *
 *  Written by Davit Kalantaryan <davit.kalantaryan@desy.de>
 */

 /**
  *   @file       crash_investigator.h
  *   @copyright
  *   @brief      header file for crash investigation APIs
  *   @author     Davit Kalantaryan <davit.kalantaryan@desy.de>
  *   @date       2019 Mar 30
  *   @details
  *       Details :  ...
  */
#ifndef CRASH_INVESTIGATOR_H
#define CRASH_INVESTIGATOR_H

#include <stddef.h>

#ifdef __cplusplus
#define EXTERN_C_2	extern "C"
#define BEGIN_C_DECL_2	extern "C"{
#define END_C_DECL_2	}
#else
#define EXTERN_C_2
#define BEGIN_C_DECL_2
#define END_C_DECL_2
#endif

BEGIN_C_DECL_2

enum HookType {HookTypeMalloc, HookTypeCalloc, HookTypeRealloc, HookTypeFree};
typedef void(*TypeHookFunction)(enum HookType type,size_t size,void* _memory);

extern TypeHookFunction g_MemoryHookFunction;
void InitializeCrashAnalizer(void);

END_C_DECL_2


#endif  // #ifndef CRASH_INVESTIGATOR_H
