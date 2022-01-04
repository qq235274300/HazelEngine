#pragma once
#include "Core.h"
#include "Window.h"
#include "LayerStack.h"

#include "Events/Event.h"
#include "Hazel/Events/ApplicationEvent.h"
#include "Window.h"


namespace Hazel
{
	class HAZEL_API Application
	{
	public:
		Application();
		virtual ~Application();
	public:
		void Run();

		void OnBindEvent(Event& e);

		void PushLayer(Layer* layer);
		void PushOverlay(Layer* layer);
		inline static Application& Get(){return *m_Instance;}
		inline Window& GetWindow(){return *m_Window;}
	private:
		bool OnWindowClose(WindowCloseEvent& e);
	private:
		std::unique_ptr<Window> m_Window;
		bool m_Running = true;

		LayerStack m_LayerStack;
	private:
		static Application* m_Instance;
	};

	Application* CreateApplication();
}


