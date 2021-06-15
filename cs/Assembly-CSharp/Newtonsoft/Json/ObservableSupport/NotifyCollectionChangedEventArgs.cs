/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace Newtonsoft.Json.ObservableSupport
{
	public class NotifyCollectionChangedEventArgs
	{
		// Fields
		[CompilerGenerated]
		[DebuggerBrowsable]
		private NotifyCollectionChangedAction _Action_k__BackingField;
		[CompilerGenerated]
		[DebuggerBrowsable]
		private IList _NewItems_k__BackingField;
		[CompilerGenerated]
		[DebuggerBrowsable]
		private int _NewStartingIndex_k__BackingField;
		[CompilerGenerated]
		[DebuggerBrowsable]
		private IList _OldItems_k__BackingField;
		[CompilerGenerated]
		[DebuggerBrowsable]
		private int _OldStartingIndex_k__BackingField;
	
		// Properties
		internal NotifyCollectionChangedAction Action { [CompilerGenerated] get; [CompilerGenerated] set; }
		internal IList NewItems { [CompilerGenerated] get; [CompilerGenerated] set; }
		internal int NewStartingIndex { [CompilerGenerated] get; [CompilerGenerated] set; }
		internal IList OldItems { [CompilerGenerated] get; [CompilerGenerated] set; }
		internal int OldStartingIndex { [CompilerGenerated] get; [CompilerGenerated] set; }
	
		// Constructors
		internal NotifyCollectionChangedEventArgs(NotifyCollectionChangedAction action);
		internal NotifyCollectionChangedEventArgs(NotifyCollectionChangedAction action, IList changedItems);
		internal NotifyCollectionChangedEventArgs(NotifyCollectionChangedAction action, object changedItem);
		internal NotifyCollectionChangedEventArgs(NotifyCollectionChangedAction action, IList newItems, IList oldItems);
		internal NotifyCollectionChangedEventArgs(NotifyCollectionChangedAction action, IList changedItems, int startingIndex);
		internal NotifyCollectionChangedEventArgs(NotifyCollectionChangedAction action, object changedItem, int index);
		internal NotifyCollectionChangedEventArgs(NotifyCollectionChangedAction action, object newItem, object oldItem);
		internal NotifyCollectionChangedEventArgs(NotifyCollectionChangedAction action, IList newItems, IList oldItems, int startingIndex);
		internal NotifyCollectionChangedEventArgs(NotifyCollectionChangedAction action, IList changedItems, int index, int oldIndex);
		internal NotifyCollectionChangedEventArgs(NotifyCollectionChangedAction action, object changedItem, int index, int oldIndex);
		internal NotifyCollectionChangedEventArgs(NotifyCollectionChangedAction action, object newItem, object oldItem, int index);
	}
}
