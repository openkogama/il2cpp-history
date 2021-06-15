/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.UI;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class SwitchThemeButton : MonoBehaviour
{
	// Fields
	[SerializeField]
	private GameObject levelReq;
	[SerializeField]
	private RawImage levelReqImage;
	[SerializeField]
	private GameObject priceTag;
	[SerializeField]
	private UnityEngine.UI.Text priceTagNumber;
	[SerializeField]
	private GameObject memberUI;
	[SerializeField]
	private Button button;
	private Texture2D levelRequirementTextureAsset;

	// Properties
	public Button Button { get; }
	private int LevelRequirement { set; }
	private int GoldRequirement { set; }

	// Constructors
	public SwitchThemeButton();

	// Methods
	public void Initialize(int levelReq, int goldReq);
	private void OnLevelTextureReceived(UnityWebRequest www);
	protected void OnDestroy();
	protected void Reset();
}

