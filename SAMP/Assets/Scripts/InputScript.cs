using UnityEngine;
using System.Collections;
using Jint;

public class InputScript : MonoBehaviour {

	private InterpreterInterfaceScript iis;
	private JintEngine e;

	// Use this for initialization
	void Start () {
	
		iis = gameObject.AddComponent<InterpreterInterfaceScript>();
		e = new JintEngine();

		e.SetFunction("log",
			new Jint.Delegates.Action<object>((a) => Debug.Log(a)));

		e.SetFunction("add",
			new Jint.Delegates.Func<double, double, double>((a,b) => a + b));

		e.SetFunction("swap",
			new Jint.Delegates.Action<int,int>((a,b) => swap(a,b)));

		e.SetFunction("size",
			new Jint.Delegates.Func<int, double>((a) => size(a)));
		
		e.SetFunction("test123",
			new Jint.Delegates.Action<int>((a) => test123(a)));

		e.SetFunction("mul",
			new Jint.Delegates.Action<object,object>((a,b) => mul(a,b)));

        // rndm test
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	public void exec(string command)
	{
		e.Run (command);
        //TODO: start moving here
	}
		
	private void swap(int a, int b)
	{
        //TODO: build up queue here. global queue in this. iis.swap returns q queue!? and we add queue entries to global queue !?
		iis.swap(a,b);
	}

	private double size(int a)
	{
		return iis.size (a);
	}

	private void mul(object a_, object b_)
	{
		int a = 0, b = 0;
		int.TryParse (a_.ToString(), out a);
		int.TryParse (b_.ToString(), out b);

		Debug.Log (a.ToString() +" * " + b.ToString() +" = "+(a*b).ToString());
	}

	private void test123(int a) 
	{
		Debug.Log (a);
	}
		
}
