

#include <GLFW/glfw3.h>
//
#include <cstdint>
#include <iostream>
//
#include"start_init.h"
//
int main(int argc, char* argv[])
{
    init_proc();
    while (!glfwWindowShouldClose(window))
    {
        glfwPollEvents();
        // future update code
        // future render code
    }

    glfwDestroyWindow(window);
    glfwTerminate();
    return 0;
}