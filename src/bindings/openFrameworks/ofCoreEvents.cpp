/**
 *
 * MACHINE GENERATED FILE. DO NOT EDIT.
 *
 * Bindings for class ofCoreEvents
 *
 * This file has been generated by dub 2.1.~.
 */
#include "dub/dub.h"
#include "api/openFrameworks/events/ofEvents.h"


/** Set attributes (key, value)
 * 
 */
static int ofCoreEvents__set_(lua_State *L) {

  ofCoreEvents *self = *((ofCoreEvents **)dub_checksdata_n(L, 1, "ofCoreEvents"));
  const char *key = luaL_checkstring(L, 2);
  int key_h = dub_hash(key, 92);
  switch(key_h) {
    case 29: {
      if (DUB_ASSERT_KEY(key, "setup")) break;
      self->setup = **((ofEvent < ofEventArgs > **)dub_checksdata_n(L, 3, "ofEvent < ofEventArgs >"));
      return 0;
    }
    case 49: {
      if (DUB_ASSERT_KEY(key, "update")) break;
      self->update = **((ofEvent < ofEventArgs > **)dub_checksdata_n(L, 3, "ofEvent < ofEventArgs >"));
      return 0;
    }
    case 12: {
      if (DUB_ASSERT_KEY(key, "draw")) break;
      self->draw = **((ofEvent < ofEventArgs > **)dub_checksdata_n(L, 3, "ofEvent < ofEventArgs >"));
      return 0;
    }
    case 58: {
      if (DUB_ASSERT_KEY(key, "exit")) break;
      self->exit = **((ofEvent < ofEventArgs > **)dub_checksdata_n(L, 3, "ofEvent < ofEventArgs >"));
      return 0;
    }
    case 3: {
      if (DUB_ASSERT_KEY(key, "windowEntered")) break;
      self->windowEntered = **((ofEvent < ofEntryEventArgs > **)dub_checksdata_n(L, 3, "ofEvent < ofEntryEventArgs >"));
      return 0;
    }
    case 56: {
      if (DUB_ASSERT_KEY(key, "windowResized")) break;
      self->windowResized = **((ofEvent < ofResizeEventArgs > **)dub_checksdata_n(L, 3, "ofEvent < ofResizeEventArgs >"));
      return 0;
    }
    case 7: {
      if (DUB_ASSERT_KEY(key, "keyPressed")) break;
      self->keyPressed = **((ofEvent < ofKeyEventArgs > **)dub_checksdata_n(L, 3, "ofEvent < ofKeyEventArgs >"));
      return 0;
    }
    case 44: {
      if (DUB_ASSERT_KEY(key, "keyReleased")) break;
      self->keyReleased = **((ofEvent < ofKeyEventArgs > **)dub_checksdata_n(L, 3, "ofEvent < ofKeyEventArgs >"));
      return 0;
    }
    case 42: {
      if (DUB_ASSERT_KEY(key, "mouseMoved")) break;
      self->mouseMoved = **((ofEvent < ofMouseEventArgs > **)dub_checksdata_n(L, 3, "ofEvent < ofMouseEventArgs >"));
      return 0;
    }
    case 1: {
      if (DUB_ASSERT_KEY(key, "mouseDragged")) break;
      self->mouseDragged = **((ofEvent < ofMouseEventArgs > **)dub_checksdata_n(L, 3, "ofEvent < ofMouseEventArgs >"));
      return 0;
    }
    case 69: {
      if (DUB_ASSERT_KEY(key, "mousePressed")) break;
      self->mousePressed = **((ofEvent < ofMouseEventArgs > **)dub_checksdata_n(L, 3, "ofEvent < ofMouseEventArgs >"));
      return 0;
    }
    case 78: {
      if (DUB_ASSERT_KEY(key, "mouseReleased")) break;
      self->mouseReleased = **((ofEvent < ofMouseEventArgs > **)dub_checksdata_n(L, 3, "ofEvent < ofMouseEventArgs >"));
      return 0;
    }
    case 87: {
      if (DUB_ASSERT_KEY(key, "audioReceived")) break;
      self->audioReceived = **((ofEvent < ofAudioEventArgs > **)dub_checksdata_n(L, 3, "ofEvent < ofAudioEventArgs >"));
      return 0;
    }
    case 84: {
      if (DUB_ASSERT_KEY(key, "audioRequested")) break;
      self->audioRequested = **((ofEvent < ofAudioEventArgs > **)dub_checksdata_n(L, 3, "ofEvent < ofAudioEventArgs >"));
      return 0;
    }
    case 41: {
      if (DUB_ASSERT_KEY(key, "touchDown")) break;
      self->touchDown = **((ofEvent < ofTouchEventArgs > **)dub_checksdata_n(L, 3, "ofEvent < ofTouchEventArgs >"));
      return 0;
    }
    case 70: {
      if (DUB_ASSERT_KEY(key, "touchUp")) break;
      self->touchUp = **((ofEvent < ofTouchEventArgs > **)dub_checksdata_n(L, 3, "ofEvent < ofTouchEventArgs >"));
      return 0;
    }
    case 64: {
      if (DUB_ASSERT_KEY(key, "touchMoved")) break;
      self->touchMoved = **((ofEvent < ofTouchEventArgs > **)dub_checksdata_n(L, 3, "ofEvent < ofTouchEventArgs >"));
      return 0;
    }
    case 27: {
      if (DUB_ASSERT_KEY(key, "touchDoubleTap")) break;
      self->touchDoubleTap = **((ofEvent < ofTouchEventArgs > **)dub_checksdata_n(L, 3, "ofEvent < ofTouchEventArgs >"));
      return 0;
    }
    case 22: {
      if (DUB_ASSERT_KEY(key, "touchCancelled")) break;
      self->touchCancelled = **((ofEvent < ofTouchEventArgs > **)dub_checksdata_n(L, 3, "ofEvent < ofTouchEventArgs >"));
      return 0;
    }
    case 35: {
      if (DUB_ASSERT_KEY(key, "messageEvent")) break;
      self->messageEvent = **((ofEvent < ofMessage > **)dub_checksdata_n(L, 3, "ofEvent < ofMessage >"));
      return 0;
    }
    case 30: {
      if (DUB_ASSERT_KEY(key, "fileDragEvent")) break;
      self->fileDragEvent = **((ofEvent < ofDragInfo > **)dub_checksdata_n(L, 3, "ofEvent < ofDragInfo >"));
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
static int ofCoreEvents__get_(lua_State *L) {

  ofCoreEvents *self = *((ofCoreEvents **)dub_checksdata_n(L, 1, "ofCoreEvents", true));
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
  int key_h = dub_hash(key, 92);
  switch(key_h) {
    case 29: {
      if (DUB_ASSERT_KEY(key, "setup")) break;
      dub_pushudata(L, &self->setup, "ofEvent < ofEventArgs >", false);
      return 1;
    }
    case 49: {
      if (DUB_ASSERT_KEY(key, "update")) break;
      dub_pushudata(L, &self->update, "ofEvent < ofEventArgs >", false);
      return 1;
    }
    case 12: {
      if (DUB_ASSERT_KEY(key, "draw")) break;
      dub_pushudata(L, &self->draw, "ofEvent < ofEventArgs >", false);
      return 1;
    }
    case 58: {
      if (DUB_ASSERT_KEY(key, "exit")) break;
      dub_pushudata(L, &self->exit, "ofEvent < ofEventArgs >", false);
      return 1;
    }
    case 3: {
      if (DUB_ASSERT_KEY(key, "windowEntered")) break;
      dub_pushudata(L, &self->windowEntered, "ofEvent < ofEntryEventArgs >", false);
      return 1;
    }
    case 56: {
      if (DUB_ASSERT_KEY(key, "windowResized")) break;
      dub_pushudata(L, &self->windowResized, "ofEvent < ofResizeEventArgs >", false);
      return 1;
    }
    case 7: {
      if (DUB_ASSERT_KEY(key, "keyPressed")) break;
      dub_pushudata(L, &self->keyPressed, "ofEvent < ofKeyEventArgs >", false);
      return 1;
    }
    case 44: {
      if (DUB_ASSERT_KEY(key, "keyReleased")) break;
      dub_pushudata(L, &self->keyReleased, "ofEvent < ofKeyEventArgs >", false);
      return 1;
    }
    case 42: {
      if (DUB_ASSERT_KEY(key, "mouseMoved")) break;
      dub_pushudata(L, &self->mouseMoved, "ofEvent < ofMouseEventArgs >", false);
      return 1;
    }
    case 1: {
      if (DUB_ASSERT_KEY(key, "mouseDragged")) break;
      dub_pushudata(L, &self->mouseDragged, "ofEvent < ofMouseEventArgs >", false);
      return 1;
    }
    case 69: {
      if (DUB_ASSERT_KEY(key, "mousePressed")) break;
      dub_pushudata(L, &self->mousePressed, "ofEvent < ofMouseEventArgs >", false);
      return 1;
    }
    case 78: {
      if (DUB_ASSERT_KEY(key, "mouseReleased")) break;
      dub_pushudata(L, &self->mouseReleased, "ofEvent < ofMouseEventArgs >", false);
      return 1;
    }
    case 87: {
      if (DUB_ASSERT_KEY(key, "audioReceived")) break;
      dub_pushudata(L, &self->audioReceived, "ofEvent < ofAudioEventArgs >", false);
      return 1;
    }
    case 84: {
      if (DUB_ASSERT_KEY(key, "audioRequested")) break;
      dub_pushudata(L, &self->audioRequested, "ofEvent < ofAudioEventArgs >", false);
      return 1;
    }
    case 41: {
      if (DUB_ASSERT_KEY(key, "touchDown")) break;
      dub_pushudata(L, &self->touchDown, "ofEvent < ofTouchEventArgs >", false);
      return 1;
    }
    case 70: {
      if (DUB_ASSERT_KEY(key, "touchUp")) break;
      dub_pushudata(L, &self->touchUp, "ofEvent < ofTouchEventArgs >", false);
      return 1;
    }
    case 64: {
      if (DUB_ASSERT_KEY(key, "touchMoved")) break;
      dub_pushudata(L, &self->touchMoved, "ofEvent < ofTouchEventArgs >", false);
      return 1;
    }
    case 27: {
      if (DUB_ASSERT_KEY(key, "touchDoubleTap")) break;
      dub_pushudata(L, &self->touchDoubleTap, "ofEvent < ofTouchEventArgs >", false);
      return 1;
    }
    case 22: {
      if (DUB_ASSERT_KEY(key, "touchCancelled")) break;
      dub_pushudata(L, &self->touchCancelled, "ofEvent < ofTouchEventArgs >", false);
      return 1;
    }
    case 35: {
      if (DUB_ASSERT_KEY(key, "messageEvent")) break;
      dub_pushudata(L, &self->messageEvent, "ofEvent < ofMessage >", false);
      return 1;
    }
    case 30: {
      if (DUB_ASSERT_KEY(key, "fileDragEvent")) break;
      dub_pushudata(L, &self->fileDragEvent, "ofEvent < ofDragInfo >", false);
      return 1;
    }
  }
  return 0;
}

/** ofCoreEvents()
 * 
 */
static int ofCoreEvents_ofCoreEvents(lua_State *L) {
  try {
    ofCoreEvents *retval__ = new ofCoreEvents();
    dub_pushudata(L, retval__, "ofCoreEvents", true);
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "new: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "new: Unknown exception");
  }
  return dub_error(L);
}

/** void ofCoreEvents::disable()
 * api/openFrameworks/events/ofEvents.h:132
 */
static int ofCoreEvents_disable(lua_State *L) {
  try {
    ofCoreEvents *self = *((ofCoreEvents **)dub_checksdata(L, 1, "ofCoreEvents"));
    self->disable();
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "disable: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "disable: Unknown exception");
  }
  return dub_error(L);
}

/** void ofCoreEvents::enable()
 * api/openFrameworks/events/ofEvents.h:154
 */
static int ofCoreEvents_enable(lua_State *L) {
  try {
    ofCoreEvents *self = *((ofCoreEvents **)dub_checksdata(L, 1, "ofCoreEvents"));
    self->enable();
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "enable: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "enable: Unknown exception");
  }
  return dub_error(L);
}



// --=============================================== __tostring
static int ofCoreEvents___tostring(lua_State *L) {
  ofCoreEvents *self = *((ofCoreEvents **)dub_checksdata_n(L, 1, "ofCoreEvents"));
  lua_pushfstring(L, "ofCoreEvents: %p", self);
  
  return 1;
}

// --=============================================== METHODS

static const struct luaL_Reg ofCoreEvents_member_methods[] = {
  { "__newindex"   , ofCoreEvents__set_   },
  { "__index"      , ofCoreEvents__get_   },
  { "new"          , ofCoreEvents_ofCoreEvents },
  { "disable"      , ofCoreEvents_disable },
  { "enable"       , ofCoreEvents_enable  },
  { "__tostring"   , ofCoreEvents___tostring },
  { "deleted"      , dub_isDeleted        },
  { NULL, NULL},
};


extern "C" int luaopen_ofCoreEvents(lua_State *L)
{
  // Create the metatable which will contain all the member methods
  luaL_newmetatable(L, "ofCoreEvents");
  // <mt>

  // register member methods
  luaL_register(L, NULL, ofCoreEvents_member_methods);
  // save meta-table in _G
  dub_register(L, "_G", "ofCoreEvents", "ofCoreEvents");
  // <mt>
  lua_pop(L, 1);
  return 0;
}
