/**********************************************************\

  Auto-generated hiKinect.h

  This file contains the auto-generated main plugin object
  implementation for the hiKinect project

\**********************************************************/
#ifndef H_hiKinectPLUGIN
#define H_hiKinectPLUGIN

#include "PluginWindow.h"
#include "PluginEvents/MouseEvents.h"
#include "PluginEvents/AttachedEvent.h"
#include <XnCppWrapper.h>

#include "PluginCore.h"


FB_FORWARD_PTR(hiKinect)
class hiKinect : public FB::PluginCore {
 private:
  xn::Context context;
 public:
  const FB::JSObjectPtr *callbackPtr;
  static void StaticInitialize();
  static void StaticDeinitialize();

 public:
  hiKinect();
  virtual ~hiKinect();

 public:
  void onPluginReady();
  void shutdown();
  virtual FB::JSAPIPtr createJSAPI();
  // If you want your plugin to always be windowless, set this to true
  // If you want your plugin to be optionally windowless based on the
  // value of the "windowless" param tag, remove this method or return
  // FB::PluginCore::isWindowless()
  virtual bool isWindowless() { return false; }

  BEGIN_PLUGIN_EVENT_MAP()
      EVENTTYPE_CASE(FB::MouseDownEvent, onMouseDown, FB::PluginWindow)
      EVENTTYPE_CASE(FB::MouseUpEvent, onMouseUp, FB::PluginWindow)
      EVENTTYPE_CASE(FB::MouseMoveEvent, onMouseMove, FB::PluginWindow)
      EVENTTYPE_CASE(FB::MouseMoveEvent, onMouseMove, FB::PluginWindow)
      EVENTTYPE_CASE(FB::AttachedEvent, onWindowAttached, FB::PluginWindow)
      EVENTTYPE_CASE(FB::DetachedEvent, onWindowDetached, FB::PluginWindow)
      END_PLUGIN_EVENT_MAP()

      /** BEGIN EVENTDEF -- DON'T CHANGE THIS LINE **/
      virtual bool onMouseDown(FB::MouseDownEvent *evt, FB::PluginWindow *);
  virtual bool onMouseUp(FB::MouseUpEvent *evt, FB::PluginWindow *);
  virtual bool onMouseMove(FB::MouseMoveEvent *evt, FB::PluginWindow *);
  virtual bool onWindowAttached(FB::AttachedEvent *evt, FB::PluginWindow *);
  virtual bool onWindowDetached(FB::DetachedEvent *evt, FB::PluginWindow *);
  /** END EVENTDEF -- DON'T CHANGE THIS LINE **/
  XnStatus init(const FB::JSObjectPtr &callback);
  XnUserID getTrackedUserID();
  void contextShutdown();
  void contextWaitAndUpdateAll();
  void getPosition(XnSkeletonJoint joint, XnSkeletonJointPosition &pos);
};


#endif


