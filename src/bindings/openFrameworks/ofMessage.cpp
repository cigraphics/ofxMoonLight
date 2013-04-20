/**
 *
 * MACHINE GENERATED FILE. DO NOT EDIT.
 *
 * Bindings for class ofMessage
 *
 * This file has been generated by dub 2.1.~.
 */
#include "dub/dub.h"
#include "events/ofEvents.h"


/** ~ofMessage()
 * 
 */
static int ofMessage__ofMessage(lua_State *L) {
  try {
    DubUserdata *userdata = ((DubUserdata*)dub_checksdata_d(L, 1, "ofMessage"));
    if (userdata->gc) {
      ofMessage *self = (ofMessage *)userdata->ptr;
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

/** Set attributes (key, value)
 * 
 */
static int ofMessage__set_(lua_State *L) {

  ofMessage *self = *((ofMessage **)dub_checksdata_n(L, 1, "ofMessage"));
  const char *key = luaL_checkstring(L, 2);
  int key_h = dub_hash(key, 2);
  switch(key_h) {
    case 1: {
      if (DUB_ASSERT_KEY(key, "message")) break;
      size_t message_sz_;
      const char *message = luaL_checklstring(L, 3, &message_sz_);self->message = std::string(message, message_sz_);
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
static int ofMessage__get_(lua_State *L) {

  ofMessage *self = *((ofMessage **)dub_checksdata_n(L, 1, "ofMessage", true));
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
      if (DUB_ASSERT_KEY(key, "message")) break;
      lua_pushlstring(L, self->message.data(), self->message.length());
      return 1;
    }
  }
  return 0;
}

/** Cast (class_name)
 * 
 */
static int ofMessage__cast_(lua_State *L) {

  ofMessage *self = *((ofMessage **)dub_checksdata_n(L, 1, "ofMessage"));
  const char *key = luaL_checkstring(L, 2);
  void **retval__ = (void**)lua_newuserdata(L, sizeof(void*));
  int key_h = dub_hash(key, 2);
  switch(key_h) {
    case 0: {
      if (DUB_ASSERT_KEY(key, "ofEventArgs")) break;
      *retval__ = static_cast<ofEventArgs *>(self);
      return 1;
    }
  }
  return 0;
}

/** ofMessage::ofMessage(string msg)
 * api/openFrameworks/events/ofEvents.h:96
 */
static int ofMessage_ofMessage(lua_State *L) {
  try {
    size_t msg_sz_;
    const char *msg = dub_checklstring(L, 1, &msg_sz_);
    ofMessage *retval__ = new ofMessage(std::string(msg, msg_sz_));
    dub_pushudata(L, retval__, "ofMessage", true);
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "new: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "new: Unknown exception");
  }
  return dub_error(L);
}



// --=============================================== __tostring
static int ofMessage___tostring(lua_State *L) {
  ofMessage *self = *((ofMessage **)dub_checksdata_n(L, 1, "ofMessage"));
  lua_pushfstring(L, "ofMessage: %p", self);
  
  return 1;
}

// --=============================================== METHODS

static const struct luaL_Reg ofMessage_member_methods[] = {
  { "__gc"         , ofMessage__ofMessage },
  { "__newindex"   , ofMessage__set_      },
  { "__index"      , ofMessage__get_      },
  { "_cast_"       , ofMessage__cast_     },
  { "new"          , ofMessage_ofMessage  },
  { "__tostring"   , ofMessage___tostring },
  { "deleted"      , dub_isDeleted        },
  { NULL, NULL},
};


extern "C" int luaopen_ofMessage(lua_State *L)
{
  // Create the metatable which will contain all the member methods
  luaL_newmetatable(L, "ofMessage");
  // <mt>

  // register member methods
  luaL_register(L, NULL, ofMessage_member_methods);
  // save meta-table in _G
  dub_register(L, "_G", "ofMessage", "ofMessage");
  // <mt>
  lua_pop(L, 1);
  return 0;
}
