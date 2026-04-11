package chap4.example.hotel;

//�Ƶ��࣬�������з���
public class Hotel {
	
	private static final int HEIGHT=3;  //�Ƶ깲3��
	private static final int WIDTH=10;   //ÿ��10������
	
	private String hotelName; 
	private Room[][] rooms;    //�����ά���飺¥�� �� ÿ�㷿��
	
	/**
	 * ���췽������ʼ���Ƶ����з���
	 */
	public Hotel( String hotelName){
		this.hotelName =  hotelName;
		
		//�����������
		rooms= new Room[HEIGHT][WIDTH];
		
		for(int i=0; i<rooms.length; i++){
			for(int j=0; j<rooms[i].length; j++){
				//��ʼ��ÿһ��Room����¥��+���ţ��Զ��� 0
				rooms[i][j]=new Room();
				rooms[i][j].setId(i+1, j+1);				
			}
		}		
	}
	// ��ȡ�Ƶ�����
	public String getHotelName() {
		return hotelName;
	}
                // ���þƵ�����
	public void setHotelName(String hotelName) {
		this.hotelName = hotelName;
	}

	public void searchAll(){
		
		for(int i=0; i<rooms.length; i++){
			//�����ǰ�����з����
			for(int j=0; j<rooms[i].length; j++){
				System.out.print(rooms[i][j].getId()+"\t");
			}
			System.out.println();
			
			for(int j=0; j<rooms[i].length; j++){
				System.out.print(rooms[i][j].getCustomerName()==null? "\t":rooms[i][j].getCustomerName()+"\t" );
			}
			System.out.println();
			
			for(int j=1; j<=8*WIDTH; j++)
				System.out.print("-");
			System.out.println();
		}
	}
	/**
	 * ������Ų�ѯ
	 * @param roomNo��4λ�����
	 * @return ���ҽ��
	 */
	public void searchByNo(String roomNo){
                                // ��У�鷿����Ƿ�Ϸ�
		if(testRoomNo(roomNo)){
			//���¥�㡢�����
			int _height=Integer.parseInt(roomNo.substring(0,2)); //��ȡǰ��λ  
			int _width=Integer.parseInt(roomNo.substring(2,4));   //��ȡ����λ
			// ��ʾ������Ϣ
			System.out.println(rooms[_height-1][_width-1].getCustomerName()==null ?"�÷���û�п���": roomNo+":"+rooms[_height-1][_width-1].getCustomerName());
		}else{
			System.out.println("û���������");
		}			
	}
	
	/***
	 * ��ס����
	 * @param roomNo�������
	 * @param name����������
	 * @return ��ס��Ϣ
                 * ����ֵ��1=�ɹ� 2=������ 3=����Ŵ���
	 */
	public int checkin(String roomNo, String name){
		if(testRoomNo(roomNo)){
			//�ֽⷿ���
			int height=Integer.parseInt(roomNo.substring(0,2)); //��ȡǰ��λ  
			int width=Integer.parseInt(roomNo.substring(2,4));   //��ȡ����λ
			
			if(rooms[height-1][width-1].in(name)){         //���÷������ס����
				return 1;	//�ɹ���ס
			}else{
				return 2;  //�÷������п�����ס
			}
		}else{
			return 3; //û���������
		}		
	}
	/**
	 * �˷�
	 * @param roomNo�������
	 * @return �˷���Ϣ
                 * ����ֵ��1=�ɹ� 2=���� 3=����Ŵ���
	 */
	public int checkout(String roomNo){
		if(testRoomNo(roomNo)){
			//�ֽⷿ���
			int height=Integer.parseInt(roomNo.substring(0,2)); //��ȡǰ��λ  
			int width=Integer.parseInt(roomNo.substring(2,4));   //��ȡ����λ
		                //���÷�����˷�����
			if(rooms[height-1][width-1].out()){
				return 1;   //�˷��ɹ� 
			}else {
				return 2;   //�÷���û����
			}
		}else{
			return 3; //û���������
		}
	}
	
	/***
	 * ��ⷿ����Ƿ�Ϸ�
	 * @param roomNo:�����
	 * @return true,����źϷ���false,����Ų��Ϸ�
	 */
	private boolean testRoomNo(String roomNo){		
		int height=Integer.parseInt(roomNo.substring(0,2)); //��ȡǰ��λ  
		int width=Integer.parseInt(roomNo.substring(2,4));   //��ȡ����λ
		//¥�� 1~3������ 1~10
		if (height<1 || height>HEIGHT || width<1 || width > WIDTH){
			return false;
		}else{
			return true;
		}
	}
}
