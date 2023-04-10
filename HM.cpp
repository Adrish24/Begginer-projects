#include<iostream>
using namespace std;

int main()
{
    int quant;
    int choice;
    


    int Aroom = 10, Apizza =10 , Aburgger = 20,  AchickenWings = 30, Afishfry = 15;
    int Sroom =0 , Spizza = 0, Sburgger =0, SchickenWings =0, Sfishfry =0;
    int room_price = 0,pizza_price =0, burgger_price =0, chikenWings_price= 0, fishfry_price = 0;
      n: y:
    cout<<"\n\n\t\t ______Please seclect from the options_____";
    cout<<"\n\n\t1) Room booking. ";
    cout<<"\n\n\t2) Food order. ";
    cout<<"\n\n\t3) Bill. ";
    cout<<"\n\n\t4) Exit.                                            ";
    

    cin>>choice;
    

    switch (choice)
    {
    case 1:
        cout<<"\n\n Enter the number of rooms you want: ";
        cin>>quant;

        if(Aroom-Sroom >= quant){
           Sroom += quant; 
           room_price += quant*500;
           cout<<"\n\n\t\t\t"<<quant<<" Romm/Rooms have been booked. ";
           }
           else{
            cout<<"\n\n\t\t\t Only "<<Aroom-Sroom<<" Rooms avialable. ";
           }
        break;
       m:
        case 2:
        cout<<"\n\n\t\t ____FOOD MENU____ ";
        cout<<"\n\n\t1) Pizza.";
        cout<<"\n\n\t2) Burgger.";
        cout<<"\n\n\t3) ChickenWings.";
        cout<<"\n\n\t4) FishFry. ";
        cout<<"\n\n\t5) Exit.                       ";

        cin>>choice;

        switch(choice)
        {
            case 1:
            cout<<"\n\n Pizza Qty: ";
            cin>>quant;
            
            if(Apizza-Spizza>=quant){
                Spizza += quant;
                pizza_price += quant*240;
                cout<<"\n\n\t\t\t"<<quant<<" Pizza orderd. ";
            }
            else{
                cout<<"\n\n\t\t\t Only "<<Apizza-Spizza<<" Pizza avialable. ";
            }
            break;

            case 2:
            cout<<"\n\n  Burgger Qty: ";
            cin>>quant;
            
            if(Aburgger-Sburgger>=quant){
                Sburgger += quant;
                burgger_price += quant*100;
                cout<<"\n\n\t\t\t"<<quant<<" Burgger orderd. ";
            }
            else{
                cout<<"\n\n\t\t\t Only "<<Aburgger-Sburgger<<" Burgger avialable. ";
            }
            break;

            case 3:
            cout<<"\n\n ChickenWing Qty: ";
            cin>>quant;
            
            if(AchickenWings-SchickenWings>=quant){
                SchickenWings += quant;
                chikenWings_price += quant*180;
                cout<<"\n\n\t\t\t"<<quant<<" ChickenWing orderd. ";
            }
            else{
                cout<<"\n\n\t\t\t Only "<<AchickenWings-SchickenWings<<" ChickenWing avialable. ";
            }
            break;

            case 4:
            cout<<"\n\n FishFry Qty: ";
            cin>>quant;
            
            if(Afishfry-Sfishfry>=quant){
                Sfishfry += quant;
                fishfry_price *= quant*200;
                cout<<"\n\n\t\t\t"<<quant<<" FishFry orderd. ";
            }
            else{
                cout<<"\n\n\t\t\t Only "<<Afishfry-Sfishfry<<" FishFry avialable. ";
            }
            break;

            case 5:
            cout<<"exiting..";
            
            goto y;

            default:
            cout<<"\n\n\t Please select item number from above menu. ";

            
        }
        goto m;
        
        case 3: 
        cout<<"\n\n\t\t\t Your Bill is Only "<<room_price+pizza_price+burgger_price+fishfry_price+chikenWings_price<< " /-"; 
        break; 
        
        case 4:
        exit(0);
        
        default: 
        cout<<"\n\n\t Please select item number from above list. ";
       
    }
    goto n;
    
    

} 