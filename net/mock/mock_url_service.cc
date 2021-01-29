#include "net/mock/mock_url_service.h"
#include "url/gurl.h"

namespace net {

MockURLService::MockURLService() {}

MockURLService::~MockURLService() {}

GURL MockURLService::GetMock(const GURL& url) {
  if (url.spec().find(
          "//www.baidu.com/img/PCtm_d9c8750bed0b3c7d089fa7d55720d6cf.png") !=
      std::string::npos) {
    return GURL("https://img-bss.csdnimg.cn/1611628327672.png");
  }
  return url;
}

}  // namespace net