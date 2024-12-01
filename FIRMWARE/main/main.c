#include <stdio.h>
#include "app_camera.h"
#include "app_wifi.h"
#include "app_httpd.h"
#include "app_mdns.h"

static QueueHandle_t xQueueCameraFrame = NULL;

void app_main(void)
{
    app_wifi_main();

    xQueueCameraFrame = xQueueCreate(2, sizeof(camera_fb_t *));

    register_camera(PIXFORMAT_RGB565, FRAMESIZE_240X240, 2, xQueueCameraFrame);
    register_httpd(xQueueCameraFrame, NULL, true);

}
