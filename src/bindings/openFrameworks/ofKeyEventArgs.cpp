/**
 *
 * MACHINE GENERATED FILE. DO NOT EDIT.
 *
 * Bindings for class ofKeyEventArgs
 *
 * This file has been generated by dub 2.1.~.
 */
#include "dub/dub.h"
#include "events/ofEvents.h"


/** Set attributes (key, value)
 * 
 */
static int ofKeyEventArgs__set_(lua_State *L) {

  ofKeyEventArgs *self = *((ofKeyEventArgs **)dub_checksdata_n(L, 1, "ofKeyEventArgs"));
  const char *key = luaL_checkstring(L, 2);
  int key_h = dub_hash(key, 2);
  switch(key_h) {
    case 0: {
      if (DUB_ASSERT_KEY(key, "type")) break;
      self->type = **((enum ofKeyEventArgs::Type **)dub_checksdata_n(L, 3, "enum ofKeyEventArgs::Type"));
      return 0;
    }
    case 1: {
      if (DUB_ASSERT_KEY(key, "key")) break;
      self->key = luaL_checkint(L, 3);
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
static int ofKeyEventArgs__get_(lua_State *L) {

  ofKeyEventArgs *self = *((ofKeyEventArgs **)dub_checksdata_n(L, 1, "ofKeyEventArgs", true));
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
    case 0: {
      if (DUB_ASSERT_KEY(key, "type")) break;
      dub_pushudata(L, &self->type, "enum ofKeyEventArgs::Type", false);
      return 1;
    }
    case 1: {
      if (DUB_ASSERT_KEY(key, "key")) break;
      lua_pushnumber(L, self->key);
      return 1;
    }
  }
  return 0;
}

/** Cast (class_name)
 * 
 */
static int ofKeyEventArgs__cast_(lua_State *L) {

  ofKeyEventArgs *self = *((ofKeyEventArgs **)dub_checksdata_n(L, 1, "ofKeyEventArgs"));
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

/** ofKeyEventArgs()
 * 
 */
static int ofKeyEventArgs_ofKeyEventArgs(lua_State *L) {
  try {
    ofKeyEventArgs *retval__ = new ofKeyEventArgs();
    dub_pushudata(L, retval__, "ofKeyEventArgs", true);
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "new: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "new: Unknown exception");
  }
  return dub_error(L);
}



// --=============================================== __tostring
static int ofKeyEventArgs___tostring(lua_State *L) {
  ofKeyEventArgs *self = *((ofKeyEventArgs **)dub_checksdata_n(L, 1, "ofKeyEventArgs"));
  lua_pushfstring(L, "ofKeyEventArgs: %p", self);
  
  return 1;
}

// --=============================================== METHODS

static const struct luaL_Reg ofKeyEventArgs_member_methods[] = {
  { "__newindex"   , ofKeyEventArgs__set_ },
  { "__index"      , ofKeyEventArgs__get_ },
  { "_cast_"       , ofKeyEventArgs__cast_ },
  { "new"          , ofKeyEventArgs_ofKeyEventArgs },
  { "__tostring"   , ofKeyEventArgs___tostring },
  { "deleted"      , dub_isDeleted        },
  { NULL, NULL},
};

// --=============================================== CONSTANTS
static const struct dub_const_Reg ofKeyEventArgs_const[] = {
  { "Pressed"      , ofKeyEventArgs::Pressed },
  { "Released"     , ofKeyEventArgs::Released },
  { NULL, 0},
};

extern "C" int luaopen_ofKeyEventArgs(lua_State *L)
{
  // Create the metatable which will contain all the member methods
  luaL_newmetatable(L, "ofKeyEventArgs");
  // <mt>
  // register class constants
  dub_register_const(L, ofKeyEventArgs_const);

  // register member methods
  luaL_register(L, NULL, ofKeyEventArgs_member_methods);
  // save meta-table in _G
  dub_register(L, "_G", "ofKeyEventArgs", "ofKeyEventArgs");
  // <mt>
  lua_pop(L, 1);
  return 0;
}
