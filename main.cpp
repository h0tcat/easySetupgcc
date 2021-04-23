#include <iostream>
#include <cstdlib>
#include <string>

int main(void){
    std::cout << "gccをインストールするために必要なプログラムをインストールします。" << std::endl;
    system("start powershell \"Set-ExecutionPolicy Bypass -Scope Process -Force; [System.Net.ServicePointManager/::SecurityProtocol = [System.Net.ServicePointManager]::SecurityProtocol -bor 3072; iex ((New-Object System.Net.WebClient).DownloadString(\'https://chocolatey.org/install.ps1\'))\"");
    std::cout << "OK." << std::endl;
    std::cout << "gccをインストールします。" << std::endl;
    system("choco install mingw");

    std::cout << "インストールが完了しました!" << std::endl;
    std::cout << "一度プログラムを終了して、コマンドプロンプトを開き、gccコマンドが動作するかを確認してください。" << std::endl;
    std::cout << "enterキーを押すと終了します" << std::endl;
    std::string buffer;
    std::cin >>  buffer;
    return 0;
}
