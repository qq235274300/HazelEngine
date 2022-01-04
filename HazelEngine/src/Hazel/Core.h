#pragma once

//∫Í∂®“Â
#ifdef  HAZEL_PLATFORM_WINDOW
	#ifdef HAZEL_BUILD_DLL
		#define HAZEL_API __declspec(dllexport)
	#else
		#define HAZEL_API __declspec(dllimport)
	#endif
#else
	#error HAZEL Only Support Window!

#endif //  HAZEL_PLATFORM_WINDOW

#define BIT(x) (1 << x)

#define  HZ_BIND_EVENT_FN(fn) std::bind(fn,this,std::placeholders::_1)