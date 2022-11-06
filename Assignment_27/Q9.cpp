#include<iostream>
#define SIZE 100
using namespace std;

class myString{

    private:
        char str[SIZE];
    
    public:
        int stringlen(){
            int i=0;
            while(str[i])
                i++;

            return i;
        }
        void setString(){
            cout<<"Enter String: ";
            fflush(stdin);
            fgets(this->str, SIZE, stdin);
            this->str[this->stringlen()-1] = '\0';
        }

        string getString(){
            string temp(this->str);
            return temp;
        }

        void operator=(string str){
            int i=0;
            while(str[i]){
                this->str[i] = str[i];
                i++;
            }
            this->str[i] = '\0';
        }
        myString operator!(){
            int i=0;
            while(this->str[i]){
                if(this->str[i]>=65 && this->str[i]<=90)
                    this->str[i] += 32;
                else if(this->str[i]>=97 && this->str[i]<=122)
                    this->str[i] -= 32;
                i++;
            }

            return *this;
        }
};

int main(){
    myString s1, s2;
    s1.setString();
    s2 = "Beast!";

    // !s1;
    // !s2;
    // cout<<s1.getString()<<endl;
    // cout<<s2.getString()<<endl;

    myString s3 = !s1;
    myString s4 = !s2;
    cout<<s3.getString()<<endl;
    cout<<s4.getString()<<endl;

}