/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

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
	[Serializable]
	[CompilerGenerated]
	private sealed class __c
	{
		// Fields
		public static readonly __c __9;
		public static ExecuteEvents.EventFunction<IModalPopupCreator> __9__10_0;

		// Constructors
		static __c();
		public __c();

		// Methods
		internal void _OnSpawnRoleRedoObjectLinks_b__10_0(IModalPopupCreator x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass11_0
	{
		// Fields
		public SpawnRoleAvatarSelectionMenu avatarSelectionMenu;

		// Constructors
		public __c__DisplayClass11_0();

		// Methods
		internal void _OnAvatarChangeButtonPressed_b__0(IUIStack x, BaseEventData y);
	}

	// Constructors
	public SpawnRoleLooksEditorMenu();

	// Methods
	public void Initialize(int spawnRoleId, MVAvatarSpawnRoleCreator spawnRole);
	private void OnSpawnRoleRedoObjectLinks();
	public void OnAvatarChangeButtonPressed();
	private void Update();
	private void SetupPreviewImage(GameObject spawnRolePreviewObject);
	private void OnSpawnRoleBodyUpdate();
	private void OnDestroy();
}

