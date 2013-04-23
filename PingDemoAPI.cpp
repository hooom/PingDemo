/**********************************************************\

  Auto-generated PingDemoAPI.cpp

\**********************************************************/

#include "JSObject.h"
#include "variant_list.h"
#include "DOM/Document.h"
#include "global/config.h"

#include "PingDemoAPI.h"

///////////////////////////////////////////////////////////////////////////////
/// @fn FB::variant PingDemoAPI::echo(const FB::variant& msg)
///
/// @brief  Echos whatever is passed from Javascript.
///         Go ahead and change it. See what happens!
///////////////////////////////////////////////////////////////////////////////
FB::variant PingDemoAPI::echo(const FB::variant& msg)
{
    static int n(0);
    fire_echo("So far, you clicked this many times: ", n++);

    // return "foobar";
    return msg;
}

///////////////////////////////////////////////////////////////////////////////
/// @fn PingDemoPtr PingDemoAPI::getPlugin()
///
/// @brief  Gets a reference to the plugin that was passed in when the object
///         was created.  If the plugin has already been released then this
///         will throw a FB::script_error that will be translated into a
///         javascript exception in the page.
///////////////////////////////////////////////////////////////////////////////
PingDemoPtr PingDemoAPI::getPlugin()
{
    PingDemoPtr plugin(m_plugin.lock());
    if (!plugin) {
        throw FB::script_error("The plugin is invalid");
    }
    return plugin;
}

// Read/Write property testString
std::string PingDemoAPI::get_testString()
{
    return m_testString;
}

void PingDemoAPI::set_testString(const std::string& val)
{
    m_testString = val;
}

// Read-only property version
std::string PingDemoAPI::get_version()
{
    return FBSTRING_PLUGIN_VERSION;
}

void PingDemoAPI::testEvent()
{
    fire_test();
}


void PingDemoAPI::executeCMD(const char *cmd, char *result)
{
    char buf_ps[1024];
    char ps[1024]={0};
    FILE *ptr;
    strcpy(ps, cmd);
    if((ptr=popen(ps, "r"))!=NULL)
    {
        while(fgets(buf_ps, 1024, ptr)!=NULL)
        {
           strcat(result, buf_ps);
           if(strlen(result)>1024)
               break;
        }
        pclose(ptr);
        ptr = NULL;
    }
    else
    {
        printf("popen %s error\n", ps);
    }
}

std::string PingDemoAPI::mainPing()
{
    char result[1024];
    executeCMD( "ping -c 2 www.icir.org | awk '{print $0}'", result);
    //printf("%s", result );
    return result;
}


