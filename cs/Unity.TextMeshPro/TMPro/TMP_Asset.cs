/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.Serialization;
using UnityEngine.TextCore;

// Image 7: Unity.TextMeshPro.dll - Assembly: Unity.TextMeshPro, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace TMPro
{
	[Serializable]
	public abstract class TMP_Asset : ScriptableObject
	{
		// Fields
		[SerializeField]
		internal string m_Version;
		internal int m_InstanceID;
		internal int m_HashCode;
		[SerializeField]
		internal FaceInfo m_FaceInfo;
		[FormerlySerializedAs("material")]
		[SerializeField]
		internal Material m_Material;
		internal int m_MaterialHashCode;
	
		// Properties
		public string version { get; internal set; }
		public int instanceID { get; }
		public int hashCode { get; set; }
		public FaceInfo faceInfo { get; set; }
		public Material material { get; set; }
		public int materialHashCode { get; set; }
	
		// Constructors
		protected TMP_Asset();
	}
}
