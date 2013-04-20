/**
 *
 * MACHINE GENERATED FILE. DO NOT EDIT.
 *
 * Bindings for class ofBaseVideoPlayer
 *
 * This file has been generated by dub 2.1.~.
 */
#include "dub/dub.h"
#include "api/openFrameworks/types/ofBaseTypes.h"


/** Cast (class_name)
 * 
 */
static int ofBaseVideoPlayer__cast_(lua_State *L) {

  ofBaseVideoPlayer *self = *((ofBaseVideoPlayer **)dub_checksdata_n(L, 1, "ofBaseVideoPlayer"));
  const char *key = luaL_checkstring(L, 2);
  void **retval__ = (void**)lua_newuserdata(L, sizeof(void*));
  int key_h = dub_hash(key, 2);
  switch(key_h) {
    case 1: {
      if (DUB_ASSERT_KEY(key, "ofBaseVideo")) break;
      *retval__ = static_cast<ofBaseVideo *>(self);
      return 1;
    }
    case 0: {
      if (DUB_ASSERT_KEY(key, "ofBaseUpdates")) break;
      *retval__ = static_cast<ofBaseUpdates *>(self);
      return 1;
    }
  }
  return 0;
}

/** virtual ofBaseVideoPlayer::~ofBaseVideoPlayer()
 * api/openFrameworks/types/ofBaseTypes.h:226
 */
