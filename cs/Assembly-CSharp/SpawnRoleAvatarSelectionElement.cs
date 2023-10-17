/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.UI;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class SpawnRoleAvatarSelectionElement : MonoBehaviour
{
	// Fields
	[SerializeField]
	private RawImage avatarImage;
	[SerializeField]
	private Image noAvatarImage;
	[SerializeField]
	private SpawnRolePreviewer spawnRolePreviewerPrefab;
	[SerializeField]
	private int previewWidth;
	[SerializeField]
	private int previewHeight;
	private int elementIndex;
	private int avatarId;
	private SpawnRolePreviewer spawnRolePreviewer;
	private UnityAction<int> onSelectedCallback;

	// Constructors
	public SpawnRoleAvatarSelectionElement();

	// Methods
	public void Initialize(int elementIndex, int avatarId, UnityAction<int> onSelectedCallback);
	public void OnSelected();
	public void SetupPreviewImage(GameObject spawnRoleObject);
	public void Activate();
	public void Deactivate();
	private void OnDestroy();
}

