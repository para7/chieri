
#include <iostream>
#include <string>

using std::cout;

int main(int argc, const char * argv[])
{
    bool isJapanese = true;
    
    char space = '\n';
    
    for(int i = 0; i < argc; ++i)
    {
        std::string option(argv[i]);
        
        if(option.size() > 2 && option.substr(0,2) == "--")
        {
            
        }
        else if(option.front() == '-')
        {
            switch (option[i])
            {
                case 'j':
                case 'J':
                    
                    isJapanese = true;
                    
                    break;
                    
                case 'e':
                case 'E':
                    
                    isJapanese = false;
                    
                    break;
                    
                default:
                    
                    break;
            }
        }
    }
    
    if(isJapanese)
    {
        cout << "身長 153cm" << space;
        cout << "体重 42kg" << space;
        cout << "BMI 17.94" << space;
        cout << "スリーサイズ 79-57-80" << space;
        cout << "誕生日 6/11" << space;
        cout << "星座 ふたご座" << space;
        cout << "血液型 A型" << space;
        cout << "年齢 16歳" << space;
        cout << "趣味 四つ葉のクローバー集め" << space;
    }
    else
    {
        cout << "Height 153cm" << space;
        cout << "Weight 42kg" << space;
        cout << "BMI 17.94" << space;
        cout << "B79-W57-H80" << space;
        cout << "Birthday 6/11" << space;
        cout << "Zodiac Gemini" << space;
        cout << "Blood type A" << space;
        cout << "Age 16" << space;
        cout << "Hobby collect four-leaf clover" << space;
    }
}
