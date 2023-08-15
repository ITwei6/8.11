// 
//#include <stdio.h>
//#include <unistd.h>
//int main()
// {
// /*while(1)
// {
// printf("我是一个进程：我的pid是%d,我的父进程是：%d\n",getpid(),getppid(    ));
// sleep(1);
//  }
// */
//		  //fork如果创建成功，会将当前进程的pid传给父进程，将0传给子进程。如果失败    ，则传返回-1；
//printf("begin,我是一个进程，我的pid是%d，ppid是%d\n", getpid(), getppid());
//	  pid_t id = fork();
//	   //这个过程发生写诗拷贝，因为往父进程数据中写入，所以需要拷贝一份id变量，    然后写入，这就是为什么id可以存两个返回值
//		   //fork之后父子进程代码共享
//		  if (id == 0)//子进程
//		   {
//		     while (1)
//			     {
//			
//			     printf("我是子进程，我的pid是：%d,ppid是：%d\n", getpid(), getppid());
//			     sleep(1);
//			    }
//		   }
//	   else if (id > 0)//父进程
//		 {
//		     while (1)
//			    {
//				 while (1)
//					      {
//					      printf("我是父进程，我的pid是：%d,ppid是：%d\n", getpid(), getppid());
//					      sleep(1);
//					      }
//				 
//			 }
//			   else//创建失败
//				 {
//				 
//					   }
//			    return 0;
//			 
//		  }
