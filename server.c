//#pragma comment(lib, "Ws2_32.lib")
//#include <WinSock2.h>
//#include <WS2tcpip.h>
//#include <ctype.h> //toupperͷ�ļ�
//
//
//#define SERV_IP "127.0.0.1"
//#define SERV_PORT 6666 //�˿�ֵ���ܴ���65535
//#define BUF_SIZE 64
//
///*
//bind accept connect ��Ҫǿ��ת��
//*/
//
//int main(void)
//{
//    int sfd, cfd;
//    int len, i;
//    char buf[BUF_SIZE], clie_IP[BUF_SIZE];
//
//    struct sockaddr_in serv_addr, clie_addr;
//    socklen_t clie_addr_len;
//
//    /*����һ��socket ָ��IPv4Э���� TCPЭ��*/
//    sfd = socket(AF_INET, SOCK_STREAM, 0);
//
//    /*��ʼ��һ����ַ�ṹ man 7 ip �鿴��Ӧ��Ϣ*/
//    bzero(&serv_addr, sizeof(serv_addr));           //�������ṹ������
//    serv_addr.sin_family = AF_INET;                 //ѡ��Э����ΪIPv4
//    serv_addr.sin_addr.s_addr = htonl(INADDR_ANY);  //������������IP��ַ
//    serv_addr.sin_port = htons(SERV_PORT);          //�󶨶˿ں�    
//
//    /*�󶨷�������ַ�ṹ*/
//    bind(sfd, (struct sockaddr*) & serv_addr, sizeof(serv_addr));
//
//    /*�趨��������,ע��˴�������*/
//    listen(sfd, 64);                                //ͬһʱ������������������������������
//
//    printf("wait for client connect ...\n");
//
//    /*��ȡ�ͻ��˵�ַ�ṹ��С*/
//    clie_addr_len = sizeof(clie_addr_len);
//    /*����1��sfd; ��2��������, ��3���봫�����, ȫ����client�˵Ĳ���*/
//    cfd = accept(sfd, (struct sockaddr*) & clie_addr, &clie_addr_len);           /*�����ͻ�������, ������*/
//
//    printf("client IP:%s\tport:%d\n",
//        inet_ntop(AF_INET, &clie_addr.sin_addr.s_addr, clie_IP, sizeof(clie_IP)),
//        ntohs(clie_addr.sin_port));
//
//    while (1) {
//        /*��ȡ�ͻ��˷�������*/
//        len = read(cfd, buf, sizeof(buf));
//        write(STDOUT_FILENO, buf, len);
//        //write(STD_OUTPUT_HANDLE, buf, len);
//        /*����ͻ�������*/
//        for (i = 0; i < len; i++)
//            buf[i] = toupper(buf[i]);
//
//        /*���������ݻ�д���ͻ���*/
//        write(cfd, buf, len);
//    }
//
//    /*�ر�����*/
//    close(sfd);
//    close(cfd);
//
//	return 0;
//}
//
