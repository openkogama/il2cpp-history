/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;

// Image 34: Photon3Unity3D.dll - Assembly: Photon3Unity3D, Version=4.1.2.19, Culture=neutral, PublicKeyToken=null

namespace ExitGames.Client.Photon
{
	internal class TPeer : PeerBase
	{
		// Fields
		private Queue<byte[]> incomingList;
		internal List<StreamBuffer> outgoingStream;
		private int lastPingResult;
		private byte[] pingRequest;
		internal static readonly byte[] tcpFramedMessageHead;
		internal static readonly byte[] tcpMsgHead;
		internal byte[] messageHeader;
		protected internal bool DoFraming;
	
		// Constructors
		internal TPeer();
		static TPeer();
	
		// Methods
		internal override void InitPeerBase();
		internal override bool Connect(string serverAddress, string appID, object customData = null);
		public override void OnConnect();
		internal override void Disconnect();
		internal override void StopConnection();
		internal override void FetchServerTimestamp();
		private void EnqueueInit(byte[] data);
		internal override bool DispatchIncomingCommands();
		internal override bool SendOutgoingCommands();
		internal override bool EnqueueOperation(Dictionary<byte, object> parameters, byte opCode, SendOptions sendParams, EgMessageType messageType);
		internal override StreamBuffer SerializeOperationToMessage(byte opCode, Dictionary<byte, object> parameters, EgMessageType messageType, bool encrypt);
		internal bool EnqueueMessageAsPayload(DeliveryMode deliveryMode, StreamBuffer opMessage, byte channelId);
		internal void SendPing();
		internal void SendData(byte[] data, int length);
		internal override void ReceiveIncomingCommands(byte[] inbuff, int dataLength);
		private void ReadPingResult(byte[] inbuff);
		protected internal void ReadPingResult(OperationResponse operationResponse);
	}
}
