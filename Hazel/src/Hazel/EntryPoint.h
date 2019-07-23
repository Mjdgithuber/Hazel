#pragma once

#ifdef HZ_PLATFORM_WINDOWS

extern Hazel::Application* Hazel::CreateApplication();

int main(int argc, char** argv) {
	Hazel::Log::Init();
	HZ_CORE_WARN("Initialized Log!");
	int x = 5;
	HZ_INFO("Hello! Var = {0}", x);

	Hazel::Application* app = Hazel::CreateApplication();
	app->Run();
	delete app;
}

#endif