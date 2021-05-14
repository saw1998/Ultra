#pragma once

#include "Core.h"

namespace Ultra {

	class ULTRA_API Application
	{
	public:
		
		void Run();
	};
	
	//To be defined in the CLIENT
	Application* CreateApplication();

}
