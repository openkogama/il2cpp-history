/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Runtime.Versioning;
using MV.Common;
using MV.WorldObject;

// Image 13: MVWorldObject.dll - Assembly: MVWorldObject, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null

namespace MV.WorldObject.RuntimeEvents
{
	public class SingleCubeFineGrainedEvent : RuntimeEvent
	{
		// Fields
		private readonly byte material;
	
		// Properties
		public byte Material { get; }
		public override byte[] Data { get; }
	
		// Constructors
		public SingleCubeFineGrainedEvent(IntVector position, byte material);
		public SingleCubeFineGrainedEvent(IntVector position);
		public SingleCubeFineGrainedEvent(RuntimeEventType runtimeEventType, BytePacker bp);
	
		// Methods
		public void OverrideRuntimeType(RuntimeEventType runtimeEventType);
		public override string ToString();
	}
}
