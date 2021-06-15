/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public static class TextCommand
{
	// Nested types
	private class Command
	{
		// Fields
		private string[] commandComponents;

		// Properties
		public string Name { get; }
		public int ArgCount { get; }

		// Constructors
		private Command(string[] commandComponents);

		// Methods
		public string Arg(int i);
		public static implicit operator Command(string commandLine);
	}

	// Methods
	public static void Resolve(string commandLine);
	private static void Command_AssetBundleCacheTest(Command command);
	private static void Command_Invalid(Command command);
	public static void NotifyUser(string msg);
}

