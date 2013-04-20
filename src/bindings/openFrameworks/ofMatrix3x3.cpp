/**
 *
 * MACHINE GENERATED FILE. DO NOT EDIT.
 *
 * Bindings for class ofMatrix3x3
 *
 * This file has been generated by dub 2.1.~.
 */
#include "dub/dub.h"
#include "api/openFrameworks/math/ofMatrix3x3.h"


/** ~ofMatrix3x3()
 * 
 */
static int ofMatrix3x3__ofMatrix3x3(lua_State *L) {
  try {
    DubUserdata *userdata = ((DubUserdata*)dub_checksdata_d(L, 1, "ofMatrix3x3"));
    if (userdata->gc) {
      ofMatrix3x3 *self = (ofMatrix3x3 *)userdata->ptr;
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
static int ofMatrix3x3__set_(lua_State *L) {

  ofMatrix3x3 *self = *((ofMatrix3x3 **)dub_checksdata_n(L, 1, "ofMatrix3x3"));
  const char *key = luaL_checkstring(L, 2);
  int key_h = dub_hash(key, 9);
  switch(key_h) {
    case 7: {
      if (DUB_ASSERT_KEY(key, "a")) break;
      self->a = luaL_checknumber(L, 3);
      return 0;
    }
    case 8: {
      if (DUB_ASSERT_KEY(key, "b")) break;
      self->b = luaL_checknumber(L, 3);
      return 0;
    }
    case 0: {
      if (DUB_ASSERT_KEY(key, "c")) break;
      self->c = luaL_checknumber(L, 3);
      return 0;
    }
    case 1: {
      if (DUB_ASSERT_KEY(key, "d")) break;
      self->d = luaL_checknumber(L, 3);
      return 0;
    }
    case 2: {
      if (DUB_ASSERT_KEY(key, "e")) break;
      self->e = luaL_checknumber(L, 3);
      return 0;
    }
    case 3: {
      if (DUB_ASSERT_KEY(key, "f")) break;
      self->f = luaL_checknumber(L, 3);
      return 0;
    }
    case 4: {
      if (DUB_ASSERT_KEY(key, "g")) break;
      self->g = luaL_checknumber(L, 3);
      return 0;
    }
    case 5: {
      if (DUB_ASSERT_KEY(key, "h")) break;
      self->h = luaL_checknumber(L, 3);
      return 0;
    }
    case 6: {
      if (DUB_ASSERT_KEY(key, "i")) break;
      self->i = luaL_checknumber(L, 3);
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

/** ofMatrix3x3::ofMatrix3x3(float _a=0.0, float _b=0.0, float _c=0.0, float _d=0.0, float _e=0.0, float _f=0.0, float _g=0.0, float _h=0.0, float _i=0.0)
 * api/openFrameworks/math/ofMatrix3x3.h:35
 */
static int ofMatrix3x3_ofMatrix3x3(lua_State *L) {
  try {
    int top__ = lua_gettop(L);
    if (top__ >= 9) {
      float _a = dub_checknumber(L, 1);
      float _b = dub_checknumber(L, 2);
      float _c = dub_checknumber(L, 3);
      float _d = dub_checknumber(L, 4);
      float _e = dub_checknumber(L, 5);
      float _f = dub_checknumber(L, 6);
      float _g = dub_checknumber(L, 7);
      float _h = dub_checknumber(L, 8);
      float _i = dub_checknumber(L, 9);
      ofMatrix3x3 *retval__ = new ofMatrix3x3(_a, _b, _c, _d, _e, _f, _g, _h, _i);
      dub_pushudata(L, retval__, "ofMatrix3x3", true);
      return 1;
    } else if (top__ >= 8) {
      float _a = dub_checknumber(L, 1);
      float _b = dub_checknumber(L, 2);
      float _c = dub_checknumber(L, 3);
      float _d = dub_checknumber(L, 4);
      float _e = dub_checknumber(L, 5);
      float _f = dub_checknumber(L, 6);
      float _g = dub_checknumber(L, 7);
      float _h = dub_checknumber(L, 8);
      ofMatrix3x3 *retval__ = new ofMatrix3x3(_a, _b, _c, _d, _e, _f, _g, _h);
      dub_pushudata(L, retval__, "ofMatrix3x3", true);
      return 1;
    } else if (top__ >= 7) {
      float _a = dub_checknumber(L, 1);
      float _b = dub_checknumber(L, 2);
      float _c = dub_checknumber(L, 3);
      float _d = dub_checknumber(L, 4);
      float _e = dub_checknumber(L, 5);
      float _f = dub_checknumber(L, 6);
      float _g = dub_checknumber(L, 7);
      ofMatrix3x3 *retval__ = new ofMatrix3x3(_a, _b, _c, _d, _e, _f, _g);
      dub_pushudata(L, retval__, "ofMatrix3x3", true);
      return 1;
    } else if (top__ >= 6) {
      float _a = dub_checknumber(L, 1);
      float _b = dub_checknumber(L, 2);
      float _c = dub_checknumber(L, 3);
      float _d = dub_checknumber(L, 4);
      float _e = dub_checknumber(L, 5);
      float _f = dub_checknumber(L, 6);
      ofMatrix3x3 *retval__ = new ofMatrix3x3(_a, _b, _c, _d, _e, _f);
      dub_pushudata(L, retval__, "ofMatrix3x3", true);
      return 1;
    } else if (top__ >= 5) {
      float _a = dub_checknumber(L, 1);
      float _b = dub_checknumber(L, 2);
      float _c = dub_checknumber(L, 3);
      float _d = dub_checknumber(L, 4);
      float _e = dub_checknumber(L, 5);
      ofMatrix3x3 *retval__ = new ofMatrix3x3(_a, _b, _c, _d, _e);
      dub_pushudata(L, retval__, "ofMatrix3x3", true);
      return 1;
    } else if (top__ >= 4) {
      float _a = dub_checknumber(L, 1);
      float _b = dub_checknumber(L, 2);
      float _c = dub_checknumber(L, 3);
      float _d = dub_checknumber(L, 4);
      ofMatrix3x3 *retval__ = new ofMatrix3x3(_a, _b, _c, _d);
      dub_pushudata(L, retval__, "ofMatrix3x3", true);
      return 1;
    } else if (top__ >= 3) {
      float _a = dub_checknumber(L, 1);
      float _b = dub_checknumber(L, 2);
      float _c = dub_checknumber(L, 3);
      ofMatrix3x3 *retval__ = new ofMatrix3x3(_a, _b, _c);
      dub_pushudata(L, retval__, "ofMatrix3x3", true);
      return 1;
    } else if (top__ >= 2) {
      float _a = dub_checknumber(L, 1);
      float _b = dub_checknumber(L, 2);
      ofMatrix3x3 *retval__ = new ofMatrix3x3(_a, _b);
      dub_pushudata(L, retval__, "ofMatrix3x3", true);
      return 1;
    } else if (top__ >= 1) {
      float _a = dub_checknumber(L, 1);
      ofMatrix3x3 *retval__ = new ofMatrix3x3(_a);
      dub_pushudata(L, retval__, "ofMatrix3x3", true);
      return 1;
    } else {
      ofMatrix3x3 *retval__ = new ofMatrix3x3();
      dub_pushudata(L, retval__, "ofMatrix3x3", true);
      return 1;
    }
  } catch (std::exception &e) {
    lua_pushfstring(L, "new: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "new: Unknown exception");
  }
  return dub_error(L);
}

/** void ofMatrix3x3::set(float _a, float _b, float _c, float _d, float _e, float _f, float _g, float _h, float _i)
 * api/openFrameworks/math/ofMatrix3x3.h:42
 */
static int ofMatrix3x3_set(lua_State *L) {
  try {
    ofMatrix3x3 *self = *((ofMatrix3x3 **)dub_checksdata(L, 1, "ofMatrix3x3"));
    float _a = dub_checknumber(L, 2);
    float _b = dub_checknumber(L, 3);
    float _c = dub_checknumber(L, 4);
    float _d = dub_checknumber(L, 5);
    float _e = dub_checknumber(L, 6);
    float _f = dub_checknumber(L, 7);
    float _g = dub_checknumber(L, 8);
    float _h = dub_checknumber(L, 9);
    float _i = dub_checknumber(L, 10);
    self->set(_a, _b, _c, _d, _e, _f, _g, _h, _i);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "set: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "set: Unknown exception");
  }
  return dub_error(L);
}

/** float& ofMatrix3x3::operator[](const int &index)
 * api/openFrameworks/math/ofMatrix3x3.h:45
 */
static int ofMatrix3x3__get_(lua_State *L) {

  ofMatrix3x3 *self = *((ofMatrix3x3 **)dub_checksdata_n(L, 1, "ofMatrix3x3", true));
  if (lua_type(L, 2) != LUA_TSTRING) {
    const int index = luaL_checkint(L, 2);
    lua_pushnumber(L, self->operator[](index));
    return 1;
  }
  
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
  int key_h = dub_hash(key, 9);
  switch(key_h) {
    case 7: {
      if (DUB_ASSERT_KEY(key, "a")) break;
      lua_pushnumber(L, self->a);
      return 1;
    }
    case 8: {
      if (DUB_ASSERT_KEY(key, "b")) break;
      lua_pushnumber(L, self->b);
      return 1;
    }
    case 0: {
      if (DUB_ASSERT_KEY(key, "c")) break;
      lua_pushnumber(L, self->c);
      return 1;
    }
    case 1: {
      if (DUB_ASSERT_KEY(key, "d")) break;
      lua_pushnumber(L, self->d);
      return 1;
    }
    case 2: {
      if (DUB_ASSERT_KEY(key, "e")) break;
      lua_pushnumber(L, self->e);
      return 1;
    }
    case 3: {
      if (DUB_ASSERT_KEY(key, "f")) break;
      lua_pushnumber(L, self->f);
      return 1;
    }
    case 4: {
      if (DUB_ASSERT_KEY(key, "g")) break;
      lua_pushnumber(L, self->g);
      return 1;
    }
    case 5: {
      if (DUB_ASSERT_KEY(key, "h")) break;
      lua_pushnumber(L, self->h);
      return 1;
    }
    case 6: {
      if (DUB_ASSERT_KEY(key, "i")) break;
      lua_pushnumber(L, self->i);
      return 1;
    }
  }
  return 0;
}

/** void ofMatrix3x3::transpose()
 * api/openFrameworks/math/ofMatrix3x3.h:56
 */
static int ofMatrix3x3_transpose(lua_State *L) {
  try {
    ofMatrix3x3 *self = *((ofMatrix3x3 **)dub_checksdata(L, 1, "ofMatrix3x3"));
    int top__ = lua_gettop(L);
    if (top__ >= 2) {
      ofMatrix3x3 *A = *((ofMatrix3x3 **)dub_checksdata(L, 2, "ofMatrix3x3"));
      dub_pushudata(L, new ofMatrix3x3(self->transpose(*A)), "ofMatrix3x3", true);
      return 1;
    } else {
      self->transpose();
      return 0;
    }
  } catch (std::exception &e) {
    lua_pushfstring(L, "transpose: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "transpose: Unknown exception");
  }
  return dub_error(L);
}

/** float ofMatrix3x3::determinant() const
 * api/openFrameworks/math/ofMatrix3x3.h:72
 */
static int ofMatrix3x3_determinant(lua_State *L) {
  try {
    ofMatrix3x3 *self = *((ofMatrix3x3 **)dub_checksdata(L, 1, "ofMatrix3x3"));
    int top__ = lua_gettop(L);
    if (top__ >= 2) {
      ofMatrix3x3 *A = *((ofMatrix3x3 **)dub_checksdata(L, 2, "ofMatrix3x3"));
      lua_pushnumber(L, self->determinant(*A));
      return 1;
    } else {
      lua_pushnumber(L, self->determinant());
      return 1;
    }
  } catch (std::exception &e) {
    lua_pushfstring(L, "determinant: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "determinant: Unknown exception");
  }
  return dub_error(L);
}

/** void ofMatrix3x3::invert()
 * api/openFrameworks/math/ofMatrix3x3.h:87
 */
static int ofMatrix3x3_invert(lua_State *L) {
  try {
    ofMatrix3x3 *self = *((ofMatrix3x3 **)dub_checksdata(L, 1, "ofMatrix3x3"));
    self->invert();
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "invert: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "invert: Unknown exception");
  }
  return dub_error(L);
}

/** ofMatrix3x3 ofMatrix3x3::inverse(const ofMatrix3x3 &A)
 * api/openFrameworks/math/ofMatrix3x3.h:89
 */
static int ofMatrix3x3_inverse(lua_State *L) {
  try {
    ofMatrix3x3 *self = *((ofMatrix3x3 **)dub_checksdata(L, 1, "ofMatrix3x3"));
    ofMatrix3x3 *A = *((ofMatrix3x3 **)dub_checksdata(L, 2, "ofMatrix3x3"));
    dub_pushudata(L, new ofMatrix3x3(self->inverse(*A)), "ofMatrix3x3", true);
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "inverse: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "inverse: Unknown exception");
  }
  return dub_error(L);
}

/** ofMatrix3x3 ofMatrix3x3::operator+(const ofMatrix3x3 &B)
 * api/openFrameworks/math/ofMatrix3x3.h:95
 */
static int ofMatrix3x3_operator_add(lua_State *L) {
  try {
    ofMatrix3x3 *self = *((ofMatrix3x3 **)dub_checksdata(L, 1, "ofMatrix3x3"));
    ofMatrix3x3 *B = *((ofMatrix3x3 **)dub_checksdata(L, 2, "ofMatrix3x3"));
    dub_pushudata(L, new ofMatrix3x3(self->operator+(*B)), "ofMatrix3x3", true);
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "__add: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "__add: Unknown exception");
  }
  return dub_error(L);
}

/** void ofMatrix3x3::operator+=(const ofMatrix3x3 &B)
 * api/openFrameworks/math/ofMatrix3x3.h:97
 */
static int ofMatrix3x3_operator_adde(lua_State *L) {
  try {
    ofMatrix3x3 *self = *((ofMatrix3x3 **)dub_checksdata(L, 1, "ofMatrix3x3"));
    ofMatrix3x3 *B = *((ofMatrix3x3 **)dub_checksdata(L, 2, "ofMatrix3x3"));
    self->operator+=(*B);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "add: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "add: Unknown exception");
  }
  return dub_error(L);
}

/** ofMatrix3x3 ofMatrix3x3::operator-(const ofMatrix3x3 &B)
 * api/openFrameworks/math/ofMatrix3x3.h:102
 */
static int ofMatrix3x3_operator_sub(lua_State *L) {
  try {
    ofMatrix3x3 *self = *((ofMatrix3x3 **)dub_checksdata(L, 1, "ofMatrix3x3"));
    ofMatrix3x3 *B = *((ofMatrix3x3 **)dub_checksdata(L, 2, "ofMatrix3x3"));
    dub_pushudata(L, new ofMatrix3x3(self->operator-(*B)), "ofMatrix3x3", true);
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "__sub: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "__sub: Unknown exception");
  }
  return dub_error(L);
}

/** void ofMatrix3x3::operator-=(const ofMatrix3x3 &B)
 * api/openFrameworks/math/ofMatrix3x3.h:104
 */
static int ofMatrix3x3_operator_sube(lua_State *L) {
  try {
    ofMatrix3x3 *self = *((ofMatrix3x3 **)dub_checksdata(L, 1, "ofMatrix3x3"));
    ofMatrix3x3 *B = *((ofMatrix3x3 **)dub_checksdata(L, 2, "ofMatrix3x3"));
    self->operator-=(*B);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "sub: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "sub: Unknown exception");
  }
  return dub_error(L);
}

/** ofMatrix3x3 ofMatrix3x3::operator*(float scalar)
 * api/openFrameworks/math/ofMatrix3x3.h:110
 */
static int ofMatrix3x3_operator_mul(lua_State *L) {
  try {
    ofMatrix3x3 *self = *((ofMatrix3x3 **)dub_checksdata(L, 1, "ofMatrix3x3"));
    int type__ = lua_type(L, 2);
    if (type__ == LUA_TNUMBER) {
      float scalar = dub_checknumber(L, 2);
      dub_pushudata(L, new ofMatrix3x3(self->operator*(scalar)), "ofMatrix3x3", true);
      return 1;
    } else {
      ofMatrix3x3 *B = *((ofMatrix3x3 **)dub_checksdata(L, 2, "ofMatrix3x3"));
      dub_pushudata(L, new ofMatrix3x3(self->operator*(*B)), "ofMatrix3x3", true);
      return 1;
    }
  } catch (std::exception &e) {
    lua_pushfstring(L, "__mul: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "__mul: Unknown exception");
  }
  return dub_error(L);
}

/** void ofMatrix3x3::operator*=(const ofMatrix3x3 &B)
 * api/openFrameworks/math/ofMatrix3x3.h:115
 */
static int ofMatrix3x3_operator_mule(lua_State *L) {
  try {
    ofMatrix3x3 *self = *((ofMatrix3x3 **)dub_checksdata(L, 1, "ofMatrix3x3"));
    int type__ = lua_type(L, 2);
    if (type__ == LUA_TNUMBER) {
      float scalar = dub_checknumber(L, 2);
      self->operator*=(scalar);
      return 0;
    } else {
      ofMatrix3x3 *B = *((ofMatrix3x3 **)dub_checksdata(L, 2, "ofMatrix3x3"));
      self->operator*=(*B);
      return 0;
    }
  } catch (std::exception &e) {
    lua_pushfstring(L, "mul: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "mul: Unknown exception");
  }
  return dub_error(L);
}

/** ofMatrix3x3 ofMatrix3x3::entrywiseTimes(const ofMatrix3x3 &A)
 * api/openFrameworks/math/ofMatrix3x3.h:121
 */
static int ofMatrix3x3_entrywiseTimes(lua_State *L) {
  try {
    ofMatrix3x3 *self = *((ofMatrix3x3 **)dub_checksdata(L, 1, "ofMatrix3x3"));
    ofMatrix3x3 *A = *((ofMatrix3x3 **)dub_checksdata(L, 2, "ofMatrix3x3"));
    dub_pushudata(L, new ofMatrix3x3(self->entrywiseTimes(*A)), "ofMatrix3x3", true);
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "entrywiseTimes: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "entrywiseTimes: Unknown exception");
  }
  return dub_error(L);
}

/** ofMatrix3x3 ofMatrix3x3::operator/(float scalar)
 * api/openFrameworks/math/ofMatrix3x3.h:139
 */
static int ofMatrix3x3_operator_div(lua_State *L) {
  try {
    ofMatrix3x3 *self = *((ofMatrix3x3 **)dub_checksdata(L, 1, "ofMatrix3x3"));
    float scalar = dub_checknumber(L, 2);
    dub_pushudata(L, new ofMatrix3x3(self->operator/(scalar)), "ofMatrix3x3", true);
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "__div: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "__div: Unknown exception");
  }
  return dub_error(L);
}

/** void ofMatrix3x3::operator/=(const ofMatrix3x3 &B)
 * api/openFrameworks/math/ofMatrix3x3.h:142
 */
static int ofMatrix3x3_operator_dive(lua_State *L) {
  try {
    ofMatrix3x3 *self = *((ofMatrix3x3 **)dub_checksdata(L, 1, "ofMatrix3x3"));
    int type__ = lua_type(L, 2);
    if (type__ == LUA_TNUMBER) {
      float scalar = dub_checknumber(L, 2);
      self->operator/=(scalar);
      return 0;
    } else {
      ofMatrix3x3 *B = *((ofMatrix3x3 **)dub_checksdata(L, 2, "ofMatrix3x3"));
      self->operator/=(*B);
      return 0;
    }
  } catch (std::exception &e) {
    lua_pushfstring(L, "div: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "div: Unknown exception");
  }
  return dub_error(L);
}



// --=============================================== __tostring
static int ofMatrix3x3___tostring(lua_State *L) {
  ofMatrix3x3 *self = *((ofMatrix3x3 **)dub_checksdata_n(L, 1, "ofMatrix3x3"));
  lua_pushfstring(L, "ofMatrix3x3: %p", self);
  
  return 1;
}

// --=============================================== METHODS

static const struct luaL_Reg ofMatrix3x3_member_methods[] = {
  { "__gc"         , ofMatrix3x3__ofMatrix3x3 },
  { "__newindex"   , ofMatrix3x3__set_    },
  { "new"          , ofMatrix3x3_ofMatrix3x3 },
  { "set"          , ofMatrix3x3_set      },
  { "__index"      , ofMatrix3x3__get_    },
  { "transpose"    , ofMatrix3x3_transpose },
  { "determinant"  , ofMatrix3x3_determinant },
  { "invert"       , ofMatrix3x3_invert   },
  { "inverse"      , ofMatrix3x3_inverse  },
  { "__add"        , ofMatrix3x3_operator_add },
  { "add"          , ofMatrix3x3_operator_adde },
  { "__sub"        , ofMatrix3x3_operator_sub },
  { "sub"          , ofMatrix3x3_operator_sube },
  { "__mul"        , ofMatrix3x3_operator_mul },
  { "mul"          , ofMatrix3x3_operator_mule },
  { "entrywiseTimes", ofMatrix3x3_entrywiseTimes },
  { "__div"        , ofMatrix3x3_operator_div },
  { "div"          , ofMatrix3x3_operator_dive },
  { "__tostring"   , ofMatrix3x3___tostring },
  { "deleted"      , dub_isDeleted        },
  { NULL, NULL},
};


extern "C" int luaopen_ofMatrix3x3(lua_State *L)
{
  // Create the metatable which will contain all the member methods
  luaL_newmetatable(L, "ofMatrix3x3");
  // <mt>

  // register member methods
  luaL_register(L, NULL, ofMatrix3x3_member_methods);
  // save meta-table in _G
  dub_register(L, "_G", "ofMatrix3x3", "ofMatrix3x3");
  // <mt>
  lua_pop(L, 1);
  return 0;
}
