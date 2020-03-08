#ifndef __FILETRANSFER_INTERFACE__
#define __FILETRANSFER_INTERFACE__
#include <memory>
#include <string>
#include <vector>

class ProgressCallbackFunctorInterface
{
public:
    virtual void operator()(size_t total, size_t now) = 0;
};

class FiletransferInterface
{
public:
    FiletransferInterface(){};
    virtual ~FiletransferInterface()                                                                                                                 = 0;
    virtual int ListDir(std::vector<std::string>& filelist)                                                                                          = 0;
    virtual int Download(const std::string& from, const std::string& to, std::shared_ptr<ProgressCallbackFunctorInterface> progress_callback = NULL) = 0;
    virtual int Upload(const std::string& from, const std::string& to, std::shared_ptr<ProgressCallbackFunctorInterface> progress_callback = NULL)   = 0;
    virtual int Remove(const std::string& remotpath)                                                                                                 = 0;
};

#endif