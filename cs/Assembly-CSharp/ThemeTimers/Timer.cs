/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace ThemeTimers
{
	public class Timer : ITimer
	{
		// Fields
		[CompilerGenerated]
		private float _Time_k__BackingField;
		private float timeScale;
	
		// Properties
		public float Time { [CompilerGenerated] get; [CompilerGenerated] private set; }
	
		// Constructors
		public Timer(float initialTime, float cycleLength);
	
		// Methods
		public void Update();
	}
}
