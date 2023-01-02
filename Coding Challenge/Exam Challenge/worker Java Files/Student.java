package pattern;

import pattern.worker.Worker;

public class Student extends Worker{

	@Override
	public void work() {
		System.out.println("My Work is to get projects and assignment done on time ");
		w.work();
	}

	@Override
	public void nextWorker(Worker worker) {
		w = worker;
	}


}
