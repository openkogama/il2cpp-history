/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using DG.Tweening.Core;
using DG.Tweening.Core.Enums;

// Image 16: DOTween.dll - Assembly: DOTween, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null

namespace DG.Tweening
{
	public sealed class Sequence : Tween
	{
		// Fields
		internal readonly List<Tween> sequencedTweens;
		private readonly List<ABSSequentiable> _sequencedObjs;
		internal float lastTweenInsertTime;
	
		// Constructors
		internal Sequence();
	
		// Methods
		internal static Sequence DoInsert(Sequence inSequence, Tween t, float atPosition);
		internal override float UpdateDelay(float elapsed);
		internal override void Reset();
		internal override bool Startup();
		internal override bool ApplyTween(float prevPosition, int prevCompletedLoops, int newCompletedSteps, bool useInversePosition, DG.Tweening.Core.Enums.UpdateMode updateMode, UpdateNotice updateNotice);
		internal static void Setup(Sequence s);
		internal static bool DoStartup(Sequence s);
		internal static bool DoApplyTween(Sequence s, float prevPosition, int prevCompletedLoops, int newCompletedSteps, bool useInversePosition, DG.Tweening.Core.Enums.UpdateMode updateMode);
		private static bool ApplyInternalCycle(Sequence s, float fromPos, float toPos, DG.Tweening.Core.Enums.UpdateMode updateMode, bool useInverse, bool prevPosIsInverse, bool multiCycleStep = false);
		private static void StableSortSequencedObjs(List<ABSSequentiable> list);
		private static bool IsAnyCallbackSet(Sequence s);
	}
}
