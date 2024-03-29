/**********************************************************\

  Auto-generated hiKinectAPI.h

\**********************************************************/

#include <string>
#include <sstream>
#include <boost/weak_ptr.hpp>
#include "JSAPIAuto.h"
#include "BrowserHost.h"
#include "hiKinect.h"

#ifndef H_hiKinectAPI
#define H_hiKinectAPI

class hiKinectAPI : public FB::JSAPIAuto {
 public:
  hiKinectAPI(const hiKinectPtr& plugin, const FB::BrowserHostPtr& host);
  virtual ~hiKinectAPI();

  hiKinectPtr getPlugin();

  // Read/Write property ${PROPERTY.ident}
  std::string get_testString();
  void set_testString(const std::string& val);

  // Read-only property ${PROPERTY.ident}
  std::string get_version();

  // Method echo
  FB::variant echo(const FB::variant& msg);

  // Event helpers
  FB_JSAPI_EVENT(fired, 3, (const FB::variant&, bool, int));
  FB_JSAPI_EVENT(echo, 2, (const FB::variant&, const int));
  FB_JSAPI_EVENT(notify, 0, ());

  bool init(const FB::JSObjectPtr &callback);

  void contextShutdown();
  void contextWaitAndUpdateAll();
  FB::VariantMap getPosition(XnSkeletonJoint joint, FB::VariantMap &map);
  FB::VariantMap getSkeleton();
 private:
  hiKinectWeakPtr m_plugin;
  FB::BrowserHostPtr m_host;

  std::string m_testString;
  void init_thread(const FB::JSObjectPtr &callback);
};

#endif // H_hiKinectAPI

