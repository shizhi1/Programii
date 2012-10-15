import java.util.*;
import java.util.Random;
public class AirPlane {
	//public void printSeats() {
		//printing seats
public void printSeats() {
		//printing seats
		int[][] seats = new int[6][27];
			for(int r=0;r<=26;r++){

				for(int c=0;c<=5;c++){
					System.out.print(seats[c][r]+" ");
					if(c==2){
						System.out.print("       ");
					}
				}
				System.out.println(" ");
			}

	}
	
	public void add(int rvalue) {
		for(int a=0;a<27;a++) {
		for(int b=0;b<6;b++) {		
			if(rvalue==1 && seats[colon][row] == 0){
					seats[colon][row]=1;
				}
				if(rvalue==2 && seats[colon][row]==0 && seats[colon+1][row]==0){
					seats[colon][row]=1;
					seats[colon+1][row]=1;
				}
				if(rvalue==3 && seats[colon][row]==0 && seats[colon+1][row]==0 && seats[colon+2][row]){
					seats[colon][row]=1;
                                        seats[colon+1][row]=1;
					seats[colon+2][row]=1;
				}
			}
		}
	}
		
	
	public static void main(String[] args){
		AirPlane plane = new AirPlane();
		plane.printSeats();
		//printSeats();
		//generating groups
		int sum = 0;
		for(int i=0;i<100;i++){
			int  rvalue = new Random().nextInt(3) +1;
			sum += rvalue; 
		//	System.out.println(rvalue);
			if(sum > 162){
				sum -= rvalue;
			}
			if(sum == 162){
				//System.out.println(i);
				break;
			}
		}
		System.out.println(sum);
	}
}

