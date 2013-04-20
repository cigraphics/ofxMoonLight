/**
 *
 * MACHINE GENERATED FILE. DO NOT EDIT.
 *
 * Bindings for class ofSubPath
 *
 * This file has been generated by dub 2.1.~.
 */
#include "dub/dub.h"
#include "api/openFrameworks/graphics/ofPath.h"


/** ~ofSubPath()
 * 
 */
static int ofSubPath__ofSubPath(lua_State *L) {
  try {
    DubUserdata *userdata = ((DubUserdata*)dub_checksdata_d(L, 1, "ofSubPath"));
    if (userdata->gc) {
      ofSubPath *self = (ofSubPath *)userdata->ptr;
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

/** ofSubPath::ofSubPath()
 * api/openFrameworks/graphics/ofPath.h:116
 */
static int ofSubPath_ofSubPath(lua_State *L) {
  try {
    ofSubPath *retval__ = new ofSubPath();
    dub_pushudata(L, retval__, "ofSubPath", true);
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "new: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "new: Unknown exception");
  }
  return dub_error(L);
}

/** vector<Command>& ofSubPath::getCommands()
 * api/openFrameworks/graphics/ofPath.h:117
 */
static int ofSubPath_getCommands(lua_State *L) {
  try {
    ofSubPath *self = *((ofSubPath **)dub_checksdata(L, 1, "ofSubPath"));
    dub_pushudata(L, &self->getCommands(), "vector< Command >", false);
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "getCommands: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "getCommands: Unknown exception");
  }
  return dub_error(L);
}

/** void ofSubPath::addCommand(const Command &command)
 * api/openFrameworks/graphics/ofPath.h:119
 */
static int ofSubPath_addCommand(lua_State *L) {
  try {
    ofSubPath *self = *((ofSubPath **)dub_checksdata(L, 1, "ofSubPath"));
    ofSubPath::Command *command = *((ofSubPath::Command **)dub_checksdata(L, 2, "ofSubPath.Command"));
    self->addCommand(*command);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "addCommand: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "addCommand: Unknown exception");
  }
  return dub_error(L);
}

/** void ofSubPath::close()
 * api/openFrameworks/graphics/ofPath.h:121
 */
static int ofSubPath_close(lua_State *L) {
  try {
    ofSubPath *self = *((ofSubPath **)dub_checksdata(L, 1, "ofSubPath"));
    self->close();
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "close: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "close: Unknown exception");
  }
  return dub_error(L);
}

/** bool ofSubPath::isClosed()
 * api/openFrameworks/graphics/ofPath.h:122
 */
static int ofSubPath_isClosed(lua_State *L) {
  try {
    ofSubPath *self = *((ofSubPath **)dub_checksdata(L, 1, "ofSubPath"));
    lua_pushboolean(L, self->isClosed());
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "isClosed: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "isClosed: Unknown exception");
  }
  return dub_error(L);
}

/** int ofSubPath::size()
 * api/openFrameworks/graphics/ofPath.h:123
 */
static int ofSubPath_size(lua_State *L) {
  try {
    ofSubPath *self = *((ofSubPath **)dub_checksdata(L, 1, "ofSubPath"));
    lua_pushnumber(L, self->size());
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "size: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "size: Unknown exception");
  }
  return dub_error(L);
}



// --=============================================== __tostring
static int ofSubPath___tostring(lua_State *L) {
  ofSubPath *self = *((ofSubPath **)dub_checksdata_n(L, 1, "ofSubPath"));
  lua_pushfstring(L, "ofSubPath: %p", self);
  
  return 1;
}

// --=============================================== METHODS

static const struct luaL_Reg ofSubPath_member_methods[] = {
  { "__gc"         , ofSubPath__ofSubPath },
  { "new"          , ofSubPath_ofSubPath  },
  { "getCommands"  , ofSubPath_getCommands },
  { "addCommand"   , ofSubPath_addCommand },
  { "close"        , ofSubPath_close      },
  { "isClosed"     , ofSubPath_isClosed   },
  { "size"         , ofSubPath_size       },
  { "__tostring"   , ofSubPath___tostring },
  { "deleted"      , dub_isDeleted        },
  { NULL, NULL},
};


extern "C" int luaopen_ofSubPath(lua_State *L)
{
  // Create the metatable which will contain all the member methods
  luaL_newmetatable(L, "ofSubPath");
  // <mt>

  // register member methods
  luaL_register(L, NULL, ofSubPath_member_methods);
  // save meta-table in _G
  dub_register(L, "_G", "ofSubPath", "ofSubPath");
  // <mt>
  lua_pop(L, 1);
  return 0;
}
