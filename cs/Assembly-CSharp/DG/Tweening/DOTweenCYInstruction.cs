/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace DG.Tweening
{
	public static class DOTweenCYInstruction
	{
		// Nested types
		public class WaitForCompletion : CustomYieldInstruction
		{
			// Fields
			private readonly Tween t;
	
			// Properties
			public override bool keepWaiting { get; }
	
			// Constructors
			public WaitForCompletion(Tween tween);
		}
	
		public class WaitForRewind : CustomYieldInstruction
		{
			// Fields
			private readonly Tween t;
	
			// Properties
			public override bool keepWaiting { get; }
	
			// Constructors
			public WaitForRewind(Tween tween);
		}
	
		public class WaitForKill : CustomYieldInstruction
		{
			// Fields
			private readonly Tween t;
	
			// Properties
			public override bool keepWaiting { get; }
	
			// Constructors
			public WaitForKill(Tween tween);
		}
	
		public class WaitForElapsedLoops : CustomYieldInstruction
		{
			// Fields
			private readonly Tween t;
			private readonly int elapsedLoops;
	
			// Properties
			public override bool keepWaiting { get; }
	
			// Constructors
			public WaitForElapsedLoops(Tween tween, int elapsedLoops);
		}
	
		public class WaitForPosition : CustomYieldInstruction
		{
			// Fields
			private readonly Tween t;
			private readonly float position;
	
			// Properties
			public override bool keepWaiting { get; }
	
			// Constructors
			public WaitForPosition(Tween tween, float position);
		}
	
		public class WaitForStart : CustomYieldInstruction
		{
			// Fields
			private readonly Tween t;
	
			// Properties
			public override bool keepWaiting { get; }
	
			// Constructors
			public WaitForStart(Tween tween);
		}
	}
}
