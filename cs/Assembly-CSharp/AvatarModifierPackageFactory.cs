/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public static class AvatarModifierPackageFactory
{
	// Fields
	private static Dictionary<AvatarModifierPackageType, AvatarModifierPackage> protoPackages;

	// Nested types
	[CompilerGenerated]
	private sealed class __c__DisplayClass0_0
	{
		// Fields
		public float c;

		// Constructors
		public __c__DisplayClass0_0();

		// Methods
		internal float _Const_b__0();
	}

	// Constructors
	static AvatarModifierPackageFactory();

	// Methods
	public static Func<float> Const(float c);
	private static AvatarModifierPackage AssembleInvulnerabilityPackage(AvatarModifierPackageType type, float time);
	public static AvatarModifierPackage GetPackage(AvatarModifierPackageType packageType);
}

