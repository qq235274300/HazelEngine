#pragma once


#ifdef  HAZEL_PLATFORM_WINDOW


extern Hazel::Application* Hazel::CreateApplication();	

int main(int argc, char** argv)
{
	Hazel::Log::Init();
	HZ_CORE_WARN("Initialized Engine!");
	int a = 10;
	HZ_INFO("Hello! Var = {0}",a);

	auto SanBoxApp = Hazel::CreateApplication();
	SanBoxApp->Run();
	delete SanBoxApp;
}

#endif // HAZEL_PLATFORM_WI
