#pragma once
#include "Interface.hpp"
namespace My{
Interface IRuntimeModule//运行模块
{
public:
    virtual ~IRuntimeModule(){};
    virtual int Initialize()=0;//初始化模块
    virtual void Finalize()=0;//模块结束清理
    virtual void Tick()=0;//执行模块
private:
};
}