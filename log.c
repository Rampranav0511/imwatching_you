#include<stdio.h>
#include<stdlib.h>

struct node{
	int key;
	int offset;
	struct node *next;
};

struct node *head;
struct node *table[1024];/* this is hash table , array of pointers ,
 because each element of the array holds the head pointer of a linked list*/

for(int i=0;i<size;i++){
	table[i]=NULL;
}
int hash(int random){
	return atoi(char*s[]);
}


void addline(char s[], FILE *fp){
	fseek(fp,0,SEEK_END);
	int f=s[0];
	
	fp=fopen("log.txt","a");
	fprintf(fp,"%s\n",s);
	int off=ftell(fp);

	table_add(f,off);
}
	/*not really useful since while is doing this for us anyway
	if(table[slot]==NULL){
		table[slot]=newnode;
		newnode->next=NULL;
	} */
void table_add(int key;int offset){
	int slot=hash(key);
	struct node *q=table[slot];
	while(q->next!=NULL){
		q=q->next;
		if(q->key==f){
		q->offset=off; // once the offset now is overwritten , now every search will point to the fresh updated record
		return;
			}
		}

	struct node *newnode=malloc(sizeof(struct node));
	newnode->key=f;
	newnode->offset=off;	
	newnode->next=table[slot];
	table[slot]=newnode;
	}

	/*updation of a record , since this is a append only file , the update line also just
	gets written as a additional text , so we check if any line has a key matching that of
	any node in a particular linked list and then we update the array with its present offset*/

	/*we could do this , see , anyways to append the newnode under the linked list , when any line has the same array slot
	 we also check if it has the same key as the line getting added , then we can instead just modify the offset of that particular element
	instead of having a whole new node which is literally the same except a small update to the previous record added.*/

	//we should basically check if there exists a key already , else, we can just add the new node

void get(int key){
	for(struct node *q=table[hash(key)];q!=NULL;q=q->next){
	if(q->key==key){
	FILE *fp=fopen("log.txt","r");
	char line[256];
	fseek(fp,e->offset,SEEK_SET);
	fgets(line,sizeof(line),fp);
	fclose(fp);
	printf("%s",line);
	return;	
	}
	printf("not found\n");
}



