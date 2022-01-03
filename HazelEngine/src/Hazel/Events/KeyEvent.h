#pragma once

#include "Event.h"


namespace Hazel {

	class HAZEL_API KeyEvent : public Event
	{
	public:
		inline int GetKeyCode()const {return m_keyCode;}	
		
		EVENT_CLASS_CATEGORY(EventCategoryKeyBoard | EventCategoryInput);

	// Protected Construct Obvious Only Construct By ItSelf && InheritClass
	protected:
		KeyEvent(int keyCode)
			:m_keyCode(keyCode){}

		int m_keyCode;
	};

	class HAZEL_API KeyPressedEvent : public KeyEvent
	{
	public:
		KeyPressedEvent(int keyCode, int repeated)
			: KeyEvent(keyCode), m_RepeatCount(repeated)
		{
			
		}

		inline int GetRepeatedCount()const {return m_RepeatCount;}
	
		std::string ToString()const override
		{
			std::stringstream ss;
			ss<<"KetPressedEvent "<<m_keyCode<<" ("<<m_RepeatCount <<" repeats)";
			return ss.str();
		}

		EVENT_CLASS_TYPE(KeyPressed);
	private:
		int m_RepeatCount;
	};

	class HAZEL_API KeyReleasedEvent : public KeyEvent
	{
	public:
		KeyReleasedEvent(int keyCode)
			:KeyEvent(keyCode){}

		std::string ToString()const override
		{
			std::stringstream ss;
			ss<<"KeyReleasedEvent "<<m_keyCode;
			return ss.str();
		}
		
		EVENT_CLASS_TYPE(KeyReleased);
	};

	class KeyTypedEvent : public KeyEvent
	{
	public:
		KeyTypedEvent(int keycode)
			: KeyEvent(keycode) {}

		std::string ToString() const override
		{
			std::stringstream ss;
			ss << "KeyTypedEvent: " << m_keyCode;
			return ss.str();
		}

		EVENT_CLASS_TYPE(KeyTyped)
	};
};