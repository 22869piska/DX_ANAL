#pragma once
#ifndef pidr
#define pidr
pidr

#include <string>
#include <iostream>
#include <GLFW/glfw3.h>

//

#include <d3d11.h>
#include <dxgi1_3.h>
#include <wrl.h>

//

struct GLFWwindow;

class _init
{
public:
   _init();
   ~_init();
    void Run();

private:
    void Cleanup();
    bool Initialize();
    bool Load() ;
     void Render() ;
     void Update() ;

public:
    //
    template <typename T>
    using ComPtr = Microsoft::WRL::ComPtr<T>;
    bool CreateSwapchainResources();
    void DestroySwapchainResources();

    ComPtr<ID3D11Device> _device = nullptr;
    ComPtr<ID3D11DeviceContext> _deviceContext = nullptr;
    ComPtr<IDXGIFactory2> _dxgiFactory = nullptr;
    ComPtr<IDXGISwapChain1> _swapChain = nullptr;
    ComPtr<ID3D11RenderTargetView> _renderTarget = nullptr;
    //
    GLFWwindow* _window = nullptr;
    int32_t _width = 0;
    int32_t _height = 0;
   
};
#endif