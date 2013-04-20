/**
 *
 * MACHINE GENERATED FILE. DO NOT EDIT.
 *
 * Bindings for class ofConsoleLoggerChannel
 *
 * This file has been generated by dub 2.1.~.
 */
#include "dub/dub.h"
#include "utils/ofLog.h"


/** Cast (class_name)
 * 
 */
static int ofConsoleLoggerChannel__cast_(lua_State *L) {

  ofConsoleLoggerChannel *self = *((ofConsoleLoggerChannel **)dub_checksdata_n(L, 1, "ofConsoleLoggerChannel"));
  const char *key = luaL_checkstring(L, 2);
  void **retval__ = (void**)lua_newuserdata(L, sizeof(void*));
  int key_h = dub_hash(key, 2);
  switch(key_h) {
    case 1: {
      if (DUB_ASSERT_KEY(key, "ofBaseLoggerChannel")) break;
      *retval__ = static_cast<ofBaseLoggerChannel *>(self);
      return 1;
    }
  }
  return 0;
}

/** ofConsoleLoggerChannel()
 * 
 */
static int ofConsoleLoggerChannel_ofConsoleLoggerChannel(lua_State *L) {
  try {
    ofConsoleLoggerChannel *retval__ = new ofConsoleLoggerChannel();
    dub_pushudata(L, retval__, "ofConsoleLoggerChannel", true);
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "new: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "new: Unknown exception");
  }
  return dub_error(L);
}

/** virtual ofConsoleLoggerChannel::~ofConsoleLoggerChannel()
 * api/openFrameworks/utils/ofLog.h:155
 */
static int ofConsoleLoggerChannel__ofConsoleLoggerChannel(lua_State *L) {
  try {
    DubUserdata *userdata = ((DubUserdata*)dub_checksdata_d(L, 1, "ofConsoleLoggerChannel"));
    if (userdata->gc) {
      ofConsoleLoggerChannel *self = (ofConsoleLoggerChannel *)userdata->ptr;
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

/** void ofConsoleLoggerChannel::log(ofLogLevel level, const string &module, const string &message)
 * api/openFrameworks/utils/ofLog.h:156
 */
static int ofConsoleLoggerChannel_log(lua_State *L) {
  try {
    ofConsoleLoggerChannel *self = *((ofConsoleLoggerChannel **)dub_checksdata(L, 1, "ofConsoleLoggerChannel"));
    int top__ = lua_gettop(L);
    if (top__ >= 5) {
      ofLogLevel logLevel = (ofLogLevel)dub_checkint(L, 2);
      size_t module_sz_;
      const char *module = dub_checklstring(L, 3, &module_sz_);
      const char *format = dub_checkstring(L, 4);
      va_list *args = *((va_list **)dub_checksdata(L, 5, "va_list"));
      self->log(logLevel, std::string(module, module_sz_), format, *args);
      return 0;
    } else {
      ofLogLevel level = (ofLogLevel)dub_checkint(L, 2);
      size_t module_sz_;
      const char *module = dub_checklstring(L, 3, &module_sz_);
      size_t message_sz_;
      const char *message = dub_checklstring(L, 4, &message_sz_);
      self->log(level, std::string(module, module_sz_), std::string(message, message_sz_));
      return 0;
    }
  } catch (std::exception &e) {
    lua_pushfstring(L, "log: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "log: Unknown exception");
  }
  return dub_error(L);
}



// --=============================================== __tostring
static int ofConsoleLoggerChannel___tostring(lua_State *L) {
  ofConsoleLoggerChannel *self = *((ofConsoleLoggerChannel **)dub_checksdata_n(L, 1, "ofConsoleLoggerChannel"));
  lua_pushfstring(L, "ofConsoleLoggerChannel: %p", self);
  
  return 1;
}

// --=============================================== METHODS

static const struct luaL_Reg ofConsoleLoggerChannel_member_methods[] = {
  { "_cast_"       , ofConsoleLoggerChannel__cast_ },
  { "new"          , ofConsoleLoggerChannel_ofConsoleLoggerChannel },
  { "__gc"         , ofConsoleLoggerChannel__ofConsoleLoggerChannel },
  { "log"          , ofConsoleLoggerChannel_log },
  { "__tostring"   , ofConsoleLoggerChannel___tostring },
  { "deleted"      , dub_isDeleted        },
  { NULL, NULL},
};


extern "C" int luaopen_ofConsoleLoggerChannel(lua_State *L)
{
  // Create the metatable which will contain all the member methods
  luaL_newmetatable(L, "ofConsoleLoggerChannel");
  // <mt>

  // register member methods
  luaL_register(L, NULL, ofConsoleLoggerChannel_member_methods);
  // save meta-table in _G
  dub_register(L, "_G", "ofConsoleLoggerChannel", "ofConsoleLoggerChannel");
  // <mt>
  lua_pop(L, 1);
  return 0;
}
