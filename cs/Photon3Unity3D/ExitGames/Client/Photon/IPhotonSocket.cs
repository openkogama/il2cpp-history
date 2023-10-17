/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Net;
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;

// Image 5: Photon3Unity3D.dll - Assembly: Photon3Unity3D, Version=4.1.2.19, Culture=neutral, PublicKeyToken=null

namespace ExitGames.Client.Photon
{
	public abstract class IPhotonSocket
	{
		// Fields
		protected internal PeerBase peerBase;
		protected readonly ConnectionProtocol Protocol;
		public bool PollReceive;
		[CompilerGenerated]
		[DebuggerBrowsable(DebuggerBrowsableState.Never)]
		private PhotonSocketState _State_k__BackingField;
		[CompilerGenerated]
		[DebuggerBrowsable(DebuggerBrowsableState.Never)]
		private string _ServerAddress_k__BackingField;
		[CompilerGenerated]
		[DebuggerBrowsable(DebuggerBrowsableState.Never)]
		private static string _ServerIpAddress_k__BackingField;
		[CompilerGenerated]
		[DebuggerBrowsable(DebuggerBrowsableState.Never)]
		private int _ServerPort_k__BackingField;
		[CompilerGenerated]
		[DebuggerBrowsable(DebuggerBrowsableState.Never)]
		private bool _AddressResolvedAsIpv6_k__BackingField;
		[CompilerGenerated]
		[DebuggerBrowsable(DebuggerBrowsableState.Never)]
		private string _UrlProtocol_k__BackingField;
		[CompilerGenerated]
		[DebuggerBrowsable(DebuggerBrowsableState.Never)]
		private string _UrlPath_k__BackingField;
	
		// Properties
		protected IPhotonPeerListener Listener { get; }
		protected internal int MTU { get; }
		public PhotonSocketState State { [CompilerGenerated] get; [CompilerGenerated] protected set; }
		public bool Connected { get; }
		public string ConnectAddress { get; }
		public string ServerAddress { [CompilerGenerated] get; [CompilerGenerated] protected set; }
		public static string ServerIpAddress { [CompilerGenerated] get; [CompilerGenerated] protected set; }
		public int ServerPort { [CompilerGenerated] get; [CompilerGenerated] protected set; }
		public bool AddressResolvedAsIpv6 { [CompilerGenerated] get; [CompilerGenerated] protected internal set; }
		public string UrlProtocol { [CompilerGenerated] get; [CompilerGenerated] protected set; }
		public string UrlPath { [CompilerGenerated] get; [CompilerGenerated] protected set; }
	
		// Nested types
		[Serializable]
		[CompilerGenerated]
		private sealed class __c
		{
			// Fields
			public static readonly __c __9;
			public static Func<IPAddress, string> __9__50_0;
	
			// Constructors
			static __c();
			public __c();
	
			// Methods
			internal string _GetIpAddresses_b__50_0(IPAddress x);
		}
	
		// Constructors
		public IPhotonSocket(PeerBase peerBase);
	
		// Methods
		public virtual bool Connect();
		public abstract bool Disconnect();
		public abstract PhotonSocketError Send(byte[] data, int length);
		public abstract PhotonSocketError Receive(out byte[] data);
		public void HandleReceivedDatagram(byte[] inBuffer, int length, bool willBeReused);
		public bool ReportDebugOfLevel(DebugLevel levelOfMessage);
		public void EnqueueDebugReturn(DebugLevel debugLevel, string message);
		protected internal void HandleException(StatusCode statusCode);
		protected internal bool TryParseAddress(string url, out string address, out ushort port, out string urlProtocol, out string urlPath);
		protected internal bool IsIpv6SimpleCheck(IPAddress address);
		protected internal IPAddress[] GetIpAddresses(string hostname);
		private int AddressSortComparer(IPAddress x, IPAddress y);
		[Obsolete("Use GetIpAddresses instead.")]
		protected internal static IPAddress GetIpAddress(string address);
		[CompilerGenerated]
		private void _HandleException_b__47_0();
	}
}
