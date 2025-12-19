/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Text;

// Image 16: DOTween.dll - Assembly: DOTween, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
[assembly: AssemblyCompany("Demigiant")]
[assembly: AssemblyConfiguration("")]
[assembly: AssemblyCopyright("Copyright \u00A9 Daniele Giardini, 2014")]
[assembly: AssemblyDescription("")]
[assembly: AssemblyFileVersion("1.0.0.0")]
[assembly: AssemblyProduct("DOTween")]
[assembly: AssemblyTitle("DOTween")]
[assembly: AssemblyTrademark("")]
[assembly: CompilationRelaxations(8)]
[assembly: ComVisible(false)]
[assembly: Debuggable(DebuggableAttribute.DebuggingModes.None | DebuggableAttribute.DebuggingModes.IgnoreSymbolStoreSequencePoints)]
[assembly: Guid("807e068c-2a0e-4c81-a303-4b4fd3924511")]
[assembly: InternalsVisibleTo("DOTweenEditor")]
[assembly: InternalsVisibleTo("DOTween43")]
[assembly: InternalsVisibleTo("DOTween46")]
[assembly: InternalsVisibleTo("DOTween50")]
[assembly: InternalsVisibleTo("DOTweenPro")]
[assembly: InternalsVisibleTo("DOTweenProEditor")]
[assembly: RuntimeCompatibility(WrapNonExceptionThrows = true)]

namespace DG.Tweening.Plugins
{
	internal static class StringPluginExtensions
	{
		// Fields
		public static readonly char[] ScrambledCharsAll;
		public static readonly char[] ScrambledCharsUppercase;
		public static readonly char[] ScrambledCharsLowercase;
		public static readonly char[] ScrambledCharsNumerals;
		private static int _lastRndSeed;
	
		// Constructors
		static StringPluginExtensions();
	
		// Extension methods
		internal static void ScrambleChars(this char[] chars);
		internal static StringBuilder AppendScrambledChars(this StringBuilder buffer, int length, char[] chars);
	}
}
