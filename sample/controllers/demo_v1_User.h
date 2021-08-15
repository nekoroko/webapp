#pragma once
#include <drogon/HttpController.h>
using namespace drogon;
namespace demo
{
namespace v1
{
class User:public drogon::HttpController<User>
{

          public:
            METHOD_LIST_BEGIN
 
            // GETでアクセスされた場合、User::getInfo()に処理を投げる
            METHOD_ADD(User::getInfo,"/info/{1}",Get);
 
            METHOD_LIST_END
 
            // メソッドの宣言
            void getInfo(const HttpRequestPtr &req,
                         std::function<void (const HttpResponsePtr &)> &&callback,
                         std::string userId) const;
};
}
}
