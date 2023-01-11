#include<iostream>
#include<fstream>
#include<string>

using namespace std;

class A{
    public:
    string name;
    string city;
    string state;
    A(string n,string c,string s){
        name = n;
        city = c;
        state = s;
    }
};

class B{
    public:
    double phone;
    string email;
    B(double p,string e){
        phone = p;
        email = e;
    }
}; 

void write_obj(string line){
    ofstream out("data_file.txt");
    out<<line;
}

void read_obj(){
    ifstream in("data_file.txt");
    string line;
    getline(in,line);
    cout<<line<<endl;
}

int main(){

    A s1("Sarthak","Chennai","TN");
    write_obj("OBJ1     Namme : "+s1.name+"     City : "+s1.city+"     State : "+s1.state);
    read_obj();
    B S1(9654159753,"Sarthak@gmail.com");
    write_obj("     Phone : "+ to_string(S1.phone) + "     Email : "+S1.email+"\n");
    read_obj();

    A s2("Ajay","Gurgaon","HR");
    write_obj("OBJ2     Namme : "+s2.name+"     City : "+s2.city+"     State : "+s2.state);
    read_obj();
    B S2(879053951,"Ajay@gmail.com");
    write_obj("     Phone : "+ to_string(S2.phone) + "     Email : "+S2.email+"\n");
    read_obj();


    A s3("Tarun","Indore","MP");
    write_obj("OBJ3     Namme : "+s3.name+"     City : "+s3.city+"     State : "+s3.state);
    read_obj();
    B S3(9978452369,"Tarun@gmail.com");
    write_obj("     Phone : "+ to_string(S3.phone) + "     Email : "+S3.email+"\n");
    read_obj();


    A s4("Raj","Lucknow","UP");
    write_obj("OBJ4     Namme : "+s4.name+"     City : "+s4.city+"     State : "+s4.state);
    read_obj();
    B S4(9869846984,"Raj@gmail.com");
    write_obj("     Phone : "+ to_string(S4.phone) + "     Email : "+S4.email+"\n");
    read_obj();


    A s5("Dhruv","Delhi","Delhi");
    write_obj("OBJ5     Namme : "+s5.name+"     City : "+s5.city+"     State : "+s5.state);
    read_obj();
    B S5(898975684,"Dhruv@gmail.com");
    write_obj("     Phone : "+ to_string(S5.phone) + "     Email : "+S5.email+"\n");

    read_obj();

    return 0;
}