// Linked List:
//Allocating memory for the node, using arrow notation to access the word, and linking 2 indepedent nodes

typedef struct node
{
    char word[Length + 1];
    struct node *next;

}

     node;

     node * node1 - malloc(size of node));  //allocating memory for node 1
     node * node1 - malloc(size of node));  //allocating memory for node 1
     strcopy(node1 -> word, "Hello"); //arrow notation used to access the word variable
     strcopy(node1 -> word, "World");
     node 1 -> next = node2;  //Accesses the next variable for node 1 and points that to node 2


//hash table notes

typedef struct node         //define struct for a node
{
    char word[LENGTH + 1];
    struct node * next;
}

node;

node *hashtable[50];  //the #50 stands for the number of "buckets" the hashtable will contain

//Making a new word

while(fscanf(file, "%s", word)!=EOF)   //This will take the dictionary file, look for a string, and then put that string into a variable called word.
{
    ...
}

//It will go through this loop until the end of the dictionary file is reached