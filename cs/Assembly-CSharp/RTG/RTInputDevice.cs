/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace RTG
{
	public class RTInputDevice : MonoSingleton<RTG.RTInputDevice>
	{
		// Fields
		private IInputDevice _inputDevice;
	
		// Properties
		public IInputDevice Device { get; }
		public InputDeviceType DeviceType { get; }
	
		// Constructors
		public RTInputDevice();
	
		// Methods
		public void Update_SystemCall();
		private void Awake();
	}
}
