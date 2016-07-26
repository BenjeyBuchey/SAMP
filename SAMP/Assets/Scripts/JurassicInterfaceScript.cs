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
		swapDelegate del = new swapDelegate(swap123);

		engine.SetGlobalFunction("swap", del);
		//Debug.Log(engine.Evaluate<int>("swap(5, 6)"));
		engine.Execute(value);
	}

	public void swap123(int a, int b)
	{
		iis.swap(a,b);
	}

	delegate void swapDelegate(int a, int b);
		
}
