#ifndef _LIGHTTPD_PLUGIN_CORE_H_
#define _LIGHTTPD_PLUGIN_CORE_H_

enum core_options_t {
	CORE_OPTION_DEBUG_REQUEST_HANDLING = 0,

	CORE_OPTION_LOG_TARGET = 1,
	CORE_OPTION_LOG_LEVEL = 2,

	CORE_OPTION_STATIC_FILE_EXCLUDE = 3,

	CORE_OPTION_SERVER_TAG = 4,
	CORE_OPTION_MAX_KEEP_ALIVE_IDLE = 5
};

/* the core plugin always has base index 0, as it is the first plugin loaded */
#define CORE_OPTION(idx) _CORE_OPTION(con, idx)
#define _CORE_OPTION(con, idx) _OPTION_ABS(con, idx)

#endif
