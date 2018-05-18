// Linked List:
//Allocating memory for the node, using arrow notation to access the word, and linking 2 indepedent nodes

typedef struct node //creates linked list
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

//Making a new word (scanning)

while(fscanf(file, "%s", word)!=EOF)   //This will take the dictionary file, look for a string, and then put that string into a variable called word.
{
    ...
}

//It will go through this loop until the end of the dictionary file is reached

//Mallocing a node for each new word that is scanned

node *new_node = malloc(sizeof(node));
if (new_node == NULL)
{
    unload();
    return false;

}

//Make sure that the malloc has succeesed. If it runs out of memory, malloc will return NULL.

//If malloc is successful, copy the word into the node using the string copy function.
strcpy(new_node -> word, word);

//How to insert a node into the linked list
new_node -> next = head;
head = new_node;

//We're inserting new node into the very beginning, and that becomes the first value.
//That means the new node should point to whatever node was previously the first value in the list.
//New node next is pointing to the pointer the head is pointing to the pointer the head is pointing to.
//Head pointer can now be assigned to the new node.
//In this way, we have a linked list.

// Trie ex:
typedef struct node
{
    bool is_word;
    struct node *children[27];  //number of nuckets
}
node;

node*root;

// Unloading aka Freeing Linked List:
node * cursor = head;  //refers to the node pointer that points to the very first element in a linked list
while(cursor != NULL)
{
    node *temp = cursor;      //temp node pointer points to a cursor
    cursor = cursor -> next;  //Here the cursor is advanced, and then the temp pointer is freed
    free(temp);
}

