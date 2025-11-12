/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;

// Image 16: DOTween.dll - Assembly: DOTween, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null

namespace DG.Tweening.Core
{
	internal struct SafeModeReport
	{
		// Fields
		[CompilerGenerated]
		private int _totMissingTargetOrFieldErrors_k__BackingField;
		[CompilerGenerated]
		private int _totCallbackErrors_k__BackingField;
		[CompilerGenerated]
		private int _totStartupErrors_k__BackingField;
		[CompilerGenerated]
		private int _totUnsetErrors_k__BackingField;
	
		// Properties
		public int totMissingTargetOrFieldErrors { [CompilerGenerated] get; [CompilerGenerated] private set; }
		public int totCallbackErrors { [CompilerGenerated] get; [CompilerGenerated] private set; }
		public int totStartupErrors { [CompilerGenerated] get; [CompilerGenerated] private set; }
		public int totUnsetErrors { [CompilerGenerated] get; [CompilerGenerated] private set; }
	
		// Nested types
		internal enum SafeModeReportType
		{
			Unset = 0,
			TargetOrFieldMissing = 1,
			Callback = 2,
			StartupFailure = 3
		}
	
		// Methods
		public void Add(SafeModeReportType type);
		public int GetTotErrors();
	}
}
