#include "TestCtrl.h"
void TestCtrl::asyncHandleHttpRequest(const HttpRequestPtr& req, std::function<void (const HttpResponsePtr &)> &&callback)
{

    auto resp = HttpResponse::newHttpResponse();  // 新しいレスポンスインスタンスを生成
    resp->setStatusCode(k200OK);            // HTTPステータスコード 200に設定
    resp->setContentTypeCode(CT_TEXT_HTML); // Header: Content typeをHTMLにする
    resp->setBody("<h1>Hello World!</h1>"); // Body:
    callback(resp);
    //write your application logic here
}
