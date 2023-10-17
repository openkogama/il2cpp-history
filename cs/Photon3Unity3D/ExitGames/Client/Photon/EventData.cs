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
	public class EventData
	{
		// Fields
		public byte Code;
		public Dictionary<byte, object> Parameters;
		public byte SenderKey;
		private int sender;
		public byte CustomDataKey;
		private object customData;
	
		// Properties
		public object this[byte key] { get => default; internal set {} }
		public int Sender { get; internal set; }
		public object CustomData { get; internal set; }
	
		// Constructors
		public EventData();
	
		// Methods
		internal void Reset();
		public override string ToString();
		public string ToStringFull();
	}
}
