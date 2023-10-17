/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

internal class ESTranslate : ESStateBase
{
	// Fields
	public const string TranslateModeType = "translateMode";
	public const string MoveWithAvatar = "moveWithAvatar";
	private float gridSize;
	private float stickyModifier;
	private float completelyStuckLimit;
	private bool recalcLocalDirCamToObjects;
	private List<TranslateData> translateDatas;
	private List<MVWorldObjectClient> targets;
	private const float _mouseSensitivity = 0.005f;
	private float initialDistance;
	private Vector3 originPrevFrame;
	private bool playTranslateSounds;
	private float scrollMoveDistance;
	private TranslateMode translateMode;
	private HashSet<int> woIds;
	private bool fixedToYPlane;
	private bool moveWithAvatar;
	private bool enteredStateWithPointerSelectReleased;

	// Constructors
	public ESTranslate();

	// Methods
	public override void Enter(EditorStateMachine e);
	public override void Execute(EditorStateMachine e);
	private bool IsValid();
	private void UpdateLaserPosition(List<MVWorldObjectClient> wos);
	public override void Exit(EditorStateMachine e);
	private bool GetInitialAvatarMoveObjectHitDistance(EditorStateMachine e, ref float hitDistance);
	private float GetInitialAvatarMoveObjectDistance(EditorStateMachine e);
	private void RotateWithCamera(EditorStateMachine e, int targetIndex);
	private Vector3 GetDeltaMouse(EditorStateMachine e);
}

