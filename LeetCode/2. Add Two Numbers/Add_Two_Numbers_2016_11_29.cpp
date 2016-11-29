/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
	int carry = 0;
	ListNode* l = new ListNode(0); ListNode* ptr = l;
	while(true) {
		if (l1->next != NULL) {
			carry += l1->val;
			l1 = l1->next;
		}
		if (l2->next != NULL) {
			carry += l2->val;
			l2 = l2->next;
		}
		l->val = carry % 10; ptr->val = carry % 10;
		carry = carry / 10;
		if (l1 != NULL || l2 != NULL || carry != 0) {
			ptr = (ptr->next = new ListNode(0));
		}
		else {
			break;
		}
	}
	return l;
}