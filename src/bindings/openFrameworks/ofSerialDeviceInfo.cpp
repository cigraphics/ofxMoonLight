/**
 *
 * MACHINE GENERATED FILE. DO NOT EDIT.
 *
 * Bindings for class ofSerialDeviceInfo
 *
 * This file has been generated by dub 2.1.~.
 */
#include "dub/dub.h"
#include "api/openFrameworks/types/ofTypes.h"


/** ~ofSerialDeviceInfo()
 * 
 */
static int ofSerialDeviceInfo__ofSerialDeviceInfo(lua_State *L) {
  try {
    DubUserdata *userdata = ((DubUserdata*)dub_checksdata_d(L, 1, "ofSerialDeviceInfo"));
    if (userdata->gc) {
      ofSerialDeviceInfo *self = (ofSerialDeviceInfo *)userdata->ptr;
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

/** ofSerialDeviceInfo::ofSerialDeviceInfo(string devicePathIn, string deviceNameIn, int deviceIDIn)
 * api/openFrameworks/types/ofTypes.h:15
 */
static int ofSerialDeviceInfo_ofSerialDeviceInfo(lua_State *L) {
  try {
    int top__ = lua_gettop(L);
    if (top__ >= 3) {
      string *devicePathIn = *((string **)dub_checksdata(L, 1, "string"));
      string *deviceNameIn = *((string **)dub_checksdata(L, 2, "string"));
      int deviceIDIn = dub_checkint(L, 3);
      ofSerialDeviceInfo *retval__ = new ofSerialDeviceInfo(*devicePathIn, *deviceNameIn, deviceIDIn);
      dub_pushudata(L, retval__, "ofSerialDeviceInfo", true);
      return 1;
    } else {
      ofSerialDeviceInfo *retval__ = new ofSerialDeviceInfo();
      dub_pushudata(L, retval__, "ofSerialDeviceInfo", true);
      return 1;
    }
  } catch (std::exception &e) {
    lua_pushfstring(L, "new: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "new: Unknown exception");
  }
  return dub_error(L);
}

/** string ofSerialDeviceInfo::getDevicePath()
 * api/openFrameworks/types/ofTypes.h:19
 */
static int ofSerialDeviceInfo_getDevicePath(lua_State *L) {
  try {
    ofSerialDeviceInfo *self = *((ofSerialDeviceInfo **)dub_checksdata(L, 1, "ofSerialDeviceInfo"));
    dub_pushudata(L, new string(self->getDevicePath()), "string", true);
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "getDevicePath: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "getDevicePath: Unknown exception");
  }
  return dub_error(L);
}

/** string ofSerialDeviceInfo::getDeviceName()
 * api/openFrameworks/types/ofTypes.h:21
 */
static int ofSerialDeviceInfo_getDeviceName(lua_State *L) {
  try {
    ofSerialDeviceInfo *self = *((ofSerialDeviceInfo **)dub_checksdata(L, 1, "ofSerialDeviceInfo"));
    dub_pushudata(L, new string(self->getDeviceName()), "string", true);
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "getDeviceName: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "getDeviceName: Unknown exception");
  }
  return dub_error(L);
}

/** int ofSerialDeviceInfo::getDeviceID()
 * api/openFrameworks/types/ofTypes.h:23
 */
static int ofSerialDeviceInfo_getDeviceID(lua_State *L) {
  try {
    ofSerialDeviceInfo *self = *((ofSerialDeviceInfo **)dub_checksdata(L, 1, "ofSerialDeviceInfo"));
    lua_pushnumber(L, self->getDeviceID());
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "getDeviceID: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "getDeviceID: Unknown exception");
  }
  return dub_error(L);
}



// --=============================================== __tostring
static int ofSerialDeviceInfo___tostring(lua_State *L) {
  ofSerialDeviceInfo *self = *((ofSerialDeviceInfo **)dub_checksdata_n(L, 1, "ofSerialDeviceInfo"));
  lua_pushfstring(L, "ofSerialDeviceInfo: %p", self);
  
  return 1;
}

// --=============================================== METHODS

static const struct luaL_Reg ofSerialDeviceInfo_member_methods[] = {
  { "__gc"         , ofSerialDeviceInfo__ofSerialDeviceInfo },
  { "new"          , ofSerialDeviceInfo_ofSerialDeviceInfo },
  { "getDevicePath", ofSerialDeviceInfo_getDevicePath },
  { "getDeviceName", ofSerialDeviceInfo_getDeviceName },
  { "getDeviceID"  , ofSerialDeviceInfo_getDeviceID },
  { "__tostring"   , ofSerialDeviceInfo___tostring },
  { "deleted"      , dub_isDeleted        },
  { NULL, NULL},
};


extern "C" int luaopen_ofSerialDeviceInfo(lua_State *L)
{
  // Create the metatable which will contain all the member methods
  luaL_newmetatable(L, "ofSerialDeviceInfo");
  // <mt>

  // register member methods
  luaL_register(L, NULL, ofSerialDeviceInfo_member_methods);
  // save meta-table in _G
  dub_register(L, "_G", "ofSerialDeviceInfo", "ofSerialDeviceInfo");
  // <mt>
  lua_pop(L, 1);
  return 0;
}
