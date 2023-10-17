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
	internal class NCommand : IComparable<ExitGames.Client.Photon.NCommand>
	{
		// Fields
		internal const byte FV_UNRELIABLE = 0;
		internal const byte FV_RELIABLE = 1;
		internal const byte FV_UNRELIABLE_UNSEQUENCED = 2;
		internal const byte FV_RELIBALE_UNSEQUENCED = 3;
		internal const byte CT_NONE = 0;
		internal const byte CT_ACK = 1;
		internal const byte CT_CONNECT = 2;
		internal const byte CT_VERIFYCONNECT = 3;
		internal const byte CT_DISCONNECT = 4;
		internal const byte CT_PING = 5;
		internal const byte CT_SENDRELIABLE = 6;
		internal const byte CT_SENDUNRELIABLE = 7;
		internal const byte CT_SENDFRAGMENT = 8;
		internal const byte CT_SENDUNSEQUENCED = 11;
		internal const byte CT_EG_SERVERTIME = 12;
		internal const byte CT_EG_SEND_UNRELIABLE_PROCESSED = 13;
		internal const byte CT_EG_SEND_RELIABLE_UNSEQUENCED = 14;
		internal const byte CT_EG_SEND_FRAGMENT_UNSEQUENCED = 15;
		internal const byte CT_EG_ACK_UNSEQUENCED = 16;
		internal const int HEADER_UDP_PACK_LENGTH = 12;
		internal const int CmdSizeMinimum = 12;
		internal const int CmdSizeAck = 20;
		internal const int CmdSizeConnect = 44;
		internal const int CmdSizeVerifyConnect = 44;
		internal const int CmdSizeDisconnect = 12;
		internal const int CmdSizePing = 12;
		internal const int CmdSizeReliableHeader = 12;
		internal const int CmdSizeUnreliableHeader = 16;
		internal const int CmdSizeUnsequensedHeader = 16;
		internal const int CmdSizeFragmentHeader = 32;
		internal const int CmdSizeMaxHeader = 36;
		internal byte commandFlags;
		internal byte commandType;
		internal byte commandChannelID;
		internal int reliableSequenceNumber;
		internal int unreliableSequenceNumber;
		internal int unsequencedGroupNumber;
		internal byte reservedByte;
		internal int startSequenceNumber;
		internal int fragmentCount;
		internal int fragmentNumber;
		internal int totalLength;
		internal int fragmentOffset;
		internal int fragmentsRemaining;
		internal int commandSentTime;
		internal byte commandSentCount;
		internal int roundTripTimeout;
		internal int timeoutTime;
		internal int ackReceivedReliableSequenceNumber;
		internal int ackReceivedSentTime;
		internal int Size;
		private byte[] commandHeader;
		internal int SizeOfHeader;
		internal StreamBuffer Payload;
	
		// Properties
		protected internal int SizeOfPayload { get; }
		protected internal bool IsFlaggedUnsequenced { get; }
		protected internal bool IsFlaggedReliable { get; }
	
		// Constructors
		internal NCommand(EnetPeer peer, byte commandType, StreamBuffer payload, byte channel);
		internal NCommand(EnetPeer peer, byte[] inBuff, ref int readingOffset);
	
		// Methods
		internal static void CreateAck(byte[] buffer, int offset, NCommand commandToAck, int sentTime);
		internal void SerializeHeader(byte[] buffer, ref int bufferIndex);
		internal byte[] Serialize();
		public void FreePayload();
		public int CompareTo(NCommand other);
		public override string ToString();
	}
}
