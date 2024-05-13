/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Runtime.Versioning;

// Image 13: MVWorldObject.dll - Assembly: MVWorldObject, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null

namespace MV.WorldObject.KogamaSettings.SpecializedSettingsTypes.AttributeSettings.AttributePointCalculators
{
	public struct APIntCalcZeroValueLinear : IAttributePointIntCalculator
	{
		// Fields
		private readonly float exchangeRatePositive;
		private readonly float exchangeRateNegative;
		private int zeroValue;
	
		// Constructors
		public APIntCalcZeroValueLinear(int zeroValue, float exchangeRate);
		public APIntCalcZeroValueLinear(int zeroValue, float exchangeRatePositive, float exchangeRateNegative);
	
		// Methods
		public int Calc(int i);
		public override string ToString();
	}
}
