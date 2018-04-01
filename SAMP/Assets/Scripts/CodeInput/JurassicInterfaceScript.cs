using UnityEngine;
using System.Collections;

public class JurassicInterfaceScript : MonoBehaviour {

	private InterpreterInterfaceScript iis;

	void Start()
	{
		iis = gameObject.AddComponent<InterpreterInterfaceScript>();
	}

	public void handleCode(string value)
	{
		Debug.Log (value);
		var engine = new Jurassic.ScriptEngine();

		engine.SetGlobalValue("test_string", "BLUB BLUB");
		engine.SetGlobalValue("test123", new JurassicTestScript(engine));
//		engine.Execute("test123.test(test_string)");

		//engine.Execute("a = 5; for(i = 0;i < 10; i++) a++;");
		//engine.Evaluate("for(i = 0;i < 10; i++) {test123.test(test_string)}");
		//engine.Evaluate(value);
		swapDelegate del_swap = new swapDelegate(swap123);
		sizeDelegate del_size = new sizeDelegate(size123);

		engine.SetGlobalFunction("swap", del_swap);
		engine.SetGlobalFunction("size", del_size);
		//Debug.Log(engine.Evaluate<int>("swap(5, 6)"));
		engine.Execute(value);
	}

	public void swap123(int a, int b)
	{
		iis.swap(a,b);
	}

	public double size123(int x)
	{
		return iis.size (x);
	}

	delegate void swapDelegate(int a, int b);
	delegate double sizeDelegate(int x);
}
