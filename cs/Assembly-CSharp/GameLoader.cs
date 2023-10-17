/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class GameLoader : MonoBehaviour
{
	// Fields
	[SerializeField]
	private int gameBaseSceneIndex;
	private static bool applicationStartUp;

	// Constructors
	public GameLoader();
	static GameLoader();

	// Methods
	public static void UnloadGame();
	protected void Awake();
	protected void Start();
	private void Cleanup();
	private void CloseGame();
}

