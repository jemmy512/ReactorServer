/*
 * Created by Jemmy on 2018/7/11.
 *
 */

#ifndef PROJECT_HTTPRESPONSE_H
#define PROJECT_HTTPRESPONSE_H

#include "CommonUtil.h"
#include "HttpContext.h"

class HttpResponse {
public:
    explicit HttpResponse(bool close);

    void setCloseConnection(bool on) { closeConnection_ = on; };
    void setResponseCode(const std::string &code) { responseCode_ = code; }
    void setVersion (const std::string &v) { version_ = v; }
    void setResposneMsg(const std::string &m) { responseMsg_ = m; }
    void addHeader(const std::string &key, const std::string &value) {
        headers_[key] = value;
    }
    void addHeaders(const std::map<std::string, std::string> &map) {
        headers_ = map;
    }
    bool isCloseConnection() { return closeConnection_; }

    const std::string toStting();
    void setBody(const std::string &&str) {
        body_.assign(str);
    }
    std::string &getBody() {
        return body_;
    }

private:
    std::string     version_;
    std::string     responseCode_;
    std::string     responseMsg_;
    std::map<std::string, std::string> headers_;
    std::string     body_;
    bool            closeConnection_;
};

#endif //PROJECT_HTTPRESPONSE_H