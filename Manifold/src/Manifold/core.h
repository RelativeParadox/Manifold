#pragma once

#ifdef MF_PLATFORM_WINDOWS
	#ifdef MF_BUILD_DLL
		#define MANIFOLD_API __declspec(dllexport)
	#else
		#define MANIFOLD_API __declspec(dllimport)
	#endif // MF_BUILD_DLL
#else
	#error Manifold only supports windows at the moment!
#endif //MF_PLATFORM_WINDOWS