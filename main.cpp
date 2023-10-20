#include<bits/stdc++.h>
using namespace std;
const int N=1000;
int a_t[N],b_t[N],p_t[N];
void fcfs(int n){
  int r_t[n],tat[n],w_t[n],ct=0,min_index=-1,time=0,f_t[n],sum_tat=0,sum_wt=0;
  for(int i=0;i<n;i++) r_t[i]=b_t[i];
  while(ct!=n){
        min_index=-1;
        int mn=-1;
        time++;

        for(int i=0;i<n;i++){
            if(r_t[i]>0&&time>=a_t[i]){
                if(min_index==-1){
                    min_index=i;
                    mn=a_t[i];
                }
                else if(a_t[i]<mn){
                    min_index=i;
                    mn=a_t[i];
                }
            }
        }
        if(min_index!=-1){
            r_t[min_index]=r_t[min_index]-1;
            if(r_t[min_index]==0){
                ct++;
                f_t[min_index]=time;
            }

            cout<<"|P"<<min_index<<"| ";
        }
        else{
            cout<<"|_| ";
        }
        //cout<<ct<<endl;
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        tat[i]=f_t[i]-a_t[i];
        sum_tat+=tat[i];
        w_t[i]=tat[i]-b_t[i];
        sum_wt+=w_t[i];
    }
    float avg_tat=sum_tat/n;
    float avg_wt=sum_wt/n;
    cout<<"The average Turn Around time is: "<<avg_tat<<endl;
    cout<<"The average Waiting time is: "<<avg_wt<<endl;

}
void sjf(int n){
  int r_t[n],tat[n],w_t[n],ct=0,min_index=-1,time=0,f_t[n],sum_tat=0,sum_wt=0;
  for(int i=0;i<n;i++) r_t[i]=b_t[i];
     while(ct!=n){
        min_index=-1;
        int mn=-1;
        for(int i=0;i<n;i++){
            if(r_t[i]>0&&time>=a_t[i]){
                if(min_index==-1){
                    min_index=i;
                    mn=r_t[i];
                }
                else if(r_t[i]<mn){
                    min_index=i;
                    mn=r_t[i];
                }
            }
        }
        if(min_index!=-1){
            while(r_t[min_index]>0){
            r_t[min_index]=r_t[min_index]-1;
            time++;
             cout<<"|P"<<min_index<<"| ";
            }
            r_t[min_index]=0;
                ct++;
                f_t[min_index]=time;

        }
        else{
            time++;
            cout<<"|_| ";
        }
    }
    for(int i=0;i<n;i++){
        tat[i]=f_t[i]-a_t[i];
        sum_tat+=tat[i];
        w_t[i]=tat[i]-b_t[i];
        sum_wt+=w_t[i];
    }
    float avg_tat=sum_tat/n;
    float avg_wt=sum_wt/n;
    cout<<"The average Turn Around time is: "<<avg_tat<<endl;
    cout<<"The average Waiting time is: "<<avg_wt<<endl;

}
void srtf(int n){
int r_t[n],tat[n],w_t[n],ct=0,min_index=-1,time=0,f_t[n],sum_tat=0,sum_wt=0;
for(int i=0;i<n;i++) r_t[i]=b_t[i];
while(ct!=n){
        min_index=-1;
        int mn=-1;
        for(int i=0;i<n;i++){
            if(r_t[i]>0&&time>=a_t[i]){
                if(min_index==-1){
                    min_index=i;
                    mn=r_t[i];
                }
                else if(r_t[i]<mn){
                    min_index=i;
                    mn=r_t[i];
                }
            }
        }
        if(min_index!=-1){
            time++;
            cout<<"|P"<<min_index<<"| ";
            r_t[min_index]=r_t[min_index]-1;

            if(r_t[min_index]==0){
            ct++;
            f_t[min_index]=time;
            }


        }
        else{
            time++;
            cout<<"|_| ";
        }
    }
    for(int i=0;i<n;i++){
        tat[i]=f_t[i]-a_t[i];
        sum_tat+=tat[i];
        w_t[i]=tat[i]-b_t[i];
        sum_wt+=w_t[i];
    }
    float avg_tat=sum_tat/n;
    float avg_wt=sum_wt/n;
    cout<<"The average Turn Around time is: "<<avg_tat<<endl;
    cout<<"The average Waiting time is: "<<avg_wt<<endl;
}
void lrtf(int n){
int r_t[n],tat[n],w_t[n],ct=0,min_index=-1,time=0,f_t[n],sum_tat=0,sum_wt=0;
for(int i=0;i<n;i++) r_t[i]=b_t[i];
while(ct!=n){
        min_index=-1;
        int mn=-1;
        for(int i=0;i<n;i++){
            if(r_t[i]>0&&time>=a_t[i]){
                if(min_index==-1){
                    min_index=i;
                    mn=r_t[i];
                }
                else if(r_t[i]>mn){
                    min_index=i;
                    mn=r_t[i];
                }
            }
        }
        if(min_index!=-1){
            time++;
            cout<<"|P"<<min_index<<"| ";
            r_t[min_index]=r_t[min_index]-1;

            if(r_t[min_index]==0){
            ct++;
            f_t[min_index]=time;
            }


        }
        else{
            time++;
            cout<<"|_| ";
        }
    }
    for(int i=0;i<n;i++){
        tat[i]=f_t[i]-a_t[i];
        sum_tat+=tat[i];
        w_t[i]=tat[i]-b_t[i];
        sum_wt+=w_t[i];
    }
    float avg_tat=sum_tat/n;
    float avg_wt=sum_wt/n;
    cout<<"The average Turn Around time is: "<<avg_tat<<endl;
    cout<<"The average Waiting time is: "<<avg_wt<<endl;

}
void rr(int n){
    cout << "Enter time quantum: ";
    int tq;
    cin >> tq;

    vector<vector<int > > v(n, vector<int > (3));

    for(int i = 0; i < n; i++)
    {
        v[i][0] = a_t[i];
        v[i][1] = b_t[i];
        v[i][2] = i + 1;
    }
    sort(v.begin(), v.end());
    int t = 0, ind = 0;
    queue<vector<int > > q;
    vector<int > ans;
    vector<pair<int, int > > tc;

    while(!q.empty() || ind < n)
    {
        while(ind <n && v[ind][0] == t)
        {
            q.push(v[ind]);
            ind++;
        }
        if(q.empty())
        {
            ans.push_back(-1);
            t++;
        }
        else
        {
            // t++;
            vector<int > temp = q.front();
            q.pop();
            for(int i = 0; i < tq; i++)
            {
                if(temp[1] == 0)
                {
                    break;
                }
                temp[1]--;
                t++;
                ans.push_back(temp[2]);
                while(ind < n && v[ind][0] == t)
                {
                    q.push(v[ind]);
                    ind++;
                }

                if(temp[1] == 0)
                {
                    break;
                }
                // ans.push_back(temp[2]);
            }

            if(temp[1] != 0)
            {
                q.push(temp);
            }
            else
            {
                tc.push_back(make_pair(temp[2], t));
            }
            // ans.push_back(temp[2]);
        }

    }
    sort(tc.begin(), tc.end());
    vector<int > TAT, WT,CT;
    double avg_TAT = 0, avg_WT = 0;
    for(int i = 0; i < tc.size(); i++)
    {
        CT.push_back(tc[i].second);
        TAT.push_back(tc[i].second - a_t[i]);
        avg_TAT += TAT[i];
        WT.push_back(TAT[i] - b_t[i]);
        avg_WT += WT[i];
    }
     cout << "Given time quantum = " << tq << endl << endl;
     cout << "Gantt Chart: ";
    for(int i = 0; i < ans.size(); i++)
    {
        if(ans[i] == -1)
        {
            cout << "__ | ";
        }
        else
        {
            cout << "P" << ans[i] << " | ";
        }

    }
    cout << endl;
    cout << endl;
    avg_WT = avg_WT /n;
    avg_TAT = avg_TAT /n;

    cout << "Average Turn around Time is: " << avg_TAT << " timeunit" << endl << endl;
    cout << "Average Waiting Time is: " << avg_WT << " timeunit" << endl << endl;

}
void pp(int n){
int r_t[n],tat[n],w_t[n],ct=0,min_index=-1,time=0,f_t[n],sum_tat=0,sum_wt=0;
for(int i=0;i<n;i++) r_t[i]=b_t[i];
   while(ct!=n){
        min_index=-1;
        int mn=-1;
        for(int i=0;i<n;i++){
            if(r_t[i]>0&&time>=a_t[i]){
                if(min_index==-1){
                    min_index=i;
                    mn=p_t[i];
                }
                else if(p_t[i]<mn){
                    min_index=i;
                    mn=p_t[i];
                }
            }
        }
        if(min_index!=-1){
            while(r_t[min_index]>0){
            r_t[min_index]=r_t[min_index]-1;
            time++;
            cout<<"|P"<<min_index<<"| ";
            }
            r_t[min_index]=0;
                ct++;
                f_t[min_index]=time;

        }
        else{
            time++;
            cout<<"|_| ";
        }
    }
    for(int i=0;i<n;i++){
        tat[i]=f_t[i]-a_t[i];
        sum_tat+=tat[i];
        w_t[i]=tat[i]-b_t[i];
        sum_wt+=w_t[i];
    }
    float avg_tat=sum_tat/n;
    float avg_wt=sum_wt/n;
    cout<<"The average Turn Around time is: "<<avg_tat<<endl;
    cout<<"The average Waiting time is: "<<avg_wt<<endl;
}
int main(){
    FILE *f;
    f=fopen("inno.txt","r");
    int n;
    fscanf(f,"%d",&n);
    //cout<<n<<endl;
    for(int i=0;i<n;i++){
      fscanf(f,"%d %d %d",&a_t[i],&b_t[i],&p_t[i]);
      // r_t[i]=b_t[i];
    }
   // for(int i=0;i<n;i++){
   //     printf("%d---%d\n",a_t[i],b_t[i]);
   // }
  bool check=true;
  while(check){
  cout<<"Enter choice:\n1>First come first serve\n2>Shortest Job First\n3>Shortest remaining time next\n4>Longest remaing time next\n5>Round Robin\n6>preemptive priority\n7>Exit"<<endl;
  int choice;
  cin>>choice;
  switch(choice){
    case 1:
      fcfs(n);
      break;
    case 2:
      sjf(n);
      break;
    case 3:
      srtf(n);
      break;
    case 4:
      lrtf(n);
      break;
    case 5:
      rr(n);
      break;
    case 6:
      pp(n);
      break;
    case 7:
     check=false;
     break;
  }
}
return 0;
}
