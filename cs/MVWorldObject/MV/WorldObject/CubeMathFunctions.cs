/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using UnityEngine;

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

namespace MV.WorldObject
{
	public static class CubeMathFunctions
	{
		// Methods
		public static IntVector LocalPosToLocalIntVector(Vector3 localPos);
		public static Vector3 LocalIntVectorToLocalPos(IntVector localIntVector);
		public static IntVector WorldPosToFineGrainedLocalPos(Vector3 worldPos);
		public static IntVector WorldPosToFineGrainedLocalPos(Vector3 worldPos, Vector3 normal);
		public static Vector3 FineGrainedLocalPosToWorldPos(IntVector intVector);
		public static Vector3 FineGrainedLocalPosToTerrainLocalPos(IntVector intVector);
		public static IntVector FromLocalPosToLocalPos(IntVector fineGrainedPosition, ICubeModel terrainWorldObject, ICubeModel fineGrainedTerrainWorldObject);
	}
}
