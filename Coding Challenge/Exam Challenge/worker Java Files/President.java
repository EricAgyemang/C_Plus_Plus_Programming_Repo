package pattern;

import pattern.worker.Worker;

public class President extends Worker{
	
	@Override
	public void work() {
		System.out.println("I am proud of my students and university. "
				+ "I am happy to bestow them their degrees and wish them luck.");
	}

	@Override
	public void nextWorker(Worker worker) {
		w = worker;
	}

}
