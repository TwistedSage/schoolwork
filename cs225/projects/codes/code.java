// Codes.java
// Codes.java finds a target word in a text, and displays it to the screen.
// Written by Carl Stevenson
// ***********************************************************************

// for Collections
import java.util.*;
// for File
 import java.io.*;

public class code{

	public static void main(String[] args)throws FileNotFoundException{

		// receive the file, convert to a text file to be processed
		// default to moby dick for now
		Scanner in = new Scanner(new FileInputStream(
		                                new File("mobydick.html")));
		in.useDelimiter("");

		// strip the garbage, convert to lower case & return a list to be used
		List<String> raw = strip(in);

		// get the word!
		Scanner sc = new Scanner(System.in);
		System.out.println();
		System.out.println("What word would you like to find in this text?");
		String theWord = sc.next();
		theWord = theWord.toLowerCase();

		// find the word!
		// start at 100 skip distance, go to 1000
		// returns an arraylist containing position of the first letter,
		// and the skip distance		
		List<Integer> key = wordFinder(raw, theWord);

		// output the '2Darray' with target word in uppercase
		theOutput(raw, key, theWord); 


	}

	public static List<String> strip(Scanner in){

		List<String> daList = new ArrayList<String>();
		String inStr = "";
		char inChar = 65;
		boolean toggle = true;
		// read in each character, omitting bad characters, and toggling
		// whether the characters are legal based on the '>' and '<'
		// characters
		while(in.hasNext()){


				inStr = in.next();
				inChar = inStr.charAt(0);
				if(toggle){
				if((((int)inChar) >63 && ((int)inChar) <91) || (((int)inChar) >96
					&& ((int)inChar) < 123))

					daList.add(Character.toString(inChar).toLowerCase());
				
			}				
			if(((int)inChar == 60 || (int)inChar == 62)&& toggle == true){
				toggle = false;
				inChar = 0;	
			}
			if(((int)inChar == 60 || (int)inChar == 62)&& toggle == false){
				toggle = true;
				inChar = 0;
			}
		}
		return daList;

	}
	
	public static List<Integer> wordFinder(List<String> raw, String theWord){

		int pos = 0;
		int wordPos = 0;
		int find = 0;
		int skip = 0;
		boolean found = false;
		String check = "";
		Iterator<String> itr = raw.iterator();
		boolean lalala = true;
		// start by reading for the first character		
		while(itr.hasNext()){
			wordPos = 0;
			check = itr.next();
			
			// if the character read in and the character we want match,
			// start matching, trying with skip distances from 50 to 10,000
			if(check.equals(String.valueOf(theWord.charAt(wordPos)))){
				for(skip=50; skip<=10000; skip++){ 
					wordPos = 1;				
					find = pos + skip;

					// used to make sure that we don't go past the end of
					// the text
					try{
						raw.get(find);
						theWord.charAt(wordPos);
					}catch(StringIndexOutOfBoundsException e) {
						break;
					}catch(IndexOutOfBoundsException e) {
						break;
					}
					
					// if the second character matches, take the distance
					// between it and the first character and see if
					// the correct letters line up. Break if you go past 
					// the end of the text or the character doesn't match.
					if(raw.get(find).equals(String.valueOf(
						theWord.charAt(wordPos)))){
						
						while(wordPos < theWord.length()){
							wordPos++;
							find = find + skip;
							try{
								raw.get(find);
								theWord.charAt(wordPos);
							}catch(StringIndexOutOfBoundsException e) {
								break;
							}catch(IndexOutOfBoundsException e) {
								break;
							}
							if(raw.get(find).equals(
								String.valueOf(theWord.charAt(wordPos)))&&
								wordPos == theWord.length()-1){

								found = true;
								break;
							}else if(raw.get(find)
									.equals(String.valueOf(
									theWord.charAt(wordPos))));
							else break;


						}

					} 
					
					if(found)break;				
				}

			}
			
			if(found)break;
				
			pos++;
		}
		// if we've gone through all that trouble for nothing, boolean found
		// will still be false. so, output a nice message to indicate that
		// word was, in fact, not found.
		if(!found){
			System.out.println("Word not found.");
			System.exit(0);
		}
		// return the starting position and the skip distance to be
		// used in theOutput
		List<Integer> key = new ArrayList<Integer>(2);
		key.add(pos);
		key.add(skip);
		return key;
		
	}

	public static void theOutput(List<String> raw, List<Integer> key, 	
									String theWord){

		int find = key.get(0);
		int skip = key.get(1);
		
		// take the five before the highlighted char and the five after
		// and print them, so it looks nice. 
		System.out.println();		
		for(int i=0; i<theWord.length();i++){

			for(int j=-5;j<6;j++){

				if(j==0)
					System.out.print(raw.get(find).toUpperCase());
				else
					System.out.print(raw.get(find+j));
			}
			System.out.println();
			find +=skip;
		}

	}

}
