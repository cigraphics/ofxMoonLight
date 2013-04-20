/**
 *
 * MACHINE GENERATED FILE. DO NOT EDIT.
 *
 * Bindings for class ofTessellator
 *
 * This file has been generated by dub 2.1.~.
 */
#include "dub/dub.h"
#include "graphics/ofTessellator.h"


/** ofTessellator::ofTessellator()
 * api/openFrameworks/graphics/ofTessellator.h:14
 */
static int ofTessellator_ofTessellator(lua_State *L) {
  try {
    int top__ = lua_gettop(L);
    if (top__ >= 1) {
      ofTessellator *mom = *((ofTessellator **)dub_checksdata(L, 1, "ofTessellator"));
      ofTessellator *retval__ = new ofTessellator(*mom);
      dub_pushudata(L, retval__, "ofTessellator", true);
      return 1;
    } else {
      ofTessellator *retval__ = new ofTessellator();
      dub_pushudata(L, retval__, "ofTessellator", true);
      return 1;
    }
  } catch (std::exception &e) {
    lua_pushfstring(L, "new: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "new: Unknown exception");
  }
  return dub_error(L);
}

/** ofTessellator::~ofTessellator()
 * api/openFrameworks/graphics/ofTessellator.h:15
 */
static int ofTessellator__ofTessellator(lua_State *L) {
  try {
    DubUserdata *userdata = ((DubUserdata*)dub_checksdata_d(L, 1, "ofTessellator"));
    if (userdata->gc) {
      ofTessellator *self = (ofTessellator *)userdata->ptr;
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

/** ofTessellator& ofTessellator::operator=(const ofTessellator &mom)
 * api/openFrameworks/graphics/ofTessellator.h:17
 */
static int ofTessellator_operator_sete(lua_State *L) {
  try {
    ofTessellator *self = *((ofTessellator **)dub_checksdata(L, 1, "ofTessellator"));
    ofTessellator *mom = *((ofTessellator **)dub_checksdata(L, 2, "ofTessellator"));
    dub_pushudata(L, &self->operator=(*mom), "ofTessellator", false);
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "set: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "set: Unknown exception");
  }
  return dub_error(L);
}

/** void ofTessellator::tessellateToMesh(const vector< ofPolyline > &src, ofPolyWindingMode polyWindingMode, ofMesh &dstmesh, bool bIs2D=false)
 * api/openFrameworks/graphics/ofTessellator.h:19
 */
static int ofTessellator_tessellateToMesh(lua_State *L) {
  try {
    ofTessellator *self = *((ofTessellator **)dub_checksdata(L, 1, "ofTessellator"));
    int top__ = lua_gettop(L);
    if (top__ >= 5) {
      int type__ = lua_type(L, 2);
      void **ptr2__;
      if ( (ptr2__ = dub_issdata(L, 2, "vector< ofPolyline >", type__)) ) {
        vector< ofPolyline > *src = *((vector< ofPolyline > **)ptr2__);
        ofPolyWindingMode polyWindingMode = (ofPolyWindingMode)dub_checkint(L, 3);
        ofMesh *dstmesh = *((ofMesh **)dub_checksdata(L, 4, "ofMesh"));
        bool bIs2D = dub_checkboolean(L, 5);
        self->tessellateToMesh(*src, polyWindingMode, *dstmesh, bIs2D);
        return 0;
      } else {
        ofPolyline *src = *((ofPolyline **)dub_checksdata(L, 2, "ofPolyline"));
        ofPolyWindingMode polyWindingMode = (ofPolyWindingMode)dub_checkint(L, 3);
        ofMesh *dstmesh = *((ofMesh **)dub_checksdata(L, 4, "ofMesh"));
        bool bIs2D = dub_checkboolean(L, 5);
        self->tessellateToMesh(*src, polyWindingMode, *dstmesh, bIs2D);
        return 0;
      }
    } else {
      int type__ = lua_type(L, 2);
      void **ptr2__;
      if ( (ptr2__ = dub_issdata(L, 2, "vector< ofPolyline >", type__)) ) {
        vector< ofPolyline > *src = *((vector< ofPolyline > **)ptr2__);
        ofPolyWindingMode polyWindingMode = (ofPolyWindingMode)dub_checkint(L, 3);
        ofMesh *dstmesh = *((ofMesh **)dub_checksdata(L, 4, "ofMesh"));
        self->tessellateToMesh(*src, polyWindingMode, *dstmesh);
        return 0;
      } else {
        ofPolyline *src = *((ofPolyline **)dub_checksdata(L, 2, "ofPolyline"));
        ofPolyWindingMode polyWindingMode = (ofPolyWindingMode)dub_checkint(L, 3);
        ofMesh *dstmesh = *((ofMesh **)dub_checksdata(L, 4, "ofMesh"));
        self->tessellateToMesh(*src, polyWindingMode, *dstmesh);
        return 0;
      }
    }
  } catch (std::exception &e) {
    lua_pushfstring(L, "tessellateToMesh: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "tessellateToMesh: Unknown exception");
  }
  return dub_error(L);
}

/** void ofTessellator::tessellateToPolylines(const vector< ofPolyline > &src, ofPolyWindingMode polyWindingMode, vector< ofPolyline > &dstpoly, bool bIs2D=false)
 * api/openFrameworks/graphics/ofTessellator.h:22
 */
static int ofTessellator_tessellateToPolylines(lua_State *L) {
  try {
    ofTessellator *self = *((ofTessellator **)dub_checksdata(L, 1, "ofTessellator"));
    int top__ = lua_gettop(L);
    if (top__ >= 5) {
      int type__ = lua_type(L, 2);
      void **ptr2__;
      if ( (ptr2__ = dub_issdata(L, 2, "vector< ofPolyline >", type__)) ) {
        vector< ofPolyline > *src = *((vector< ofPolyline > **)ptr2__);
        ofPolyWindingMode polyWindingMode = (ofPolyWindingMode)dub_checkint(L, 3);
        vector< ofPolyline > *dstpoly = *((vector< ofPolyline > **)dub_checksdata(L, 4, "vector< ofPolyline >"));
        bool bIs2D = dub_checkboolean(L, 5);
        self->tessellateToPolylines(*src, polyWindingMode, *dstpoly, bIs2D);
        return 0;
      } else {
        ofPolyline *src = *((ofPolyline **)dub_checksdata(L, 2, "ofPolyline"));
        ofPolyWindingMode polyWindingMode = (ofPolyWindingMode)dub_checkint(L, 3);
        vector< ofPolyline > *dstpoly = *((vector< ofPolyline > **)dub_checksdata(L, 4, "vector< ofPolyline >"));
        bool bIs2D = dub_checkboolean(L, 5);
        self->tessellateToPolylines(*src, polyWindingMode, *dstpoly, bIs2D);
        return 0;
      }
    } else {
      int type__ = lua_type(L, 2);
      void **ptr2__;
      if ( (ptr2__ = dub_issdata(L, 2, "vector< ofPolyline >", type__)) ) {
        vector< ofPolyline > *src = *((vector< ofPolyline > **)ptr2__);
        ofPolyWindingMode polyWindingMode = (ofPolyWindingMode)dub_checkint(L, 3);
        vector< ofPolyline > *dstpoly = *((vector< ofPolyline > **)dub_checksdata(L, 4, "vector< ofPolyline >"));
        self->tessellateToPolylines(*src, polyWindingMode, *dstpoly);
        return 0;
      } else {
        ofPolyline *src = *((ofPolyline **)dub_checksdata(L, 2, "ofPolyline"));
        ofPolyWindingMode polyWindingMode = (ofPolyWindingMode)dub_checkint(L, 3);
        vector< ofPolyline > *dstpoly = *((vector< ofPolyline > **)dub_checksdata(L, 4, "vector< ofPolyline >"));
        self->tessellateToPolylines(*src, polyWindingMode, *dstpoly);
        return 0;
      }
    }
  } catch (std::exception &e) {
    lua_pushfstring(L, "tessellateToPolylines: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "tessellateToPolylines: Unknown exception");
  }
  return dub_error(L);
}



// --=============================================== __tostring
static int ofTessellator___tostring(lua_State *L) {
  ofTessellator *self = *((ofTessellator **)dub_checksdata_n(L, 1, "ofTessellator"));
  lua_pushfstring(L, "ofTessellator: %p", self);
  
  return 1;
}

// --=============================================== METHODS

static const struct luaL_Reg ofTessellator_member_methods[] = {
  { "new"          , ofTessellator_ofTessellator },
  { "__gc"         , ofTessellator__ofTessellator },
  { "set"          , ofTessellator_operator_sete },
  { "tessellateToMesh", ofTessellator_tessellateToMesh },
  { "tessellateToPolylines", ofTessellator_tessellateToPolylines },
  { "__tostring"   , ofTessellator___tostring },
  { "deleted"      , dub_isDeleted        },
  { NULL, NULL},
};


extern "C" int luaopen_ofTessellator(lua_State *L)
{
  // Create the metatable which will contain all the member methods
  luaL_newmetatable(L, "ofTessellator");
  // <mt>

  // register member methods
  luaL_register(L, NULL, ofTessellator_member_methods);
  // save meta-table in _G
  dub_register(L, "_G", "ofTessellator", "ofTessellator");
  // <mt>
  lua_pop(L, 1);
  return 0;
}
