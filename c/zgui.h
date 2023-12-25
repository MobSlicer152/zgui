#pragma once

#include <inttypes.h>
#include <stdbool.h>

typedef struct zgui_multi_select_item {
    const char* name;
    bool* value;
} zgui_multi_select_item_t;

typedef struct zgui_vec2 {
    float x;
    float y;
} zgui_vec2_t;

typedef struct zgui_color {
    int r;
    int g;
    int b;
    int a;
} zgui_color_t;

typedef void (*zgui_line_t)(int x, int y, int x2, int y2, zgui_color color);
typedef void (*zgui_rect_t)(int x, int y, int x2, int y2, zgui_color color);
typedef void (*zgui_filled_rect_t)(int x, int y, int x2, int y2, zgui_color color);
typedef void (*zgui_text_t)(int x, int y, zgui_color color, int font, bool center, const char* text);
typedef void (*zgui_get_text_size_t)(unsigned long font, const char* text, int* width, int* height);
typedef float (*zgui_get_frametime_t)(void);
typedef bool (*zgui_get_key_t)(int vk);

typedef struct zgui_functions {
    zgui_line_t draw_line;
    zgui_rect_t draw_rect;
    zgui_filled_rect_t draw_filled_rect;
    zgui_text_t draw_text;
    zgui_get_frametime_t get_frametime;
    zgui_get_key_t get_key;
} zgui_functions_t;

extern zgui_functions_t functions;

