#ifndef __chengji_data_h__
#define __chengji_data_h__



//�Զ���ṹ�壺����༶
struct __chengji 
{    
	char xuehao[32];	//ѧ��
	char name[32];	//����
	char pingshi[32];	//ƽʱ��
	char kaoshi[32];	//���Է�
	char zonghe[32];	//�ۺϳɼ�
};

//�༶�����еĽڵ�
struct chengji_list_node
{
	struct __chengji * chengji;			//�ڵ����ݲ��֣��洢һ��ָ��༶��ָ��
	struct chengji_list_node * next;	//ָ����һ���ڵ�
};

//�༶����
struct chengji_list
{
	struct chengji_list_node * header,* tail;//ָ������ĵ�һ��Ԫ�غ����һ��Ԫ�ء�
};

#ifdef __chengji_data_c__
	#define null 0
	int read_chengji(struct chengji_list *list,char ke_bh[],char ban_bh[]);
	int write_chengji(struct chengji_list *list,char ke_bh[],char ban_bh[]);
	int sort_chengji_xh(struct chengji_list *list);
	int sort_chengji_zhcj(struct chengji_list *list);
	int disp_chengji_list(struct chengji_list *list);
	struct __chengji * get_chengji_by_bh(struct chengji_list *list,char *xuehao);
	struct __chengji * get_chengji_by_xh(struct chengji_list *list,char *xuehao);
	void disp_chengji(struct __chengji * p);
	struct chengji_list * add_chengji_to_list(struct chengji_list *list,struct __chengji *chengji);
	int empty_chengji_list(struct chengji_list *list);
	char *get_ke_ban_filename(char *filename,char *ke_bh,char *ban_bh);
#else
	extern int read_chengji(struct chengji_list *list,char ke_bh[],char ban_bh[]);
	extern int write_chengji(struct chengji_list *list,char ke_bh[],char ban_bh[]);
	extern int sort_chengji_bh(struct chengji_list *list);
	extern int sort_chengji_zy(struct chengji_list *list);
	extern int disp_chengji_list(struct chengji_list *list);
	extern struct __chengji * get_ban_by_bh(struct chengji_list *list,char *bianhao);
	extern struct __chengji * get_chengji_by_xh(struct chengji_list *list,char *xuehao);
	extern void disp_chengji(struct __chengji * p);
	extern struct chengji_list * add_chengji_to_list(struct chengji_list *list,struct __chengji *banji);
	extern int empty_chengji_list(struct chengji_list *list);
	extern char *get_ke_ban_filename(char *filename,char *ke_bh,char *ban_bh);
#endif

#endif
