/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Photon.SocketServer.Security;

// Image 12: Photon3Unity3D.dll - Assembly: Photon3Unity3D, Version=4.1.2.19, Culture=neutral, PublicKeyToken=null

namespace ExitGames.Client.Photon
{
	public abstract class PeerBase
	{
		// Fields
		internal PhotonPeer photonPeer;
		public IProtocol SerializationProtocol;
		internal ConnectionProtocol usedTransportProtocol;
		internal IPhotonSocket PhotonSocket;
		[CompilerGenerated]
		[DebuggerBrowsable(DebuggerBrowsableState.Never)]
		private string _ServerAddress_k__BackingField;
		internal ConnectionStateValue peerConnectionState;
		internal int ByteCountLastOperation;
		internal int ByteCountCurrentDispatch;
		internal NCommand CommandInCurrentDispatch;
		internal int packetLossByCrc;
		internal int packetLossByChallenge;
		internal readonly Queue<MyAction> ActionQueue;
		internal short peerID;
		internal int serverTimeOffset;
		internal bool serverTimeOffsetIsAvailable;
		internal int roundTripTime;
		internal int roundTripTimeVariance;
		internal int lastRoundTripTime;
		internal int lowestRoundTripTime;
		internal int lastRoundTripTimeVariance;
		internal int highestRoundTripTimeVariance;
		internal int timestampOfLastReceive;
		internal static short peerCount;
		internal long bytesOut;
		internal long bytesIn;
		internal object CustomInitData;
		public string AppId;
		internal EventData reusableEventData;
		internal int timeBase;
		internal int timeoutInt;
		internal int timeLastAckReceive;
		internal int longestSentCall;
		internal int timeLastSendAck;
		internal int timeLastSendOutgoing;
		internal bool ApplicationIsInitialized;
		internal bool isEncryptionAvailable;
		internal int outgoingCommandsInStream;
		protected internal static Queue<StreamBuffer> MessageBufferPool;
		internal ICryptoProvider CryptoProvider;
		private readonly Random lagRandomizer;
		internal readonly LinkedList<SimulationItem> NetSimListOutgoing;
		internal readonly LinkedList<SimulationItem> NetSimListIncoming;
		private readonly NetworkSimulationSet networkSimulationSettings;
		internal int TrafficPackageHeaderSize;
		private int commandLogSize;
		internal Queue<CmdLogItem> CommandLog;
		internal Queue<CmdLogItem> InReliableLog;
	
		// Properties
		internal System.Type SocketImplementation { get; }
		public string ServerAddress { [CompilerGenerated] get; [CompilerGenerated] internal set; }
		internal IPhotonPeerListener Listener { get; }
		public DebugLevel debugOut { get; }
		internal int DisconnectTimeout { get; }
		internal int timePingInterval { get; }
		internal byte ChannelCount { get; }
		internal int timeInt { get; }
		internal bool IsSendingOnlyAcks { get; }
		internal int mtu { get; }
		protected internal bool IsIpv6 { get; }
		public NetworkSimulationSet NetworkSimulationSettings { get; }
		internal bool TrafficStatsEnabled { get; }
		internal TrafficStats TrafficStatsIncoming { get; }
		internal TrafficStats TrafficStatsOutgoing { get; }
		internal TrafficStatsGameLevel TrafficStatsGameLevel { get; }
		internal int CommandLogSize { get; }
	
		// Nested types
		internal delegate void MyAction();
	
		[CompilerGenerated]
		private sealed class __c__DisplayClass104_0
		{
			// Fields
			public DebugLevel level;
			public string debugReturn;
			public PeerBase __4__this;
	
			// Constructors
			public __c__DisplayClass104_0();
	
			// Methods
			internal void _EnqueueDebugReturn_b__0();
		}
	
		[CompilerGenerated]
		private sealed class __c__DisplayClass105_0
		{
			// Fields
			public StatusCode statusValue;
			public PeerBase __4__this;
	
			// Constructors
			public __c__DisplayClass105_0();
	
			// Methods
			internal void _EnqueueStatusCallback_b__0();
		}
	
		// Constructors
		protected PeerBase();
		static PeerBase();
	
		// Methods
		public static StreamBuffer MessageBufferPoolGet();
		public static void MessageBufferPoolPut(StreamBuffer buff);
		internal virtual void InitPeerBase();
		internal abstract bool Connect(string serverAddress, string appID, object customData = null);
		private string GetHttpKeyValueString(Dictionary<string, string> dic);
		internal byte[] PrepareConnectData(string serverAddress, string appID, object custom);
		internal string PepareWebSocketUrl(string serverAddress, string appId, object customData);
		public abstract void OnConnect();
		internal void InitCallback();
		internal abstract void Disconnect();
		internal abstract void StopConnection();
		internal abstract void FetchServerTimestamp();
		internal abstract bool EnqueueOperation(Dictionary<byte, object> parameters, byte opCode, SendOptions sendParams, EgMessageType messageType = EgMessageType.Operation);
		internal abstract StreamBuffer SerializeOperationToMessage(byte opCode, Dictionary<byte, object> parameters, EgMessageType messageType, bool encrypt);
		internal abstract bool SendOutgoingCommands();
		internal abstract void ReceiveIncomingCommands(byte[] inBuff, int dataLength);
		internal abstract bool DispatchIncomingCommands();
		internal virtual bool DeserializeMessageAndCallback(StreamBuffer stream);
		internal void UpdateRoundTripTimeAndVariance(int lastRoundtripTime);
		internal void DeriveSharedKey(OperationResponse operationResponse);
		internal virtual void InitEncryption(byte[] secret);
		internal void EnqueueActionForDispatch(MyAction action);
		internal void EnqueueDebugReturn(DebugLevel level, string debugReturn);
		internal void EnqueueStatusCallback(StatusCode statusValue);
		internal void SendNetworkSimulated(byte[] dataToSend);
		internal void ReceiveNetworkSimulated(byte[] dataReceived);
		protected internal void NetworkSimRun();
		internal void CommandLogResize();
		internal void CommandLogInit();
	}
}
