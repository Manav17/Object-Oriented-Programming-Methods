
#include<iostream>
    
    using namespace std;
    
    //definfing node
    
    struct node
    
    {
        
        struct node *prev;
        
        int info;
        
        struct node *next;
        
    };
    
    struct node *head=NULL;
    
    struct node *tail=NULL;
    
    //function to display contents
    
    void display()
    
    {
        
        struct node *temp=head;
        
        if(temp==NULL)
            
            cout<<"list is empty";
        
        else
            
        {cout<<"doubly linked list is: ";
            
            if(temp!=NULL)
                
            {if(temp->next!=NULL)
                
            {do
                
            {
                
                cout<<temp->info<<" ";
                
                temp=temp->next;
                
            }while(temp!=tail);}
                
                cout<<tail->info;}}
        
        return;
        
    }
    
    //function to search for a value
    
    int search(int d)
    
    {
        
        int cnt=1;
        
        node *temp = head;
        
        while(head&&head->info!=d)
            
        {
            
            head=head->next;
            
            cnt++;
            
        }
        
        return(cnt);
        
    }
    
    //function to insert at the start
    
    void insstart()
    
    {
        
        int item;
        
        cout<<"enter value to be inserted:";
        
        cin>>item;
        
        struct node *ptr=new node;
        
        ptr->info=item;
        
        if(head==NULL)
            
        {
            
            ptr->prev=NULL;
            
            ptr->next=NULL;
            
            head=ptr;
            
            tail=ptr;
            
        }
        
        else if(head!=NULL)
            
        {
            
            ptr->prev=NULL;
            
            ptr->next=head;
            
            head->prev=ptr;
            
            head=ptr;
            
        }
        
        display();
        
        return;
        
    }
    
    //function to insert at the end
    
    void insend()
    
    {
        
        int item;
        
        cout<<"enter value to be inserted:";
        
        cin>>item;
        
        struct node *ptr=new node;
        
        ptr->info=item;
        
        if(head==NULL)
            
        {
            
            ptr->prev=NULL;
            
            ptr->next=NULL;
            
            head=ptr;
            
            tail=ptr;
            
        }
        
        else if(head!=NULL)
            
        {
            
            ptr->next=NULL;
            
            ptr->prev=tail;
            
            tail->next=ptr;
            
            tail=ptr;
            
        }
        
        display();
        
        return;
        
    }
    
    //function to delete at the start
    
    void delstart()
    
    {
        
        struct node *ptr;
        
        if(head==NULL)
            
        {
            
            cout<<"list is empty";
            
        }
        
        else if(head->next==NULL)
            
        {
            
            ptr=head;
            
            cout<<"deleted item is:"<<" "<<ptr->info<<endl;
            
            head=NULL;
            
            tail=NULL;
            
            delete(ptr);
            
        }
        
        else if(head->next!=NULL)
            
        {
            
            ptr=head;
            
            cout<<"deleted item is:"<<" "<<ptr->info<<endl;
            
            head=head->next;
            
            head->prev=NULL;
            
            delete(ptr);
            
        }
        
        display();
        
        return;
        
    }
    
    //function to delete at the end
    
    void delend()
    
    {
        
        struct node *ptr;
        
        if(head==NULL)
            
        {
            
            cout<<"list is empty";
            
        }
        
        else if(head->next==NULL)
            
        {
            
            ptr=head;
            
            cout<<"deleted item is:"<<" "<<ptr->info<<endl;
            
            head=NULL;
            
            tail=NULL;
            
            delete(ptr);
            
        }
        
        else if(head->next!=NULL)
            
        {
            
            ptr=tail;
            
            cout<<"deleted item is:"<<" "<<ptr->info<<endl;
            
            tail=tail->prev;
            
            tail->next=NULL;
            
            delete(ptr);
            
        }
        
        display();
        
        return;
        
    }
    
    int main()
    
    {
        
        int ch;
        
        do
            
        {
            
            cout<<endl<<"enter ur choice:"<<endl;
            
            cout<<"1. insertion at start"<<endl;
            
            cout<<"2. insertion at end"<<endl;
            
            cout<<"3. deletion at start"<<endl;
            
            cout<<"4. deletion at end"<<endl;
            
            cout<<"5. Search for an element"<<endl;
            
            cout<<"6. Display the list"<<endl;
            
            cout<<"7. Exit"<<endl;
            
            cin>>ch;
            
            if(ch==1)
                
                insstart();
            
            if(ch==2)
                
                insend();
            
            if(ch==3)
                
                delstart();
            
            if(ch==4)
                
                delend();
            
            if(ch==5)
                
            {
                
                cout<<"Enter the element to search : ";
                
                int n;
                
                cin>>n;
                
                cout<<"It exists at index : "<<search(n);
                
            }
            
            if(ch==6)
                
            {
                
                display();
                
            }
            
        }while(ch!=7);
        
        return 0;
        
    }

