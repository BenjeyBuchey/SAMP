using UnityEngine;
using System.Collections;
using Jurassic;
using Jurassic.Library;

public class JurassicTestScript : ObjectInstance {

	public JurassicTestScript(ScriptEngine engine)
		: base(engine)
	{
		this.PopulateFunctions();
	}

	[JSFunction(Name = "test")]
	public static void test(int a, int b)
	{
		Debug.Log ("HALLIHALLO");
		Debug.Log (a +" - " +b);

	}
}
