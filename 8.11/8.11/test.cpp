// 
//#include <stdio.h>
//#include <unistd.h>
//int main()
// {
// /*while(1)
// {
// printf("����һ�����̣��ҵ�pid��%d,�ҵĸ������ǣ�%d\n",getpid(),getppid(    ));
// sleep(1);
//  }
// */
//		  //fork��������ɹ����Ὣ��ǰ���̵�pid���������̣���0�����ӽ��̡����ʧ��    ���򴫷���-1��
//printf("begin,����һ�����̣��ҵ�pid��%d��ppid��%d\n", getpid(), getppid());
//	  pid_t id = fork();
//	   //������̷���дʫ��������Ϊ��������������д�룬������Ҫ����һ��id������    Ȼ��д�룬�����Ϊʲôid���Դ���������ֵ
//		   //fork֮���ӽ��̴��빲��
//		  if (id == 0)//�ӽ���
//		   {
//		     while (1)
//			     {
//			
//			     printf("�����ӽ��̣��ҵ�pid�ǣ�%d,ppid�ǣ�%d\n", getpid(), getppid());
//			     sleep(1);
//			    }
//		   }
//	   else if (id > 0)//������
//		 {
//		     while (1)
//			    {
//				 while (1)
//					      {
//					      printf("���Ǹ����̣��ҵ�pid�ǣ�%d,ppid�ǣ�%d\n", getpid(), getppid());
//					      sleep(1);
//					      }
//				 
//			 }
//			   else//����ʧ��
//				 {
//				 
//					   }
//			    return 0;
//			 
//		  }
