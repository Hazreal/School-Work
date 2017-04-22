public class Election {
	private Candidate[] candidates;
	//private java.util.date electionDate;
	
	Election(){
		this.candidates = new Candidate[0];
		//this.electionDate = electionDate;
	}

	public void add(Candidate value) {
			Candidate[] temp = new Candidate[candidates.length + 1];
			System.arraycopy(candidates, 0, temp, 0, candidates.length);
			candidates = temp;
			candidates[candidates.length - 1] = value;
	}
	
	public void display(){
		for(int i = 0; i < candidates.length; i++){
			System.out.printf("%s %s %c\n",candidates[i].getFirstName(), candidates[i].getLastName(), candidates[i].getParty());
		}	
	}
	
}