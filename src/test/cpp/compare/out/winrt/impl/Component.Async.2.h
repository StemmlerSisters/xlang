﻿// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.000000.0
#ifndef WINRT_Component_Async_2_H
#define WINRT_Component_Async_2_H
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Component.Async.1.h"
namespace winrt::Component::Async
{
    struct Class
    {
        Class() = delete;
        static Windows::Foundation::IAsyncAction Action();
        static Windows::Foundation::IAsyncActionWithProgress<int32_t> ActionWithProgress();
        static Windows::Foundation::IAsyncOperation<hstring> Operation();
        static Windows::Foundation::IAsyncOperationWithProgress<hstring, int32_t> OperationWithProgress();
    };
}
#endif
