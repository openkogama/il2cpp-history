/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using MV.WorldObject;

// Image 13: MVWorldObject.dll - Assembly: MVWorldObject, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null

namespace MV.WorldObject.KogamaSettings.KogamaSettingsCore.Client
{
	public class SettingsReporter
	{
		// Fields
		public readonly MVWorldObject worldObject;
		protected Dictionary<object, object> DeltaData;
		protected Dictionary<object, object> DeltaRemovalData;
		private Action<int, Dictionary<object, object>> partialDataUpdate;
		private Action<int, Dictionary<object, object>> partialDataRemove;
		private Action<Dictionary<object, object>> OnValueRemovedLocal;
		private Action<Dictionary<object, object>> OnValueChangedLocal;
	
		// Events
		public event Action<Dictionary<object, object>> OnValueRemovedLocal {
			add;
			remove;
		}
		public event Action<Dictionary<object, object>> OnValueChangedLocal {
			add;
			remove;
		}
	
		// Constructors
		public SettingsReporter(MVWorldObject worldObject, Action<int, Dictionary<object, object>> partialDataUpdate, Action<int, Dictionary<object, object>> partialDataRemove);
	
		// Methods
		public void Submit();
		public void OnValueRemoved(Dictionary<object, object> deltaChange);
		public void OnValueChange(Dictionary<object, object> deltaChange);
	}
}
