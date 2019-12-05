#pragma once

#ifdef DOT_BUILD_DLL
	#define DOT_API __declspec(dllexport)
#else
	#define DOT_API __declspec(dllimport)
#endif