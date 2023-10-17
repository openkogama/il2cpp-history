/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class AvatarEditModeCamera : JetPackCamera
{
	// Properties
	public override CameraType CameraType { get; }

	// Nested types
	[Serializable]
	[CompilerGenerated]
	private sealed class __c
	{
		// Fields
		public static readonly __c __9;
		public static Func<MVWorldObjectClient, bool> __9__2_0;

		// Constructors
		static __c();
		public __c();

		// Methods
		internal bool _ResetPosition_b__2_0(MVWorldObjectClient wo);
	}

	// Constructors
	public AvatarEditModeCamera();

	// Methods
	public void ResetPosition(Vector3 lookAtPosition);
}

