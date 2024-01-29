/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;

// Image 13: MVWorldObject.dll - Assembly: MVWorldObject, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
[assembly: AssemblyCompany("Microsoft")]
[assembly: AssemblyConfiguration("")]
[assembly: AssemblyCopyright("Copyright \u00A9 Microsoft 2011")]
[assembly: AssemblyDescription("")]
[assembly: AssemblyFileVersion("1.0.0.0")]
[assembly: AssemblyProduct("MVWorldObject")]
[assembly: AssemblyTitle("MVWorldObject")]
[assembly: AssemblyTrademark("")]
[assembly: CompilationRelaxations(8)]
[assembly: ComVisible(false)]
[assembly: Debuggable(DebuggableAttribute.DebuggingModes.None | DebuggableAttribute.DebuggingModes.IgnoreSymbolStoreSequencePoints)]
[assembly: Guid("f4b63207-de1c-4bfa-acdb-fa237d94ed1b")]
[assembly: RuntimeCompatibility(WrapNonExceptionThrows = true)]

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
