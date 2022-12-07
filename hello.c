#include "logger.h"

int main()
{
    LOG_TRACE("trace\n");
    LOG_DEBUG("debug\n");
    LOG_INFO("info\n");
    LOG_WARN("warn\n");
    LOG_ERROR("error\n");
    LOG_CRITICAL("critical\n");
    return 0;
}
