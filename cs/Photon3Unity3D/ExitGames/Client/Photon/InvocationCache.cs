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
	internal class InvocationCache
	{
		// Fields
		private readonly LinkedList<CachedOperation> cache;
		private int nextInvocationId;
	
		// Properties
		public int NextInvocationId { get; }
		public int Count { get; }
	
		// Nested types
		private class CachedOperation
		{
			// Fields
			[CompilerGenerated]
			[DebuggerBrowsable(DebuggerBrowsableState.Never)]
			private int _InvocationId_k__BackingField;
			[CompilerGenerated]
			[DebuggerBrowsable(DebuggerBrowsableState.Never)]
			private Action _Action_k__BackingField;
	
			// Properties
			public int InvocationId { [CompilerGenerated] get; [CompilerGenerated] set; }
			public Action Action { [CompilerGenerated] get; [CompilerGenerated] set; }
	
			// Constructors
			public CachedOperation();
		}
	
		// Constructors
		public InvocationCache();
	
		// Methods
		public void Reset();
		public void Invoke(int invocationId, Action action);
	}
}
