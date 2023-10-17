/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class FirstTimeActivatableMessageStayForSeconds : FirstTimeActivatableMessage
{
	// Fields
	private float showedTime;
	private bool isShown;
	private bool isDone;
	[SerializeField]
	private string messageText;
	[SerializeField]
	private float stayTimeInSeconds;

	// Constructors
	public FirstTimeActivatableMessageStayForSeconds();

	// Methods
	public override void OnShow();
	private void Update();
	protected override void OnDisable();
}

