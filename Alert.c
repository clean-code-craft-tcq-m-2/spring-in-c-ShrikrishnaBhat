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

int main(void)
{
  alerter_funcptr alert = &emailAlerter;
  emailAlerter(1);
  
  alerter_funcptr alert = &ledAlerter;
  ledAlerter(1);
}
