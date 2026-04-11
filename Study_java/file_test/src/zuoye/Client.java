package chap4.example.hotel;

import java.util.Scanner;

public class Client {
	public static void main(String[] args){
		Hotel hotel = new Hotel("MiniHilton");
				
		System.out.println("��ӭ����ס"+hotel.getHotelName()+"�Ƶ�");

		Scanner scn = new Scanner(System.in);
		System.out.println("����������ָ�");
		String command=scn.next();  //��ȡ��һ������Ϊָ��

		String roomNo;
		while(!command.equalsIgnoreCase("quit")){ //����"quit"�˳�
			if (command.equalsIgnoreCase("search")){ //search����
				String para = scn.next();
				if(para.equals("all")){
					hotel.searchAll();
				}else{					
					hotel.searchByNo(para);
				}
			}else if (command.equalsIgnoreCase("in")){
				roomNo=scn.next();  	   //�����
				String name=scn.next();     //�ͻ�����					
				int res = hotel.checkin(roomNo, name);    //������ס����
				if(res==1){
					System.out.println(name+"�ɹ���ס��");
				}else if (res==2){
					System.out.println("�÷������п��ˣ�");
				}else if(res==3){
					System.out.println("������������");
				}

				
			}else if (command.equalsIgnoreCase("out")){
				roomNo=scn.next();     //�����
				int res =hotel.checkout(roomNo);     //�����˷�����
				
				if (res==1){
					System.out.println(roomNo+"�ɹ��˷���");
				}else if (res==2){
					System.out.println("�÷���û�п��ˣ�");    
				}else if (res==3){
					System.out.println("������������");
				}
			}else{
				System.out.println("û�и�ָ��");
			}
			
			System.out.println("����������ָ�");
			command=scn.next();  //��һ����
		}//while
		
		System.out.println("��ӭ���´ι���"+hotel.getHotelName());
		System.exit(0);
	}
}