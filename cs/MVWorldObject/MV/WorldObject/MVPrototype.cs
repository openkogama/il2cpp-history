/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;

// Image 6: MVWorldObject.dll - Assembly: MVWorldObject, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null

namespace MV.WorldObject
{
	public class MVPrototype
	{
		// Fields
		protected int id;
		protected int itemID;
		protected int typeID;
		protected string name;
		protected Dictionary<object, object> data;
		protected float scale;
		protected int insertedInWorldByProfileID;
		protected int instanceCounter;
		private EventHandler<LastInstanceRemovedEventArgs> LastInstanceRemoved;
	
		// Properties
		public int ID { get; set; }
		public int ItemID { get; set; }
		public int TypeID { get; set; }
		public string Name { get; set; }
		public Dictionary<object, object> Data { get; set; }
		public float Scale { get; set; }
		public bool IsEmpty { get; }
		public int InsertedInWorldByProfileID { get; set; }
		public int InstanceCounter { get; set; }
	
		// Events
		public event EventHandler<LastInstanceRemovedEventArgs> LastInstanceRemoved {
			add;
			remove;
		}
	
		// Constructors
		public MVPrototype();
	
		// Methods
		public static byte[] GetPrototypeData(Dictionary<IntVector, byte[]> cubeDict);
		public virtual MVPrototype ShallowCopy();
		public virtual MVPrototype DeepCopy();
	}
}
