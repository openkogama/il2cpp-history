/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.UI;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class PleaseWaitPopup : MonoBehaviour
{
	// Fields
	[SerializeField]
	private RectTransform rectTransform;
	[SerializeField]
	private float spinSpeed;
	[SerializeField]
	private CanvasGroup popUpcanvasGroup;
	[SerializeField]
	private AnimationCurve alphaCurveOverTime;
	[SerializeField]
	private float fullyRevealedTime;
	[SerializeField]
	private Image fullScreenBackGround;
	[SerializeField]
	private float fullScreenBackGroundMaxAlpha;
	private readonly Vector3 direction;
	private float timeSinceStart;

	// Constructors
	public PleaseWaitPopup();

	// Methods
	private void Update();
}

