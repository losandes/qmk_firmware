#include <stdbool.h>
#include "action.h"

// #include "action.h"
// #include "action_layer.h"
// #include "action_tapping.h"
// #include "keycode.h"
// #include "timer.h"

// Apps
#define APP_IDE_AT  "atom.app"
#define APP_IDE_VS  "Visual Studio Code.app"
#define APP_TRM     "Terminal.app"
#define APP_BRS_FF  "Firefox.app"
#define APP_BRS_SA  "Safari.app"
#define APP_SLK     "Slack.app"
#define APP_FND     "Finder.app"
#define APP_MSG     "Messagges.app"
#define APP_MAL     "Mail.app"
#define APP_CAL     "Calendar.app"
#define APP_ZOM     "zoom.us.app"
#define NOALT__     "no-alt-app-defined"

#define TAPPING_TOGGLE 2          //2 taps for TT (double-tap to toggle layer)

bool open_app(keyrecord_t *record, char *appname, char *altappname);
