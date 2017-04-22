public class ElectionTest {
	public static void main(String[] args){
		
		Election createElection = new Election();
		
		Candidate cand1 = new Candidate("Bernie", "Sanders", 'D');
		Candidate cand2 = new Candidate("Hillary", "Clinton", 'D');
		Candidate cand3 = new Candidate("Martin", "O'Malley", 'D');
		
		Candidate cand4 = new Candidate("Rand", "Paul", 'R');
		Candidate cand5 = new Candidate("Jeb", "Bush", 'R');
		Candidate cand6 = new Candidate("Donald", "Trump", 'R');
		
		createElection.add(cand1);
		createElection.add(cand2);
		createElection.add(cand3);
		createElection.add(cand4);
		createElection.add(cand5);
		createElection.add(cand6);
		
		createElection.display();
		
	}
}