/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.UI;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class DesktopCubeModelingToolsController : MonoBehaviour
{
	// Fields
	private CubeModelingStateMachine cubeModelingStateMachine;
	[SerializeField]
	private Button defaultTool;
	[SerializeField]
	protected Button editCube;
	[SerializeField]
	protected Button deletecube;
	[SerializeField]
	protected Button paintCube;
	[SerializeField]
	private float disabledAlpha;
	[SerializeField]
	private float enabledAlpha;
	[CompilerGenerated]
	[DebuggerBrowsable]
	private CubeModelingEvent _ActiveTool_k__BackingField;

	// Properties
	public CubeModelingEvent ActiveTool { [CompilerGenerated] get; [CompilerGenerated] private set; }

	// Constructors
	public DesktopCubeModelingToolsController();

	// Methods
	private void Awake();
	public CubeModelingStateMachine.HoverType CurrentlyHovered();
	public virtual void SetupButtons();
	public void Initialize(CubeModelingStateMachine cubeModelingStateMachine);
	private void Start();
	protected void SetToolActive(CubeModelingEvent cubeTool);
	private void SetButtonTransparency(CubeModelingEvent cubeTool);
	public void Select(CubeModelingEvent tool);
	public void SetAllToTransparent();
	private void SetAlpha(Image image, float alpha);
	[CompilerGenerated]
	private void _SetupButtons_m__0();
	[CompilerGenerated]
	private void _SetupButtons_m__1();
	[CompilerGenerated]
	private void _SetupButtons_m__2();
}

