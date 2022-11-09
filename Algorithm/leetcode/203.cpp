#include<iostream>
#include<vector>
using namespace std;

#if 0
	leetcode 203: 移除链表元素
#endif
struct ListNode { //一般一个链表没有头节点
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};

ListNode* addNode(ListNode *head, int val); //头插入法，插入节点
ListNode* removeElements_1(ListNode *head, int val); //设置虚拟头节点
ListNode* removeElements_2(ListNode *head, int val); //直接操作原来的链表，不带有头节点

int main()
{
	int val;
	ListNode *head = NULL;
	//vector<int> nums = {1, 2, 3, 4, 5};
	vector<int> nums = {7, 7, 7, 7, 7};
	int size = nums.size();
	while(size){
		head = addNode(head, nums[size-1]);
		size--;
	}
	cout << "input the node you want to del:";
	cin >> val;
	head = removeElements_1(head, val);
	while(head) {
		cout << head->val << " ";
		head = head->next;
	}
	cout << endl;
	
	return 0;
}

ListNode* addNode(ListNode *head, int val)
{
	ListNode *nNode = new ListNode(val);
	nNode->next = head;
	return nNode;
}

#if 1
ListNode* removeElements_1(ListNode *head, int val)
{
	ListNode *vhnode = new ListNode(0);
	vhnode->next = head;
	ListNode *pa = vhnode;
	ListNode *pb = vhnode->next;
	while(pb) {
		if(pb->val == val) {
			pa->next = pb->next;
			delete pb;
			pb = pa->next;
		}
		else{
			pa = pb;
			pb = pb->next;
		}
	}
	head = vhnode->next;
	delete vhnode;
	return head;
}

#else
ListNode* removeElements_2(ListNode *head, int val)
{

}
#endif

