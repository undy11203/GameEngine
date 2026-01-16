#pragma once



#ifdef GE_PLATFORM_WINDOWS
	#ifdef GE_BUILD_DLL
		#define  GAMEENGINE_API __declspec(dllexport)
	#else
		 #define  GAMEENGINE_API __declspec(dllimport)	
	#endif
#else
	#error Game engine support only Windows
#endif

#define BIT(x) (1 << x)