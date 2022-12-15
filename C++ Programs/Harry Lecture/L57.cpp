#include<iostream>
#include<cstring>
using namespace std;

//------------------------ USE OF VIRTUAL FUNCTIONS --------------------------
/*
 * 1. They can not be static.
 * 2. Virtual function can be the friend of another class
 * 3. A fuction in base class might not be overridden.
 * 4. If a virtual function defined in the base class there is no necessity of 
 *    redefuning in the derived class.
 */

class CWH
{
    protected:
    string title;
    float rating;
    public:
    CWH(string s,float r)
    {
        title=s;
    }
    virtual void display(){}
};
class CWHvideo : public CWH
{
    float videolength;
    public:
    CWHvideo(string s,float r, float vl):CWH(s,r)
    {
        videolength=vl;
    }
    void display()
    {
        cout<<"Video Title = "<<title<<endl;
        cout<<"Video Length = "<<videolength<<" Minutes"<<endl;
        cout<<"Video Rating = "<<rating<<endl;
    }
};
class CWHtext : public CWH
{
    int words;
    public:
    CWHtext(string s,float r,int wc):CWH(s,r)
    {
        words=wc;
    }
    void display()
    {
        cout<<"Text Title = "<<title<<endl;
        cout<<"Text Length = "<<words<<" Words"<<endl;
        cout<<"Text Rating = "<<rating<<endl;
    }
};

int main()
{
    string title;
    float rating,vlen;
    int words;

    // For Code with harry video
    title="Django Tutorial Video";
    vlen=4.56;
    rating =4.59;
    CWHvideo djVideo(title,rating,vlen);

    // For Code with harry text
    title="Django Tutorial Text";
    words=40;
    rating=4.55;
    CWHtext djText(title,rating,words);

    // djVideo.display();
    // djText.display();

    CWH *tuts[2];
    tuts[0]=&djVideo;
    tuts[1]=&djText;

    tuts[0]->display();
    tuts[1]->display();
    
    return 0;
}