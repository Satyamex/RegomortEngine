#include <GLFW/glfw3.h>
#include "time.h"

namespace ReEngine::Time
{
	float GetTime(void)
	{
		return (float)glfwGetTime();
	}

	float GetDeltaTime(void)
	{
		static float lastTime = 0;
		float time = GetTime() - lastTime;
		lastTime = GetTime();
		return time;
	}
}

	// C wrapper
	extern "C" float re_get_time(void)
	{
		return ReEngine::Time::GetTime();
	}
	extern "C" float re_get_deltatime(void)
	{
		return ReEngine::Time::GetDeltaTime();
	}