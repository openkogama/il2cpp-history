/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.UI;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class DesktopCubeModelingToolsController : MonoBehaviour
{
	// Fields
	[SerializeField]
	private UnityEngine.UI.Button defaultTool;
	[Header("Buttons")]
	[SerializeField]
	protected UnityEngine.UI.Button editCube;
	[SerializeField]
	protected UnityEngine.UI.Button deletecube;
	[SerializeField]
	protected UnityEngine.UI.Button paintCube;
	[SerializeField]
	protected UnityEngine.UI.Button pickCubeColor;
	[Header("Settings")]
	[SerializeField]
	private float disabledAlpha;
	[SerializeField]
	private float enabledAlpha;
	private CubeModelingStateMachine cubeModelingStateMachine;
	[CompilerGenerated]
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
	public void SwitchToDefaultTool();
	[CompilerGenerated]
	private void _SetupButtons_b__14_0();
	[CompilerGenerated]
	private void _SetupButtons_b__14_1();
	[CompilerGenerated]
	private void _SetupButtons_b__14_2();
	[CompilerGenerated]
	private void _SetupButtons_b__14_3();
}

