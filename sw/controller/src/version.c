#include "version.h"


#define VERSION_API_USB     (1)
#define VERSION_API_N64     (1)


uint32_t version_api (version_api_type_t type) {
    switch (type) {
        case API_USB:
            return VERSION_API_USB;
        case API_N64:
            return VERSION_API_N64;
        default:
            return 0;
    }
}
