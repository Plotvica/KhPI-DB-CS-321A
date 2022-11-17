#pragma once
#include "../Laboratory Work 2/Header.h"


#ifdef OPER_EXPORTS
#define OPER_API __declspec(dllexport)
#else
#define OPER_API __declspec(dllimport)
#endif