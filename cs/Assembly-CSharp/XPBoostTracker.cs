/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.UI;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class XPBoostTracker : MonoBehaviour
{
	// Fields
	[SerializeField]
	private UnityEngine.UI.Text XPBoostText;
	private int memberCount;
	private int localActorNr;

	// Constructors
	public XPBoostTracker();

	// Methods
	private void Start();
	private void UpdateMemberCount();
	private void UpdateBoostText();
	private void OnPlayerJoinOrLeave();
	private void OnDestroy();
}

