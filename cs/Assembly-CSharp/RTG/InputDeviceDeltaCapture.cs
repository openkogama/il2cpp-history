/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace RTG
{
	public class InputDeviceDeltaCapture
	{
		// Fields
		private int _id;
		private Vector3 _origin;
		private Vector3 _delta;
	
		// Properties
		public int Id { get; }
		public Vector3 Origin { get; }
		public Vector3 Delta { get; }
	
		// Constructors
		public InputDeviceDeltaCapture(int id, Vector3 origin);
	
		// Methods
		public void Update(Vector3 devicePosition);
	}
}
