#include "GL/glew.h"
#include "GLFW/glfw3.h"
#include <iostream>

int main()
{
	glfwInit();
	glewInit();
	
	GLFWwindow* window = glfwCreateWindow(800, 600, "Minecraft Experiment", nullptr, nullptr);
	glfwMakeContextCurrent(window);
	
	while (true)
	{
		glfwPollEvents();

		glClearColor(1.f, 0.f, 0.f, 1.f);
		glClear(GL_COLOR_BUFFER_BIT);
		glfwSwapBuffers(window);

		if (glfwWindowShouldClose(window))
		{
			glfwDestroyWindow(window);
			glfwTerminate();
			break;
		}
	}

	return 0;
}