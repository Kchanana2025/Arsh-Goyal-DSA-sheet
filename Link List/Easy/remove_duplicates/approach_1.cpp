// O(n):time
// O(1):space
class Solution
{
public:
  ListNode *deleteDuplicates(ListNode *head)
  {
    if (head == NULL || head->next == NULL)
      // in cases of 0 nodes or 1 node there
      // is no point of removing duplicates
      // hm aise test cases lgate hain taki segmentation fault na aaye
      // becauseNULL-> will cause segmentation fault
      return head;

    int flag = 0;
    ListNode *temp = head->next;
    ListNode *previous = head;
    while (temp != NULL)
    {
      if (previous->val == temp->val)
      {
        ListNode *a = temp;
        previous->next = temp->next;
        temp = temp->next;
        delete a;
      }
      else
      {
        previous = temp;
        temp = temp->next;
      }
    }

    return head; // hmara head badal nai rha bss node*  return type hai bss isiliye return kr rhe
  }
};