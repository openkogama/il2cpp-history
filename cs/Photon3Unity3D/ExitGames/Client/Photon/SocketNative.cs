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
	public class SocketNative : IPhotonSocket
	{
		// Fields
		private const string LibName = "PhotonSocketPlugin";
		private IntPtr pConnectionHandler;
		private GCHandle handle;
		internal static readonly object syncer;
		private string serializationProtocolType;
		private byte[] serializationProtocolBytes;
		private string appId;
		private NativeDebugLevel debugLevel;
	
		// Nested types
		public delegate void LogCallbackDelegate(IntPtr pUserData, int level, string msg);
	
		private enum NativeSocketState : byte
		{
			Disconnected = 0,
			Connecting = 1,
			Connected = 2,
			ConnectionError = 3,
			SendError = 4,
			ReceiveError = 5,
			Disconnecting = 6
		}
	
		private enum NativeDebugLevel : byte
		{
			OFF = 0,
			ERRORS = 1,
			WARNINGS = 2,
			INFO = 3,
			ALL = 4
		}
	
		// Constructors
		public SocketNative(PeerBase npeer);
		static SocketNative();
	
		// Methods
		internal static extern IntPtr egconnect(string address);
		internal static extern IntPtr egconnectWithProtocol(string address, byte connectionProtocol);
		internal static extern IntPtr egconnectWithProtocols(string address, byte connectionProtocol, string appID, string serializationProtocolString, byte serializationProtocolMajor, byte serializationProtocolMinor);
		internal static extern byte eggetState(IntPtr pConnectionHandler);
		internal static extern void egdisconnect(IntPtr pConnectionHandler);
		internal static extern uint egservice(IntPtr pConnectionHandler);
		internal static extern bool egsend(IntPtr pConnectionHandler, byte[] arr, uint size);
		internal static extern uint egread(IntPtr pConnectionHandler, byte[] arr, ref uint size);
		internal static extern void egsetSocketLoggingCallback(IntPtr pConnectionHandler, IntPtr userData, LogCallbackDelegate callback);
		internal static extern bool egsetSocketLoggingLevel(IntPtr pConnectionHandler, int level);
		internal static extern bool eggetUsingIPv6(IntPtr pConnectionHandler);
		~SocketNative();
		public void Dispose();
		public override bool Connect();
		private static void DebugReturn(IntPtr pUserData, int debugLevel, string str);
		internal void DnsAndConnect();
		public override bool Disconnect();
		public override PhotonSocketError Send(byte[] data, int length);
		public override PhotonSocketError Receive(out byte[] data);
		public void ReceiveLoop();
	}
}
