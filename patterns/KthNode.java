import java.util.*;
public class KthNode {
    static class SLLnode{
        int dat;
        SLLnode next;

        SLLnode(int data1,SLLnode next1){
            this.dat= data1;
            this.next = next1;
        }
    }

    static SLLnode insert_at_end(int data, SLLnode head){
        SLLnode newnode = new SLLnode(data, null);
        if(head ==null){
            return newnode;
        } 
        SLLnode temp = head;
        while(temp.next!= null){
            temp = temp.next;
    }
    temp.next = newnode;
    return head;
}

    static SLLnode find_kth_element( SLLnode head, int k){
        SLLnode fast = head;
        SLLnode slow = head;
        
        for(int i =0; i<k; i++){
            fast = fast.next;
        }

        while(fast != null){
            slow = slow.next;
            fast = fast.next;
        }
        return slow;
    }

    public static void main(String[] args){
        SLLnode head = null;
        Scanner sc = new Scanner(System.in);

        while(true){
            int num = sc.nextInt();
            if(num ==-1){
                break;
            }
            head = insert_at_end(num, head);
        }
       int k = sc.nextInt();
       int val = find_kth_element( head, k);
       System.out.print(val);
       sc.close();

    }
}

