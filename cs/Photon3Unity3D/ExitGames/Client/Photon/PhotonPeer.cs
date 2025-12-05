/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using ExitGames.Client.Photon.Encryption;

// Image 12: Photon3Unity3D.dll - Assembly: Photon3Unity3D, Version=4.1.2.19, Culture=neutral, PublicKeyToken=null

namespace ExitGames.Client.Photon
{
	public class PhotonPeer
	{
		// Fields
		[CompilerGenerated]
		[DebuggerBrowsable(DebuggerBrowsableState.Never)]
		private int _CommandBufferSize_k__BackingField;
		[CompilerGenerated]
		[DebuggerBrowsable(DebuggerBrowsableState.Never)]
		private int _LimitOfUnreliableCommands_k__BackingField;
		[Obsolete("Check QueuedOutgoingCommands and QueuedIncomingCommands on demand instead.")]
		public int WarningSize;
		public const bool NoSocket = false;
		[Obsolete("Where dynamic linking is available, this library will attempt to load it and fallback to a managed implementation. This value is always true.")]
		public const bool NativeDatagramEncrypt = true;
		public const bool DebugBuild = true;
		protected internal byte ClientSdkId;
		private string clientVersion;
		[CompilerGenerated]
		[DebuggerBrowsable(DebuggerBrowsableState.Never)]
		private SerializationProtocol _SerializationProtocolType_k__BackingField;
		public Dictionary<ConnectionProtocol, System.Type> SocketImplementationConfig;
		[CompilerGenerated]
		[DebuggerBrowsable(DebuggerBrowsableState.Never)]
		private System.Type _SocketImplementation_k__BackingField;
		public DebugLevel DebugOut;
		[CompilerGenerated]
		[DebuggerBrowsable(DebuggerBrowsableState.Never)]
		private IPhotonPeerListener _Listener_k__BackingField;
		private bool reuseEventInstance;
		[CompilerGenerated]
		[DebuggerBrowsable(DebuggerBrowsableState.Never)]
		private bool _EnableServerTracing_k__BackingField;
		private byte quickResendAttempts;
		public int RhttpMinConnections;
		public int RhttpMaxConnections;
		public byte ChannelCount;
		private bool crcEnabled;
		public int SentCountAllowance;
		public int InitialResendTimeMax;
		public int TimePingInterval;
		public int DisconnectTimeout;
		[CompilerGenerated]
		[DebuggerBrowsable(DebuggerBrowsableState.Never)]
		private ConnectionProtocol _TransportProtocol_k__BackingField;
		public static int OutgoingStreamBufferSize;
		private int mtu;
		[CompilerGenerated]
		[DebuggerBrowsable(DebuggerBrowsableState.Never)]
		private bool _IsSendingOnlyAcks_k__BackingField;
		public static bool AsyncKeyExchange;
		internal bool RandomizeSequenceNumbers;
		internal byte[] RandomizedSequenceNumbers;
		[CompilerGenerated]
		[DebuggerBrowsable(DebuggerBrowsableState.Never)]
		private TrafficStats _TrafficStatsIncoming_k__BackingField;
		[CompilerGenerated]
		[DebuggerBrowsable(DebuggerBrowsableState.Never)]
		private TrafficStats _TrafficStatsOutgoing_k__BackingField;
		[CompilerGenerated]
		[DebuggerBrowsable(DebuggerBrowsableState.Never)]
		private TrafficStatsGameLevel _TrafficStatsGameLevel_k__BackingField;
		private Stopwatch trafficStatsStopwatch;
		private bool trafficStatsEnabled;
		internal PeerBase peerBase;
		private readonly object SendOutgoingLockObject;
		private readonly object DispatchLockObject;
		private readonly object EnqueueLock;
		protected internal byte[] PayloadEncryptionSecret;
		private System.Type encryptorType;
		protected internal IPhotonEncryptor Encryptor;
	
		// Properties
		protected internal byte ClientSdkIdShifted { get; }
		public string ClientVersion { get; }
		public SerializationProtocol SerializationProtocolType { [CompilerGenerated] get; }
		public System.Type SocketImplementation { [CompilerGenerated] get; [CompilerGenerated] internal set; }
		public IPhotonPeerListener Listener { [CompilerGenerated] get; [CompilerGenerated] protected set; }
		public bool ReuseEventInstance { get; }
		public bool EnableServerTracing { [CompilerGenerated] get; }
		public byte QuickResendAttempts { get; }
		public bool CrcEnabled { get; }
		public int ServerTimeInMilliSeconds { get; }
		public int RoundTripTime { get; }
		public ConnectionProtocol TransportProtocol { [CompilerGenerated] get; [CompilerGenerated] set; }
		public int MaximumTransferUnit { get; }
		public bool IsSendingOnlyAcks { [CompilerGenerated] get; }
		public TrafficStats TrafficStatsIncoming { [CompilerGenerated] get; [CompilerGenerated] internal set; }
		public TrafficStats TrafficStatsOutgoing { [CompilerGenerated] get; [CompilerGenerated] internal set; }
		public TrafficStatsGameLevel TrafficStatsGameLevel { [CompilerGenerated] get; [CompilerGenerated] internal set; }
		public bool TrafficStatsEnabled { get; }
	
		// Constructors
		public PhotonPeer(ConnectionProtocol protocolType);
		public PhotonPeer(IPhotonPeerListener listener, ConnectionProtocol protocolType);
		static PhotonPeer();
	
		// Methods
		internal void InitializeTrafficStats();
		public virtual bool Connect(string serverAddress, string applicationName);
		public virtual bool Connect(string serverAddress, string applicationName, object custom);
		private void CreatePeerBase();
		public virtual void Disconnect();
		public virtual void Service();
		public virtual bool SendOutgoingCommands();
		public virtual bool DispatchIncomingCommands();
		public virtual bool SendOperation(byte operationCode, Dictionary<byte, object> operationParameters, SendOptions sendOptions);
	}
}
