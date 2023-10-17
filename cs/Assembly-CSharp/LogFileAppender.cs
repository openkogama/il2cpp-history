/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.IO;
using System.Runtime.CompilerServices;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class LogFileAppender : IAppender
{
	// Fields
	private FileStream fs;
	private StreamWriter writer;

	// Constructors
	public LogFileAppender(string filename);

	// Methods
	public void Log(string loggerName, string message);
	~LogFileAppender();
}

