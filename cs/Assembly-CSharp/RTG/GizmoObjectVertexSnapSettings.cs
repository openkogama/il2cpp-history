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
	[Serializable]
	public class GizmoObjectVertexSnapSettings : Settings
	{
		// Fields
		[SerializeField]
		private int _snapDestinationLayers;
		[SerializeField]
		private bool _canSnapToGrid;
		[SerializeField]
		private bool _canSnapToObjectVerts;
	
		// Properties
		public int SnapDestinationLayers { get; set; }
		public bool CanSnapToGrid { get; set; }
		public bool CanSnapToObjectVerts { get; set; }
	
		// Constructors
		public GizmoObjectVertexSnapSettings();
	
		// Methods
		public bool IsLayerSnapDestination(int objectLayer);
		public void SetLayerSnapDestination(int objectLayer, bool isSnapDestination);
		public void Transfer(GizmoObjectVertexSnapSettings destination);
	}
}
