#pragma once

//govno//->
 GLFWmonitor* primaryMonitor ;
const GLFWvidmode* videoMode ;
 int32_t width;
 int32_t height;
 //
 GLFWwindow* window;
  int32_t windowLeft ;
  int32_t windowTop ;
//
int init_proc()
{

    //start_proc->
    if (!glfwInit())
    {
        std::cout << "ERR_GLFW_INIT\n";
        return -1;
    }

    primaryMonitor = glfwGetPrimaryMonitor();
     videoMode = glfwGetVideoMode(primaryMonitor);
    width = static_cast<int32_t>(videoMode->width * 0.9f);
   height = static_cast<int32_t>(videoMode->height * 0.9f);

    glfwWindowHint(GLFW_SCALE_TO_MONITOR, GLFW_FALSE);
    glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
   window = glfwCreateWindow(
        width,
        height,
        "SALTY_DX_PORN_ANAL",
        nullptr,
        nullptr);
    if (window == nullptr)
    {
        std::cout << "GLFW:POZOR\n";
        glfwTerminate();
        return -1;
    }

    const int32_t windowLeft = videoMode->width / 2 - width / 2;
    const int32_t windowTop = videoMode->height / 2 - height / 2;
    glfwSetWindowPos(window, windowLeft, windowTop);



}//end_proc