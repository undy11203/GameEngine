#include "pch.h"
#include "Application.h"

#include "Events/ApplicationEvent.h"
#include "Log.h"

#include <GLFW/glfw3.h>


namespace GameEngine {
	Application::Application()
	{
		m_Window = std::unique_ptr<Window>(Window::Create());
	}

	Application::~Application()
	{

	}

	void Application::Run()
	{
		while (m_Running)
		{
			glClearColor(1, 0, 1, 1);
			glClear(GL_COLOR_BUFFER_BIT);
			m_Window->OnUpdate();
		}
		/*WindowResizeEvent e(1280, 720);
		GE_CLIENT_TRACE(e);*/
		// if (e.IsInCategory(EventCategoryApllication))
		// {
		// }
		// if (e.IsInCategory(EventCategoryInput))
		// {
		// 	GE_CLIENT_TRACE(e);
		// }
		//while (true);
	}
}

