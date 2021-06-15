/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class WaterSplashComponent : MonoBehaviour
{
	// Fields
	protected IMovable movingObject;
	protected Bounds bounds;
	private Vector3 offset;
	private int waterObjectID;

	// Constructors
	public WaterSplashComponent();

	// Methods
	public virtual void Initialize(IMovable obj);
	protected virtual void Start();
	protected virtual void Update();
}

