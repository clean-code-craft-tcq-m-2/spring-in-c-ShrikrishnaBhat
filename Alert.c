#include "stats.h"
#include "Alert.h"

void emailAlerter()
{
  emailAlertCallCount=1;
}
void ledAlerter()
{
  ledAlertCallCount=1;
}


  alerter_funcptr alerters = &emailAlerter;
  emailAlerter();
  
  //alerter_funcptr alerters = &ledAlerter;
  ledAlerter();

