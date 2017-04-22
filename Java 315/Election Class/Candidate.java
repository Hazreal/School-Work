public class Candidate {
	
	private String firstName;
	private String lastName;
	private char party;
	private boolean trustworthy;
	
	public Candidate(){
	}
	
	public Candidate(String firstName, String lastName, char party){
		this.firstName = firstName;
		this.lastName = lastName;
		this.party = party;
	}
	
	public String getFirstName(){
		return this.firstName;
	}
	
	public String getLastName(){
		return this.lastName;
	}
	
	public char getParty(){
		return this.party;
	}
	
	public void setParty(char party){
		this.party = party;
	}
	
	public boolean getTrustworthy(){
		return this.trustworthy;
	}
	
	public void setTrustworthy(boolean trustworthy){
		this.trustworthy = trustworthy;
	}

}