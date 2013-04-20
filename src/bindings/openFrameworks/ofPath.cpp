/**
 *
 * MACHINE GENERATED FILE. DO NOT EDIT.
 *
 * Bindings for class ofPath
 *
 * This file has been generated by dub 2.1.~.
 */
#include "dub/dub.h"
#include "graphics/ofPath.h"


/** ~ofPath()
 * 
 */
static int ofPath__ofPath(lua_State *L) {
  try {
    DubUserdata *userdata = ((DubUserdata*)dub_checksdata_d(L, 1, "ofPath"));
    if (userdata->gc) {
      ofPath *self = (ofPath *)userdata->ptr;
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

/** ofPath::ofPath()
 * api/openFrameworks/graphics/ofPath.h:16
 */
static int ofPath_ofPath(lua_State *L) {
  try {
    ofPath *retval__ = new ofPath();
    dub_pushudata(L, retval__, "ofPath", true);
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "new: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "new: Unknown exception");
  }
  return dub_error(L);
}

/** void ofPath::clear()
 * api/openFrameworks/graphics/ofPath.h:18
 */
static int ofPath_clear(lua_State *L) {
  try {
    ofPath *self = *((ofPath **)dub_checksdata(L, 1, "ofPath"));
    self->clear();
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "clear: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "clear: Unknown exception");
  }
  return dub_error(L);
}

/** void ofPath::newSubPath()
 * api/openFrameworks/graphics/ofPath.h:21
 */
static int ofPath_newSubPath(lua_State *L) {
  try {
    ofPath *self = *((ofPath **)dub_checksdata(L, 1, "ofPath"));
    self->newSubPath();
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "newSubPath: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "newSubPath: Unknown exception");
  }
  return dub_error(L);
}

/** void ofPath::close()
 * api/openFrameworks/graphics/ofPath.h:23
 */
static int ofPath_close(lua_State *L) {
  try {
    ofPath *self = *((ofPath **)dub_checksdata(L, 1, "ofPath"));
    self->close();
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "close: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "close: Unknown exception");
  }
  return dub_error(L);
}

/** void ofPath::lineTo(const ofPoint &p)
 * api/openFrameworks/graphics/ofPath.h:25
 */
static int ofPath_lineTo(lua_State *L) {
  try {
    ofPath *self = *((ofPath **)dub_checksdata(L, 1, "ofPath"));
    int top__ = lua_gettop(L);
    if (top__ >= 4) {
      float x = dub_checknumber(L, 2);
      float y = dub_checknumber(L, 3);
      float z = dub_checknumber(L, 4);
      self->lineTo(x, y, z);
      return 0;
    } else if (top__ >= 3) {
      float x = dub_checknumber(L, 2);
      float y = dub_checknumber(L, 3);
      self->lineTo(x, y);
      return 0;
    } else {
      ofVec3f *p = *((ofVec3f **)dub_checksdata(L, 2, "ofVec3f"));
      self->lineTo(*p);
      return 0;
    }
  } catch (std::exception &e) {
    lua_pushfstring(L, "lineTo: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "lineTo: Unknown exception");
  }
  return dub_error(L);
}

/** void ofPath::moveTo(const ofPoint &p)
 * api/openFrameworks/graphics/ofPath.h:31
 */
static int ofPath_moveTo(lua_State *L) {
  try {
    ofPath *self = *((ofPath **)dub_checksdata(L, 1, "ofPath"));
    int top__ = lua_gettop(L);
    if (top__ >= 4) {
      float x = dub_checknumber(L, 2);
      float y = dub_checknumber(L, 3);
      float z = dub_checknumber(L, 4);
      self->moveTo(x, y, z);
      return 0;
    } else if (top__ >= 3) {
      float x = dub_checknumber(L, 2);
      float y = dub_checknumber(L, 3);
      self->moveTo(x, y);
      return 0;
    } else {
      ofVec3f *p = *((ofVec3f **)dub_checksdata(L, 2, "ofVec3f"));
      self->moveTo(*p);
      return 0;
    }
  } catch (std::exception &e) {
    lua_pushfstring(L, "moveTo: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "moveTo: Unknown exception");
  }
  return dub_error(L);
}

/** void ofPath::curveTo(const ofPoint &p)
 * api/openFrameworks/graphics/ofPath.h:34
 */
static int ofPath_curveTo(lua_State *L) {
  try {
    ofPath *self = *((ofPath **)dub_checksdata(L, 1, "ofPath"));
    int top__ = lua_gettop(L);
    if (top__ >= 4) {
      float x = dub_checknumber(L, 2);
      float y = dub_checknumber(L, 3);
      float z = dub_checknumber(L, 4);
      self->curveTo(x, y, z);
      return 0;
    } else if (top__ >= 3) {
      float x = dub_checknumber(L, 2);
      float y = dub_checknumber(L, 3);
      self->curveTo(x, y);
      return 0;
    } else {
      ofVec3f *p = *((ofVec3f **)dub_checksdata(L, 2, "ofVec3f"));
      self->curveTo(*p);
      return 0;
    }
  } catch (std::exception &e) {
    lua_pushfstring(L, "curveTo: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "curveTo: Unknown exception");
  }
  return dub_error(L);
}

/** void ofPath::bezierTo(const ofPoint &cp1, const ofPoint &cp2, const ofPoint &p)
 * api/openFrameworks/graphics/ofPath.h:38
 */
static int ofPath_bezierTo(lua_State *L) {
  try {
    ofPath *self = *((ofPath **)dub_checksdata(L, 1, "ofPath"));
    int top__ = lua_gettop(L);
    if (top__ >= 10) {
      float cx1 = dub_checknumber(L, 2);
      float cy1 = dub_checknumber(L, 3);
      float cz1 = dub_checknumber(L, 4);
      float cx2 = dub_checknumber(L, 5);
      float cy2 = dub_checknumber(L, 6);
      float cz2 = dub_checknumber(L, 7);
      float x = dub_checknumber(L, 8);
      float y = dub_checknumber(L, 9);
      float z = dub_checknumber(L, 10);
      self->bezierTo(cx1, cy1, cz1, cx2, cy2, cz2, x, y, z);
      return 0;
    } else if (top__ >= 7) {
      float cx1 = dub_checknumber(L, 2);
      float cy1 = dub_checknumber(L, 3);
      float cx2 = dub_checknumber(L, 4);
      float cy2 = dub_checknumber(L, 5);
      float x = dub_checknumber(L, 6);
      float y = dub_checknumber(L, 7);
      self->bezierTo(cx1, cy1, cx2, cy2, x, y);
      return 0;
    } else {
      ofVec3f *cp1 = *((ofVec3f **)dub_checksdata(L, 2, "ofVec3f"));
      ofVec3f *cp2 = *((ofVec3f **)dub_checksdata(L, 3, "ofVec3f"));
      ofVec3f *p = *((ofVec3f **)dub_checksdata(L, 4, "ofVec3f"));
      self->bezierTo(*cp1, *cp2, *p);
      return 0;
    }
  } catch (std::exception &e) {
    lua_pushfstring(L, "bezierTo: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "bezierTo: Unknown exception");
  }
  return dub_error(L);
}

/** void ofPath::quadBezierTo(const ofPoint &cp1, const ofPoint &cp2, const ofPoint &p)
 * api/openFrameworks/graphics/ofPath.h:42
 */
static int ofPath_quadBezierTo(lua_State *L) {
  try {
    ofPath *self = *((ofPath **)dub_checksdata(L, 1, "ofPath"));
    int top__ = lua_gettop(L);
    if (top__ >= 10) {
      float cx1 = dub_checknumber(L, 2);
      float cy1 = dub_checknumber(L, 3);
      float cz1 = dub_checknumber(L, 4);
      float cx2 = dub_checknumber(L, 5);
      float cy2 = dub_checknumber(L, 6);
      float cz2 = dub_checknumber(L, 7);
      float x = dub_checknumber(L, 8);
      float y = dub_checknumber(L, 9);
      float z = dub_checknumber(L, 10);
      self->quadBezierTo(cx1, cy1, cz1, cx2, cy2, cz2, x, y, z);
      return 0;
    } else if (top__ >= 7) {
      float cx1 = dub_checknumber(L, 2);
      float cy1 = dub_checknumber(L, 3);
      float cx2 = dub_checknumber(L, 4);
      float cy2 = dub_checknumber(L, 5);
      float x = dub_checknumber(L, 6);
      float y = dub_checknumber(L, 7);
      self->quadBezierTo(cx1, cy1, cx2, cy2, x, y);
      return 0;
    } else {
      ofVec3f *cp1 = *((ofVec3f **)dub_checksdata(L, 2, "ofVec3f"));
      ofVec3f *cp2 = *((ofVec3f **)dub_checksdata(L, 3, "ofVec3f"));
      ofVec3f *p = *((ofVec3f **)dub_checksdata(L, 4, "ofVec3f"));
      self->quadBezierTo(*cp1, *cp2, *p);
      return 0;
    }
  } catch (std::exception &e) {
    lua_pushfstring(L, "quadBezierTo: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "quadBezierTo: Unknown exception");
  }
  return dub_error(L);
}

/** void ofPath::arc(const ofPoint &centre, float radiusX, float radiusY, float angleBegin, float angleEnd, bool clockwise)
 * api/openFrameworks/graphics/ofPath.h:46
 */
static int ofPath_arc(lua_State *L) {
  try {
    ofPath *self = *((ofPath **)dub_checksdata(L, 1, "ofPath"));
    int top__ = lua_gettop(L);
    if (top__ >= 8) {
      float x = dub_checknumber(L, 2);
      float y = dub_checknumber(L, 3);
      float z = dub_checknumber(L, 4);
      float radiusX = dub_checknumber(L, 5);
      float radiusY = dub_checknumber(L, 6);
      float angleBegin = dub_checknumber(L, 7);
      float angleEnd = dub_checknumber(L, 8);
      self->arc(x, y, z, radiusX, radiusY, angleBegin, angleEnd);
      return 0;
    } else if (top__ >= 7) {
      int type__ = lua_type(L, 7);
      if (type__ == LUA_TBOOLEAN) {
        ofVec3f *centre = *((ofVec3f **)dub_checksdata(L, 2, "ofVec3f"));
        float radiusX = dub_checknumber(L, 3);
        float radiusY = dub_checknumber(L, 4);
        float angleBegin = dub_checknumber(L, 5);
        float angleEnd = dub_checknumber(L, 6);
        bool clockwise = dub_checkboolean(L, 7);
        self->arc(*centre, radiusX, radiusY, angleBegin, angleEnd, clockwise);
        return 0;
      } else {
        float x = dub_checknumber(L, 2);
        float y = dub_checknumber(L, 3);
        float radiusX = dub_checknumber(L, 4);
        float radiusY = dub_checknumber(L, 5);
        float angleBegin = dub_checknumber(L, 6);
        float angleEnd = dub_checknumber(L, 7);
        self->arc(x, y, radiusX, radiusY, angleBegin, angleEnd);
        return 0;
      }
    } else {
      ofVec3f *centre = *((ofVec3f **)dub_checksdata(L, 2, "ofVec3f"));
      float radiusX = dub_checknumber(L, 3);
      float radiusY = dub_checknumber(L, 4);
      float angleBegin = dub_checknumber(L, 5);
      float angleEnd = dub_checknumber(L, 6);
      self->arc(*centre, radiusX, radiusY, angleBegin, angleEnd);
      return 0;
    }
  } catch (std::exception &e) {
    lua_pushfstring(L, "arc: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "arc: Unknown exception");
  }
  return dub_error(L);
}

/** void ofPath::arcNegative(const ofPoint &centre, float radiusX, float radiusY, float angleBegin, float angleEnd)
 * api/openFrameworks/graphics/ofPath.h:52
 */
static int ofPath_arcNegative(lua_State *L) {
  try {
    ofPath *self = *((ofPath **)dub_checksdata(L, 1, "ofPath"));
    int top__ = lua_gettop(L);
    if (top__ >= 8) {
      float x = dub_checknumber(L, 2);
      float y = dub_checknumber(L, 3);
      float z = dub_checknumber(L, 4);
      float radiusX = dub_checknumber(L, 5);
      float radiusY = dub_checknumber(L, 6);
      float angleBegin = dub_checknumber(L, 7);
      float angleEnd = dub_checknumber(L, 8);
      self->arcNegative(x, y, z, radiusX, radiusY, angleBegin, angleEnd);
      return 0;
    } else if (top__ >= 7) {
      float x = dub_checknumber(L, 2);
      float y = dub_checknumber(L, 3);
      float radiusX = dub_checknumber(L, 4);
      float radiusY = dub_checknumber(L, 5);
      float angleBegin = dub_checknumber(L, 6);
      float angleEnd = dub_checknumber(L, 7);
      self->arcNegative(x, y, radiusX, radiusY, angleBegin, angleEnd);
      return 0;
    } else {
      ofVec3f *centre = *((ofVec3f **)dub_checksdata(L, 2, "ofVec3f"));
      float radiusX = dub_checknumber(L, 3);
      float radiusY = dub_checknumber(L, 4);
      float angleBegin = dub_checknumber(L, 5);
      float angleEnd = dub_checknumber(L, 6);
      self->arcNegative(*centre, radiusX, radiusY, angleBegin, angleEnd);
      return 0;
    }
  } catch (std::exception &e) {
    lua_pushfstring(L, "arcNegative: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "arcNegative: Unknown exception");
  }
  return dub_error(L);
}

/** void ofPath::setPolyWindingMode(ofPolyWindingMode mode)
 * api/openFrameworks/graphics/ofPath.h:56
 */
static int ofPath_setPolyWindingMode(lua_State *L) {
  try {
    ofPath *self = *((ofPath **)dub_checksdata(L, 1, "ofPath"));
    ofPolyWindingMode mode = (ofPolyWindingMode)dub_checkint(L, 2);
    self->setPolyWindingMode(mode);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "setPolyWindingMode: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "setPolyWindingMode: Unknown exception");
  }
  return dub_error(L);
}

/** void ofPath::setFilled(bool hasFill)
 * api/openFrameworks/graphics/ofPath.h:57
 */
static int ofPath_setFilled(lua_State *L) {
  try {
    ofPath *self = *((ofPath **)dub_checksdata(L, 1, "ofPath"));
    bool hasFill = dub_checkboolean(L, 2);
    self->setFilled(hasFill);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "setFilled: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "setFilled: Unknown exception");
  }
  return dub_error(L);
}

/** void ofPath::setStrokeWidth(float width)
 * api/openFrameworks/graphics/ofPath.h:58
 */
static int ofPath_setStrokeWidth(lua_State *L) {
  try {
    ofPath *self = *((ofPath **)dub_checksdata(L, 1, "ofPath"));
    float width = dub_checknumber(L, 2);
    self->setStrokeWidth(width);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "setStrokeWidth: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "setStrokeWidth: Unknown exception");
  }
  return dub_error(L);
}

/** void ofPath::setColor(const ofColor &color)
 * api/openFrameworks/graphics/ofPath.h:59
 */
static int ofPath_setColor(lua_State *L) {
  try {
    ofPath *self = *((ofPath **)dub_checksdata(L, 1, "ofPath"));
    ofColor *color = *((ofColor **)dub_checksdata(L, 2, "ofColor"));
    self->setColor(*color);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "setColor: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "setColor: Unknown exception");
  }
  return dub_error(L);
}

/** void ofPath::setHexColor(int hex)
 * api/openFrameworks/graphics/ofPath.h:60
 */
static int ofPath_setHexColor(lua_State *L) {
  try {
    ofPath *self = *((ofPath **)dub_checksdata(L, 1, "ofPath"));
    int hex = dub_checkint(L, 2);
    self->setHexColor(hex);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "setHexColor: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "setHexColor: Unknown exception");
  }
  return dub_error(L);
}

/** void ofPath::setFillColor(const ofColor &color)
 * api/openFrameworks/graphics/ofPath.h:61
 */
static int ofPath_setFillColor(lua_State *L) {
  try {
    ofPath *self = *((ofPath **)dub_checksdata(L, 1, "ofPath"));
    ofColor *color = *((ofColor **)dub_checksdata(L, 2, "ofColor"));
    self->setFillColor(*color);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "setFillColor: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "setFillColor: Unknown exception");
  }
  return dub_error(L);
}

/** void ofPath::setFillHexColor(int hex)
 * api/openFrameworks/graphics/ofPath.h:62
 */
static int ofPath_setFillHexColor(lua_State *L) {
  try {
    ofPath *self = *((ofPath **)dub_checksdata(L, 1, "ofPath"));
    int hex = dub_checkint(L, 2);
    self->setFillHexColor(hex);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "setFillHexColor: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "setFillHexColor: Unknown exception");
  }
  return dub_error(L);
}

/** void ofPath::setStrokeColor(const ofColor &color)
 * api/openFrameworks/graphics/ofPath.h:63
 */
static int ofPath_setStrokeColor(lua_State *L) {
  try {
    ofPath *self = *((ofPath **)dub_checksdata(L, 1, "ofPath"));
    ofColor *color = *((ofColor **)dub_checksdata(L, 2, "ofColor"));
    self->setStrokeColor(*color);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "setStrokeColor: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "setStrokeColor: Unknown exception");
  }
  return dub_error(L);
}

/** void ofPath::setStrokeHexColor(int hex)
 * api/openFrameworks/graphics/ofPath.h:64
 */
static int ofPath_setStrokeHexColor(lua_State *L) {
  try {
    ofPath *self = *((ofPath **)dub_checksdata(L, 1, "ofPath"));
    int hex = dub_checkint(L, 2);
    self->setStrokeHexColor(hex);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "setStrokeHexColor: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "setStrokeHexColor: Unknown exception");
  }
  return dub_error(L);
}

/** ofPolyWindingMode ofPath::getWindingMode() const
 * api/openFrameworks/graphics/ofPath.h:67
 */
static int ofPath_getWindingMode(lua_State *L) {
  try {
    ofPath *self = *((ofPath **)dub_checksdata(L, 1, "ofPath"));
    lua_pushnumber(L, self->getWindingMode());
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "getWindingMode: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "getWindingMode: Unknown exception");
  }
  return dub_error(L);
}

/** bool ofPath::isFilled() const
 * api/openFrameworks/graphics/ofPath.h:68
 */
static int ofPath_isFilled(lua_State *L) {
  try {
    ofPath *self = *((ofPath **)dub_checksdata(L, 1, "ofPath"));
    lua_pushboolean(L, self->isFilled());
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "isFilled: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "isFilled: Unknown exception");
  }
  return dub_error(L);
}

/** ofColor ofPath::getFillColor() const
 * api/openFrameworks/graphics/ofPath.h:69
 */
static int ofPath_getFillColor(lua_State *L) {
  try {
    ofPath *self = *((ofPath **)dub_checksdata(L, 1, "ofPath"));
    dub_pushudata(L, new ofColor(self->getFillColor()), "ofColor", true);
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "getFillColor: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "getFillColor: Unknown exception");
  }
  return dub_error(L);
}

/** ofColor ofPath::getStrokeColor() const
 * api/openFrameworks/graphics/ofPath.h:70
 */
static int ofPath_getStrokeColor(lua_State *L) {
  try {
    ofPath *self = *((ofPath **)dub_checksdata(L, 1, "ofPath"));
    dub_pushudata(L, new ofColor(self->getStrokeColor()), "ofColor", true);
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "getStrokeColor: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "getStrokeColor: Unknown exception");
  }
  return dub_error(L);
}

/** float ofPath::getStrokeWidth() const
 * api/openFrameworks/graphics/ofPath.h:71
 */
static int ofPath_getStrokeWidth(lua_State *L) {
  try {
    ofPath *self = *((ofPath **)dub_checksdata(L, 1, "ofPath"));
    lua_pushnumber(L, self->getStrokeWidth());
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "getStrokeWidth: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "getStrokeWidth: Unknown exception");
  }
  return dub_error(L);
}

/** bool ofPath::hasOutline() const
 * api/openFrameworks/graphics/ofPath.h:72
 */
static int ofPath_hasOutline(lua_State *L) {
  try {
    ofPath *self = *((ofPath **)dub_checksdata(L, 1, "ofPath"));
    lua_pushboolean(L, self->hasOutline());
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "hasOutline: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "hasOutline: Unknown exception");
  }
  return dub_error(L);
}

/** void ofPath::draw(float x, float y)
 * api/openFrameworks/graphics/ofPath.h:74
 */
static int ofPath_draw(lua_State *L) {
  try {
    ofPath *self = *((ofPath **)dub_checksdata(L, 1, "ofPath"));
    int top__ = lua_gettop(L);
    if (top__ >= 3) {
      float x = dub_checknumber(L, 2);
      float y = dub_checknumber(L, 3);
      self->draw(x, y);
      return 0;
    } else {
      self->draw();
      return 0;
    }
  } catch (std::exception &e) {
    lua_pushfstring(L, "draw: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "draw: Unknown exception");
  }
  return dub_error(L);
}

/** vector<ofSubPath>& ofPath::getSubPaths()
 * api/openFrameworks/graphics/ofPath.h:77
 */
static int ofPath_getSubPaths(lua_State *L) {
  try {
    ofPath *self = *((ofPath **)dub_checksdata(L, 1, "ofPath"));
    dub_pushudata(L, &self->getSubPaths(), "vector< ofSubPath >", false);
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "getSubPaths: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "getSubPaths: Unknown exception");
  }
  return dub_error(L);
}

/** vector<ofPolyline>& ofPath::getOutline()
 * api/openFrameworks/graphics/ofPath.h:80
 */
static int ofPath_getOutline(lua_State *L) {
  try {
    ofPath *self = *((ofPath **)dub_checksdata(L, 1, "ofPath"));
    dub_pushudata(L, &self->getOutline(), "vector< ofPolyline >", false);
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "getOutline: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "getOutline: Unknown exception");
  }
  return dub_error(L);
}

/** ofMesh& ofPath::getTessellation()
 * api/openFrameworks/graphics/ofPath.h:81
 */
static int ofPath_getTessellation(lua_State *L) {
  try {
    ofPath *self = *((ofPath **)dub_checksdata(L, 1, "ofPath"));
    dub_pushudata(L, &self->getTessellation(), "ofMesh", false);
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "getTessellation: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "getTessellation: Unknown exception");
  }
  return dub_error(L);
}

/** void ofPath::simplify(float tolerance=0.3)
 * api/openFrameworks/graphics/ofPath.h:83
 */
static int ofPath_simplify(lua_State *L) {
  try {
    ofPath *self = *((ofPath **)dub_checksdata(L, 1, "ofPath"));
    int top__ = lua_gettop(L);
    if (top__ >= 2) {
      float tolerance = dub_checknumber(L, 2);
      self->simplify(tolerance);
      return 0;
    } else {
      self->simplify();
      return 0;
    }
  } catch (std::exception &e) {
    lua_pushfstring(L, "simplify: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "simplify: Unknown exception");
  }
  return dub_error(L);
}

/** void ofPath::flagShapeChanged()
 * api/openFrameworks/graphics/ofPath.h:86
 */
static int ofPath_flagShapeChanged(lua_State *L) {
  try {
    ofPath *self = *((ofPath **)dub_checksdata(L, 1, "ofPath"));
    self->flagShapeChanged();
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "flagShapeChanged: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "flagShapeChanged: Unknown exception");
  }
  return dub_error(L);
}

/** void ofPath::setMode(Mode mode)
 * api/openFrameworks/graphics/ofPath.h:93
 */
static int ofPath_setMode(lua_State *L) {
  try {
    ofPath *self = *((ofPath **)dub_checksdata(L, 1, "ofPath"));
    ofPath::Mode mode = (ofPath::Mode)dub_checkint(L, 2);
    self->setMode(mode);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "setMode: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "setMode: Unknown exception");
  }
  return dub_error(L);
}

/** void ofPath::setCurveResolution(int curveResolution)
 * api/openFrameworks/graphics/ofPath.h:95
 */
static int ofPath_setCurveResolution(lua_State *L) {
  try {
    ofPath *self = *((ofPath **)dub_checksdata(L, 1, "ofPath"));
    int curveResolution = dub_checkint(L, 2);
    self->setCurveResolution(curveResolution);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "setCurveResolution: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "setCurveResolution: Unknown exception");
  }
  return dub_error(L);
}

/** int ofPath::getCurveResolution()
 * api/openFrameworks/graphics/ofPath.h:96
 */
static int ofPath_getCurveResolution(lua_State *L) {
  try {
    ofPath *self = *((ofPath **)dub_checksdata(L, 1, "ofPath"));
    lua_pushnumber(L, self->getCurveResolution());
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "getCurveResolution: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "getCurveResolution: Unknown exception");
  }
  return dub_error(L);
}

/** void ofPath::setArcResolution(int res)
 * api/openFrameworks/graphics/ofPath.h:98
 */
static int ofPath_setArcResolution(lua_State *L) {
  try {
    ofPath *self = *((ofPath **)dub_checksdata(L, 1, "ofPath"));
    int res = dub_checkint(L, 2);
    self->setArcResolution(res);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "setArcResolution: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "setArcResolution: Unknown exception");
  }
  return dub_error(L);
}

/** int ofPath::getArcResolution()
 * api/openFrameworks/graphics/ofPath.h:99
 */
static int ofPath_getArcResolution(lua_State *L) {
  try {
    ofPath *self = *((ofPath **)dub_checksdata(L, 1, "ofPath"));
    lua_pushnumber(L, self->getArcResolution());
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "getArcResolution: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "getArcResolution: Unknown exception");
  }
  return dub_error(L);
}

/** void ofPath::setUseShapeColor(bool useColor)
 * api/openFrameworks/graphics/ofPath.h:101
 */
static int ofPath_setUseShapeColor(lua_State *L) {
  try {
    ofPath *self = *((ofPath **)dub_checksdata(L, 1, "ofPath"));
    bool useColor = dub_checkboolean(L, 2);
    self->setUseShapeColor(useColor);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "setUseShapeColor: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "setUseShapeColor: Unknown exception");
  }
  return dub_error(L);
}

/** bool ofPath::getUseShapeColor()
 * api/openFrameworks/graphics/ofPath.h:102
 */
static int ofPath_getUseShapeColor(lua_State *L) {
  try {
    ofPath *self = *((ofPath **)dub_checksdata(L, 1, "ofPath"));
    lua_pushboolean(L, self->getUseShapeColor());
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "getUseShapeColor: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "getUseShapeColor: Unknown exception");
  }
  return dub_error(L);
}

/** void ofPath::tessellate()
 * api/openFrameworks/graphics/ofPath.h:104
 */
static int ofPath_tessellate(lua_State *L) {
  try {
    ofPath *self = *((ofPath **)dub_checksdata(L, 1, "ofPath"));
    self->tessellate();
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "tessellate: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "tessellate: Unknown exception");
  }
  return dub_error(L);
}

/** void ofPath::translate(const ofPoint &p)
 * api/openFrameworks/graphics/ofPath.h:106
 */
static int ofPath_translate(lua_State *L) {
  try {
    ofPath *self = *((ofPath **)dub_checksdata(L, 1, "ofPath"));
    ofVec3f *p = *((ofVec3f **)dub_checksdata(L, 2, "ofVec3f"));
    self->translate(*p);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "translate: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "translate: Unknown exception");
  }
  return dub_error(L);
}

/** void ofPath::rotate(float az, const ofVec3f &axis)
 * api/openFrameworks/graphics/ofPath.h:107
 */
static int ofPath_rotate(lua_State *L) {
  try {
    ofPath *self = *((ofPath **)dub_checksdata(L, 1, "ofPath"));
    float az = dub_checknumber(L, 2);
    ofVec3f *axis = *((ofVec3f **)dub_checksdata(L, 3, "ofVec3f"));
    self->rotate(az, *axis);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "rotate: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "rotate: Unknown exception");
  }
  return dub_error(L);
}

/** void ofPath::scale(float x, float y)
 * api/openFrameworks/graphics/ofPath.h:108
 */
static int ofPath_scale(lua_State *L) {
  try {
    ofPath *self = *((ofPath **)dub_checksdata(L, 1, "ofPath"));
    float x = dub_checknumber(L, 2);
    float y = dub_checknumber(L, 3);
    self->scale(x, y);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "scale: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "scale: Unknown exception");
  }
  return dub_error(L);
}



// --=============================================== __tostring
static int ofPath___tostring(lua_State *L) {
  ofPath *self = *((ofPath **)dub_checksdata_n(L, 1, "ofPath"));
  lua_pushfstring(L, "ofPath: %p", self);
  
  return 1;
}

// --=============================================== METHODS

static const struct luaL_Reg ofPath_member_methods[] = {
  { "__gc"         , ofPath__ofPath       },
  { "new"          , ofPath_ofPath        },
  { "clear"        , ofPath_clear         },
  { "newSubPath"   , ofPath_newSubPath    },
  { "close"        , ofPath_close         },
  { "lineTo"       , ofPath_lineTo        },
  { "moveTo"       , ofPath_moveTo        },
  { "curveTo"      , ofPath_curveTo       },
  { "bezierTo"     , ofPath_bezierTo      },
  { "quadBezierTo" , ofPath_quadBezierTo  },
  { "arc"          , ofPath_arc           },
  { "arcNegative"  , ofPath_arcNegative   },
  { "setPolyWindingMode", ofPath_setPolyWindingMode },
  { "setFilled"    , ofPath_setFilled     },
  { "setStrokeWidth", ofPath_setStrokeWidth },
  { "setColor"     , ofPath_setColor      },
  { "setHexColor"  , ofPath_setHexColor   },
  { "setFillColor" , ofPath_setFillColor  },
  { "setFillHexColor", ofPath_setFillHexColor },
  { "setStrokeColor", ofPath_setStrokeColor },
  { "setStrokeHexColor", ofPath_setStrokeHexColor },
  { "getWindingMode", ofPath_getWindingMode },
  { "isFilled"     , ofPath_isFilled      },
  { "getFillColor" , ofPath_getFillColor  },
  { "getStrokeColor", ofPath_getStrokeColor },
  { "getStrokeWidth", ofPath_getStrokeWidth },
  { "hasOutline"   , ofPath_hasOutline    },
  { "draw"         , ofPath_draw          },
  { "getSubPaths"  , ofPath_getSubPaths   },
  { "getOutline"   , ofPath_getOutline    },
  { "getTessellation", ofPath_getTessellation },
  { "simplify"     , ofPath_simplify      },
  { "flagShapeChanged", ofPath_flagShapeChanged },
  { "setMode"      , ofPath_setMode       },
  { "setCurveResolution", ofPath_setCurveResolution },
  { "getCurveResolution", ofPath_getCurveResolution },
  { "setArcResolution", ofPath_setArcResolution },
  { "getArcResolution", ofPath_getArcResolution },
  { "setUseShapeColor", ofPath_setUseShapeColor },
  { "getUseShapeColor", ofPath_getUseShapeColor },
  { "tessellate"   , ofPath_tessellate    },
  { "translate"    , ofPath_translate     },
  { "rotate"       , ofPath_rotate        },
  { "scale"        , ofPath_scale         },
  { "__tostring"   , ofPath___tostring    },
  { "deleted"      , dub_isDeleted        },
  { NULL, NULL},
};

// --=============================================== CONSTANTS
static const struct dub_const_Reg ofPath_const[] = {
  { "PATHS"        , ofPath::PATHS        },
  { "POLYLINES"    , ofPath::POLYLINES    },
  { NULL, 0},
};

extern "C" int luaopen_ofPath(lua_State *L)
{
  // Create the metatable which will contain all the member methods
  luaL_newmetatable(L, "ofPath");
  // <mt>
  // register class constants
  dub_register_const(L, ofPath_const);

  // register member methods
  luaL_register(L, NULL, ofPath_member_methods);
  // save meta-table in _G
  dub_register(L, "_G", "ofPath", "ofPath");
  // <mt>
  lua_pop(L, 1);
  return 0;
}
