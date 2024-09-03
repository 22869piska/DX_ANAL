
#include"start_init.hpp"

#define GLFW_EXPOSE_NATIVE_WIN32
#include <GLFW/glfw3native.h>

#include <DirectXMath.h>
#include <d3dcompiler.h>

#include <iostream>

#pragma comment(lib, "d3d11.lib")
#pragma comment(lib, "dxgi.lib")
#pragma comment(lib, "d3dcompiler.lib")
#pragma comment(lib, "winmm.lib")
#pragma comment(lib, "dxguid.lib")


//
//public:
_init::_init()
{

}
_init::~_init()
{

}
void _init::Run()
{
    if (!Initialize())
    {
        std::cout << "!_ERR_INIT_!" << std::endl;
        return;
    }

    while (!glfwWindowShouldClose(_window))
    {
        glfwPollEvents();
        Update();
        Render();
    }

}//endrun
//public::
bool _init::Load()
{



    return true;
}
void _init::Render()
{

}
void _init::Update()
{

}
void _init::Cleanup()
{
    glfwDestroyWindow(_window);
    glfwTerminate();
}
bool _init::Initialize()
{
    if (!glfwInit()) { std::cout << "err_init_glfw" << std::endl; return -1; }

    GLFWmonitor* primaryMonitor = glfwGetPrimaryMonitor();
    const GLFWvidmode* videoMode = glfwGetVideoMode(primaryMonitor);
    _width = static_cast<int32_t>(videoMode->width * 0.9f);
    _height = static_cast<int32_t>(videoMode->height * 0.9f);

    glfwWindowHint(GLFW_SCALE_TO_MONITOR, GLFW_FALSE);
    glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
    _window = glfwCreateWindow(
        _width,
        _height,
        "DX_ANAL",
        nullptr,
        nullptr);
    if (_window == nullptr)
    {
        std::cout << "GLFW: Unable to create window\n";
        glfwTerminate();
        return -1;
    }

    const int32_t windowLeft = videoMode->width / 2 - _width / 2;
    const int32_t windowTop = videoMode->height / 2 - _height / 2;
    glfwSetWindowPos(_window, windowLeft, windowTop);

}
//->dx
bool CreateSwapchainResources()
{




    return true;
}
void DestroySwapchainResources()
{

}