static int ofBaseVideoPlayer__ofBaseVideoPlayer(lua_State *L) {
  try {
    DubUserdata *userdata = ((DubUserdata*)dub_checksdata_d(L, 1, "ofBaseVideoPlayer"));
    if (userdata->gc) {
      ofBaseVideoPlayer *self = (ofBaseVideoPlayer *)userdata->ptr;
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

/** virtual bool ofBaseVideoPlayer::loadMovie(string name)=0
 * api/openFrameworks/types/ofBaseTypes.h:229
 */
static int ofBaseVideoPlayer_loadMovie(lua_State *L) {
  try {
    ofBaseVideoPlayer *self = *((ofBaseVideoPlayer **)dub_checksdata(L, 1, "ofBaseVideoPlayer"));
    string *name = *((string **)dub_checksdata(L, 2, "string"));
    lua_pushboolean(L, self->loadMovie(*name));
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "loadMovie: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "loadMovie: Unknown exception");
  }
  return dub_error(L);
}

/** virtual void ofBaseVideoPlayer::close()=0
 * api/openFrameworks/types/ofBaseTypes.h:230
 */
static int ofBaseVideoPlayer_close(lua_State *L) {
  try {
    ofBaseVideoPlayer *self = *((ofBaseVideoPlayer **)dub_checksdata(L, 1, "ofBaseVideoPlayer"));
    self->close();
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "close: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "close: Unknown exception");
  }
  return dub_error(L);
}

/** virtual void ofBaseVideoPlayer::update()=0
 * api/openFrameworks/types/ofBaseTypes.h:231
 */
static int ofBaseVideoPlayer_update(lua_State *L) {
  try {
    ofBaseVideoPlayer *self = *((ofBaseVideoPlayer **)dub_checksdata(L, 1, "ofBaseVideoPlayer"));
    self->update();
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "update: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "update: Unknown exception");
  }
  return dub_error(L);
}

/** virtual void ofBaseVideoPlayer::play()=0
 * api/openFrameworks/types/ofBaseTypes.h:233
 */
static int ofBaseVideoPlayer_play(lua_State *L) {
  try {
    ofBaseVideoPlayer *self = *((ofBaseVideoPlayer **)dub_checksdata(L, 1, "ofBaseVideoPlayer"));
    self->play();
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "play: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "play: Unknown exception");
  }
  return dub_error(L);
}

/** virtual void ofBaseVideoPlayer::stop()=0
 * api/openFrameworks/types/ofBaseTypes.h:234
 */
static int ofBaseVideoPlayer_stop(lua_State *L) {
  try {
    ofBaseVideoPlayer *self = *((ofBaseVideoPlayer **)dub_checksdata(L, 1, "ofBaseVideoPlayer"));
    self->stop();
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "stop: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "stop: Unknown exception");
  }
  return dub_error(L);
}

/** virtual bool ofBaseVideoPlayer::isFrameNew()=0
 * api/openFrameworks/types/ofBaseTypes.h:236
 */
static int ofBaseVideoPlayer_isFrameNew(lua_State *L) {
  try {
    ofBaseVideoPlayer *self = *((ofBaseVideoPlayer **)dub_checksdata(L, 1, "ofBaseVideoPlayer"));
    lua_pushboolean(L, self->isFrameNew());
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "isFrameNew: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "isFrameNew: Unknown exception");
  }
  return dub_error(L);
}

/** virtual unsigned char* ofBaseVideoPlayer::getPixels()=0
 * api/openFrameworks/types/ofBaseTypes.h:237
 */
static int ofBaseVideoPlayer_getPixels(lua_State *L) {
  try {
    ofBaseVideoPlayer *self = *((ofBaseVideoPlayer **)dub_checksdata(L, 1, "ofBaseVideoPlayer"));
    lua_pushstring(L, self->getPixels());
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "getPixels: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "getPixels: Unknown exception");
  }
  return dub_error(L);
}

/** virtual ofTexture* ofBaseVideoPlayer::getTexture()
 * api/openFrameworks/types/ofBaseTypes.h:238
 */
static int ofBaseVideoPlayer_getTexture(lua_State *L) {
  try {
    ofBaseVideoPlayer *self = *((ofBaseVideoPlayer **)dub_checksdata(L, 1, "ofBaseVideoPlayer"));
    ofTexture *retval__ = self->getTexture();
    if (!retval__) return 0;
    dub_pushudata(L, retval__, "ofTexture", false);
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "getTexture: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "getTexture: Unknown exception");
  }
  return dub_error(L);
}

/** virtual float ofBaseVideoPlayer::getWidth()=0
 * api/openFrameworks/types/ofBaseTypes.h:240
 */
static int ofBaseVideoPlayer_getWidth(lua_State *L) {
  try {
    ofBaseVideoPlayer *self = *((ofBaseVideoPlayer **)dub_checksdata(L, 1, "ofBaseVideoPlayer"));
    lua_pushnumber(L, self->getWidth());
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "getWidth: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "getWidth: Unknown exception");
  }
  return dub_error(L);
}

/** virtual float ofBaseVideoPlayer::getHeight()=0
 * api/openFrameworks/types/ofBaseTypes.h:241
 */
static int ofBaseVideoPlayer_getHeight(lua_State *L) {
  try {
    ofBaseVideoPlayer *self = *((ofBaseVideoPlayer **)dub_checksdata(L, 1, "ofBaseVideoPlayer"));
    lua_pushnumber(L, self->getHeight());
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "getHeight: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "getHeight: Unknown exception");
  }
  return dub_error(L);
}

/** virtual bool ofBaseVideoPlayer::isPaused()=0
 * api/openFrameworks/types/ofBaseTypes.h:243
 */
static int ofBaseVideoPlayer_isPaused(lua_State *L) {
  try {
    ofBaseVideoPlayer *self = *((ofBaseVideoPlayer **)dub_checksdata(L, 1, "ofBaseVideoPlayer"));
    lua_pushboolean(L, self->isPaused());
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "isPaused: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "isPaused: Unknown exception");
  }
  return dub_error(L);
}

/** virtual bool ofBaseVideoPlayer::isLoaded()=0
 * api/openFrameworks/types/ofBaseTypes.h:244
 */
static int ofBaseVideoPlayer_isLoaded(lua_State *L) {
  try {
    ofBaseVideoPlayer *self = *((ofBaseVideoPlayer **)dub_checksdata(L, 1, "ofBaseVideoPlayer"));
    lua_pushboolean(L, self->isLoaded());
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "isLoaded: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "isLoaded: Unknown exception");
  }
  return dub_error(L);
}

/** virtual bool ofBaseVideoPlayer::isPlaying()=0
 * api/openFrameworks/types/ofBaseTypes.h:245
 */
static int ofBaseVideoPlayer_isPlaying(lua_State *L) {
  try {
    ofBaseVideoPlayer *self = *((ofBaseVideoPlayer **)dub_checksdata(L, 1, "ofBaseVideoPlayer"));
    lua_pushboolean(L, self->isPlaying());
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "isPlaying: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "isPlaying: Unknown exception");
  }
  return dub_error(L);
}

/** virtual bool ofBaseVideoPlayer::setPixelFormat(ofPixelFormat pixelFormat)=0
 * api/openFrameworks/types/ofBaseTypes.h:247
 */
static int ofBaseVideoPlayer_setPixelFormat(lua_State *L) {
  try {
    ofBaseVideoPlayer *self = *((ofBaseVideoPlayer **)dub_checksdata(L, 1, "ofBaseVideoPlayer"));
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

/** virtual ofPixelFormat ofBaseVideoPlayer::getPixelFormat()=0
 * api/openFrameworks/types/ofBaseTypes.h:248
 */
static int ofBaseVideoPlayer_getPixelFormat(lua_State *L) {
  try {
    ofBaseVideoPlayer *self = *((ofBaseVideoPlayer **)dub_checksdata(L, 1, "ofBaseVideoPlayer"));
    lua_pushnumber(L, self->getPixelFormat());
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "getPixelFormat: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "getPixelFormat: Unknown exception");
  }
  return dub_error(L);
}

/** virtual float ofBaseVideoPlayer::getPosition()
 * api/openFrameworks/types/ofBaseTypes.h:251
 */
static int ofBaseVideoPlayer_getPosition(lua_State *L) {
  try {
    ofBaseVideoPlayer *self = *((ofBaseVideoPlayer **)dub_checksdata(L, 1, "ofBaseVideoPlayer"));
    lua_pushnumber(L, self->getPosition());
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "getPosition: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "getPosition: Unknown exception");
  }
  return dub_error(L);
}

/** virtual float ofBaseVideoPlayer::getSpeed()
 * api/openFrameworks/types/ofBaseTypes.h:252
 */
static int ofBaseVideoPlayer_getSpeed(lua_State *L) {
  try {
    ofBaseVideoPlayer *self = *((ofBaseVideoPlayer **)dub_checksdata(L, 1, "ofBaseVideoPlayer"));
    lua_pushnumber(L, self->getSpeed());
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "getSpeed: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "getSpeed: Unknown exception");
  }
  return dub_error(L);
}

/** virtual float ofBaseVideoPlayer::getDuration()
 * api/openFrameworks/types/ofBaseTypes.h:253
 */
static int ofBaseVideoPlayer_getDuration(lua_State *L) {
  try {
    ofBaseVideoPlayer *self = *((ofBaseVideoPlayer **)dub_checksdata(L, 1, "ofBaseVideoPlayer"));
    lua_pushnumber(L, self->getDuration());
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "getDuration: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "getDuration: Unknown exception");
  }
  return dub_error(L);
}

/** virtual bool ofBaseVideoPlayer::getIsMovieDone()
 * api/openFrameworks/types/ofBaseTypes.h:254
 */
static int ofBaseVideoPlayer_getIsMovieDone(lua_State *L) {
  try {
    ofBaseVideoPlayer *self = *((ofBaseVideoPlayer **)dub_checksdata(L, 1, "ofBaseVideoPlayer"));
    lua_pushboolean(L, self->getIsMovieDone());
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "getIsMovieDone: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "getIsMovieDone: Unknown exception");
  }
  return dub_error(L);
}

/** virtual void ofBaseVideoPlayer::setPaused(bool bPause)
 * api/openFrameworks/types/ofBaseTypes.h:256
 */
static int ofBaseVideoPlayer_setPaused(lua_State *L) {
  try {
    ofBaseVideoPlayer *self = *((ofBaseVideoPlayer **)dub_checksdata(L, 1, "ofBaseVideoPlayer"));
    bool bPause = dub_checkboolean(L, 2);
    self->setPaused(bPause);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "setPaused: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "setPaused: Unknown exception");
  }
  return dub_error(L);
}

/** virtual void ofBaseVideoPlayer::setPosition(float pct)
 * api/openFrameworks/types/ofBaseTypes.h:257
 */
static int ofBaseVideoPlayer_setPosition(lua_State *L) {
  try {
    ofBaseVideoPlayer *self = *((ofBaseVideoPlayer **)dub_checksdata(L, 1, "ofBaseVideoPlayer"));
    float pct = dub_checknumber(L, 2);
    self->setPosition(pct);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "setPosition: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "setPosition: Unknown exception");
  }
  return dub_error(L);
}

/** virtual void ofBaseVideoPlayer::setVolume(float volume)
 * api/openFrameworks/types/ofBaseTypes.h:258
 */
static int ofBaseVideoPlayer_setVolume(lua_State *L) {
  try {
    ofBaseVideoPlayer *self = *((ofBaseVideoPlayer **)dub_checksdata(L, 1, "ofBaseVideoPlayer"));
    float volume = dub_checknumber(L, 2);
    self->setVolume(volume);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "setVolume: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "setVolume: Unknown exception");
  }
  return dub_error(L);
}

/** virtual void ofBaseVideoPlayer::setLoopState(ofLoopType state)
 * api/openFrameworks/types/ofBaseTypes.h:259
 */
static int ofBaseVideoPlayer_setLoopState(lua_State *L) {
  try {
    ofBaseVideoPlayer *self = *((ofBaseVideoPlayer **)dub_checksdata(L, 1, "ofBaseVideoPlayer"));
    ofLoopType state = (ofLoopType)dub_checkint(L, 2);
    self->setLoopState(state);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "setLoopState: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "setLoopState: Unknown exception");
  }
  return dub_error(L);
}

/** virtual void ofBaseVideoPlayer::setSpeed(float speed)
 * api/openFrameworks/types/ofBaseTypes.h:260
 */
static int ofBaseVideoPlayer_setSpeed(lua_State *L) {
  try {
    ofBaseVideoPlayer *self = *((ofBaseVideoPlayer **)dub_checksdata(L, 1, "ofBaseVideoPlayer"));
    float speed = dub_checknumber(L, 2);
    self->setSpeed(speed);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "setSpeed: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "setSpeed: Unknown exception");
  }
  return dub_error(L);
}

/** virtual void ofBaseVideoPlayer::setFrame(int frame)
 * api/openFrameworks/types/ofBaseTypes.h:261
 */
static int ofBaseVideoPlayer_setFrame(lua_State *L) {
  try {
    ofBaseVideoPlayer *self = *((ofBaseVideoPlayer **)dub_checksdata(L, 1, "ofBaseVideoPlayer"));
    int frame = dub_checkint(L, 2);
    self->setFrame(frame);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "setFrame: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "setFrame: Unknown exception");
  }
  return dub_error(L);
}

/** virtual int ofBaseVideoPlayer::getCurrentFrame()
 * api/openFrameworks/types/ofBaseTypes.h:263
 */
static int ofBaseVideoPlayer_getCurrentFrame(lua_State *L) {
  try {
    ofBaseVideoPlayer *self = *((ofBaseVideoPlayer **)dub_checksdata(L, 1, "ofBaseVideoPlayer"));
    lua_pushnumber(L, self->getCurrentFrame());
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "getCurrentFrame: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "getCurrentFrame: Unknown exception");
  }
  return dub_error(L);
}

/** virtual int ofBaseVideoPlayer::getTotalNumFrames()
 * api/openFrameworks/types/ofBaseTypes.h:264
 */
static int ofBaseVideoPlayer_getTotalNumFrames(lua_State *L) {
  try {
    ofBaseVideoPlayer *self = *((ofBaseVideoPlayer **)dub_checksdata(L, 1, "ofBaseVideoPlayer"));
    lua_pushnumber(L, self->getTotalNumFrames());
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "getTotalNumFrames: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "getTotalNumFrames: Unknown exception");
  }
  return dub_error(L);
}

/** virtual ofLoopType ofBaseVideoPlayer::getLoopState()
 * api/openFrameworks/types/ofBaseTypes.h:265
 */
static int ofBaseVideoPlayer_getLoopState(lua_State *L) {
  try {
    ofBaseVideoPlayer *self = *((ofBaseVideoPlayer **)dub_checksdata(L, 1, "ofBaseVideoPlayer"));
    lua_pushnumber(L, self->getLoopState());
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "getLoopState: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "getLoopState: Unknown exception");
  }
  return dub_error(L);
}

/** virtual void ofBaseVideoPlayer::firstFrame()
 * api/openFrameworks/types/ofBaseTypes.h:267
 */
static int ofBaseVideoPlayer_firstFrame(lua_State *L) {
  try {
    ofBaseVideoPlayer *self = *((ofBaseVideoPlayer **)dub_checksdata(L, 1, "ofBaseVideoPlayer"));
    self->firstFrame();
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "firstFrame: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "firstFrame: Unknown exception");
  }
  return dub_error(L);
}

/** virtual void ofBaseVideoPlayer::nextFrame()
 * api/openFrameworks/types/ofBaseTypes.h:268
 */
static int ofBaseVideoPlayer_nextFrame(lua_State *L) {
  try {
    ofBaseVideoPlayer *self = *((ofBaseVideoPlayer **)dub_checksdata(L, 1, "ofBaseVideoPlayer"));
    self->nextFrame();
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "nextFrame: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "nextFrame: Unknown exception");
  }
  return dub_error(L);
}

/** virtual void ofBaseVideoPlayer::previousFrame()
 * api/openFrameworks/types/ofBaseTypes.h:269
 */
static int ofBaseVideoPlayer_previousFrame(lua_State *L) {
  try {
    ofBaseVideoPlayer *self = *((ofBaseVideoPlayer **)dub_checksdata(L, 1, "ofBaseVideoPlayer"));
    self->previousFrame();
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "previousFrame: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "previousFrame: Unknown exception");
  }
  return dub_error(L);
}



// --=============================================== __tostring
static int ofBaseVideoPlayer___tostring(lua_State *L) {
  ofBaseVideoPlayer *self = *((ofBaseVideoPlayer **)dub_checksdata_n(L, 1, "ofBaseVideoPlayer"));
  lua_pushfstring(L, "ofBaseVideoPlayer: %p", self);
  
  return 1;
}

// --=============================================== METHODS

static const struct luaL_Reg ofBaseVideoPlayer_member_methods[] = {
  { "_cast_"       , ofBaseVideoPlayer__cast_ },
  { "__gc"         , ofBaseVideoPlayer__ofBaseVideoPlayer },
  { "loadMovie"    , ofBaseVideoPlayer_loadMovie },
  { "close"        , ofBaseVideoPlayer_close },
  { "update"       , ofBaseVideoPlayer_update },
  { "play"         , ofBaseVideoPlayer_play },
  { "stop"         , ofBaseVideoPlayer_stop },
  { "isFrameNew"   , ofBaseVideoPlayer_isFrameNew },
  { "getPixels"    , ofBaseVideoPlayer_getPixels },
  { "getTexture"   , ofBaseVideoPlayer_getTexture },
  { "getWidth"     , ofBaseVideoPlayer_getWidth },
  { "getHeight"    , ofBaseVideoPlayer_getHeight },
  { "isPaused"     , ofBaseVideoPlayer_isPaused },
  { "isLoaded"     , ofBaseVideoPlayer_isLoaded },
  { "isPlaying"    , ofBaseVideoPlayer_isPlaying },
  { "setPixelFormat", ofBaseVideoPlayer_setPixelFormat },
  { "getPixelFormat", ofBaseVideoPlayer_getPixelFormat },
  { "getPosition"  , ofBaseVideoPlayer_getPosition },
  { "getSpeed"     , ofBaseVideoPlayer_getSpeed },
  { "getDuration"  , ofBaseVideoPlayer_getDuration },
  { "getIsMovieDone", ofBaseVideoPlayer_getIsMovieDone },
  { "setPaused"    , ofBaseVideoPlayer_setPaused },
  { "setPosition"  , ofBaseVideoPlayer_setPosition },
  { "setVolume"    , ofBaseVideoPlayer_setVolume },
  { "setLoopState" , ofBaseVideoPlayer_setLoopState },
  { "setSpeed"     , ofBaseVideoPlayer_setSpeed },
  { "setFrame"     , ofBaseVideoPlayer_setFrame },
  { "getCurrentFrame", ofBaseVideoPlayer_getCurrentFrame },
  { "getTotalNumFrames", ofBaseVideoPlayer_getTotalNumFrames },
  { "getLoopState" , ofBaseVideoPlayer_getLoopState },
  { "firstFrame"   , ofBaseVideoPlayer_firstFrame },
  { "nextFrame"    , ofBaseVideoPlayer_nextFrame },
  { "previousFrame", ofBaseVideoPlayer_previousFrame },
  { "__tostring"   , ofBaseVideoPlayer___tostring },
  { "deleted"      , dub_isDeleted        },
  { NULL, NULL},
};


extern "C" int luaopen_ofBaseVideoPlayer(lua_State *L)
{
  // Create the metatable which will contain all the member methods
  luaL_newmetatable(L, "ofBaseVideoPlayer");
  // <mt>

  // register member methods
  luaL_register(L, NULL, ofBaseVideoPlayer_member_methods);
  // save meta-table in _G
  dub_register(L, "_G", "ofBaseVideoPlayer", "ofBaseVideoPlayer");
  // <mt>
  lua_pop(L, 1);
  return 0;
}