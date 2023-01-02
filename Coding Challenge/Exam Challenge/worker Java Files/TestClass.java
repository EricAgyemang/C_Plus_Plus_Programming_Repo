package pattern;

import pattern.worker.Worker;

public class TestClass {

	public static void main(String args[]) {
		
		Worker johnDoe = new Student();
		Worker rishi = new Faculty();
		Worker president = new President();
		
		johnDoe.nextWorker(rishi);
		rishi.nextWorker(president);
		
		johnDoe.work();
		
	}
}