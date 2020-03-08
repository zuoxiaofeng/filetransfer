#include "FiletransferInterface.hpp"

class SftpFiletransfer : public FiletransferInterface
{
public:
    virtual int ListDir(std::vector<std::string>& filelist)                                                                                          = 0;
    virtual int Download(const std::string& from, const std::string& to, std::shared_ptr<ProgressCallbackFunctorInterface> progress_callback = NULL) = 0;
    virtual int Upload(const std::string& from, const std::string& to, std::shared_ptr<ProgressCallbackFunctorInterface> progress_callback = NULL)   = 0;
    virtual int Remove(const std::string& remotpath)                                                                                                 = 0;
private:
};