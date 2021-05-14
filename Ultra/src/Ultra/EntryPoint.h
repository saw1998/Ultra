#pragma once

#ifdef UT_PLATFORM_WINDOWS

extern Ultra::Application* Ultra::CreateApplication();

int main(int argc, char** argv) 
{
	printf("Ultra Endgine");
	auto* app = Ultra::CreateApplication(); 
	app->Run();
	delete app;
}


#endif