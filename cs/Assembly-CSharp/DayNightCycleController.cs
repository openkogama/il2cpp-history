/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.UI;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class DayNightCycleController : MonoBehaviour
{
	// Fields
	[Header]
	[SerializeField]
	private Toggle playToggle;
	[SerializeField]
	private Image playImage;
	[SerializeField]
	private Image pauseImage;
	[SerializeField]
	private DayNightSlider slider;
	[SerializeField]
	private RectTransform trackFill;
	private DayNightCycle cycle;

	// Constructors
	public DayNightCycleController();

	// Methods
	public void Initialize(DayNightCycle cycle);
	protected void Update();
	protected void OnDestroy();
	public void OnToggle(bool play);
	public void SetSimulationTime();
	private void UpdateTrackBackground();
}

