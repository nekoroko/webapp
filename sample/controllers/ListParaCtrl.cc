#include "ListParaCtrl.h"
void ListParaCtrl::asyncHandleHttpRequest(const HttpRequestPtr& req, std::function<void (const HttpResponsePtr &)> &&callback)
{
// Viewに渡すデータを格納する
    HttpViewData data;
    data.insert("title", "list parameters");
    data.insert("parameters", 
            req->getParameters()  // Getパラメータはこのように取得
            );
    
    // ListParaView.cspというビューにデータを渡す (詳細は後述)
    auto res = drogon::HttpResponse::newHttpViewResponse("ListParaView.csp", data);
    callback(res);

    //write your application logic here
}
