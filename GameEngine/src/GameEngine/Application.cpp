#include "Application.h"

#include "Events/ApplicationEvent.h"
#include "Log.h"


namespace GameEngine {
	Application::Application()
	{

	}

	Application::~Application()
	{

	}

	void Application::Run()
	{
		WindowResizeEvent e(1280, 720);
		GE_CLIENT_TRACE(e);
		// if (e.IsInCategory(EventCategoryApllication))
		// {
		// }
		// if (e.IsInCategory(EventCategoryInput))
		// {
		// 	GE_CLIENT_TRACE(e);
		// }
		while (true);
	}
}

