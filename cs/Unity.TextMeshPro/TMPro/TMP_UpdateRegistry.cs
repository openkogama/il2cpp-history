/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine.UI;

// Image 7: Unity.TextMeshPro.dll - Assembly: Unity.TextMeshPro, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace TMPro
{
	public class TMP_UpdateRegistry
	{
		// Fields
		private static TMP_UpdateRegistry s_Instance;
		private readonly List<ICanvasElement> m_LayoutRebuildQueue;
		private HashSet<int> m_LayoutQueueLookup;
		private readonly List<ICanvasElement> m_GraphicRebuildQueue;
		private HashSet<int> m_GraphicQueueLookup;
	
		// Properties
		public static TMP_UpdateRegistry instance { get; }
	
		// Constructors
		protected TMP_UpdateRegistry();
	
		// Methods
		public static void RegisterCanvasElementForLayoutRebuild(ICanvasElement element);
		private bool InternalRegisterCanvasElementForLayoutRebuild(ICanvasElement element);
		public static void RegisterCanvasElementForGraphicRebuild(ICanvasElement element);
		private bool InternalRegisterCanvasElementForGraphicRebuild(ICanvasElement element);
		private void PerformUpdateForCanvasRendererObjects();
		private void PerformUpdateForMeshRendererObjects();
		public static void UnRegisterCanvasElementForRebuild(ICanvasElement element);
		private void InternalUnRegisterCanvasElementForLayoutRebuild(ICanvasElement element);
		private void InternalUnRegisterCanvasElementForGraphicRebuild(ICanvasElement element);
	}
}
