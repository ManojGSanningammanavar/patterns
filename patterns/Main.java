import java.util.*;

public class Main{

    static class SLLnode{
        int data ;
        SLLnode next;
        SLLnode(int data1, SLLnode next1){
            this.data = data1;
            this.next = next1;
        }
    }

    public static SLLnode insert_at_end(int data, SLLnode head){
        SLLnode newnode = new SLLnode(data,null);
        if(head == null){
            return newnode;
        }
        SLLnode temp = head;
        while(temp.next != null){
            temp = temp.next;
        }
        temp.next = newnode;
        return head;
    }

    public static SLLnode find_middle(SLLnode head){
        if(head == null){
            return null;

        }
        SLLnode slow=head , fast = head;

        while(fast!=null && fast.next!= null){

            slow = slow.next;
            fast = fast.next.next;

        }
        return slow;
    }

    public static void main(String[] args){
        SLLnode head =  null;
        Scanner sc = new Scanner(System.in);
        while(true){
            int num = sc.nextInt();
            if(num == -1){
                break;
            }
            head = insert_at_end(num, head); 
        }
       SLLnode mid = find_middle(head);
        System.out.println(mid.data);

        sc.close();
    }

}