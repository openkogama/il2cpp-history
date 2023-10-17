/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;

// Image 5: Photon3Unity3D.dll - Assembly: Photon3Unity3D, Version=4.1.2.19, Culture=neutral, PublicKeyToken=null

namespace ExitGames.Client.Photon
{
	internal class EnetPeer : PeerBase
	{
		// Fields
		private const int CRC_LENGTH = 4;
		protected internal const int HMAC_SIZE = 32;
		protected internal const int BLOCK_SIZE = 16;
		protected internal const int IV_SIZE = 16;
		private const int EncryptedDataGramHeaderSize = 7;
		private const int EncryptedHeaderSize = 5;
		private List<NCommand> sentReliableCommands;
		private StreamBuffer outgoingAcknowledgementsPool;
		internal const int UnsequencedWindowSize = 128;
		internal readonly int[] unsequencedWindow;
		internal int outgoingUnsequencedGroupNumber;
		internal int incomingUnsequencedGroupNumber;
		private byte udpCommandCount;
		private byte[] udpBuffer;
		private int udpBufferIndex;
		private int udpBufferLength;
		private byte[] bufferForEncryption;
		private int commandBufferSize;
		internal int challenge;
		internal int reliableCommandsRepeated;
		internal int reliableCommandsSent;
		internal int serverSentTime;
		internal static readonly byte[] udpHeader0xF3;
		internal static readonly byte[] messageHeader;
		protected bool datagramEncryptedConnection;
		private EnetChannel[] channelArray;
		private const byte ControlChannelNumber = 255;
		protected internal const short PeerIdForConnect = -1;
		protected internal const short PeerIdForConnectTrace = -2;
		private Queue<int> commandsToRemove;
		private int fragmentLength;
		private int fragmentLengthDatagramEncrypt;
		private int fragmentLengthMtuValue;
		private Queue<NCommand> commandsToResend;
		private Queue<NCommand> CommandQueue;
	
		// Properties
		internal override int QueuedIncomingCommandsCount { get; }
		internal override int QueuedOutgoingCommandsCount { get; }
		internal override int SentReliableCommandsCount { get; }
	
		// Constructors
		internal EnetPeer();
		static EnetPeer();
	
		// Methods
		internal override void InitPeerBase();
		internal void ApplyRandomizedSequenceNumbers();
		internal override bool Connect(string ipport, string appID, object custom = null);
		public override void OnConnect();
		internal override void Disconnect();
		internal override void StopConnection();
		internal override void FetchServerTimestamp();
		internal override bool DispatchIncomingCommands();
		private int GetFragmentLength();
		private int CalculateBufferLen();
		private int CalculateInitialOffset();
		internal override bool SendAcksOnly();
		internal override bool SendOutgoingCommands();
		private bool AreReliableCommandsInTransit();
		internal override bool EnqueueOperation(Dictionary<byte, object> parameters, byte opCode, SendOptions sendParams, EgMessageType messageType = EgMessageType.Operation);
		internal override bool EnqueueMessage(object message, SendOptions sendOptions);
		private EnetChannel GetChannel(byte channelNumber);
		internal bool CreateAndEnqueueCommand(byte commandType, StreamBuffer payload, byte channelNumber);
		internal override StreamBuffer SerializeOperationToMessage(byte opCode, Dictionary<byte, object> parameters, EgMessageType messageType, bool encrypt);
		internal int SerializeAckToBuffer();
		internal int SerializeToBuffer(Queue<NCommand> commandList);
		internal void SendData(byte[] data, int length);
		private void SendToSocket(byte[] data, int length);
		private void SendDataEncrypted(byte[] data, int length);
		internal void QueueSentCommand(NCommand command);
		internal void QueueOutgoingReliableCommand(NCommand command);
		internal void QueueOutgoingUnreliableCommand(NCommand command);
		internal void QueueOutgoingAcknowledgement(NCommand readCommand, int sendTime);
		internal override void ReceiveIncomingCommands(byte[] inBuff, int dataLength);
		internal bool ExecuteCommand(NCommand command);
		internal bool QueueIncomingCommand(NCommand command);
		internal NCommand RemoveSentReliableCommand(int ackReceivedReliableSequenceNumber, int ackReceivedChannel, bool isUnsequenced);
		internal string CommandListToString(NCommand[] list);
		[CompilerGenerated]
		private void _ExecuteCommand_b__71_0();
	}
}
