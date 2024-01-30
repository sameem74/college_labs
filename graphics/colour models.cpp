#include <stdio.h>
#include<Math.h>
typedef struct {
    float r, g, b; 
} RGBColor;

typedef struct {
    float h, s, l; 
} HSLColor;

void rgb_to_hsl(RGBColor rgb, HSLColor *hsl) {
    float maxc = fmaxf(fmaxf(rgb.r, rgb.g), rgb.b);
    float minc = fminf(fminf(rgb.r, rgb.g), rgb.b);

    hsl->l = (maxc + minc) / 2;

    if (maxc == minc) {
        hsl->h = hsl->s = 0; 
    } else {
        hsl->s = (hsl->l < 0.5) ? ((maxc - minc) / (maxc + minc)) : ((maxc - minc) / (2 - maxc - minc));

        if (maxc == rgb.r) {
            hsl->h = (rgb.g - rgb.b) / (maxc - minc);
        } else if (maxc == rgb.g) {
            hsl->h = 2 + (rgb.b - rgb.r) / (maxc - minc);
        } else {
            hsl->h = 4 + (rgb.r - rgb.g) / (maxc - minc);
        }

        hsl->h *= 60;
        if (hsl->h < 0) {
            hsl->h += 360;
        }
    }
}

void hsl_to_rgb(HSLColor hsl, RGBColor *rgb) {
    float c = (1 - fabs(2 * hsl.l - 1)) * hsl.s;
    float x = c * (1 - fabs(fmod(hsl.h / 60.0, 2) - 1));
    float m = hsl.l - c / 2;

    float r, g, b;
    if (hsl.h >= 0 && hsl.h < 60) {
        r = c; g = x; b = 0;
    } else if (hsl.h >= 60 && hsl.h < 120) {
        r = x; g = c; b = 0;
    } else if (hsl.h >= 120 && hsl.h < 180) {
        r = 0; g = c; b = x;
    } else if (hsl.h >= 180 && hsl.h < 240) {
        r = 0; g = x; b = c;
    } else if (hsl.h >= 240 && hsl.h < 300) {
        r = x; g = 0; b = c;
    } else {
        r = c; g = 0; b = x;
    }

    rgb->r = r + m;
    rgb->g = g + m;
    rgb->b = b + m;
}

int main() {
    RGBColor rgbInput = {0.5, 0.8, 0.2};
    HSLColor hslOutput;
    printf(" Program written by Ritvik Dwivedi \n");
    printf("RGB Input: (%.2f, %.2f, %.2f)\n", rgbInput.r, rgbInput.g, rgbInput.b);

    rgb_to_hsl(rgbInput, &hslOutput);
    printf("HSL Output: (%.2f, %.2f, %.2f)\n", hslOutput.h, hslOutput.s, hslOutput.l);

    RGBColor rgbOutput;
    hsl_to_rgb(hslOutput, &rgbOutput);
    printf("RGB Output: (%.2f, %.2f, %.2f)\n", rgbOutput.r, rgbOutput.g, rgbOutput.b);

    return 0;
}

