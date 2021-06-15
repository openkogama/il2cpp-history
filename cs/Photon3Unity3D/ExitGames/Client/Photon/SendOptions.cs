/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;

// Image 34: Photon3Unity3D.dll - Assembly: Photon3Unity3D, Version=4.1.2.19, Culture=neutral, PublicKeyToken=null

namespace ExitGames.Client.Photon
{
	public struct SendOptions
	{
		// Fields
		public static readonly SendOptions SendReliable;
		public static readonly SendOptions SendUnreliable;
		public DeliveryMode DeliveryMode;
		public bool Encrypt;
		public byte Channel;
	
		// Properties
		public bool Reliability { set; }
	
		// Constructors
		static SendOptions();
	}
}
