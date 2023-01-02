package pattern;

import pattern.worker.Worker;

public class Faculty extends Worker{
	
	@Override
	public void work() {
		System.out.println("My Work is to teach and help students to reach their goals. "
				+ "Als, I evaluate the student's projects and assignments.");
		w.work();
	}

	@Override
	public void nextWorker(Worker worker) {
		w = worker;
	}

}
