/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.Common;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace Assets.Scripts.GamePasses
{
	public class TogglePreviewState
	{
		// Fields
		public readonly GamePassTier previewTier;
		private readonly GamePassTier currentTier;
		private bool freeTry;
	
		// Properties
		public bool FreeTryWithoutAdAvailable { get; set; }
		public bool IsOn { get; }
		public bool CanToggle { get; }
	
		// Constructors
		public TogglePreviewState(GamePassTier previewTier, GamePassTier currentTier, bool freeFirstTry);
	}
}
