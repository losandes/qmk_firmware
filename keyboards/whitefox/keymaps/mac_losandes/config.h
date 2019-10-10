#include <stdbool.h>
#include "action.h"

// Apps
#define APP_IDE_AT  "atom.app"
#define APP_IDE_VS  "Visual Studio Code.app"
#define APP_TRM     "Terminal.app"
#define APP_BRS_FF  "Firefox.app"
#define APP_BRS_SA  "Safari.app"
#define APP_SLK     "Slack.app"
#define APP_FND     "Finder.app"
#define APP_MSG     "Messages.app"
#define APP_MAL     "Mail.app"
#define APP_CAL     "Calendar.app"
#define APP_ZOM     "zoom.us.app"

#define TAPPING_TOGGLE 2          //2 taps for TT (double-tap to toggle layer)

bool open_app(keyrecord_t *record, char *appname);
bool open_app_or_alt(keyrecord_t *record, char *appname, char *altappname);
