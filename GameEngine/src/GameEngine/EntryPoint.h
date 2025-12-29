#pragma once


#ifdef GE_PLATFORM_WINDOWS

extern GameEngine::Application* GameEngine::CreateApplication();

void main(int argc, char** argv)
{
	printf("Game Engine\n");
	auto app = GameEngine::CreateApplication();
	app->Run();
	delete app;
}

#endif
