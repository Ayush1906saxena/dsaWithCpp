class Solution{
public:
	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2){
		ListNode* dummyHead = new ListNode(0);
		ListNode* dummy = dummyHead;

		int carry = 0;

		while(l1 != nullptr || l2 != nullptr){
			int val1 = (l1 != nullptr) ? l1->val : 0;
			int val2 = (l2 != nullptr) ? l2->val : 0;

			int sum = val1 + val2 + carry;
			carry = sum/10;

			dummy->next = new ListNode(sum%10);
			dummy = dummy->next;

			if(l1 != nullptr)
				l1 = l1->next;
			if(l2 != nullptr)
				l2 = l2->next;
		}

		if(carry)
			dummy->next = new ListNode(carry);

		return dummyHead->next;
	}
};