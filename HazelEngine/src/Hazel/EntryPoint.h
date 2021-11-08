#pragma once



extern Hazel::Application* Hazel::CreateApplication();	

int main(int argc, char** argv)
{
	auto SanBoxApp = Hazel::CreateApplication();
	SanBoxApp->Run();
	delete SanBoxApp;
}

#ifdef  HAZEL_PLATFORM_WINDOW
#endif // HAZEL_PLATFORM_WI
