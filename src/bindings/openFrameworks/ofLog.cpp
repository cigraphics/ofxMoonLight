/**
 *
 * MACHINE GENERATED FILE. DO NOT EDIT.
 *
 * Bindings for class ofLog
 *
 * This file has been generated by dub 2.1.~.
 */
#include "dub/dub.h"
#include "api/openFrameworks/utils/ofLog.h"


/** ofLog::ofLog()
 * api/openFrameworks/utils/ofLog.h:58
 */
static int ofLog_ofLog(lua_State *L) {
  try {
    int top__ = lua_gettop(L);
    if (top__ >= 2) {
      ofLogLevel logLevel = (ofLogLevel)dub_checkint(L, 1);
      string *message = *((string **)dub_checksdata(L, 2, "string"));
      ofLog *retval__ = new ofLog(logLevel, *message);
      dub_pushudata(L, retval__, "ofLog", true);
      return 1;
    } else if (top__ >= 1) {
      ofLogLevel logLevel = (ofLogLevel)dub_checkint(L, 1);
      ofLog *retval__ = new ofLog(logLevel);
      dub_pushudata(L, retval__, "ofLog", true);
      return 1;
    } else {
      ofLog *retval__ = new ofLog();
      dub_pushudata(L, retval__, "ofLog", true);
      return 1;
    }
  } catch (std::exception &e) {
    lua_pushfstring(L, "new: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "new: Unknown exception");
  }
  return dub_error(L);
}

/** virtual ofLog::~ofLog()
 * api/openFrameworks/utils/ofLog.h:68
 */
static int ofLog__ofLog(lua_State *L) {
  try {
    DubUserdata *userdata = ((DubUserdata*)dub_checksdata_d(L, 1, "ofLog"));
    if (userdata->gc) {
      ofLog *self = (ofLog *)userdata->ptr;
      delete self;
    }
    userdata->gc = false;
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "__gc: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "__gc: Unknown exception");
  }
  return dub_error(L);
}

/** static void ofLog::setAutoSpace(bool autoSpace)
 * api/openFrameworks/utils/ofLog.h:84
 */
static int ofLog_setAutoSpace(lua_State *L) {
  try {
    bool autoSpace = dub_checkboolean(L, 1);
    ofLog::setAutoSpace(autoSpace);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "setAutoSpace: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "setAutoSpace: Unknown exception");
  }
  return dub_error(L);
}

/** static void ofLog::setChannel(ofPtr< ofBaseLoggerChannel > channel)
 * api/openFrameworks/utils/ofLog.h:87
 */
static int ofLog_setChannel(lua_State *L) {
  try {
    ofPtr < ofBaseLoggerChannel > *channel = *((ofPtr < ofBaseLoggerChannel > **)dub_checksdata(L, 1, "ofPtr < ofBaseLoggerChannel >"));
    ofLog::setChannel(*channel);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "setChannel: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "setChannel: Unknown exception");
  }
  return dub_error(L);
}



// --=============================================== __tostring
static int ofLog___tostring(lua_State *L) {
  ofLog *self = *((ofLog **)dub_checksdata_n(L, 1, "ofLog"));
  lua_pushfstring(L, "ofLog: %p", self);
  
  return 1;
}

// --=============================================== METHODS

static const struct luaL_Reg ofLog_member_methods[] = {
  { "new"          , ofLog_ofLog          },
  { "__gc"         , ofLog__ofLog         },
  { "setAutoSpace" , ofLog_setAutoSpace   },
  { "setChannel"   , ofLog_setChannel     },
  { "__tostring"   , ofLog___tostring     },
  { "deleted"      , dub_isDeleted        },
  { NULL, NULL},
};


extern "C" int luaopen_ofLog(lua_State *L)
{
  // Create the metatable which will contain all the member methods
  luaL_newmetatable(L, "ofLog");
  // <mt>

  // register member methods
  luaL_register(L, NULL, ofLog_member_methods);
  // save meta-table in _G
  dub_register(L, "_G", "ofLog", "ofLog");
  // <mt>
  lua_pop(L, 1);
  return 0;
}
