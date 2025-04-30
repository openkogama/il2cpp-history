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
[assembly: TargetFramework(".NETFramework,Version=v4.8", FrameworkDisplayName = ".NET Framework 4.8")]

namespace MV.WorldObject
{
	public class MVItem
	{
		// Fields
		public int itemID;
		public int itemCategoryID;
		public int itemTypeID;
		public int originalItemID;
		public int marketPlaceItemID;
		public string name;
		public string description;
		public byte[] data;
		public bool hasData;
		public bool resellable;
		public int authorProfileID;
		public int shopInventoryID;
		public int priceGold;
		public bool isDeleted;
		public string imagePath;
	
		// Constructors
		public MVItem();
	
		// Methods
		public override string ToString();
	}
}
