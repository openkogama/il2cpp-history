/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public static class JSBridge
{
	// Methods
	private static void DoKGMEval(string str);
	public static void ExternalEval(string script);
	public static void ExternalCall(string functionName, params object[] args);
	private static string BuildInvocationForArguments(string functionName, params object[] args);
	private static string ObjectToJSString(object o);
}

