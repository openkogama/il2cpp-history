/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 7: Unity.TextMeshPro.dll - Assembly: Unity.TextMeshPro, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace TMPro
{
	[Serializable]
	public class TMP_TextInfo
	{
		// Fields
		internal static Vector2 k_InfinityVectorPositive;
		internal static Vector2 k_InfinityVectorNegative;
		public TMP_Text textComponent;
		public int characterCount;
		public int spriteCount;
		public int spaceCount;
		public int wordCount;
		public int linkCount;
		public int lineCount;
		public int pageCount;
		public int materialCount;
		public TMP_CharacterInfo[] characterInfo;
		public TMP_WordInfo[] wordInfo;
		public TMP_LinkInfo[] linkInfo;
		public TMP_LineInfo[] lineInfo;
		public TMP_PageInfo[] pageInfo;
		public TMP_MeshInfo[] meshInfo;
		private TMP_MeshInfo[] m_CachedMeshInfo;
	
		// Constructors
		public TMP_TextInfo();
		internal TMP_TextInfo(int characterCount);
		public TMP_TextInfo(TMP_Text textComponent);
		static TMP_TextInfo();
	
		// Methods
		internal void Clear();
		internal void ClearAllData();
		public void ClearMeshInfo(bool updateMesh);
		public void ClearAllMeshInfo();
		public void ResetVertexLayout(bool isVolumetric);
		public void ClearUnusedVertices(MaterialReference[] materials);
		internal void ClearLineInfo();
		internal void ClearPageInfo();
		public TMP_MeshInfo[] CopyMeshInfoVertexData();
		public static void Resize<T>(ref ref T[] array, int size);
		public static void Resize<T>(ref ref T[] array, int size, bool isBlockAllocated);
	}
}
