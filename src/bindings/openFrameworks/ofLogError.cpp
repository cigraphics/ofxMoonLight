/**
 *
 * MACHINE GENERATED FILE. DO NOT EDIT.
 *
 * Bindings for class ofLogError
 *
 * This file has been generated by dub 2.1.~.
 */
#include "dub/dub.h"
#include "api/openFrameworks/utils/ofLog.h"


/** ~ofLogError()
 * 
 */
static int ofLogError__ofLogError(lua_State *L) {
  try {
    DubUserdata *userdata = ((DubUserdata*)dub_checksdata_d(L, 1, "ofLogError"));
    if (userdata->gc) {
      ofLogError *self = (ofLogError *)userdata->ptr;
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

/** Cast (class_name)
 * 
 */
static int ofLogError__cast_(lua_State *L) {

  ofLogError *self = *((ofLogError **)dub_checksdata_n(L, 1, "ofLogError"));
  const char *key = luaL_checkstring(L, 2);
  void **retval__ = (void**)lua_newuserdata(L, sizeof(void*));
  int key_h = dub_hash(key, 2);
  switch(key_h) {
    case 1: {
      if (DUB_ASSERT_KEY(key, "ofLog")) break;
      *retval__ = static_cast<ofLog *>(self);
      return 1;
    }
  }
  return 0;
}

/** ofLogError::ofLogError(const string &module="OF")
 * api/openFrameworks/utils/ofLog.h:135
 */
static int ofLogError_ofLogError(lua_State *L) {
  try {
    int top__ = lua_gettop(L);
    if (top__ >= 2) {
      string *module = *((string **)dub_checksdata(L, 1, "string"));
      string *message = *((string **)dub_checksdata(L, 2, "string"));
      ofLogError *retval__ = new ofLogError(*module, *message);
      dub_pushudata(L, retval__, "ofLogError", true);
      return 1;
    } else if (top__ >= 1) {
      string *module = *((string **)dub_checksdata(L, 1, "string"));
      ofLogError *retval__ = new ofLogError(*module);
      dub_pushudata(L, retval__, "ofLogError", true);
      return 1;
    } else {
      ofLogError *retval__ = new ofLogError();
      dub_pushudata(L, retval__, "ofLogError", true);
      return 1;
    }
  } catch (std::exception &e) {
    lua_pushfstring(L, "new: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "new: Unknown exception");
  }
  return dub_error(L);
}



// --=============================================== __tostring
static int ofLogError___tostring(lua_State *L) {
  ofLogError *self = *((ofLogError **)dub_checksdata_n(L, 1, "ofLogError"));
  lua_pushfstring(L, "ofLogError: %p", self);
  
  return 1;
}

// --=============================================== METHODS

static const struct luaL_Reg ofLogError_member_methods[] = {
  { "__gc"         , ofLogError__ofLogError },
  { "_cast_"       , ofLogError__cast_    },
  { "new"          , ofLogError_ofLogError },
  { "__tostring"   , ofLogError___tostring },
  { "deleted"      , dub_isDeleted        },
  { NULL, NULL},
};


extern "C" int luaopen_ofLogError(lua_State *L)
{
  // Create the metatable which will contain all the member methods
  luaL_newmetatable(L, "ofLogError");
  // <mt>

  // register member methods
  luaL_register(L, NULL, ofLogError_member_methods);
  // save meta-table in _G
  dub_register(L, "_G", "ofLogError", "ofLogError");
  // <mt>
  lua_pop(L, 1);
  return 0;
}
