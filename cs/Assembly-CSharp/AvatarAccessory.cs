/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public abstract class AvatarAccessory : MonoBehaviour
{
	// Fields
	[CompilerGenerated]
	[DebuggerBrowsable]
	private string _AssetPath_k__BackingField;
	[CompilerGenerated]
	[DebuggerBrowsable]
	private float _Offset_k__BackingField;
	[CompilerGenerated]
	[DebuggerBrowsable]
	private float _Scale_k__BackingField;
	private Transform _transform;
	private Collider[] _colliders;
	private Renderer[] _renderers;
	private bool _visible;

	// Properties
	public abstract AccessorySettings AccessorySettings { get; }
	public string AssetPath { [CompilerGenerated] get; [CompilerGenerated] private set; }
	public float Offset { [CompilerGenerated] get; [CompilerGenerated] set; }
	public float Scale { [CompilerGenerated] get; [CompilerGenerated] set; }
	public Transform Transform { get; }
	public Collider[] Colliders { get; }
	public Renderer[] Renderers { get; }
	public bool Visible { get; set; }
	public virtual Vector3 AttachmentPointWorldPos { get; }
	public virtual bool HasAttachmentPoint { get; }

	// Constructors
	protected AvatarAccessory();

	// Methods
	protected virtual void Awake();
	protected virtual void Start();
	protected virtual void Update();
	public virtual Bounds GetWorldBounds();
	public virtual Bounds GetLocalBounds();
	public virtual void InitAccessory(string assetReqPath, string bundleName);
}

