/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;

// Image 5: Photon3Unity3D.dll - Assembly: Photon3Unity3D, Version=4.1.2.19, Culture=neutral, PublicKeyToken=null

namespace ExitGames.Client.Photon
{
	public class DictionaryEntryEnumerator : IEnumerator<DictionaryEntry>
	{
		// Fields
		private IDictionaryEnumerator enumerator;
	
		// Properties
		object IEnumerator.Current { get; }
		public DictionaryEntry Current { get; }
		public object Key { get; }
		public object Value { get; }
		public DictionaryEntry Entry { get; }
	
		// Constructors
		public DictionaryEntryEnumerator(IDictionaryEnumerator original);
	
		// Methods
		public bool MoveNext();
		public void Reset();
		public void Dispose();
	}
}
