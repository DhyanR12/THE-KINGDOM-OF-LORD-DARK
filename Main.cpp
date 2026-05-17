#include<iostream>
#include<string>
using namespace std;
 int fear=0;
    int army=50;
     int Dragonchoice;
    int DragonFight;
   
    void CurrentStats();
    void DragonIncident();
    void Thelast();
int main()
{
   
    int choice;
    int WarChoice;
    int fightchoice;
    int Training;
    int Plot;
    int capture;
    int whatTodo;
    int Taxoffice;
    int Blame;
    int TaxTwo;
    int BlameTwo;
    int Blamethree;
    int BlameFour;
   

    cout<<"   THE KINGDOM OF LORD DARK"<<endl;
    cout<<"...................................."<<endl;
    cout<<"THIS IS THE STORY OF THE MOST FEARED KING, LORD DARK..."<<endl;
    cout<<"THE MOST TERRIFYING KING..."<<endl;
    cout<<"Heroes Call Me EVIL"<<endl;
    cout<<"My People Call Me CRUEL...."<<endl;
    cout<<"(but the actual story is different)"<<endl;
    cout<<" DAY 1 "<<endl;
    cout<<"....................................."<<endl;
    cout<<"(You Hear Footsteps..)"<<endl;
    cout<<"Welcome Heroes..."<<endl;
    cout<<"It's Me the DARK LORD..."<<endl;
    cout<<"Hey You! We Are None Other Than The Knight Squad Of Kingdom Of Wind.."<<endl;
    cout<<"The Knights Held The Sword Against You"<<endl;
    cout<<"....................................."<<endl;
    cout<<"CHOICE"<<endl;
    cout<<"....................................."<<endl;
    cout<<"1.Fight(Fear 10+     Army 5-)"<<endl;
    cout<<"2.Recruit Them To Your Army(Fear -     Army 10+)"<<endl;
    cout<<"3.Laugh At Them For No Reason(Fear 10+     Army -)"<<endl;
    cin>>choice;

    if(choice==1){
        
        cout<<"           YOU WIN"<<endl;
        cout<<"....................................."<<endl;
        cout<<"Choice :"<<endl;
          cout<<"....................................."<<endl;
          fear+=10;
          army-=5;
           CurrentStats();
        cout<<"1.Inform Kingdom Of Wind and Declare War...(Fear 10+    Army20-)"<<endl;
        cout<<"2.Let Them Go(Fear-20  Army-)"<<endl;
        cout<<"3.Put Them In Cell(Fear 10+    Army-)"<<endl;
        cin>>fightchoice;

        
        if(fightchoice==1){
            fear+=10;
            army-=20;
            cout<<"               DAY 2"<<endl;
             cout<<"....................................."<<endl;
              CurrentStats();
             cout<<"WAR DAYS ARE COMING"<<endl;
             cout<<"(THE MESSENGER BIRD FLEW IN THE CASTLE..)"<<endl;
              cout<<"....................................."<<endl;
              cout<<"Mr.DARK LORD,"<<endl;
              cout<<"Sorry for the incident.."<<endl;
              cout<<"They weren't send from here"<<endl;
              cout<<"They Went On Themselves.."<<endl;
              cout<<"By KING MIKE"<<endl;
               cout<<"....................................."<<endl;
               cout<<"CHOICE:"<<endl;
               cout<<"1.Believe Him And Continue Relation With Te KINGDOM OF WIND(Fear 5-   Army-)"<<endl;
               cout<<"2.Send a Warning To KINGDOM OF WINDS(Fear 5+  Army-)"<<endl;
               cin>>WarChoice;

               if(WarChoice==1)
               {
                fear-=5;
                
                   cout<<"You Believed King Mike"<<endl;
                     CurrentStats();
               }
               else if(WarChoice==2){
                cout<<"You Have Send A Warning Notice.."<<endl;
                fear+=5;
               }
        }
        else if(fightchoice==2){
            cout<<"You Let Them Go.."<<endl;
            fear-=20;
            CurrentStats();
        }
        else if(fightchoice==3){
             fear+=10;
            cout<<"The Greatest Knight Squad Is Now In Your Cell..."<<endl;
         CurrentStats();
        }
        else{cout<<"WRONG INPUT"<<endl;}
         cout<<"....................................."<<endl;
         cout<<"DAY3"<<endl;
          cout<<"....................................."<<endl;
          cout<<"Your Goblins Burned The Half Of Tax Office!"<<endl;
           cout<<"....................................."<<endl;
           cout<<"CHOICE: "<<endl;
           cout<<"1.Blame Goblins..(Fear5+ Army-)"<<endl;
           cout<<"2.Make This A National Festival!..(Fear20- Army-)"<<endl;
           cin>>Taxoffice;
           if(Taxoffice==1){
            cout<<"You Blamed The Goblins.."<<endl;
            cout<<"THE SCHOLARS ARE IN RECOVERY WORK OF TAX OFFICE.."<<endl;
            fear+=5;

            CurrentStats();
             cout<<"....................................."<<endl;
             cout<<"One Of The Goblins Came Near You!"<<endl;
             cout<<"You Blamed Him So Much!"<<endl;
             cout<<"He Stabbed You"<<endl;
             cout<<"Oops You Died!"<<endl;
             cout<<"Try Again!.."<<endl;
             return 0;
           }
           else if(Taxoffice==2){
            cout<<"IT'S A NATIONAL FESTIVAL"<<endl;
            fear-=20;
            CurrentStats();
             cout<<"....................................."<<endl;
             cout<<"People Think You Are Out Of Mind!.."<<endl;
             cout<<"CHOICE: "<<endl;
             cout<<"1.Blame the people for saying you are out of mind!"<<endl;
             cout<<"2.Ignore Them!"<<endl;
             cin>>Blame;
             if(Blame==1){
                cout<<"People Hate You So Much"<<endl;
             }
             else if(Blame==2){
                cout<<"People Keep Saying You Are Out Of Mind!"<<endl;
                 cout<<"....................................."<<endl;
             }
           }
             DragonIncident();
             Thelast();
    }
else if(choice==2)
{
     cout<<"....................................."<<endl;
   cout<< "YOU CLEAR THROAT INSTEAD OF TAKING WEPONS.."<<endl;
cout<<"YOU GUYS ARE WASTING YOUR TALENTS! BY SERVING KINGDOM OF WINDS.."<<endl;
cout<<"Join With Us..."<<endl;
cout<<"KNIGHTS: But We Heard That You drink blood of the enimies..."<<endl;
cout<<"DO YOU WANT REAL WAGE OR NOT?"<<endl;
cout<<"The Knights Kneel Before You.."<<endl;
 cout<<"....................................."<<endl;
cout<<"NOW THE GREATEST KNIGHTS ARE UNDER YOU"<<endl;
 cout<<"....................................."<<endl;
cout<<"DAY2"<<endl;
 cout<<"....................................."<<endl;
cout<<"Now You Have To Train The Knights.."<<endl;
 cout<<"CHOICE: "<<endl;
 cout<<"1.Get The Best Trainer In The Nation..(Fear-  Army5+)"<<endl;
 cout<<"2.Use, The Current Royal Trainer(Fear-  Army5-)"<<endl;
cin>>Training;
if(Training==1){
    army+=5;
    CurrentStats();
     cout<<"....................................."<<endl;
    cout<<"You Have Got The Best Trainer To Train The Knights.."<<endl;
     cout<<"....................................."<<endl;
}
else if(Training==2){
    army-=5;
    CurrentStats();
     cout<<"....................................."<<endl;
    cout<<"You Are Training Your Knights With The Current Royal Trainer.."<<endl;
 cout<<"....................................."<<endl;
}
else{
    cout<<"WRONG INPUT"<<endl;
}
cout<<"NOW GIVE A TRAINING PLOT TO THEM.."<<endl;
cout<<"CHOICE: "<<endl;
cout<<"1.Give Them The BEST Training Plot(Fear- Army5+)"<<endl;
cout<<"2.Let Them Use ROYAL Courtyard..(Fear- Army10-)"<<endl;
cin>>Plot;
if(Plot==1){
    army+=5;
    
    CurrentStats();
     cout<<"....................................."<<endl;
     cout<<"THEY ARE NOW TRAINING.."<<endl;
      cout<<"....................................."<<endl;

}
else if(Plot==2){
    army-=10;
 cout<<"....................................."<<endl;
 cout<<"THEY ARE NOW TRAINING(but not satisfied)"<<endl;
  cout<<"....................................."<<endl;
  cout<<"The ARROW -> FLEW IN YOUR CASTLE..."<<endl;
cout<<"THE ARROW HIT YOU!"<<endl;
 cout<<"....................................."<<endl;
 cout<<"Oops You Died!,Try Again.."<<endl;
  cout<<"....................................."<<endl;
  cout<<"THANK YOU FOR PLAYING THE KINGDOM OF LORD DARK"<<endl;
   cout<<"....................................."<<endl;
   return 0;
}
else{
    cout<<"WRONG INPUT"<<endl;
}
 cout<<"....................................."<<endl;
 cout<<"DAY3"<<endl;
  cout<<"....................................."<<endl;
     cout<<"Your Goblins Burned The Half Of Tax Office!"<<endl;
           cout<<"....................................."<<endl;
           cout<<"CHOICE: "<<endl;
           cout<<"1.Blame Goblins..(Fear5+ Army-)"<<endl;
           cout<<"2.Make This A National Festival!..(Fear20- Army-)"<<endl;
           cin>>TaxTwo;
           if (TaxTwo==1){
            fear+=5;
            cout<<"You Blamed The Goblins So much"<<endl;
            CurrentStats();
              cout<<"....................................."<<endl;
              cout<<"A Goblin Came Near You!"<<endl;
              cout<<"You Blamed Him So Much That He Stabbed You!"<<endl;
              cout<<"....................................."<<endl;
              cout<<"Oops You Died!"<<endl;
              cout<<"Try again!.."<<endl;
              cout<<"....................................."<<endl;
               cout<<"THANK YOU FOR PLAYING THE KINGDOM OF LORD DARK"<<endl;
   cout<<"....................................."<<endl;
   return 0;
           }

           else if(TaxTwo==2){
            fear-=20;
            cout<<"It's a Nationan Festival.."<<endl;
            CurrentStats();
            cout<<"PEOPLE THINK YOU ARE OUT OF MIND!"<<endl;
            cout<<"....................................."<<endl;
            cout<<"CHOICE: "<<endl;
            cout<<"1.Blame People For Saying You Are OUT OF MIND! "<<endl;
            cout<<"2.Ignore Them!"<<endl;
            cin>>BlameTwo;
               if(BlameTwo==1){
                cout<<"People Hate You So Much!.."<<endl;
                
               }
               else if(BlameTwo==2){
                cout<<"People Keep Saying You are OUT OF MIND!"<<endl;

               }
          }
         DragonIncident();
         Thelast();
}

else if(choice==3)
{
cout<<"THEY ARE COMPLETLY SCARED!"<<endl;
cout<<"The One In The Left stepped Back!"<<endl;
 cout<<"....................................."<<endl;
 cout<<"CHOICE: "<<endl;
  cout<<"....................................."<<endl;
  cout<<"1.Use Your Guards and Capture them(fear-  Army-10)"<<endl;
  cout<<"2.Go Near To Them..(Fear20+  Army-)"<<endl;
  cin>>capture;
  if(capture==1){
    army-=10;
    
     cout<<"....................................."<<endl;
     cout<<"They Killed The Gaurds.."<<endl;
      cout<<"....................................."<<endl;
      cout<<"(You Called The Army)"<<endl;
       cout<<"You Captured Them Successfully"<<endl;
       CurrentStats();
        cout<<"....................................."<<endl;
        cout<<"CHOICE: "<<endl;
        cout<<"1.Put Them In Cell(Fear5+  Army-)"<<endl;
        cout<<"2.Throw Them To Crocodiles (Fear30+ Army-)"<<endl;
        cin>>whatTodo;
        if(whatTodo==1){
            fear+=5;
            cout<<"THE GREATEST KNIGHT ARE IN YOUR CELL.."<<endl;
             CurrentStats();
        }
        else if(whatTodo==2){
            fear+=30;
             cout<<"....................................."<<endl;
            cout<<"Day2"<<endl;
             cout<<"....................................."<<endl;
             cout<<"You Threw Them To Crocodile.."<<endl;
             cout<<"PEOPLE ARE CHEERING FOR YOU WITH FEAR"<<endl;
              CurrentStats();
             cout<<"(But Actually You Threw Dummy The Actual KNIGHTS are in your Cell..)"<<endl;
 cout<<"....................................."<<endl;
 cout<<"Day3"<<endl;
  cout<<"....................................."<<endl;
  cout<<"Your Goblins Burned Half Of The  Royal Tax Office"<<endl;
   cout<<"....................................."<<endl;
   cout<<"CHOICE: "<<endl;
    cout<<"....................................."<<endl;
    cout<<"1.Blame Goblins(Fear10+  Army-)"<<endl;
    cout<<"2.Celebrate This as National Festival(Fear20- Army-)"<<endl;
    cin>>Blamethree;
    if(Blamethree==1){
      fear+=10;
       cout<<"....................................."<<endl;
       cout<<"Now Goblins Fear You"<<endl;
       CurrentStats();
        cout<<"....................................."<<endl;
        cout<<"One Of The Goblin Came Near You"<<endl;
        cout<<"You Blamed Him So Much!"<<endl;
        cout<<"He Stabbed You!.."<<endl;
         cout<<"....................................."<<endl;
         cout<<"     Oops You Died! "<<endl;
         cout<<"Try Again!"<<endl;
          cout<<"....................................."<<endl;
          cout<<"THANK YOU FOR PLAYING KINGDOM OF DARK LORD"<<endl;
           cout<<"....................................."<<endl;
           return 0;
    }
    

  }
  else if (Blamethree==2){
    fear-=30;
 cout<<"....................................."<<endl;
 CurrentStats();
 cout<<"People Think You Are Out Of Mind!"<<endl;
  cout<<"....................................."<<endl;
  cout<<"CHOICE: "<<endl;
   cout<<"....................................."<<endl;
   cout<<"1.Blame People For Saying Dark Lord is Out Of Mind!"<<endl;
   cout<<"2.Ignore Them!"<<endl;
   cin>>BlameFour;
   if(BlameFour==1){
     cout<<"People Hate You So Much"<<endl;
      cout<<"....................................."<<endl;
   }
   else if(BlameFour==2){
    cout<<"People Keep Saying You Are Out Of Mind!"<<endl;
     cout<<"....................................."<<endl;
   }
DragonIncident();
Thelast();
  }
  else{
    cout<<"WRONG INPUT"<<endl;
  }


}
else if(capture==2){
    cout<<"They Threw Blade Against You"<<endl;
     cout<<"....................................."<<endl;
    cout<<"Oops You Died!"<<endl;
     cout<<"....................................."<<endl;
     cout<<"Try Again!"<<endl;
     return 0;
}


    return 0;
}

}

