# BTL-LTHTN_N17
Báo cáo BTL Lập trình Hệ thống Nhúng_Nhóm 17

## Tên đề tài
Hệ thống định dạng vật thể thông qua video streaming

## Nội dung thư mục
```
|__ SOFTWARE
|    ├── 4thmodel.ipynb                     This is Python script for training a deep learning model
|    ├── detect_in_video.ipynb              This is Python script that performs object classification and bounding box
|    ├── recycle_classifier_vgg16.h5        This is VGG16 model    
|__ FIRMWARE
|    ├── README                     README for Firmware
|    ├── CMakeLists.txt
|    ├── main
|    │   ├── CMakeLists.txt
|    |   ├── camera                 This is the directory that contains the camera(OV2640) driver
|    |   |   ├── app_camera.c                 
|    |   ├── web                    This is the directory that contains the html for ui web and http/wifi driver
|    |   |   ├── www
|    |   |   |   ├── index.html     This is the file for ui web
|    │   |   ├── app_httpd.c        File sets up web server on ESP32, enable to handle HTTP requests for camera capture & stream.  
|    │   |   ├── app_wifi.c         This is the Wi-Fi configuration file for ESP32
|    |   └── main.c                 File main
└── README.md                  This is the file you are currently reading
```

