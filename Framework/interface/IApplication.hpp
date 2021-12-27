#include"Interface.hpp"
#include"IRuntimeModule.hpp"

namespace My{
    //用于不同平台的实现的抽象画
    Interface IApplication:implements IRuntimeModule
    {
        public:
        virtual int Initialize()=0;
        virtual void Finalize()=0;
        virtual void Tick()=0;
        virtual bool IsQuit()=0;//退出
    };
}