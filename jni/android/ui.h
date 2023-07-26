#ifndef __ANDROID_UI__
#define __ANDROID_UI__

namespace android::ui
{

using DisplayModeId = int32_t;

#include <utils/Flattenable.h>
#include <ui/DeviceProductInfo.h>
#include <ui/Rotation.h>
#include <ui/Size.h>



struct DisplayMode : LightFlattenable<DisplayMode> {
    DisplayModeId id;
    ui::Size resolution;
    float xDpi = 0;
    float yDpi = 0;


    float refreshRate = 0;
    nsecs_t appVsyncOffset = 0;
    nsecs_t sfVsyncOffset = 0;
    nsecs_t presentationDeadline = 0;
    int32_t group = -1;


    bool isFixedSize() const { return false; }
    size_t getFlattenedSize() const;
    status_t flatten(void* buffer, size_t size) const;
    status_t unflatten(const void* buffer, size_t size);
};

} // namespace android::ui

#endif /** __ANDROID_UI__ */