#pragma once
#include "IApplication.hpp"
namespace My
{//实现类，
    class BaseApplication : implements IApplication
    {
    public:
        virtual int Initialize();
        virtual void Finalize();
        virtual void Tick();
        virtual bool IsQuit();
    protected:
        bool m_bQuit;//记录程序是否退出
    };
}