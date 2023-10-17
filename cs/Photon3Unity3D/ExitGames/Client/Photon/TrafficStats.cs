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
	public class TrafficStats
	{
		// Fields
		[CompilerGenerated]
		[DebuggerBrowsable(DebuggerBrowsableState.Never)]
		private int _PackageHeaderSize_k__BackingField;
		[CompilerGenerated]
		[DebuggerBrowsable(DebuggerBrowsableState.Never)]
		private int _ReliableCommandCount_k__BackingField;
		[CompilerGenerated]
		[DebuggerBrowsable(DebuggerBrowsableState.Never)]
		private int _UnreliableCommandCount_k__BackingField;
		[CompilerGenerated]
		[DebuggerBrowsable(DebuggerBrowsableState.Never)]
		private int _FragmentCommandCount_k__BackingField;
		[CompilerGenerated]
		[DebuggerBrowsable(DebuggerBrowsableState.Never)]
		private int _ControlCommandCount_k__BackingField;
		[CompilerGenerated]
		[DebuggerBrowsable(DebuggerBrowsableState.Never)]
		private int _TotalPacketCount_k__BackingField;
		[CompilerGenerated]
		[DebuggerBrowsable(DebuggerBrowsableState.Never)]
		private int _TotalCommandsInPackets_k__BackingField;
		[CompilerGenerated]
		[DebuggerBrowsable(DebuggerBrowsableState.Never)]
		private int _ReliableCommandBytes_k__BackingField;
		[CompilerGenerated]
		[DebuggerBrowsable(DebuggerBrowsableState.Never)]
		private int _UnreliableCommandBytes_k__BackingField;
		[CompilerGenerated]
		[DebuggerBrowsable(DebuggerBrowsableState.Never)]
		private int _FragmentCommandBytes_k__BackingField;
		[CompilerGenerated]
		[DebuggerBrowsable(DebuggerBrowsableState.Never)]
		private int _ControlCommandBytes_k__BackingField;
		[CompilerGenerated]
		[DebuggerBrowsable(DebuggerBrowsableState.Never)]
		private int _TimestampOfLastAck_k__BackingField;
		[CompilerGenerated]
		[DebuggerBrowsable(DebuggerBrowsableState.Never)]
		private int _TimestampOfLastReliableCommand_k__BackingField;
	
		// Properties
		public int PackageHeaderSize { [CompilerGenerated] get; [CompilerGenerated] internal set; }
		public int ReliableCommandCount { [CompilerGenerated] get; [CompilerGenerated] internal set; }
		public int UnreliableCommandCount { [CompilerGenerated] get; [CompilerGenerated] internal set; }
		public int FragmentCommandCount { [CompilerGenerated] get; [CompilerGenerated] internal set; }
		public int ControlCommandCount { [CompilerGenerated] get; [CompilerGenerated] internal set; }
		public int TotalPacketCount { [CompilerGenerated] get; [CompilerGenerated] internal set; }
		public int TotalCommandsInPackets { [CompilerGenerated] get; [CompilerGenerated] internal set; }
		public int ReliableCommandBytes { [CompilerGenerated] get; [CompilerGenerated] internal set; }
		public int UnreliableCommandBytes { [CompilerGenerated] get; [CompilerGenerated] internal set; }
		public int FragmentCommandBytes { [CompilerGenerated] get; [CompilerGenerated] internal set; }
		public int ControlCommandBytes { [CompilerGenerated] get; [CompilerGenerated] internal set; }
		public int TotalCommandCount { get; }
		public int TotalCommandBytes { get; }
		public int TotalPacketBytes { get; }
		public int TimestampOfLastAck { [CompilerGenerated] get; [CompilerGenerated] set; }
		public int TimestampOfLastReliableCommand { [CompilerGenerated] get; [CompilerGenerated] set; }
	
		// Constructors
		internal TrafficStats(int packageHeaderSize);
	
		// Methods
		internal void CountControlCommand(int size);
		internal void CountReliableOpCommand(int size);
		internal void CountUnreliableOpCommand(int size);
		internal void CountFragmentOpCommand(int size);
		public override string ToString();
	}
}
