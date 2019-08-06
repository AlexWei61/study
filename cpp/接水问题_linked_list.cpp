#include <bits/stdc++.h>
using namespace std;
 
typedef struct node_s {
    int now_sec;
    struct node_s* next;
    struct node_s* prev;
} node_t;


node_t* head = NULL;

void insert(node_t* node) {
	//����next/prevָ��Ϊ�գ��Է���һ�����������ÿ� 
	node->next = NULL;
	node->prev = NULL;
	 
    if (head == NULL) {
        head = node;
        return; // head == NULL; and return NULL, means insert head = node;
    }
    
    
    node_t* cur = head;
    do {
        if (cur->now_sec >= node->now_sec) {
        	//���ݲ��� 
            cur->now_sec -= node->now_sec;
            
            if (cur->prev != NULL) { //���뵽���������ڵ��м� 
                cur = cur->prev; 
                
			    node->next = cur->next;
			    cur->next = node;
			    node->next->prev = node;
			    node->prev = cur;
            }
            else {//���뵽����ͷ�� 
                head = node;
                node->next = cur;
                cur->prev = node;
            }
            
            break;
        }
        if (cur->next == NULL) {//���뵽����β�� 
        	//���ݲ���
            node->now_sec -= cur->now_sec;
            
            cur->next = node;
            node->prev = cur;
            break; 
        }
        else {
        	//����Ѱ����һ���ڵ� 
            node->now_sec -= cur->now_sec;
            cur = cur->next;
        }
    } while (true);
}


int time(int m, int n, int w[]) {
    int have_water = 0;
    int total_sec = 0;
    int init_num = n >= m ? m : n; //�ʼ����ͬʱ��ʼ��ˮ������ 

	//���ŵ�һ��Ҫ��ˮ���� 
    for (int i = 0; i<init_num; i++) {
        node_t* node = new node_t;
        memset(node, 0, sizeof(node_t));
        node->now_sec = w[i];
        insert(node);
    }

    have_water = init_num;

    //ѭ����������ͷ���ڵ㣬ֱ������Ϊ�� 
    while (head != NULL) {
        node_t* timeout_node = head;
        total_sec += timeout_node->now_sec;
        
        //��ͷ���ڵ��������ɾ�� 
        if (head->next != NULL) {
            head->next->prev = NULL;
        }
        head = head->next;
 
        if (have_water<n) { //��λ����˻��ڵȴ���ˮ 
        	//������һ���˽�ˮ 
            timeout_node->now_sec = w[have_water];
            have_water++;
            timeout_node->next = NULL;
        	timeout_node->prev = NULL;
            insert(timeout_node); //���²������� 
        }
        else { //û���˽�ˮ�ˣ�ɾ����ˮ��ͷ 
            delete timeout_node;
        }
    }

    return total_sec;
}


int main() {
	int m = 0;                             //ˮ��ͷ����
	int n = 0;                             //��ˮ����
	cin >> n >> m;
	int * w = new int[n];                //��ˮˮ��list
	for (int i = 0;i<n;i++) {
		cin >> w[i];
	}
	
	cout << time(m, n, w) << endl;
	delete w;
    return 0;
}
