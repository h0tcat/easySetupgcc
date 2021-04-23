#include <iostream>
#include <cstdlib>
#include <string>

int main(void){
    std::cout << "gccのインストールに必要なプログラムをインストールしています。" << std::endl;
    system("@\"%SystemRoot%\\System32\\WindowsPowerShell\\v1.0\\powershell.exe\" -NoProfile -InputFormat None -ExecutionPolicy Bypass -Command \"[System.Net.ServicePointManager]::SecurityProtocol = 3072; iex ((New-Object System.Net.WebClient).DownloadString('https://chocolatey.org/install.ps1'))\" && SET \"PATH=%PATH%;%ALLUSERSPROFILE%\\chocolatey\bin\"");

    std::cout << "OK." << std::endl;
    std::cout << "インストールが完了しました!" << std::endl;
    std::cout << "InstallCompiler.exe を実行して環境をインストールしてください。" << std::endl;
    std::cout << "このプログラムを終了してください。" << std::endl;
    std::string buffer;
    std::cin >> buffer;
    return 0;
}
