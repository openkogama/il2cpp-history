/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;

// Image 12: Photon3Unity3D.dll - Assembly: Photon3Unity3D, Version=4.1.2.19, Culture=neutral, PublicKeyToken=null

namespace ExitGames.Client.Photon
{
	internal class EnetChannel
	{
		// Fields
		internal byte ChannelNumber;
		internal Dictionary<int, NCommand> incomingReliableCommandsList;
		internal Dictionary<int, NCommand> incomingUnreliableCommandsList;
		internal Queue<NCommand> incomingUnsequencedCommandsList;
		internal Dictionary<int, NCommand> incomingUnsequencedFragments;
		internal Queue<NCommand> outgoingReliableCommandsList;
		internal Queue<NCommand> outgoingUnreliableCommandsList;
		internal int incomingReliableSequenceNumber;
		internal int incomingUnreliableSequenceNumber;
		internal int outgoingReliableSequenceNumber;
		internal int outgoingUnreliableSequenceNumber;
		internal int outgoingReliableUnsequencedNumber;
		private int reliableUnsequencedNumbersCompletelyReceived;
		private HashSet<int> reliableUnsequencedNumbersReceived;
	
		// Constructors
		public EnetChannel(byte channelNumber, int commandBufferSize);
	
		// Methods
		public bool ContainsUnreliableSequenceNumber(int unreliableSequenceNumber);
		public bool ContainsReliableSequenceNumber(int reliableSequenceNumber);
		public NCommand FetchReliableSequenceNumber(int reliableSequenceNumber);
		public bool TryGetFragment(int reliableSequenceNumber, bool isSequenced, out NCommand fragment);
		public void RemoveFragment(int reliableSequenceNumber, bool isSequenced);
		public void clearAll();
		public bool QueueIncomingReliableUnsequenced(NCommand command);
	}
}
