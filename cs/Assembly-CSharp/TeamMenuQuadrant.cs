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

	// Nested types
	[Serializable]
	[CompilerGenerated]
	private sealed class __c
	{
		// Fields
		public static readonly __c __9;
		public static ExecuteEvents.EventFunction<IUIStack> __9__7_0;

		// Constructors
		static __c();
		public __c();

		// Methods
		internal void _TeamSelected_b__7_0(IUIStack x, BaseEventData y);
	}

	// Constructors
	public TeamMenuQuadrant();

	// Methods
	public void Initialize(TeamData teamData);
	public void TeamSelected();
}

