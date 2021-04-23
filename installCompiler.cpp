#include <iostream>
#include <cstdlib>
#include <string>

void installCompiler(const size_t* choice){
    switch(*choice){

        case 1:
            system("choco install -y mingw");
            break;
        case 2:
            system("choco install -y msys2");
            break;
        default:
            std::cout  << "プログラムを終了します。" << std::endl;
            exit(0);
            break;
    }
}
int main(void){
    std::cout << "どれをインストールしたいかを番号で入力してください。" << std::endl;
    std::cout << "1. MinGWをインストールする" << std::endl;
    std::cout << "2. msys2をインストールする" << std::endl;
    std::cout << "0. 終了する" << std::endl;
    
    size_t choice=4;

    while(choice<0 || choice>2){
        std::cout << "実行したい処理の番号を入力してください。 1/2/0 :";
        std::cin >> choice;
        
        if(choice<0 || choice>2)
            std::cout << "0から2までの範囲で入力してください" << std::endl;
    }

    installCompiler(&choice);
    std::cout << "OK." << std::endl;
    std::cout << "インストールが完了しました!" << std::endl;
    std::cout << "gccと打って導入されたかを確認してください。" << std::endl;
    return 0;
}
