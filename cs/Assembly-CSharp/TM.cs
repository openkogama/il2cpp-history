/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using GNU.Gettext;
using UnityEngine.Networking;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class TM
{
	// Fields
	private Catalog catalog;
	private string fileName;
	private bool languageLoadingDone;
	private readonly List<Action> languageChangedCallback;
	private string cultureName;
	private const string baseResourcesPath = "Languages/";
	private static TM instance;

	// Properties
	private static TM Instance { get; }

	// Constructors
	private TM();

	// Methods
	public static void Destroy();
	public static string _(string key);
	public static void LanguageChanged(Action onLanguageChangedCallback);
	public static string GetTextWithValues(string index, ValueInsert values);
	public static string[] GetTextAsArray(string toArrayString);
	public static void LoadLanguage(string languageName);
	private static string GetFilename(string languageName);
	private static void TryGetTextAsset(string fileName);
	private static void StreamingAssetCallback(UnityWebRequest www);
	private static void SetLanguageLoadingDone();
	private static string StripAssetStringFromFuncIdentifier(string key);
}

