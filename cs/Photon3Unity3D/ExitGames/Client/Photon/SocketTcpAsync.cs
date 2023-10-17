/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Net.Sockets;
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;

// Image 5: Photon3Unity3D.dll - Assembly: Photon3Unity3D, Version=4.1.2.19, Culture=neutral, PublicKeyToken=null

namespace ExitGames.Client.Photon
{
	public class SocketTcpAsync : IPhotonSocket, IDisposable
	{
		// Fields
		private Socket sock;
		private readonly object syncer;
	
		// Nested types
		private class ReceiveContext
		{
			// Fields
			public Socket workSocket;
			public int ReceivedHeaderBytes;
			public byte[] HeaderBuffer;
			public int ExpectedMessageBytes;
			public int ReceivedMessageBytes;
			public byte[] MessageBuffer;
	
			// Properties
			public bool ReadingHeader { get; }
			public bool ReadingMessage { get; }
			public byte[] CurrentBuffer { get; }
			public int CurrentOffset { get; }
			public int CurrentExpected { get; }
	
			// Constructors
			public ReceiveContext(Socket socket, byte[] headerBuffer, byte[] messageBuffer);
	
			// Methods
			public void Reset();
		}
	
		// Constructors
		public SocketTcpAsync(PeerBase npeer);
	
		// Methods
		~SocketTcpAsync();
		public void Dispose();
		public override bool Connect();
		public override bool Disconnect();
		public override PhotonSocketError Send(byte[] data, int length);
		public override PhotonSocketError Receive(out byte[] data);
		internal void DnsAndConnect();
		private void ReceiveAsync(ReceiveContext context = null);
		private void ReceiveAsync(IAsyncResult ar);
	}
}
