/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.UI;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class WinningConditionBriefingLayoutFitter : MonoBehaviour
{
	// Fields
	[SerializeField]
	private VerticalLayoutGroup layoutGroup;
	[SerializeField]
	private List<LayoutGroupAspectFitterDef> elements;
	[SerializeField]
	private float groupAspectRatio;
	private Vector2 desktopReferenceRes;
	private float defaultSpacing;
	private Vector2 referenceRes;

	// Nested types
	[Serializable]
	private class LayoutGroupAspectFitterDef
	{
		// Fields
		public LayoutGroup layoutGroup;
		public LayoutElement group;
		public List<LayoutElement> elements;
		public float elementAspectRatio;

		// Constructors
		public LayoutGroupAspectFitterDef();
	}

	// Constructors
	public WinningConditionBriefingLayoutFitter();

	// Methods
	private void Start();
	public void FixAspectRatio();
	private void AdjustElement(LayoutGroupAspectFitterDef layoutElement);
}