void CurrentStats()
{
    cout<<"[CurrentStats]"<<"->"<<"Fear: "<<fear<<"  | " <<"Army: "<<army<<endl;
}

void DragonIncident()
{
    cout<<"....................................."<<endl;
           cout<<"Day 4"<<endl;
  cout<<"....................................."<<endl;
  cout<<"A Huge Dragon Can Be Seen From The southern Mountains.."<<endl;
  cout<<"People Are Scared Of The Dragon!"<<endl;
  cout<<"The People From The South haven't Sleeped For last 2 days.."<<endl;
    cout<<"....................................."<<endl;
    cout<<"CHOICE: "<<endl;
      cout<<"....................................."<<endl;
      cout<<"1.Fight The Dragon By Yourself(Fear 20+  Army-)"<<endl;
      cout<<"2.Sent The Army To Hunt The Dragon(Fear-  Army20- )"<<endl;
      cout<<"3.Talk To The Dragon..(Fear30+  Army-)"<<endl;
      cin>>Dragonchoice;

      if(Dragonchoice==1){
        fear+=20;
       CurrentStats();
          cout<<"....................................."<<endl;
          cout<<"You Have Reached Near The Dragon!.."<<endl;
            cout<<"....................................."<<endl;
            cout<<"CHOICE: "<<endl;
              cout<<"....................................."<<endl;
              cout<<"1.Wait For The Weak Point(Fear10+  Army-)"<<endl;
              cout<<"2.Kill The Dragon Using Your Sword(Fear20+ Army-)"<<endl;
                cin>>DragonFight;
                if(DragonFight==1){
                    fear+=10;
                      cout<<"....................................."<<endl;
                      cout<<"You Hit At The Right Point"<<endl;
                      CurrentStats();
                        cout<<"....................................."<<endl;
                        cout<<"People Are Amazed Of Your Talent as well as scared"<<endl;
                          cout<<"....................................."<<endl;
                }else if(DragonFight==2){
                    fear+=20;
                      cout<<"....................................."<<endl;
                      cout<<"You Killed The Dragon"<<endl;
                      cout<<"....................................."<<endl;
                      cout<<"The Dragon Is Dead!"<<endl;
                      CurrentStats();
                      cout<<"....................................."<<endl;
                }
              
              }

                else if(Dragonchoice==2){
                  army-=20;
                 
                      cout<<"....................................."<<endl;
                             cout<<"Half Of The Army Returned To The Castle.."<<endl;
                             cout<<"....................................."<<endl;
                             cout<<"The Dragon Killed Them!"<<endl;
                             cout<<"But They Still Managed To Kill The Dragon"<<endl;
                             cout<<"....................................."<<endl;
                      
                }
                
                else if(Dragonchoice==3){
                  fear+=30;
                   cout<<"....................................."<<endl;
                   cout<<"You settled The Dragon!.."<<endl;
                   cout<<"The Dragon Now Left Your Village.."<<endl;
                   cout<<"People Are Amazed Of Your Talent as well as Scared!"<<endl;
                   CurrentStats();
                }
                else{
                    cout<<"WRONG INPUT"<<endl;

                }

}

