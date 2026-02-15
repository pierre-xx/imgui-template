#pragma once
#include <windows.h>

class Renderer {
public:
	bool init();
	void begin(); /* begin frame */
	void end();
	void shutdown();
	bool running();

	HWND getHwnd() { return this->hwnd; }
	float getDpi() { return this->dpiScale; }

	~Renderer() { shutdown(); }
private:
	HWND hwnd = nullptr;
	float dpiScale;
	WNDCLASSEXW wc;
};