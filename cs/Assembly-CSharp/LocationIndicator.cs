/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.Common;
using UnityEngine;
using UnityEngine.UI;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

internal class LocationIndicator : MonoBehaviour
{
	// Fields
	private static readonly Vector3 AvatarPosOffset;
	private const float ZThreshold = 0.75f;
	[SerializeField]
	private LayoutGroup layoutGroup;
	[SerializeField]
	private RectTransform textRectTransform;
	[SerializeField]
	private UnityEngine.UI.Text nameText;
	[SerializeField]
	private UnityEngine.UI.Text ownershipText;
	[SerializeField]
	private UnityEngine.UI.Text distanceText;
	[SerializeField]
	private RectTransform arrow;
	private MVPlayer player;
	private MVWorldObjectClient avatar;
	private RectTransform rectTransform;
	private float width;
	private float height;

	// Properties
	private Vector2 Padding { get; }
	private Vector2 Min { get; }
	private Vector2 Max { get; }

	// Constructors
	public LocationIndicator();
	static LocationIndicator();

	// Methods
	public void Awake();
	public void Initialize(MVPlayer player);
	public void SetPermisisons(List<PlanetPermissionType> permissions);
	private void SetTextRectSize();
	private void Update();
	private Vector3 GetAvatarScreenPoint(Vector3 avatarPos, float distance);
	private Vector3 FlipScreenPoint(Vector3 screenPoint);
	private Vector3 CompensateSideTargetAccuracy(Vector3 screenPoint, float sideMeasurement);
	private void SetVisibility(bool isVisible);
	private bool SetIndicatorPosition(Vector3 screenPoint);
	private void SetArrowVisibilityAndRotation(Vector3 screenPoint);
	private void SetAlignments(Vector3 screenPoint);
	private void SetDistanceText(float distance);
}

