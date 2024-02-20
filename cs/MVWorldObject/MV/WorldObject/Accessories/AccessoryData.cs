/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using MV.Common;

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

namespace MV.WorldObject.Accessories
{
	public class AccessoryData
	{
		// Fields
		public int aMDID;
		public int sAID;
		public bool iAvlb;
		public bool iNew;
		public bool iFtr;
		public int cost;
		public int dsc;
		public int lvl;
		public string name;
		public AccessoryCategory cat;
		public int pos;
		public string url;
		public bool owns;
		public AccessorySlotType slot;
		public AccessoryTimelimit time;
	
		// Properties
		public int DiscountedPrice { get; }
	
		// Constructors
		public AccessoryData();
	
		// Methods
		public override string ToString();
		public bool GetShowInShop();
	}
}
