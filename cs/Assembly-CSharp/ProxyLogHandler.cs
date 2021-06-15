/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class ProxyLogHandler : ILogHandler
{
	// Fields
	private ILogHandler defaultLogHandler;
	[CompilerGenerated]
	[DebuggerBrowsable]
	private EventHandler<LogFormatData> OnLogReceived;
	public LogType filterLogTypeConsoleWrite;

	// Events
	public event EventHandler<LogFormatData> OnLogReceived {
		add;
		remove;
	}

	// Nested types
	public class LogFormatData : EventArgs
	{
		// Fields
		public LogType LogType;
		public UnityEngine.Object context;
		public string format;
		public object[] args;

		// Properties
		public string Message { get; }

		// Constructors
		public LogFormatData(LogType logType, UnityEngine.Object context, string format, params object[] args);
	}

	// Constructors
	public ProxyLogHandler();

	// Methods
	private bool isAllowed(LogType logType);
	public void Disable();
	public void LogFormat(LogType logType, UnityEngine.Object context, string format, params object[] args);
	public void LogException(Exception exception, UnityEngine.Object context);
}

