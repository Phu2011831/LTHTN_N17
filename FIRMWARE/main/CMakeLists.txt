set(embed_files "web/www/index.html.gz"
        )

set(src_dirs    camera
                web
                ".")

set(include_dirs    camera
                    web
                    ".")

set(requires    esp_http_server
                nvs_flash
                esp_adc
                esp_lcd
                esp_timer
                esp_wifi)

idf_component_register(SRC_DIRS ${src_dirs} INCLUDE_DIRS ${include_dirs} REQUIRES ${requires} EMBED_FILES ${embed_files})
