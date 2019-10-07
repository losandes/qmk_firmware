#include <stdbool.h>
#include "action.h"

// #include "action.h"
// #include "action_layer.h"
// #include "action_tapping.h"
// #include "keycode.h"
// #include "timer.h"

// Apps
#define APP_IDE               "atom.app"
#define APP_TRM               "Terminal.app"
#define APP_BRS               "Firefox.app"
#define APP_BRS_ALT           "Safari.app"
#define APP_SLK               "Slack.app"
#define APP_FND               "Finder.app"
#define APP_MSG               "Messagges.app"
#define APP_MAL               "Mail.app"
#define APP_CAL               "Calendar.app"
#define APP_ZOM               "zoom.us.app"

#define TAPPING_TOGGLE 2          //2 taps for TT (double-tap to toggle layer)

bool open_app(keyrecord_t *record, char *appname);
