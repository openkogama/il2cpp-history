/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class SpawnRoleLooksEditorMenu : MonoBehaviour
{
	// Fields
	[SerializeField]
	private RawImage spawnRoleAvatarPreviewImage;
	[SerializeField]
	private SpawnRoleAvatarSelectionMenu avatarSelectionMenuPrefab;
	[SerializeField]
	private SpawnRolePreviewer spawnRolePreviewerPrefab;
	[SerializeField]
	private int previewWidth;
	[SerializeField]
	private int previewHeight;
	private int spawnRoleId;
	private SpawnRolePreviewer spawnRolePreviewer;
	private MVAvatarSpawnRoleCreator spawnRole;
	private int renewPreviewerFrameDelay;

	// Nested types
	[CompilerGenerated]
	private sealed class _OnAvatarChangeButtonPressed_c__AnonStorey0
	{
		// Fields
		internal SpawnRoleAvatarSelectionMenu avatarSelectionMenu;

		// Constructors
		public _OnAvatarChangeButtonPressed_c__AnonStorey0();

		// Methods
		internal void __m__0(IUIStack x, BaseEventData y);
	}

	// Constructors
	public SpawnRoleLooksEditorMenu();

	// Methods
	public void Initialize(int spawnRoleId, MVAvatarSpawnRoleCreator spawnRole);
	public void OnAvatarChangeButtonPressed();
	private void Update();
	private void SetupPreviewImage(GameObject spawnRolePreviewObject);
	private void OnSpawnRoleBodyUpdate();
	private void OnDestroy();
}

