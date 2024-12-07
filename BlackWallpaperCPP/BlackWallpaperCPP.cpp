#include <windows.h>
#include <iostream>

int main() {
    const wchar_t* path = L"C:\\black_pixel.bmp";
    int result;

    result = SystemParametersInfoW(SPI_SETDESKWALLPAPER, 0, (void*)path, SPIF_UPDATEINIFILE | SPIF_SENDCHANGE);

    if (result) {
        std::wcout << L"Wallpaper set successfully.\n";
    }
    else {
        std::wcout << L"Failed to set wallpaper.\n";
    }

    return 0;
}