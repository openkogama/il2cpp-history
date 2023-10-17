/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.UI;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class WinningWarningNotification : Notification
{
	// Fields
	[SerializeField]
	private UnityEngine.UI.Text scoreText;
	[SerializeField]
	private UnityEngine.UI.Text warningText;
	[SerializeField]
	private UnityEngine.UI.Text userNameText;
	[SerializeField]
	private NotificationFade fader;
	[SerializeField]
	private List<WinninConditionImage> winningConditionImages;

	// Properties
	protected override NotificationLifetime Lifetime { get; }

	// Nested types
	[Serializable]
	private class WinninConditionImage
	{
		// Fields
		[SerializeField]
		public GameStatCounterType Key;
		[SerializeField]
		public Image Value;

		// Constructors
		public WinninConditionImage();
	}

	// Constructors
	public WinningWarningNotification();

	// Methods
	public override void Initialize(Dictionary<object, object> data);
	private void SelectWinningConditionImage(GameStatCounterType winningConditionType, MVPlayer player);
	private void SetWarningText(GameStatCounterType winningConditionType, int scoreLeft);
	private void DestroyNotification();
}

