#include<Ultra.h>

class Sandbox :public Ultra::Application
{
public:
	Sandbox() {

	}
	~Sandbox() {

	}
};

Ultra::Application* Ultra::CreateApplication()
{
	return new Sandbox();
}