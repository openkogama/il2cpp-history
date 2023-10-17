/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace AntiHack
{
	public class MaterialPlaneRenderer : MonoBehaviour
	{
		// Fields
		[SerializeField]
		private Camera cam;
		[SerializeField]
		private Mesh plane;
		[SerializeField]
		private Material material;
		[SerializeField]
		private List<Texture2D> textures;
		private List<byte> hashes;
		private RenderTextureDescriptor renderTextureDesc;
		private RenderTexture renderTexture;
		private static bool errorReportSent;
	
		// Constructors
		public MaterialPlaneRenderer();
	
		// Methods
		protected void OnValidate();
		protected void OnPostRender();
		public void Initialize();
		public bool VerifyTextureIntegrity();
		private void GenerateNewHashes();
		private void OnPostRender_GenerateNewHashes();
		private byte CalculateHash(RenderTexture renderTexture);
		private byte CalculateHash(Texture2D texture);
	}
}
