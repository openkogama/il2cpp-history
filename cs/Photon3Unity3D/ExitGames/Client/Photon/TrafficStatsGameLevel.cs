/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;

// Image 5: Photon3Unity3D.dll - Assembly: Photon3Unity3D, Version=4.1.2.19, Culture=neutral, PublicKeyToken=null

namespace ExitGames.Client.Photon
{
	public class TrafficStatsGameLevel
	{
		// Fields
		private int timeOfLastDispatchCall;
		private int timeOfLastSendCall;
		[CompilerGenerated]
		[DebuggerBrowsable(DebuggerBrowsableState.Never)]
		private int _OperationByteCount_k__BackingField;
		[CompilerGenerated]
		[DebuggerBrowsable(DebuggerBrowsableState.Never)]
		private int _OperationCount_k__BackingField;
		[CompilerGenerated]
		[DebuggerBrowsable(DebuggerBrowsableState.Never)]
		private int _ResultByteCount_k__BackingField;
		[CompilerGenerated]
		[DebuggerBrowsable(DebuggerBrowsableState.Never)]
		private int _ResultCount_k__BackingField;
		[CompilerGenerated]
		[DebuggerBrowsable(DebuggerBrowsableState.Never)]
		private int _EventByteCount_k__BackingField;
		[CompilerGenerated]
		[DebuggerBrowsable(DebuggerBrowsableState.Never)]
		private int _EventCount_k__BackingField;
		[CompilerGenerated]
		[DebuggerBrowsable(DebuggerBrowsableState.Never)]
		private int _LongestOpResponseCallback_k__BackingField;
		[CompilerGenerated]
		[DebuggerBrowsable(DebuggerBrowsableState.Never)]
		private byte _LongestOpResponseCallbackOpCode_k__BackingField;
		[CompilerGenerated]
		[DebuggerBrowsable(DebuggerBrowsableState.Never)]
		private int _LongestEventCallback_k__BackingField;
		[CompilerGenerated]
		[DebuggerBrowsable(DebuggerBrowsableState.Never)]
		private int _LongestMessageCallback_k__BackingField;
		[CompilerGenerated]
		[DebuggerBrowsable(DebuggerBrowsableState.Never)]
		private int _LongestRawMessageCallback_k__BackingField;
		[CompilerGenerated]
		[DebuggerBrowsable(DebuggerBrowsableState.Never)]
		private byte _LongestEventCallbackCode_k__BackingField;
		[CompilerGenerated]
		[DebuggerBrowsable(DebuggerBrowsableState.Never)]
		private int _LongestDeltaBetweenDispatching_k__BackingField;
		[CompilerGenerated]
		[DebuggerBrowsable(DebuggerBrowsableState.Never)]
		private int _LongestDeltaBetweenSending_k__BackingField;
		[CompilerGenerated]
		[DebuggerBrowsable(DebuggerBrowsableState.Never)]
		private int _DispatchIncomingCommandsCalls_k__BackingField;
		[CompilerGenerated]
		[DebuggerBrowsable(DebuggerBrowsableState.Never)]
		private int _SendOutgoingCommandsCalls_k__BackingField;
	
		// Properties
		public int OperationByteCount { [CompilerGenerated] get; [CompilerGenerated] set; }
		public int OperationCount { [CompilerGenerated] get; [CompilerGenerated] set; }
		public int ResultByteCount { [CompilerGenerated] get; [CompilerGenerated] set; }
		public int ResultCount { [CompilerGenerated] get; [CompilerGenerated] set; }
		public int EventByteCount { [CompilerGenerated] get; [CompilerGenerated] set; }
		public int EventCount { [CompilerGenerated] get; [CompilerGenerated] set; }
		public int LongestOpResponseCallback { [CompilerGenerated] get; [CompilerGenerated] set; }
		public byte LongestOpResponseCallbackOpCode { [CompilerGenerated] get; [CompilerGenerated] set; }
		public int LongestEventCallback { [CompilerGenerated] get; [CompilerGenerated] set; }
		public int LongestMessageCallback { [CompilerGenerated] get; [CompilerGenerated] set; }
		public int LongestRawMessageCallback { [CompilerGenerated] get; [CompilerGenerated] set; }
		public byte LongestEventCallbackCode { [CompilerGenerated] get; [CompilerGenerated] set; }
		public int LongestDeltaBetweenDispatching { [CompilerGenerated] get; [CompilerGenerated] set; }
		public int LongestDeltaBetweenSending { [CompilerGenerated] get; [CompilerGenerated] set; }
		[Obsolete("Use DispatchIncomingCommandsCalls, which has proper naming.")]
		public int DispatchCalls { get; }
		public int DispatchIncomingCommandsCalls { [CompilerGenerated] get; [CompilerGenerated] set; }
		public int SendOutgoingCommandsCalls { [CompilerGenerated] get; [CompilerGenerated] set; }
		public int TotalByteCount { get; }
		public int TotalMessageCount { get; }
		public int TotalIncomingByteCount { get; }
		public int TotalIncomingMessageCount { get; }
		public int TotalOutgoingByteCount { get; }
		public int TotalOutgoingMessageCount { get; }
	
		// Constructors
		public TrafficStatsGameLevel();
	
		// Methods
		internal void CountOperation(int operationBytes);
		internal void CountResult(int resultBytes);
		internal void CountEvent(int eventBytes);
		internal void TimeForResponseCallback(byte code, int time);
		internal void TimeForEventCallback(byte code, int time);
		internal void TimeForMessageCallback(int time);
		internal void TimeForRawMessageCallback(int time);
		internal void DispatchIncomingCommandsCalled();
		internal void SendOutgoingCommandsCalled();
		public void ResetMaximumCounters();
		public override string ToString();
		public string ToStringVitalStats();
	}
}
