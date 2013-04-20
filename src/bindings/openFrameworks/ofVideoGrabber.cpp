/**
 *
 * MACHINE GENERATED FILE. DO NOT EDIT.
 *
 * Bindings for class ofVideoGrabber
 *
 * This file has been generated by dub 2.1.~.
 */
#include "dub/dub.h"
#include "video/ofVideoGrabber.h"


/** Set attributes (key, value)
 * 
 */
static int ofVideoGrabber__set_(lua_State *L) {

  ofVideoGrabber *self = *((ofVideoGrabber **)dub_checksdata_n(L, 1, "ofVideoGrabber"));
  const char *key = luaL_checkstring(L, 2);
  int key_h = dub_hash(key, 2);
  switch(key_h) {
    case 1: {
      if (DUB_ASSERT_KEY(key, "height")) break;
      self->height = luaL_checkint(L, 3);
      return 0;
    }
    case 0: {
      if (DUB_ASSERT_KEY(key, "width")) break;
      self->width = luaL_checkint(L, 3);
      return 0;
    }
  }
  if (lua_istable(L, 1)) {
    lua_rawset(L, 1);
  } else {
    luaL_error(L, KEY_EXCEPTION_MSG, key);
  }
  return 0;
}

/** Get attributes (key)
 * 
 */
static int ofVideoGrabber__get_(lua_State *L) {

  ofVideoGrabber *self = *((ofVideoGrabber **)dub_checksdata_n(L, 1, "ofVideoGrabber", true));
  const char *key = luaL_checkstring(L, 2);
  // <self> "key" <mt>
  // rawget(mt, key)
  lua_pushvalue(L, 2);
  // <self> "key" <mt> "key"
  lua_rawget(L, -2);
  if (!lua_isnil(L, -1)) {
    // Found method.
    return 1;
  } else {
    // Not in mt = attribute access.
    lua_pop(L, 2);
  }
  int key_h = dub_hash(key, 2);
  switch(key_h) {
    case 1: {
      if (DUB_ASSERT_KEY(key, "height")) break;
      lua_pushnumber(L, self->height);
      return 1;
    }
    case 0: {
      if (DUB_ASSERT_KEY(key, "width")) break;
      lua_pushnumber(L, self->width);
      return 1;
    }
  }
  return 0;
}

/** Cast (class_name)
 * 
 */
static int ofVideoGrabber__cast_(lua_State *L) {

  ofVideoGrabber *self = *((ofVideoGrabber **)dub_checksdata_n(L, 1, "ofVideoGrabber"));
  const char *key = luaL_checkstring(L, 2);
  void **retval__ = (void**)lua_newuserdata(L, sizeof(void*));
  int key_h = dub_hash(key, 7);
  switch(key_h) {
    case 3: {
      if (DUB_ASSERT_KEY(key, "ofBaseVideoGrabber")) break;
      *retval__ = static_cast<ofBaseVideoGrabber *>(self);
      return 1;
    }
    case 5: {
      if (DUB_ASSERT_KEY(key, "ofBaseVideo")) break;
      *retval__ = static_cast<ofBaseVideo *>(self);
      return 1;
    }
    case 1: {
      if (DUB_ASSERT_KEY(key, "ofBaseUpdates")) break;
      *retval__ = static_cast<ofBaseUpdates *>(self);
      return 1;
    }
    case 6: {
      if (DUB_ASSERT_KEY(key, "ofBaseVideoDraws")) break;
      *retval__ = static_cast<ofBaseVideoDraws *>(self);
      return 1;
    }
  }
  return 0;
}

/** ofVideoGrabber::ofVideoGrabber()
 * api/openFrameworks/video/ofVideoGrabber.h:13
 */
static int ofVideoGrabber_ofVideoGrabber(lua_State *L) {
  try {
    ofVideoGrabber *retval__ = new ofVideoGrabber();
    dub_pushudata(L, retval__, "ofVideoGrabber", true);
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "new: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "new: Unknown exception");
  }
  return dub_error(L);
}

