|      Supported Targets      |          ESP32          |          ESP32-C2          |
| --------------------------- | ----------------------- | -------------------------- |

# _About project_

This is the simplest buildable example. 

## Software requirements
ESP-IDF V5.x.  

## Installation for ESP-IDF V5.x.
```Shell
git clone https://github.com/Phu2011831/obj_classification_sys.git
cd obj_classification_sys/
cd FIRMWARE
idf.py fullclean
idf.py build
idf.py menuconfig
idf.py -p COMx flash monitor
```
__Note for Installation__   
It is necessary to install the CP2010X or CH34X driver for the ESP32 programmer to connect to the build machine.

## Folder contents

```
├── CMakeLists.txt
├── main
│   ├── CMakeLists.txt
|   ├── camera                 This is the directory that contains the camera(OV2640) driver
|   |   ├── app_camera.c                 
|   ├── web                    This is the directory that contains the 
|   |   ├── www
|   |   |   ├── index.html     This is the file 
│   |   ├── app_httpd.c        This file sets up web server on an ESP32, enabling it to handle HTTP requests for camera capture and streaming.  
│   |   ├── app_wifi.c         This is the Wi-Fi configuration file for ESP32
|   └── main.c
└── README.md                  This is the file you are currently reading
```

## Configuration 

##
