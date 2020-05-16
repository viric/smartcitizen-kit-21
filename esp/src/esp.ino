#include "SckESP.h"

SckESP esp;

void setup()
{
	esp.setup();
}
void loop()
{
	esp.update();
}


void ledToggle()
{
	esp._ledToggle();
}
time_t ntpProvider()
{
	return esp.getNtpTime();
}
void extSet(AsyncWebServerRequest *request)
{
	esp.webSet(request);
}
void extStatus(AsyncWebServerRequest *request)
{
	esp.webStatus(request);
}
void extRead(AsyncWebServerRequest *request)
{
	esp.webRead(request);
}
void extRoot(AsyncWebServerRequest *request)
{
	esp.webRoot(request);
}
