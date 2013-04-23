/**********************************************************\

  Auto-generated PingDemoAPI.h

\**********************************************************/

#include <string>
#include <sstream>
#include <boost/weak_ptr.hpp>
#include "JSAPIAuto.h"
#include "BrowserHost.h"
#include "PingDemo.h"

#ifndef H_PingDemoAPI
#define H_PingDemoAPI

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <signal.h>
#include <sys/select.h>
#include <arpa/inet.h>
#include <sys/types.h>
#include <sys/time.h>
#include <unistd.h>
#include <netinet/in.h>
#include <netinet/ip.h>
#include <netdb.h>
#include <errno.h>

#include <vector>
#define PACKET_SIZE     4096
#define MAX_WAIT_TIME   5
#define MAX_NO_PACKETS  3



class PingDemoAPI : public FB::JSAPIAuto
{
public:
    ////////////////////////////////////////////////////////////////////////////
    /// @fn PingDemoAPI::PingDemoAPI(const PingDemoPtr& plugin, const FB::BrowserHostPtr host)
    ///
    /// @brief  Constructor for your JSAPI object.
    ///         You should register your methods, properties, and events
    ///         that should be accessible to Javascript from here.
    ///
    /// @see FB::JSAPIAuto::registerMethod
    /// @see FB::JSAPIAuto::registerProperty
    /// @see FB::JSAPIAuto::registerEvent
    ////////////////////////////////////////////////////////////////////////////
    PingDemoAPI(const PingDemoPtr& plugin, const FB::BrowserHostPtr& host) :
        m_plugin(plugin), m_host(host)
    {
        registerMethod("echo",      make_method(this, &PingDemoAPI::echo));
        registerMethod("testEvent", make_method(this, &PingDemoAPI::testEvent));
	    registerMethod("mainPing", make_method(this, &PingDemoAPI::mainPing));
        
        // Read-write property
        registerProperty("testString",
                         make_property(this,
                                       &PingDemoAPI::get_testString,
                                       &PingDemoAPI::set_testString));
        
        // Read-only property
        registerProperty("version",
                         make_property(this,
                                       &PingDemoAPI::get_version));
    

    }

    ///////////////////////////////////////////////////////////////////////////////
    /// @fn PingDemoAPI::~PingDemoAPI()
    ///
    /// @brief  Destructor.  Remember that this object will not be released until
    ///         the browser is done with it; this will almost definitely be after
    ///         the plugin is released.
    ///////////////////////////////////////////////////////////////////////////////
    virtual ~PingDemoAPI() {};

    PingDemoPtr getPlugin();

    // Read/Write property ${PROPERTY.ident}
    std::string get_testString();
    void set_testString(const std::string& val);

    // Read-only property ${PROPERTY.ident}
    std::string get_version();

    // Method echo
    FB::variant echo(const FB::variant& msg);
    
    // Event helpers
    FB_JSAPI_EVENT(test, 0, ());
    FB_JSAPI_EVENT(echo, 2, (const FB::variant&, const int));

    // Method test-event
    void testEvent();

    //Method ping add
    PingDemoAPI();
    void executeCMD(const char *cmd, char *result);
    std::string mainPing();

private:
    PingDemoWeakPtr m_plugin;
    FB::BrowserHostPtr m_host;
    std::string m_testString;

};

#endif // H_PingDemoAPI

