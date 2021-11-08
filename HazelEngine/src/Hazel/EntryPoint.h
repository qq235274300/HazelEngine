#pragma once


#ifdef  HAZEL_PLATFORM_WINDOW


extern Hazel::Application* Hazel::CreateApplication();	

int main(int argc, char** argv)
{
	printf("Engine Start");
	auto SanBoxApp = Hazel::CreateApplication();
	SanBoxApp->Run();
	delete SanBoxApp;
}




#endif // HAZEL_PLATFORM_WI
