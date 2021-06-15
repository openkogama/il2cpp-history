/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.Common;
using MV.WorldObject;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.EventSystems;
using UnityEngine.UI;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class DefaultSpawnRoleSelectionElement : MonoBehaviour, IPointerDownHandler, IPointerUpHandler
{
	// Fields
	[SerializeField]
	protected RawImage spawnRoleImage;
	[SerializeField]
	protected SpawnRolePreviewer spawnRolePreviewerPrefab;
	[SerializeField]
	protected int previewWidth;
	[SerializeField]
	protected int previewHeight;
	protected bool isSelected;
	protected int spawnRoleIndex;
	protected int woId;
	protected UnityAction<int> onSelectedCallback;
	protected UnityAction<int> onActivatedCallback;
	protected SpawnRolePreviewer spawnRolePreviewer;
	protected GameObject spawnRolePreviewObject;
	protected bool isDragging;

	// Properties
	public bool IsDragging { set; }
	public int WOID { get; }
	public virtual GamePassTier Tier { get; }

	// Constructors
	public DefaultSpawnRoleSelectionElement();

	// Methods
	public virtual void Initialize(int spawnRoleIndex, int woId, GamePassTier tierRequirement, MVTeam team, UnityAction<int> onSelectedCallback, UnityAction<int> onActivatedCallback);
	public void SetupPreviewImage(GameObject spawnRoleObject);
	public virtual void Select();
	public virtual void OnSelctionHighlight();
	public virtual void OnSelected();
	public virtual void OnUnSelected();
	public virtual void UpdateButtonUI();
	public void OnPointerDown(PointerEventData eventData);
	public void OnPointerUp(PointerEventData eventData);
	public void Activate();
	public void Deactivate();
	protected virtual void OnDestroy();
}

