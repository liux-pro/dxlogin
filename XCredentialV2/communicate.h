#pragma once

#include "httplib.hpp"

DWORD WINAPI httpd(__in LPVOID lpParameter)
{
    httplib::Server svr;

    svr.Get("/hi", [](const auto&, auto& res) {
        res.set_content("Hello World!", "text/plain");
        });

    svr.listen("0.0.0.0", 8080);

    return 0;
}

HANDLE create_httpd() {
    return  CreateThread(NULL, 0, httpd, NULL, 0, NULL);
}

