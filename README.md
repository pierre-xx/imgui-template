# imgui-template
a clean and minimal external dx11 imgui template

# usage
```cpp
#include <renderer.h>
#include <imgui.h>

int main() {
	Renderer renderer;
	if (!renderer.init()) return 1;

	bool show = true;
	while (renderer.running() && show) {
		renderer.begin();

		ImGui::Begin("imgui-template", &show, ImGuiWindowFlags_NoResize);
		ImGui::Text("hi!");
		ImGui::End();
		renderer.end();
	}
}
```

# credits
[Dear ImGui](https://github.com/ocornut/imgui)