#pragma once
#include <drogon/HttpSimpleController.h>
using namespace drogon;
class ListParaCtrl:public drogon::HttpSimpleController<ListParaCtrl>
{
  public:

    virtual void asyncHandleHttpRequest(const HttpRequestPtr& req, std::function<void (const HttpResponsePtr &)> &&callback) override;
    PATH_LIST_BEGIN
 
    PATH_ADD("/listpara", Get);
 
    PATH_LIST_END

};
