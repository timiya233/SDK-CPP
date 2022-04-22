// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class WebviewObserver {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WEBVIEWOBSERVER
public:
    class WebviewObserver& operator=(class WebviewObserver const &) = delete;
    WebviewObserver(class WebviewObserver const &) = delete;
    WebviewObserver() = delete;
#endif

public:
    /*0*/ virtual ~WebviewObserver();
    /*
    inline void onDownloadBegin(struct WebviewDownloadInfo const & a0){
        void (WebviewObserver::*rv)(struct WebviewDownloadInfo const &);
        *((void**)&rv) = dlsym("?onDownloadBegin@WebviewObserver@@UEAAXAEBUWebviewDownloadInfo@@@Z");
        return (this->*rv)(std::forward<struct WebviewDownloadInfo const &>(a0));
    }
    inline void onError(struct WebviewError const & a0){
        void (WebviewObserver::*rv)(struct WebviewError const &);
        *((void**)&rv) = dlsym("?onError@WebviewObserver@@UEAAXAEBUWebviewError@@@Z");
        return (this->*rv)(std::forward<struct WebviewError const &>(a0));
    }
    inline void onMessageRecieved(std::string const & a0){
        void (WebviewObserver::*rv)(std::string const &);
        *((void**)&rv) = dlsym("?onMessageRecieved@WebviewObserver@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
        return (this->*rv)(std::forward<std::string const &>(a0));
    }
    inline void onWebviewChanged(){
        void (WebviewObserver::*rv)();
        *((void**)&rv) = dlsym("?onWebviewChanged@WebviewObserver@@UEAAXXZ");
        return (this->*rv)();
    }
    inline void onDownloadCanceled(struct WebviewDownloadInfo const & a0){
        void (WebviewObserver::*rv)(struct WebviewDownloadInfo const &);
        *((void**)&rv) = dlsym("?onDownloadCanceled@WebviewObserver@@UEAAXAEBUWebviewDownloadInfo@@@Z");
        return (this->*rv)(std::forward<struct WebviewDownloadInfo const &>(a0));
    }
    inline void onDownloadUpdate(struct WebviewDownloadInfo const & a0){
        void (WebviewObserver::*rv)(struct WebviewDownloadInfo const &);
        *((void**)&rv) = dlsym("?onDownloadUpdate@WebviewObserver@@UEAAXAEBUWebviewDownloadInfo@@@Z");
        return (this->*rv)(std::forward<struct WebviewDownloadInfo const &>(a0));
    }
    inline void onDownloadComplete(struct WebviewDownloadInfo const & a0){
        void (WebviewObserver::*rv)(struct WebviewDownloadInfo const &);
        *((void**)&rv) = dlsym("?onDownloadComplete@WebviewObserver@@UEAAXAEBUWebviewDownloadInfo@@@Z");
        return (this->*rv)(std::forward<struct WebviewDownloadInfo const &>(a0));
    }
    inline void onLoadingBegin(){
        void (WebviewObserver::*rv)();
        *((void**)&rv) = dlsym("?onLoadingBegin@WebviewObserver@@UEAAXXZ");
        return (this->*rv)();
    }
    inline void onLoadingEnd(){
        void (WebviewObserver::*rv)();
        *((void**)&rv) = dlsym("?onLoadingEnd@WebviewObserver@@UEAAXXZ");
        return (this->*rv)();
    }
    inline  ~WebviewObserver(){
         (WebviewObserver::*rv)();
        *((void**)&rv) = dlsym("??1WebviewObserver@@UEAA@XZ");
        return (this->*rv)();
    }
    */

protected:

private:

};