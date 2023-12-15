struct book{
    int roll_no;
    char name[20];
    int age;
    
};
struct book c[5];
int main()
{
   //Write a program to store the roll no. (starting from 1), name and age of 5 students and then print the details of the student with roll no. 2.
  
   for(int i=1; i<3; i++){
        cout<<"enter the details of "<<i<<" student"<<endl;
       cin>>c[i].roll_no>>c[i].name>>c[i].age;
   }
   cout<<"enter the roll_no "<<endl;
   int n;
   cin>>n;
   for(int i=1; i<3; i++){
       if(c[i].roll_no == n){
           cout<<c[i].roll_no<<endl;
           cout<<c[i].name<<endl;
           cout<<c[i].age<<endl;
       }
    
   } 
  
   
  
    return 0;