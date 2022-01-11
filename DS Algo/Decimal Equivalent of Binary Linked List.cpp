long long unsigned int decimalValue(Node *head)
{
    long long unsigned int res = 0; 

	// Traverse linked list 
	while (head != NULL) 
	{ 
		// Multiply result by 2 and add 
		// head's data 
		res = ((res *2)%1000000007 + head->data)%1000000007; 

		// Move next 
		head = head->next; 
	} 
	return res%1000000007; 
   // Your Code Here
}
