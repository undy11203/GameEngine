#pragma once

#include "Core.h"
#include "spdlog/spdlog.h"
#include "spdlog/fmt/ostr.h"

namespace GameEngine {
	class Log
	{
	public:
		static GAMEENGINE_API void Init();

		static GAMEENGINE_API std::shared_ptr<spdlog::logger>& GetCoreLogger();
		static GAMEENGINE_API std::shared_ptr<spdlog::logger>& GetClientLogger();
	private:
		static GAMEENGINE_API std::shared_ptr<spdlog::logger> s_CoreLogger;
		static GAMEENGINE_API std::shared_ptr<spdlog::logger> s_ClientLogger;
	};
}

#define GE_CORE_FATAL(...)		::GameEngine::Log::GetCoreLogger()->fatal(__VA_ARGS__)
#define GE_CORE_ERROR(...)		::GameEngine::Log::GetCoreLogger()->error(__VA_ARGS__)
#define GE_CORE_WARN(...)		::GameEngine::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define GE_CORE_INFO(...)		::GameEngine::Log::GetCoreLogger()->info(__VA_ARGS__)
#define GE_CORE_TRACE(...)		::GameEngine::Log::GetCoreLogger()->trace(__VA_ARGS__)

#define GE_CLIENT_FATAL(...)	::GameEngine::Log::GetClientLogger()->fatal(__VA_ARGS__)
#define GE_CLIENT_ERROR(...)	::GameEngine::Log::GetClientLogger()->error(__VA_ARGS__)
#define GE_CLIENT_WARN(...)		::GameEngine::Log::GetClientLogger()->warn(__VA_ARGS__)
#define GE_CLIENT_INFO(...)		::GameEngine::Log::GetClientLogger()->info(__VA_ARGS__)
#define GE_CLIENT_TRACE(...)	::GameEngine::Log::GetClientLogger()->trace(__VA_ARGS__)