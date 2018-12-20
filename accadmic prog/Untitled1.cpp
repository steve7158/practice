//append
//add at begin
//add at after
//dlete 1st node
//delest specified node
// display
//length
//reverse list
//swap 2 nodes
//sort elements

struct node{
    int data;
    struct node* link;
    };struct node* root=NULL;
void append (){
    struct node* temp;
    temp=(stuct node*)malloc(sizeof(struct node));
    printf("enter the data");
    scanf("%d",&temp->data);
    temp->link=NULL;
    if(root==NULL){
        root-temp;
        }
    else{
        struct node* p;
        p=root;
        while(p->link != NULL){
            p=p->link;
            }
        p->link=temp;
        }
    }
