/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 7: Unity.TextMeshPro.dll - Assembly: Unity.TextMeshPro, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace TMPro
{
	internal interface ITweenValue
	{
		// Properties
		bool ignoreTimeScale { get; }
		float duration { get; }
	
		// Methods
		void TweenValue(float floatPercentage);
		bool ValidTarget();
	}
}
