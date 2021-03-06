#pragma once

#ifdef __EMSCRIPTEN__
#    include <emscripten/emscripten.h>
#    include <emscripten/val.h>
#    include <emscripten/bind.h>
#    define NUI_FRONTEND
#else
#    define NUI_BACKEND
#endif

#ifndef __EMSCRIPTEN__
#    ifdef EMSCRIPTEN_KEEPALIVE
#        undef EMSCRIPTEN_KEEPALIVE
#    endif
#    define EMSCRIPTEN_KEEPALIVE
#endif