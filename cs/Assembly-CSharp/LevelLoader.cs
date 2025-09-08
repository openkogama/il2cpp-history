/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.Common;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class LevelLoader : MonoBehaviour
{
	// Fields
	private const string SceneDesktopPlayMode = "DesktopPlayModeGUI";
	private const string SceneTouchPlayMode = "AndroidPlayModeGUI";
	private const string SceneTouchEditMode = "AndroidEditModeGUI";
	private const string SceneDesktopEditMode = "DesktopEditModeGUI";
	private const string SceneDesktopAvatarEditMode = "DesktopAvatarEditModeGUI";
	private static readonly Dictionary<ScenesForMode, string[]> scenesForModeMap;
	private readonly List<AsyncOperation> pendingScenes;
	private Action callback;

	// Nested types
	[CompilerGenerated]
	private sealed class _WaitForLoadingScenesCoroutine_d__10 : IEnumerator<object>
	{
		// Fields
		private int __1__state;
		private object __2__current;
		public LevelLoader __4__this;

		// Properties
		object IEnumerator<System.Object>.Current { [DebuggerHidden] get; }
		object IEnumerator.Current { [DebuggerHidden] get; }

		// Constructors
		[DebuggerHidden]
		public _WaitForLoadingScenesCoroutine_d__10(int __1__state);

		// Methods
		[DebuggerHidden]
		void IDisposable.Dispose();
		private bool MoveNext();
		[DebuggerHidden]
		void IEnumerator.Reset();
	}

	// Constructors
	public LevelLoader();
	static LevelLoader();

	// Methods
	public void LoadScenes(MVGameMode gameMode, bool tourist, bool useTouch, Action callback);
	private void LoadScenes(ScenesForMode mode, Action callbackAction);
	[IteratorStateMachine(typeof(_WaitForLoadingScenesCoroutine_d__10))]
	private IEnumerator WaitForLoadingScenesCoroutine();
}

