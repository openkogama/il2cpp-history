/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class MVQualitySettings : MonoBehaviour
{
	// Fields
	private static readonly LodData[] lodSettingsFastest;
	private static readonly LodData[] lodSettingsFast;
	private static readonly LodData[] lodSettingsSimple;
	private static readonly LodData[] lodSettingsGood;
	private static readonly LodData[] lodSettingsBeautiful;
	private static readonly LodData[] lodSettingsFantastic;
	private static readonly LodData[][] lodSettings;
	public const int QualitySD = 0;
	public const int QualityHD = 1;
	public const int QualitySDAndroid = 2;
	public static OnQualityLevedChanged onQualityLevelChanged;

	// Properties
	public static LodData[] CurrentLodData { get; }
	public static int CurrentLevel { get; set; }

	// Nested types
	public delegate void OnQualityLevedChanged(int level);

	// Constructors
	public MVQualitySettings();
	static MVQualitySettings();

	// Methods
	public void Start();
}

