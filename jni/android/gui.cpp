#include "gui.h"

using namespace android;

sp<Surface> SurfaceControl::getSurface() const { return sp<Surface>(); }

SurfaceComposerClient::SurfaceComposerClient() {}
SurfaceComposerClient::~SurfaceComposerClient() {}
sp<IBinder> SurfaceComposerClient::getInternalDisplayToken() { return sp<IBinder>(); }
status_t SurfaceComposerClient::getDisplayConfigs(const sp<IBinder> & display, Vector<DisplayInfo> *infos) { return 0; }
