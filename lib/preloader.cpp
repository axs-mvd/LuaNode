#include <stdafx.h>
#include "preloader.h"

static int luaopen_LuaNode_ChildProcess(lua_State *L) {
	int extension_status;
	int arg = lua_gettop(L);
	#include "../lib/LuaNode/child_process.precomp"
	lua_insert(L,1);
	lua_call(L,arg,1);
	return 1;
}

static int luaopen_LuaNode_Crypto(lua_State *L) {
	int extension_status;
	int arg = lua_gettop(L);
	#include "../lib/LuaNode/crypto.precomp"
	//luaL_loadbuffer(L,(const char*)B2,sizeof(B2),"LuaNode.Crypto");
	lua_insert(L,1);
	lua_call(L,arg,1);
	return 1;
}

static int luaopen_LuaNode_Dns(lua_State *L) {
	int extension_status;
	int arg = lua_gettop(L);
	#include "../lib/LuaNode/dns.precomp"
	//luaL_loadbuffer(L,(const char*)B3,sizeof(B3),"LuaNode.Dns");
	lua_insert(L,1);
	lua_call(L,arg,1);
	return 1;
}

static int luaopen_LuaNode_EventEmitter(lua_State *L) {
	int extension_status;
	int arg = lua_gettop(L);
	#include "../lib/LuaNode/event_emitter.precomp"
	lua_insert(L,1);
	lua_call(L,arg,1);
	return 1;
}

static int luaopen_LuaNode_FreeList(lua_State *L) {
	int extension_status;
	int arg = lua_gettop(L);
	#include "../lib/LuaNode/free_list.precomp"
	//luaL_loadbuffer(L,(const char*)B5,sizeof(B5),"LuaNode.FreeList");
	lua_insert(L,1);
	lua_call(L,arg,1);
	return 1;
}

static int luaopen_LuaNode_Fs(lua_State *L) {
	int extension_status;
	int arg = lua_gettop(L);
	#include "../lib/LuaNode/fs.precomp"
	//luaL_loadbuffer(L,(const char*)B6,sizeof(B6),"LuaNode.Fs");
	lua_insert(L,1);
	lua_call(L,arg,1);
	return 1;
}

static int luaopen_LuaNode_Http(lua_State *L) {
	int extension_status;
	int arg = lua_gettop(L);
	#include "../lib/LuaNode/http.precomp"
	//luaL_loadbuffer(L,(const char*)B7,sizeof(B7),"LuaNode.Http");
	lua_insert(L,1);
	lua_call(L,arg,1);
	return 1;
}

static int luaopen_LuaNode_Net(lua_State *L) {
	int extension_status;
	int arg = lua_gettop(L);
	#include "../lib/LuaNode/net.precomp"
	//luaL_loadbuffer(L,(const char*)B8,sizeof(B8),"LuaNode.Net");
	lua_insert(L,1);
	lua_call(L,arg,1);
	return 1;
}

static int luaopen_LuaNode_Path(lua_State *L) {
	int extension_status;
	int arg = lua_gettop(L);
	#include "../lib/LuaNode/path.precomp"
	//luaL_loadbuffer(L,(const char*)B9,sizeof(B9),"LuaNode.Path");
	lua_insert(L,1);
	lua_call(L,arg,1);
	return 1;
}

static int luaopen_LuaNode_QueryString(lua_State *L) {
	int extension_status;
	int arg = lua_gettop(L);
	#include "../lib/LuaNode/querystring.precomp"
	//luaL_loadbuffer(L,(const char*)B10,sizeof(B10),"LuaNode.QueryString");
	lua_insert(L,1);
	lua_call(L,arg,1);
	return 1;
}

static int luaopen_LuaNode_Stream(lua_State *L) {
	int extension_status;
	int arg = lua_gettop(L);
	#include "../lib/LuaNode/stream.precomp"
	//luaL_loadbuffer(L,(const char*)B11,sizeof(B11),"LuaNode.Stream");
	lua_insert(L,1);
	lua_call(L,arg,1);
	return 1;
}

static int luaopen_LuaNode_Url(lua_State *L) {
	int extension_status;
	int arg = lua_gettop(L);
	#include "../lib/LuaNode/url.precomp"
	//luaL_loadbuffer(L,(const char*)B12,sizeof(B12),"LuaNode.Url");
	lua_insert(L,1);
	lua_call(L,arg,1);
	return 1;
}

static int luaopen_LuaNode_Net_Timeout(lua_State *L) {
	int extension_status;
	int arg = lua_gettop(L);
	#include "../lib/LuaNode/Net/timeout.precomp"
	//luaL_loadbuffer(L,(const char*)B13,sizeof(B13),"LuaNode.Net.Timeout");
	lua_insert(L,1);
	lua_call(L,arg,1);
	return 1;
}

static int luaopen_LuaNode_Console(lua_State *L) {
	int extension_status;
	int arg = lua_gettop(L);
#include "../lib/LuaNode/console.precomp"
	//luaL_loadbuffer(L,(const char*)B13,sizeof(B13),"LuaNode.Console");
	lua_insert(L,1);
	lua_call(L,arg,1);
	return 1;
}


void PreloadModules(lua_State* L) {
	luaL_findtable(L, LUA_GLOBALSINDEX, "package.preload", 1);
	int preload = lua_gettop(L);

	lua_pushcfunction(L, luaopen_LuaNode_ChildProcess);
	lua_setfield(L, -2, "luanode.child_process");
	
	lua_pushcfunction(L, luaopen_LuaNode_Crypto);
	lua_setfield(L, -2, "luanode.crypto");
	
	lua_pushcfunction(L, luaopen_LuaNode_Dns);
	lua_setfield(L, -2, "luanode.dns");
	
	lua_pushcfunction(L, luaopen_LuaNode_EventEmitter);
	lua_setfield(L, -2, "luanode.event_emitter");
	
	lua_pushcfunction(L, luaopen_LuaNode_FreeList);
	lua_setfield(L, -2, "luanode.free_list");
	
	lua_pushcfunction(L, luaopen_LuaNode_Fs);
	lua_setfield(L, -2, "luanode.fs");
	
	lua_pushcfunction(L, luaopen_LuaNode_Http);
	lua_setfield(L, -2, "luanode.http");
	
	lua_pushcfunction(L, luaopen_LuaNode_Net);
	lua_setfield(L, -2, "luanode.net");
	
	lua_pushcfunction(L, luaopen_LuaNode_Path);
	lua_setfield(L, -2, "luanode.path");
	
	lua_pushcfunction(L, luaopen_LuaNode_QueryString);
	lua_setfield(L, -2, "luanode.querystring");
	
	lua_pushcfunction(L, luaopen_LuaNode_Stream);
	lua_setfield(L, -2, "luanode.stream");
	
	lua_pushcfunction(L, luaopen_LuaNode_Url);
	lua_setfield(L, -2, "luanode.url");
	
	lua_pushcfunction(L, luaopen_LuaNode_Net_Timeout);
	lua_setfield(L, -2, "luanode.net.timeout");
	
	lua_pushcfunction(L, luaopen_LuaNode_Console);
	lua_setfield(L, -2, "luanode.console");

	lua_pop(L, 1);
}