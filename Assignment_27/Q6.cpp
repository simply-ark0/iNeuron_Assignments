#include<iostream>
using namespace std;

class CString{

    private:
        string str;
    
    public:
        CString(){
            str = "";
        }
        CString(string str){
            this->str = str;
        }
        void setString(){
            cout<<"Enter String: ";
            cin.ignore();
            getline(cin, this->str);
        }
        string getString(){
            return this->str;
        }
        int stringlen(){
            int i=0;
            while(this->str[i])
                i++;

            return 0;
        }
        CString operator+(CString S){
            CString temp;
            temp.str.append(this->str);
            temp.str.append(S.str);

            return temp;
        }

        void operator=(string S){
            this->str = S;
        }
        bool operator==(CString S){
            if(this->stringlen()!=S.stringlen())
                return 0;
            int i=0;
            while(this->str[i]){
                if(this->str[i]!=S.str[i])
                    return 0;
                i++;
            }

            return 1;
        }
};

int main(){
    CString s1, s2, s3, s4;
    s1 = "Arkojeet";
    s2 = "Bera";
    s3 = s1+s2;
    s4 = "ArkojeetBera";

    cout<<s1.getString()<<endl;
    cout<<s2.getString()<<endl;
    cout<<s3.getString()<<endl;

    cout<<(s1==s2)<<endl;
    cout<<(s3==s4)<<endl;

    return 0;
}