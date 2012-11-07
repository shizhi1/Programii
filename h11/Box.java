
package org.elsys.hw1;

	import java.util.LinkedList;
	import java.util.List;

public class Box {

	List<Ball> substance;
	private int capacity = 0;
	private int size = 7;
		public Box(){
			substance = new LinkedList<Ball>();
		}
			public void add(Ball blue){
				if(size <= capacity) {
					System.out.println("The box is full");
					
				}
				else{
					substance.add(blue);
					capacity++;
				}
			}
			public void remove(Ball blue){
				if(capacity <= 0) {
						System.out.println("The box is empty, you cant delete");
						
				}
				else {
					substance.remove(blue);
					capacity--;
				}
			}
			
				public void clear(){
					substance.clear();
					size = 0;
					capacity = 0;
					
				}
				public int size(){
					return size;
				}
				public int capacity(){
					return capacity;
				}
				public boolean contains(Ball blue){
					return substance.contains(blue);
				}
}
