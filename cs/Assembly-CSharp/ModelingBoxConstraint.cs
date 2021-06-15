/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.WorldObject;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class ModelingBoxConstraint : IModelingConstraint
{
	// Fields
	private ObscuredIntVector minCorner;
	private ObscuredIntVector maxCorner;
	[CompilerGenerated]
	[DebuggerBrowsable]
	private Vector3 _FMinCorner_k__BackingField;
	[CompilerGenerated]
	[DebuggerBrowsable]
	private Vector3 _FMaxCorner_k__BackingField;
	private Vector3 center;
	[CompilerGenerated]
	[DebuggerBrowsable]
	private EventHandler<ConstraintBoxChangedEventArgs> BoxChanged;
	[CompilerGenerated]
	private static EventHandler<ConstraintBoxChangedEventArgs> __f__am_cache0;

	// Properties
	public ObscuredIntVector MinCorner { get; protected set; }
	public ObscuredIntVector MaxCorner { get; protected set; }
	public Vector3 FMinCorner { [CompilerGenerated] get; [CompilerGenerated] private set; }
	public Vector3 FMaxCorner { [CompilerGenerated] get; [CompilerGenerated] private set; }
	public Vector3 Center { get; protected set; }

	// Events
	public event EventHandler<ConstraintBoxChangedEventArgs> BoxChanged {
		add;
		remove;
	}

	// Constructors
	public ModelingBoxConstraint(IntVector size);
	public ModelingBoxConstraint(IntVector minCorner, IntVector maxCorner);

	// Methods
	protected void ChangeBox(IntVector minCorner, IntVector maxCorner);
	protected virtual void OnBoxChanged(ConstraintBoxChangedEventArgs args);
	public virtual bool CanAddCubeAt(IntVector pos);
	public virtual bool CanRemoveCubeAt(IntVector pos);
	public virtual bool CanEditCubeAt(IntVector pos);
	[CompilerGenerated]
	private static void _BoxChanged_m__0(object param_00005aee, ConstraintBoxChangedEventArgs param_00005aef);
}

