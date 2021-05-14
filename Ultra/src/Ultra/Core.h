#pragma once

#ifdef UT_PLATFORM_WINDOWS
	#ifdef UT_BUILD_DLL
		#define ULTRA_API __declspec(dllexport)
	#else
		#define ULTRA_API __declspec(dllimport)
	#endif
#else
	#error Ultra only support windows!
#endif