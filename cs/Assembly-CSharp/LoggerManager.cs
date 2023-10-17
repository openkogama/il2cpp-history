/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class LoggerManager
{
	// Fields
	private static LoggerManager instance;
	private Dictionary<string, Logger> loggers;
	private HashSet<string> interestingLoggers;
	private bool appendAll;
	private IAppender appender;

	// Properties
	public static LoggerManager Instance { get; }

	// Nested types
	public class Logger : ILogger
	{
		// Fields
		private LoggerManager manager;
		private readonly string name;

		// Constructors
		public Logger(LoggerManager manager, string name);

		// Methods
		public void Log(string message);
	}

	// Constructors
	private LoggerManager();

	// Methods
	public static void Destroy();
	private void ApplySettingsFromIniFile();
	public ILogger GetLogger(System.Type type);
	public ILogger GetLogger(string name);
	private void Log(string loggerName, string message);
}