/** virtual ofVideoGrabber::~ofVideoGrabber()
 * api/openFrameworks/video/ofVideoGrabber.h:14
 */
static int ofVideoGrabber__ofVideoGrabber(lua_State *L) {
  try {
    DubUserdata *userdata = ((DubUserdata*)dub_checksdata_d(L, 1, "ofVideoGrabber"));
    if (userdata->gc) {
      ofVideoGrabber *self = (ofVideoGrabber *)userdata->ptr;
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

/** void ofVideoGrabber::setGrabber(ofPtr< ofBaseVideoGrabber > newGrabber)
 * api/openFrameworks/video/ofVideoGrabber.h:16
 */
static int ofVideoGrabber_setGrabber(lua_State *L) {
  try {
    ofVideoGrabber *self = *((ofVideoGrabber **)dub_checksdata(L, 1, "ofVideoGrabber"));
    ofPtr < ofBaseVideoGrabber > *newGrabber = *((ofPtr < ofBaseVideoGrabber > **)dub_checksdata(L, 2, "ofPtr < ofBaseVideoGrabber >"));
    self->setGrabber(*newGrabber);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "setGrabber: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "setGrabber: Unknown exception");
  }
  return dub_error(L);
}

/** ofPtr<ofBaseVideoGrabber> ofVideoGrabber::getGrabber()
 * api/openFrameworks/video/ofVideoGrabber.h:17
 */
static int ofVideoGrabber_getGrabber(lua_State *L) {
  try {
    ofVideoGrabber *self = *((ofVideoGrabber **)dub_checksdata(L, 1, "ofVideoGrabber"));
    dub_pushudata(L, new ofPtr < ofBaseVideoGrabber >(self->getGrabber()), "ofPtr < ofBaseVideoGrabber >", true);
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "getGrabber: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "getGrabber: Unknown exception");
  }
  return dub_error(L);
}

/** void ofVideoGrabber::listDevices()
 * api/openFrameworks/video/ofVideoGrabber.h:19
 */
static int ofVideoGrabber_listDevices(lua_State *L) {
  try {
    ofVideoGrabber *self = *((ofVideoGrabber **)dub_checksdata(L, 1, "ofVideoGrabber"));
    self->listDevices();
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "listDevices: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "listDevices: Unknown exception");
  }
  return dub_error(L);
}

/** bool ofVideoGrabber::isFrameNew()
 * api/openFrameworks/video/ofVideoGrabber.h:20
 */
static int ofVideoGrabber_isFrameNew(lua_State *L) {
  try {
    ofVideoGrabber *self = *((ofVideoGrabber **)dub_checksdata(L, 1, "ofVideoGrabber"));
    lua_pushboolean(L, self->isFrameNew());
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "isFrameNew: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "isFrameNew: Unknown exception");
  }
  return dub_error(L);
}

/** void ofVideoGrabber::update()
 * api/openFrameworks/video/ofVideoGrabber.h:21
 */
static int ofVideoGrabber_update(lua_State *L) {
  try {
    ofVideoGrabber *self = *((ofVideoGrabber **)dub_checksdata(L, 1, "ofVideoGrabber"));
    self->update();
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "update: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "update: Unknown exception");
  }
  return dub_error(L);
}

/** void ofVideoGrabber::close()
 * api/openFrameworks/video/ofVideoGrabber.h:23
 */
static int ofVideoGrabber_close(lua_State *L) {
  try {
    ofVideoGrabber *self = *((ofVideoGrabber **)dub_checksdata(L, 1, "ofVideoGrabber"));
    self->close();
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "close: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "close: Unknown exception");
  }
  return dub_error(L);
}

/** bool ofVideoGrabber::initGrabber(int w, int h)
 * api/openFrameworks/video/ofVideoGrabber.h:24
 */
static int ofVideoGrabber_initGrabber(lua_State *L) {
  try {
    ofVideoGrabber *self = *((ofVideoGrabber **)dub_checksdata(L, 1, "ofVideoGrabber"));
    int top__ = lua_gettop(L);
    if (top__ >= 4) {
      int w = dub_checkint(L, 2);
      int h = dub_checkint(L, 3);
      bool bTexture = dub_checkboolean(L, 4);
      lua_pushboolean(L, self->initGrabber(w, h, bTexture));
      return 1;
    } else {
      int w = dub_checkint(L, 2);
      int h = dub_checkint(L, 3);
      lua_pushboolean(L, self->initGrabber(w, h));
      return 1;
    }
  } catch (std::exception &e) {
    lua_pushfstring(L, "initGrabber: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "initGrabber: Unknown exception");
  }
  return dub_error(L);
}

/** bool ofVideoGrabber::setPixelFormat(ofPixelFormat pixelFormat)
 * api/openFrameworks/video/ofVideoGrabber.h:27
 */
static int ofVideoGrabber_setPixelFormat(lua_State *L) {
  try {
    ofVideoGrabber *self = *((ofVideoGrabber **)dub_checksdata(L, 1, "ofVideoGrabber"));
    ofPixelFormat pixelFormat = (ofPixelFormat)dub_checkint(L, 2);
    lua_pushboolean(L, self->setPixelFormat(pixelFormat));
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "setPixelFormat: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "setPixelFormat: Unknown exception");
  }
  return dub_error(L);
}

/** ofPixelFormat ofVideoGrabber::getPixelFormat()
 * api/openFrameworks/video/ofVideoGrabber.h:28
 */
static int ofVideoGrabber_getPixelFormat(lua_State *L) {
  try {
    ofVideoGrabber *self = *((ofVideoGrabber **)dub_checksdata(L, 1, "ofVideoGrabber"));
    lua_pushnumber(L, self->getPixelFormat());
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "getPixelFormat: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "getPixelFormat: Unknown exception");
  }
  return dub_error(L);
}

/** void ofVideoGrabber::videoSettings()
 * api/openFrameworks/video/ofVideoGrabber.h:30
 */
static int ofVideoGrabber_videoSettings(lua_State *L) {
  try {
    ofVideoGrabber *self = *((ofVideoGrabber **)dub_checksdata(L, 1, "ofVideoGrabber"));
    self->videoSettings();
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "videoSettings: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "videoSettings: Unknown exception");
  }
  return dub_error(L);
}

/** ofTexture& ofVideoGrabber::getTextureReference()
 * api/openFrameworks/video/ofVideoGrabber.h:33
 */
static int ofVideoGrabber_getTextureReference(lua_State *L) {
  try {
    ofVideoGrabber *self = *((ofVideoGrabber **)dub_checksdata(L, 1, "ofVideoGrabber"));
    dub_pushudata(L, &self->getTextureReference(), "ofTexture", false);
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "getTextureReference: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "getTextureReference: Unknown exception");
  }
  return dub_error(L);
}

/** void ofVideoGrabber::setVerbose(bool bTalkToMe)
 * api/openFrameworks/video/ofVideoGrabber.h:34
 */
static int ofVideoGrabber_setVerbose(lua_State *L) {
  try {
    ofVideoGrabber *self = *((ofVideoGrabber **)dub_checksdata(L, 1, "ofVideoGrabber"));
    bool bTalkToMe = dub_checkboolean(L, 2);
    self->setVerbose(bTalkToMe);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "setVerbose: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "setVerbose: Unknown exception");
  }
  return dub_error(L);
}

/** void ofVideoGrabber::setDeviceID(int _deviceID)
 * api/openFrameworks/video/ofVideoGrabber.h:35
 */
static int ofVideoGrabber_setDeviceID(lua_State *L) {
  try {
    ofVideoGrabber *self = *((ofVideoGrabber **)dub_checksdata(L, 1, "ofVideoGrabber"));
    int _deviceID = dub_checkint(L, 2);
    self->setDeviceID(_deviceID);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "setDeviceID: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "setDeviceID: Unknown exception");
  }
  return dub_error(L);
}

/** void ofVideoGrabber::setDesiredFrameRate(int framerate)
 * api/openFrameworks/video/ofVideoGrabber.h:36
 */
static int ofVideoGrabber_setDesiredFrameRate(lua_State *L) {
  try {
    ofVideoGrabber *self = *((ofVideoGrabber **)dub_checksdata(L, 1, "ofVideoGrabber"));
    int framerate = dub_checkint(L, 2);
    self->setDesiredFrameRate(framerate);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "setDesiredFrameRate: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "setDesiredFrameRate: Unknown exception");
  }
  return dub_error(L);
}

/** void ofVideoGrabber::setUseTexture(bool bUse)
 * api/openFrameworks/video/ofVideoGrabber.h:37
 */
static int ofVideoGrabber_setUseTexture(lua_State *L) {
  try {
    ofVideoGrabber *self = *((ofVideoGrabber **)dub_checksdata(L, 1, "ofVideoGrabber"));
    bool bUse = dub_checkboolean(L, 2);
    self->setUseTexture(bUse);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "setUseTexture: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "setUseTexture: Unknown exception");
  }
  return dub_error(L);
}

/** void ofVideoGrabber::draw(float x, float y, float w, float h)
 * api/openFrameworks/video/ofVideoGrabber.h:38
 */
static int ofVideoGrabber_draw(lua_State *L) {
  try {
    ofVideoGrabber *self = *((ofVideoGrabber **)dub_checksdata(L, 1, "ofVideoGrabber"));
    int top__ = lua_gettop(L);
    if (top__ >= 5) {
      float x = dub_checknumber(L, 2);
      float y = dub_checknumber(L, 3);
      float w = dub_checknumber(L, 4);
      float h = dub_checknumber(L, 5);
      self->draw(x, y, w, h);
      return 0;
    } else {
      float x = dub_checknumber(L, 2);
      float y = dub_checknumber(L, 3);
      self->draw(x, y);
      return 0;
    }
  } catch (std::exception &e) {
    lua_pushfstring(L, "draw: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "draw: Unknown exception");
  }
  return dub_error(L);
}

/** void ofVideoGrabber::setAnchorPercent(float xPct, float yPct)
 * api/openFrameworks/video/ofVideoGrabber.h:44
 */
static int ofVideoGrabber_setAnchorPercent(lua_State *L) {
  try {
    ofVideoGrabber *self = *((ofVideoGrabber **)dub_checksdata(L, 1, "ofVideoGrabber"));
    float xPct = dub_checknumber(L, 2);
    float yPct = dub_checknumber(L, 3);
    self->setAnchorPercent(xPct, yPct);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "setAnchorPercent: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "setAnchorPercent: Unknown exception");
  }
  return dub_error(L);
}

/** void ofVideoGrabber::setAnchorPoint(float x, float y)
 * api/openFrameworks/video/ofVideoGrabber.h:45
 */
static int ofVideoGrabber_setAnchorPoint(lua_State *L) {
  try {
    ofVideoGrabber *self = *((ofVideoGrabber **)dub_checksdata(L, 1, "ofVideoGrabber"));
    float x = dub_checknumber(L, 2);
    float y = dub_checknumber(L, 3);
    self->setAnchorPoint(x, y);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "setAnchorPoint: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "setAnchorPoint: Unknown exception");
  }
  return dub_error(L);
}

/** void ofVideoGrabber::resetAnchor()
 * api/openFrameworks/video/ofVideoGrabber.h:46
 */
static int ofVideoGrabber_resetAnchor(lua_State *L) {
  try {
    ofVideoGrabber *self = *((ofVideoGrabber **)dub_checksdata(L, 1, "ofVideoGrabber"));
    self->resetAnchor();
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "resetAnchor: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "resetAnchor: Unknown exception");
  }
  return dub_error(L);
}

/** float ofVideoGrabber::getHeight()
 * api/openFrameworks/video/ofVideoGrabber.h:48
 */
static int ofVideoGrabber_getHeight(lua_State *L) {
  try {
    ofVideoGrabber *self = *((ofVideoGrabber **)dub_checksdata(L, 1, "ofVideoGrabber"));
    lua_pushnumber(L, self->getHeight());
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "getHeight: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "getHeight: Unknown exception");
  }
  return dub_error(L);
}

/** float ofVideoGrabber::getWidth()
 * api/openFrameworks/video/ofVideoGrabber.h:49
 */
static int ofVideoGrabber_getWidth(lua_State *L) {
  try {
    ofVideoGrabber *self = *((ofVideoGrabber **)dub_checksdata(L, 1, "ofVideoGrabber"));
    lua_pushnumber(L, self->getWidth());
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "getWidth: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "getWidth: Unknown exception");
  }
  return dub_error(L);
}

/** bool ofVideoGrabber::isInitialized()
 * api/openFrameworks/video/ofVideoGrabber.h:51
 */
static int ofVideoGrabber_isInitialized(lua_State *L) {
  try {
    ofVideoGrabber *self = *((ofVideoGrabber **)dub_checksdata(L, 1, "ofVideoGrabber"));
    lua_pushboolean(L, self->isInitialized());
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "isInitialized: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "isInitialized: Unknown exception");
  }
  return dub_error(L);
}



// --=============================================== __tostring
static int ofVideoGrabber___tostring(lua_State *L) {
  ofVideoGrabber *self = *((ofVideoGrabber **)dub_checksdata_n(L, 1, "ofVideoGrabber"));
  lua_pushfstring(L, "ofVideoGrabber: %p", self);
  
  return 1;
}

// --=============================================== METHODS

static const struct luaL_Reg ofVideoGrabber_member_methods[] = {
  { "__newindex"   , ofVideoGrabber__set_ },
  { "__index"      , ofVideoGrabber__get_ },
  { "_cast_"       , ofVideoGrabber__cast_ },
  { "new"          , ofVideoGrabber_ofVideoGrabber },
  { "__gc"         , ofVideoGrabber__ofVideoGrabber },
  { "setGrabber"   , ofVideoGrabber_setGrabber },
  { "getGrabber"   , ofVideoGrabber_getGrabber },
  { "listDevices"  , ofVideoGrabber_listDevices },
  { "isFrameNew"   , ofVideoGrabber_isFrameNew },
  { "update"       , ofVideoGrabber_update },
  { "close"        , ofVideoGrabber_close },
  { "initGrabber"  , ofVideoGrabber_initGrabber },
  { "setPixelFormat", ofVideoGrabber_setPixelFormat },
  { "getPixelFormat", ofVideoGrabber_getPixelFormat },
  { "videoSettings", ofVideoGrabber_videoSettings },
  { "getTextureReference", ofVideoGrabber_getTextureReference },
  { "setVerbose"   , ofVideoGrabber_setVerbose },
  { "setDeviceID"  , ofVideoGrabber_setDeviceID },
  { "setDesiredFrameRate", ofVideoGrabber_setDesiredFrameRate },
  { "setUseTexture", ofVideoGrabber_setUseTexture },
  { "draw"         , ofVideoGrabber_draw  },
  { "setAnchorPercent", ofVideoGrabber_setAnchorPercent },
  { "setAnchorPoint", ofVideoGrabber_setAnchorPoint },
  { "resetAnchor"  , ofVideoGrabber_resetAnchor },
  { "getHeight"    , ofVideoGrabber_getHeight },
  { "getWidth"     , ofVideoGrabber_getWidth },
  { "isInitialized", ofVideoGrabber_isInitialized },
  { "__tostring"   , ofVideoGrabber___tostring },
  { "deleted"      , dub_isDeleted        },
  { NULL, NULL},
};


extern "C" int luaopen_ofVideoGrabber(lua_State *L)
{
  // Create the metatable which will contain all the member methods
  luaL_newmetatable(L, "ofVideoGrabber");
  // <mt>

  // register member methods
  luaL_register(L, NULL, ofVideoGrabber_member_methods);
  // save meta-table in _G
  dub_register(L, "_G", "ofVideoGrabber", "ofVideoGrabber");
  // <mt>
  lua_pop(L, 1);
  return 0;
}
