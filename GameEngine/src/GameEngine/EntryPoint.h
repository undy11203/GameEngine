#pragma once


#ifdef GE_PLATFORM_WINDOWS

extern GameEngine::Application* GameEngine::CreateApplication();

int main(int argc, char** argv)
{
	GameEngine::Log::Init();
	GameEngine::Log::GetCoreLogger()->warn("Core init");
	GameEngine::Log::GetClientLogger()->info("Client init");
	auto app = GameEngine::CreateApplication();
	app->Run();
	delete app;
}

#endif
