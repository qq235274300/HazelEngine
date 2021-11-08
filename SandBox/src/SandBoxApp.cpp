
#include "Hazel.h"

class SandBox : public Hazel::Application
{
public:
	SandBox(){};
	~SandBox(){};
public:
	
};

Hazel::Application* Hazel::CreateApplication()
{
	return new SandBox();
}