#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int hash(string s)
{
	int n=0;
	int ans=0;
	while(n!=s.length())
	{
		int val=(int)(s[n]);
		ans=ans*10+val;
		n++;
	}
	return ans;
}
string gethash(int no)
{
	string ans="";
	char a[100];
	int i=0;
	while(no!=0)
	{
		int n=no%10;
		no/=10;
		char val=(char)(n);
		a[i]=val;
		i++;
	}
	ans=ans+a;
	return ans;
}

struct data
{
	int oid;
	float value;
	string ownerName;
	int hash;
	
};

int presentnodeid;
struct node
{
	time_t currenttimestamp;
	data *d;
	int nodeno;
	string Nodeid;
	node* rNodeid;
	node* crNodeid ;
	node* genNodeid;
	string hash;
};
node *root=NULL;
void insert()
{
	node*p=new node();
	float val;
	int oid;
	string oname;
	cout<<"Enter the value(floating point int)";
	cin>>val;
	cout<<"Enter your name";
	cin>>oname;
	cout<<"Enter your owner id";
	cin>>oid;
	p->currenttimestamp=time(0);	

	data*d=new data();
	d->value=val;
	d->oid=oid;
	d->ownerName=oname;
	p->d=d;
	p->nodeno=presentnodeid;
	presentnodeid++;
	p->Nodeid=gethash(p->nodeno);
	if(root==NULL)
	{
		root=p;
		p->rNodeid=NULL;;
	}
	else
	{
		node *search=root;
	
		while(search->crNodeid!=NULL)
		{
			search=search->crNodeid;
		}
		search->crNodeid=p;
	}
	p->genNodeid=root;
	cout<<"Your Node Has been created\n\n";
//	p->
}
int verify()
{
	
}
int main()
{
	cout<<hash("gurp");
	int br=0;
	while(br==0)
	{
		cout<<"Enter your choice\n";
		cout<<"1)Insert Node\n";
		cout<<"2)Stop the program"<<endl;
	//	cout<<"3)Verify Your ID";
		int ch;
		cin>>ch;
		switch(ch){
			case 1:	insert();
					break;
			case 2:br=1;
				break;
			case3:verify();
				break;
		}

		
		
	}
		
	return 0;
}
