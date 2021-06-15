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

public class TeamMenuQuadrant : MonoBehaviour
{
	// Fields
	private TeamData teamData;
	[SerializeField]
	private UnityEngine.UI.Text players;
	[SerializeField]
	private UnityEngine.UI.Text score;
	[SerializeField]
	private Image header;
	[SerializeField]
	private Image buttonImage;
	[SerializeField]
	private Image teamImage;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache0;

	// Constructors
	public TeamMenuQuadrant();

	// Methods
	public void Initialize(TeamData teamData);
	public void TeamSelected();
	[CompilerGenerated]
	private static void _TeamSelected_m__0(IUIStack x, BaseEventData y);
}

