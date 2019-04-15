#pragma once

#ifdef MF_PLATFORM_WINDOWS

extern Manifold::Application* Manifold::CreateApplication();

int main(int argc, char** argv) 
{
	printf("Manifold Engine Online\n");
	auto app = Manifold::CreateApplication();
	app->Run();
	delete app;
}
#endif //MF_PLATFORM_WINDOWS