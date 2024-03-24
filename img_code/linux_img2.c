#include <stdint.h>
#include "linux_img2.h"

const uint8_t linux_img2_width = 56;
const uint8_t linux_img2_height = 64;
const uint8_t linux_img2_data[] = {

    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
    0xFF, 0x81, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC, 
    0x00, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xF8, 0x00, 
    0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xF0, 0x00, 0x1F, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xF0, 0x00, 0x1F, 0xFF, 
    0xFF, 0xFF, 0xFF, 0xE0, 0x00, 0x0F, 0xFF, 0xFF, 
    0xFF, 0xFF, 0xE0, 0x00, 0x0F, 0xFF, 0xFF, 0xFF, 
    0xDF, 0x60, 0x00, 0x07, 0xEF, 0x7B, 0xFF, 0x7F, 
    0xE6, 0x0E, 0x07, 0xFF, 0xFF, 0xFF, 0xFF, 0xE7, 
    0x1F, 0x07, 0xFF, 0xFF, 0xFF, 0xFF, 0xED, 0x9B, 
    0x87, 0xFF, 0xFF, 0xFF, 0xFF, 0xE9, 0x11, 0x07, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xE9, 0x91, 0x07, 0xFF, 
    0xFF, 0xFD, 0xFF, 0xEC, 0x01, 0x07, 0xF7, 0xFF, 
    0xFF, 0xFE, 0xE0, 0xF0, 0x07, 0xFF, 0xDF, 0xFF, 
    0xFB, 0xF1, 0xFE, 0x07, 0xFF, 0xFF, 0xFF, 0xFF, 
    0xE7, 0xFE, 0x03, 0xFF, 0xFF, 0xFF, 0xFF, 0xF3, 
    0xF8, 0x07, 0xDF, 0xFF, 0xFF, 0xFF, 0xE1, 0xF3, 
    0x83, 0xFF, 0xFF, 0xFF, 0xBF, 0xF4, 0x87, 0x83, 
    0xFF, 0xFF, 0xFD, 0xFF, 0xE6, 0x3F, 0xC1, 0xFF, 
    0x7B, 0xFF, 0xFF, 0xCF, 0xFF, 0xC0, 0xFF, 0xFF, 
    0xFF, 0xFF, 0xCF, 0xFF, 0xC0, 0xFF, 0xFF, 0xFF, 
    0xFF, 0x1F, 0xFF, 0xE0, 0x7F, 0xFF, 0xFF, 0xFF, 
    0x1F, 0xFF, 0xE0, 0x3F, 0xFF, 0xFF, 0xFE, 0x3F, 
    0xFF, 0xF0, 0x1E, 0xFF, 0xFF, 0xFE, 0x3F, 0xFF, 
    0xF0, 0x1F, 0xFF, 0xFF, 0xEC, 0x7F, 0xFF, 0xF8, 
    0x0F, 0xFF, 0xFD, 0xFC, 0x7F, 0xF7, 0xF8, 0x0F, 
    0xFB, 0xFF, 0xF8, 0x7F, 0xDF, 0xF8, 0x07, 0xFF, 
    0xFF, 0xF8, 0xFF, 0xFF, 0xBC, 0x03, 0xFF, 0xFF, 
    0xF0, 0xFF, 0xFF, 0xFC, 0x03, 0xFF, 0xFF, 0xF1, 
    0xFF, 0xFF, 0xFC, 0x03, 0xFF, 0xFF, 0xF1, 0xFF, 
    0x7F, 0xFE, 0x01, 0xFF, 0xFF, 0x63, 0xFF, 0xFF, 
    0xFE, 0x01, 0xEF, 0xFD, 0xE3, 0xFF, 0xFF, 0xFE, 
    0x00, 0xFF, 0xFF, 0xE3, 0xFF, 0xFF, 0xFE, 0x01, 
    0xFF, 0xFF, 0xC3, 0xFB, 0xFF, 0x7E, 0x00, 0xFF, 
    0xFF, 0xC3, 0xFF, 0xFD, 0xFE, 0x01, 0xFF, 0xFF, 
    0xC3, 0xFF, 0xFF, 0xFC, 0x00, 0xFF, 0xFF, 0xC3, 
    0xFF, 0xFF, 0xFE, 0x01, 0xFF, 0xFF, 0x81, 0xEF, 
    0xEF, 0xF0, 0x01, 0xFF, 0xFD, 0xB8, 0xFF, 0xFF, 
    0xF0, 0x00, 0xFF, 0xFF, 0x38, 0x7F, 0xFF, 0xF2, 
    0x00, 0xFF, 0xF0, 0x7C, 0x1F, 0xFF, 0xF2, 0x06, 
    0xFF, 0xE1, 0x7E, 0x1F, 0xFF, 0xF2, 0x06, 0x7F, 
    0xE7, 0xFE, 0x07, 0xDF, 0xE3, 0xBE, 0x7F, 0xE7, 
    0xFF, 0x07, 0xFF, 0xB3, 0xFE, 0x7F, 0xE7, 0xFF, 
    0x87, 0xFF, 0xE3, 0xFF, 0x0F, 0xE7, 0xFF, 0x8F, 
    0xFF, 0xC7, 0xFF, 0xCF, 0xE7, 0xFF, 0xCF, 0x7F, 
    0x83, 0xFF, 0xCF, 0xEF, 0xFF, 0xE7, 0xFE, 0x07, 
    0xFF, 0x0F, 0xCF, 0xFF, 0xE2, 0xE8, 0x07, 0xFC, 
    0x3F, 0xC7, 0xFF, 0xF0, 0x00, 0x07, 0xF0, 0xFF, 
    0xE0, 0x5E, 0xF0, 0x00, 0x07, 0xE3, 0xFF, 0xF8, 
    0x0F, 0xF0, 0x00, 0x07, 0xC7, 0xFF, 0xFF, 0xC1, 
    0xC2, 0xFF, 0xA3, 0x9F, 0xFF, 0xFF, 0xF8, 0x07, 
    0xFF, 0xE0, 0x3F, 0xFF, 0xFF, 0xFF, 0x1F, 0xFF, 
    0xF0, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
    0xEF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 
};
const uint16_t linux_img2_size = sizeof(linux_img2_data);