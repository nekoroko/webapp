#include "demo_v1_User.h"
using namespace demo::v1;
//add definition of your processing function here
 
void User::getInfo(const HttpRequestPtr &req,  // 必須
                   std::function<void (const HttpResponsePtr &)> &&callback,  // 必須
                   std::string userId  // URLパラメータ
                   ) const
{
    // LOG_DEBUGでコンソール上に、「いつ」「どの関数で」「どのファイルで」呼び出されたかが表示される
    LOG_DEBUG<<"User "<<userId<<" get his information";
 
    // ~~本来であればここでトークンを参照したり、データベースからユーザIDをもとにデータを取得する処理が入る~~
 
    Json::Value ret;    // JSONインスタンス
 
    // JSONにデータを格納
    ret["result"]="ok";
    ret["user_name"]="Jack";
    ret["user_id"]=userId;
    ret["gender"]=1;
 
    auto resp=HttpResponse::newHttpJsonResponse(ret);
    callback(resp);
}
