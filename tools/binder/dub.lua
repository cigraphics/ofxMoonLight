--[[------------------------------------------------------

  dub
  ---

  This file loads the dub library.

--]]------------------------------------------------------
dub = Autoload('dub')
dub.VERSION = '2.1.~'

local DUB_MAX_IN_SHIFT = 4294967296

local function shiftleft(v, nb)
  local r = v * (2^nb)
  -- simulate overflow with 32 bits
  r = r % DUB_MAX_IN_SHIFT
  return r
end

function dub.hash(str, sz)
  local h = 0
  for i=1,string.len(str) do
    local c = string.byte(str,i)
    h = c + shiftleft(h, 6) + shiftleft(h, 16) - h
    h = h % DUB_MAX_IN_SHIFT
  end
  return h % sz
end

-- Find the minimal modulo value for the list of keys to
-- avoid collisions.
function dub.minHash(list_or_obj, func)
  local list = {}
  if not func then
    for _, name in ipairs(list_or_obj) do
      if not list[name] then
        list[name] = true
        table.insert(list, name)
      end
    end
  else
    list = {}
    for name in func(list_or_obj) do
      if not list[name] then
        list[name] = true
        table.insert(list, name)
      end
    end
  end
  local list_sz = #list
  if list_sz == 0 then
    -- This is an error.
    return nil
  end

  local sz = 1
  while true do
    sz = sz + 1
    local hashes = {}
    for i, key in ipairs(list) do
      local h = dub.hash(key, sz)
      if hashes[h] then
        break
      elseif i == list_sz then
        return sz
      else
        hashes[h] = key
      end
    end
  end
end

local shown_warnings = {}
function dub.printWarn(level, fmt, ...)
  if level > dub.warn_level then
    return
  end
  local msg = string.format(fmt, ...)
  if not shown_warnings[msg] then
    print('warning:', msg)
    shown_warnings[msg] = true
  end
end
function dub.silentWarn(level, fmt, ...)
  local msg = string.format(fmt, ...)
  if not shown_warnings[msg] then
    shown_warnings[msg] = true
  end
end
dub.warn = dub.printWarn

dub.warn_level = 5

