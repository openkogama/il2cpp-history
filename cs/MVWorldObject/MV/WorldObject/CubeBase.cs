/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Runtime.Versioning;
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
[assembly: TargetFramework(".NETFramework,Version=v4.8", FrameworkDisplayName = ".NET Framework 4.8")]

namespace MV.WorldObject
{
	public class CubeBase
	{
		// Fields
		protected byte unIndentedSides;
		protected static byte[] identityByteCorners;
		protected byte[] byteCorners;
		protected byte[] faceMaterials;
		private static readonly FaceFlags[] faceFlagsArray;
	
		// Properties
		public byte[] ByteCorners { get; }
		public byte[] FaceMaterials { get; }
		public static byte[] IdentityByteCorners { get; }
		public static Vector3[] IdentityCorners { get; }
		public Vector3[] Corners { get; set; }
		public static FaceFlags[] FaceFlagsArray { get; }
		public byte UnIndentedSides { get; set; }
	
		// Constructors
		public CubeBase(byte[] byteCorners, byte[] faceMaterials);
		public CubeBase(BytePacker bp, byte byteFlags);
		public CubeBase(byte material);
		static CubeBase();
	
		// Methods
		public static void GetCorners(CubeBase cube, ref Vector3[] corners);
		public static byte GetMaterial(CubeBase cube, Face face);
		public override bool Equals(object obj);
		public bool Equals(CubeBase cube);
		public static bool operator ==(CubeBase a, CubeBase b);
		public static bool operator !=(CubeBase a, CubeBase b);
		public override int GetHashCode();
		public static void SetCubeFlags(CubeBase cube);
		public static Face FaceFlagToFace(FaceFlags faceFlag);
		public static FaceFlags FaceToFaceFlag(Face face);
		public static void GetFace(ref Vector3[] corners, ref Vector3[] faceVertices, Face face);
	}
}
