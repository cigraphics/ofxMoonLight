/**
 *
 * MACHINE GENERATED FILE. DO NOT EDIT.
 *
 * Bindings for class ofBaseApp
 *
 * This file has been generated by dub 2.1.~.
 */
#include "dub/dub.h"
#include "api/openFrameworks/app/ofBaseApp.h"


/** Set attributes (key, value)
 * 
 */
static int ofBaseApp__set_(lua_State *L) {

  ofBaseApp *self = *((ofBaseApp **)dub_checksdata_n(L, 1, "ofBaseApp"));
  const char *key = luaL_checkstring(L, 2);
  int key_h = dub_hash(key, 2);
  switch(key_h) {
    case 1: {
      if (DUB_ASSERT_KEY(key, "mouseX")) break;
      self->mouseX = luaL_checkint(L, 3);
      return 0;
    }
    case 0: {
      if (DUB_ASSERT_KEY(key, "mouseY")) break;
      self->mouseY = luaL_checkint(L, 3);
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
static int ofBaseApp__get_(lua_State *L) {

  ofBaseApp *self = *((ofBaseApp **)dub_checksdata_n(L, 1, "ofBaseApp", true));
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
      if (DUB_ASSERT_KEY(key, "mouseX")) break;
      lua_pushnumber(L, self->mouseX);
      return 1;
    }
    case 0: {
      if (DUB_ASSERT_KEY(key, "mouseY")) break;
      lua_pushnumber(L, self->mouseY);
      return 1;
    }
  }
  return 0;
}

/** Cast (class_name)
 * 
 */
static int ofBaseApp__cast_(lua_State *L) {

  ofBaseApp *self = *((ofBaseApp **)dub_checksdata_n(L, 1, "ofBaseApp"));
  const char *key = luaL_checkstring(L, 2);
  void **retval__ = (void**)lua_newuserdata(L, sizeof(void*));
  int key_h = dub_hash(key, 2);
  switch(key_h) {
    case 1: {
      if (DUB_ASSERT_KEY(key, "ofBaseSoundInput")) break;
      *retval__ = static_cast<ofBaseSoundInput *>(self);
      return 1;
    }
    case 0: {
      if (DUB_ASSERT_KEY(key, "ofBaseSoundOutput")) break;
      *retval__ = static_cast<ofBaseSoundOutput *>(self);
      return 1;
    }
  }
  return 0;
}

/** ofBaseApp::ofBaseApp()
 * api/openFrameworks/app/ofBaseApp.h:10
 */
static int ofBaseApp_ofBaseApp(lua_State *L) {
  try {
    ofBaseApp *retval__ = new ofBaseApp();
    dub_pushudata(L, retval__, "ofBaseApp", true);
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "new: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "new: Unknown exception");
  }
  return dub_error(L);
}

/** virtual ofBaseApp::~ofBaseApp()
 * api/openFrameworks/app/ofBaseApp.h:14
 */
static int ofBaseApp__ofBaseApp(lua_State *L) {
  try {
    DubUserdata *userdata = ((DubUserdata*)dub_checksdata_d(L, 1, "ofBaseApp"));
    if (userdata->gc) {
      ofBaseApp *self = (ofBaseApp *)userdata->ptr;
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

/** virtual void ofBaseApp::setup()
 * api/openFrameworks/app/ofBaseApp.h:16
 */
static int ofBaseApp_setup(lua_State *L) {
  try {
    ofBaseApp *self = *((ofBaseApp **)dub_checksdata(L, 1, "ofBaseApp"));
    self->setup();
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "setup: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "setup: Unknown exception");
  }
  return dub_error(L);
}

/** virtual void ofBaseApp::update()
 * api/openFrameworks/app/ofBaseApp.h:17
 */
static int ofBaseApp_update(lua_State *L) {
  try {
    ofBaseApp *self = *((ofBaseApp **)dub_checksdata(L, 1, "ofBaseApp"));
    self->update();
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "update: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "update: Unknown exception");
  }
  return dub_error(L);
}

/** virtual void ofBaseApp::draw()
 * api/openFrameworks/app/ofBaseApp.h:18
 */
static int ofBaseApp_draw(lua_State *L) {
  try {
    ofBaseApp *self = *((ofBaseApp **)dub_checksdata(L, 1, "ofBaseApp"));
    self->draw();
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "draw: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "draw: Unknown exception");
  }
  return dub_error(L);
}

/** virtual void ofBaseApp::exit()
 * api/openFrameworks/app/ofBaseApp.h:19
 */
static int ofBaseApp_exit(lua_State *L) {
  try {
    ofBaseApp *self = *((ofBaseApp **)dub_checksdata(L, 1, "ofBaseApp"));
    self->exit();
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "exit: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "exit: Unknown exception");
  }
  return dub_error(L);
}

/** virtual void ofBaseApp::windowResized(int w, int h)
 * api/openFrameworks/app/ofBaseApp.h:21
 */
static int ofBaseApp_windowResized(lua_State *L) {
  try {
    ofBaseApp *self = *((ofBaseApp **)dub_checksdata(L, 1, "ofBaseApp"));
    int w = dub_checkint(L, 2);
    int h = dub_checkint(L, 3);
    self->windowResized(w, h);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "windowResized: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "windowResized: Unknown exception");
  }
  return dub_error(L);
}

/** virtual void ofBaseApp::keyPressed(int key)
 * api/openFrameworks/app/ofBaseApp.h:23
 */
static int ofBaseApp_keyPressed(lua_State *L) {
  try {
    ofBaseApp *self = *((ofBaseApp **)dub_checksdata(L, 1, "ofBaseApp"));
    int key = dub_checkint(L, 2);
    self->keyPressed(key);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "keyPressed: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "keyPressed: Unknown exception");
  }
  return dub_error(L);
}

/** virtual void ofBaseApp::keyReleased(int key)
 * api/openFrameworks/app/ofBaseApp.h:24
 */
static int ofBaseApp_keyReleased(lua_State *L) {
  try {
    ofBaseApp *self = *((ofBaseApp **)dub_checksdata(L, 1, "ofBaseApp"));
    int key = dub_checkint(L, 2);
    self->keyReleased(key);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "keyReleased: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "keyReleased: Unknown exception");
  }
  return dub_error(L);
}

/** virtual void ofBaseApp::mouseMoved(int x, int y)
 * api/openFrameworks/app/ofBaseApp.h:26
 */
static int ofBaseApp_mouseMoved(lua_State *L) {
  try {
    ofBaseApp *self = *((ofBaseApp **)dub_checksdata(L, 1, "ofBaseApp"));
    int x = dub_checkint(L, 2);
    int y = dub_checkint(L, 3);
    self->mouseMoved(x, y);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "mouseMoved: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "mouseMoved: Unknown exception");
  }
  return dub_error(L);
}

/** virtual void ofBaseApp::mouseDragged(int x, int y, int button)
 * api/openFrameworks/app/ofBaseApp.h:27
 */
static int ofBaseApp_mouseDragged(lua_State *L) {
  try {
    ofBaseApp *self = *((ofBaseApp **)dub_checksdata(L, 1, "ofBaseApp"));
    int x = dub_checkint(L, 2);
    int y = dub_checkint(L, 3);
    int button = dub_checkint(L, 4);
    self->mouseDragged(x, y, button);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "mouseDragged: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "mouseDragged: Unknown exception");
  }
  return dub_error(L);
}

/** virtual void ofBaseApp::mousePressed(int x, int y, int button)
 * api/openFrameworks/app/ofBaseApp.h:28
 */
static int ofBaseApp_mousePressed(lua_State *L) {
  try {
    ofBaseApp *self = *((ofBaseApp **)dub_checksdata(L, 1, "ofBaseApp"));
    int x = dub_checkint(L, 2);
    int y = dub_checkint(L, 3);
    int button = dub_checkint(L, 4);
    self->mousePressed(x, y, button);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "mousePressed: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "mousePressed: Unknown exception");
  }
  return dub_error(L);
}

/** virtual void ofBaseApp::mouseReleased()
 * api/openFrameworks/app/ofBaseApp.h:29
 */
static int ofBaseApp_mouseReleased(lua_State *L) {
  try {
    ofBaseApp *self = *((ofBaseApp **)dub_checksdata(L, 1, "ofBaseApp"));
    int top__ = lua_gettop(L);
    if (top__ >= 4) {
      int x = dub_checkint(L, 2);
      int y = dub_checkint(L, 3);
      int button = dub_checkint(L, 4);
      self->mouseReleased(x, y, button);
      return 0;
    } else {
      self->mouseReleased();
      return 0;
    }
  } catch (std::exception &e) {
    lua_pushfstring(L, "mouseReleased: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "mouseReleased: Unknown exception");
  }
  return dub_error(L);
}

/** virtual void ofBaseApp::dragEvent(ofDragInfo dragInfo)
 * api/openFrameworks/app/ofBaseApp.h:32
 */
static int ofBaseApp_dragEvent(lua_State *L) {
  try {
    ofBaseApp *self = *((ofBaseApp **)dub_checksdata(L, 1, "ofBaseApp"));
    ofDragInfo *dragInfo = *((ofDragInfo **)dub_checksdata(L, 2, "ofDragInfo"));
    self->dragEvent(*dragInfo);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "dragEvent: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "dragEvent: Unknown exception");
  }
  return dub_error(L);
}

/** virtual void ofBaseApp::gotMessage(ofMessage msg)
 * api/openFrameworks/app/ofBaseApp.h:33
 */
static int ofBaseApp_gotMessage(lua_State *L) {
  try {
    ofBaseApp *self = *((ofBaseApp **)dub_checksdata(L, 1, "ofBaseApp"));
    ofMessage *msg = *((ofMessage **)dub_checksdata(L, 2, "ofMessage"));
    self->gotMessage(*msg);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "gotMessage: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "gotMessage: Unknown exception");
  }
  return dub_error(L);
}

/** virtual void ofBaseApp::windowEntry(int state)
 * api/openFrameworks/app/ofBaseApp.h:35
 */
static int ofBaseApp_windowEntry(lua_State *L) {
  try {
    ofBaseApp *self = *((ofBaseApp **)dub_checksdata(L, 1, "ofBaseApp"));
    int state = dub_checkint(L, 2);
    self->windowEntry(state);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "windowEntry: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "windowEntry: Unknown exception");
  }
  return dub_error(L);
}

/** virtual void ofBaseSoundInput::audioIn(float *input, int bufferSize, int nChannels, int deviceID, long unsigned long tickCount)
 * api/openFrameworks/types/ofBaseTypes.h:135
 */
static int ofBaseApp_audioIn(lua_State *L) {
  try {
    ofBaseApp *self = *((ofBaseApp **)dub_checksdata(L, 1, "ofBaseApp"));
    int top__ = lua_gettop(L);
    if (top__ >= 6) {
      float *input = *((float **)dub_checksdata(L, 2, "float"));
      int bufferSize = dub_checkint(L, 3);
      int nChannels = dub_checkint(L, 4);
      int deviceID = dub_checkint(L, 5);
      long unsigned long *tickCount = *((long unsigned long **)dub_checksdata(L, 6, "long unsigned long"));
      self->audioIn(input, bufferSize, nChannels, deviceID, *tickCount);
      return 0;
    } else {
      float *input = *((float **)dub_checksdata(L, 2, "float"));
      int bufferSize = dub_checkint(L, 3);
      int nChannels = dub_checkint(L, 4);
      self->audioIn(input, bufferSize, nChannels);
      return 0;
    }
  } catch (std::exception &e) {
    lua_pushfstring(L, "audioIn: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "audioIn: Unknown exception");
  }
  return dub_error(L);
}

/** virtual void ofBaseSoundInput::audioReceived(float *input, int bufferSize, int nChannels)
 * api/openFrameworks/types/ofBaseTypes.h:143
 */
static int ofBaseApp_audioReceived(lua_State *L) {
  try {
    ofBaseApp *self = *((ofBaseApp **)dub_checksdata(L, 1, "ofBaseApp"));
    float *input = *((float **)dub_checksdata(L, 2, "float"));
    int bufferSize = dub_checkint(L, 3);
    int nChannels = dub_checkint(L, 4);
    self->audioReceived(input, bufferSize, nChannels);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "audioReceived: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "audioReceived: Unknown exception");
  }
  return dub_error(L);
}

/** virtual void ofBaseSoundOutput::audioOut(float *output, int bufferSize, int nChannels, int deviceID, long unsigned long tickCount)
 * api/openFrameworks/types/ofBaseTypes.h:154
 */
static int ofBaseApp_audioOut(lua_State *L) {
  try {
    ofBaseApp *self = *((ofBaseApp **)dub_checksdata(L, 1, "ofBaseApp"));
    int top__ = lua_gettop(L);
    if (top__ >= 6) {
      float *output = *((float **)dub_checksdata(L, 2, "float"));
      int bufferSize = dub_checkint(L, 3);
      int nChannels = dub_checkint(L, 4);
      int deviceID = dub_checkint(L, 5);
      long unsigned long *tickCount = *((long unsigned long **)dub_checksdata(L, 6, "long unsigned long"));
      self->audioOut(output, bufferSize, nChannels, deviceID, *tickCount);
      return 0;
    } else {
      float *output = *((float **)dub_checksdata(L, 2, "float"));
      int bufferSize = dub_checkint(L, 3);
      int nChannels = dub_checkint(L, 4);
      self->audioOut(output, bufferSize, nChannels);
      return 0;
    }
  } catch (std::exception &e) {
    lua_pushfstring(L, "audioOut: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "audioOut: Unknown exception");
  }
  return dub_error(L);
}

/** virtual void ofBaseSoundOutput::audioRequested(float *output, int bufferSize, int nChannels)
 * api/openFrameworks/types/ofBaseTypes.h:163
 */
static int ofBaseApp_audioRequested(lua_State *L) {
  try {
    ofBaseApp *self = *((ofBaseApp **)dub_checksdata(L, 1, "ofBaseApp"));
    float *output = *((float **)dub_checksdata(L, 2, "float"));
    int bufferSize = dub_checkint(L, 3);
    int nChannels = dub_checkint(L, 4);
    self->audioRequested(output, bufferSize, nChannels);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "audioRequested: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "audioRequested: Unknown exception");
  }
  return dub_error(L);
}



// --=============================================== __tostring
static int ofBaseApp___tostring(lua_State *L) {
  ofBaseApp *self = *((ofBaseApp **)dub_checksdata_n(L, 1, "ofBaseApp"));
  lua_pushfstring(L, "ofBaseApp: %p", self);
  
  return 1;
}

// --=============================================== METHODS

static const struct luaL_Reg ofBaseApp_member_methods[] = {
  { "__newindex"   , ofBaseApp__set_      },
  { "__index"      , ofBaseApp__get_      },
  { "_cast_"       , ofBaseApp__cast_     },
  { "new"          , ofBaseApp_ofBaseApp  },
  { "__gc"         , ofBaseApp__ofBaseApp },
  { "setup"        , ofBaseApp_setup      },
  { "update"       , ofBaseApp_update     },
  { "draw"         , ofBaseApp_draw       },
  { "exit"         , ofBaseApp_exit       },
  { "windowResized", ofBaseApp_windowResized },
  { "keyPressed"   , ofBaseApp_keyPressed },
  { "keyReleased"  , ofBaseApp_keyReleased },
  { "mouseMoved"   , ofBaseApp_mouseMoved },
  { "mouseDragged" , ofBaseApp_mouseDragged },
  { "mousePressed" , ofBaseApp_mousePressed },
  { "mouseReleased", ofBaseApp_mouseReleased },
  { "dragEvent"    , ofBaseApp_dragEvent  },
  { "gotMessage"   , ofBaseApp_gotMessage },
  { "windowEntry"  , ofBaseApp_windowEntry },
  { "audioIn"      , ofBaseApp_audioIn    },
  { "audioReceived", ofBaseApp_audioReceived },
  { "audioOut"     , ofBaseApp_audioOut   },
  { "audioRequested", ofBaseApp_audioRequested },
  { "__tostring"   , ofBaseApp___tostring },
  { "deleted"      , dub_isDeleted        },
  { NULL, NULL},
};


extern "C" int luaopen_ofBaseApp(lua_State *L)
{
  // Create the metatable which will contain all the member methods
  luaL_newmetatable(L, "ofBaseApp");
  // <mt>

  // register member methods
  luaL_register(L, NULL, ofBaseApp_member_methods);
  // save meta-table in _G
  dub_register(L, "_G", "ofBaseApp", "ofBaseApp");
  // <mt>
  lua_pop(L, 1);
  return 0;
}
