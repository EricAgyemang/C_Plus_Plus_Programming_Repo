package pattern.worker;

public abstract class Worker {

	protected Worker w = null; 
	public abstract void work();
	public abstract void nextWorker(Worker w);
}