void Thelast()
{

   cout<<"....................................."<<endl;
   cout<<"Day5"<<endl;
    cout<<"....................................."<<endl;
   cout<<"It Has Come To An End!"<<endl;
   cout<<"The Kingdom Is In Trouble!"<<endl;
   cout<<"People Started Protesting Against You"<<endl;
    cout<<"....................................."<<endl;
    cout<<"The Dark Lord Has Fallen"<<endl;
     cout<<"....................................."<<endl;
     CurrentStats();
      cout<<"....................................."<<endl;
      if(fear>=100){
        cout<<"Now The Dark Lord Is Remembered As The Most Feared Emperor Of The Nation!"<<endl;
      }
     else if(fear>=70){
      cout<<"One Of The Feared King by Other Nations and His people"<<endl;
       cout<<"....................................."<<endl;
     }
     else if(fear<=69 || fear>=50){
      cout<<"People Remembers You As A Decent King!"<<endl;
       cout<<"....................................."<<endl;

     }
     else if(fear<=49){
      cout<<"People Remember You As A Friendly King"<<endl;
       cout<<"....................................."<<endl;
     }
     else{
      cout<<"You Are Unknown"<<endl;
       cout<<"....................................."<<endl;
     }
     if(army>=70){
      cout<<"Your Strong and Trustworthy Army Re-Captured The Kingdom"<<endl;
       cout<<"....................................."<<endl;
       cout<<"THANK YOU FOR PLAYING KINGDOM OF DARKLORD"<<endl;
        cout<<"....................................."<<endl;

     }
     else if(army<=69 && army>=50){
      cout<<"Your Army Somehow Managed To Re-Capture Kingdom"<<endl;
        cout<<"....................................."<<endl;
       cout<<"THANK YOU FOR PLAYING KINGDOM OF DARKLORD"<<endl;
        cout<<"....................................."<<endl;
     }
     else{
      cout<<"You Lost The Kingdom"<<endl;
        cout<<"....................................."<<endl;
       cout<<"THANK YOU FOR PLAYING KINGDOM OF DARKLORD"<<endl;
        cout<<"....................................."<<endl;
}

}