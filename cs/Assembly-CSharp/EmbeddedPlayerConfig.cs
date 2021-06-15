/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

[Serializable]
[CreateAssetMenu]
public class EmbeddedPlayerConfig : ScriptableObject
{
	// Fields
	[SerializeField]
	public List<EmbeddedSiteConfigData> siteData;
	[SerializeField]
	public EmbeddedSiteConfigData kogamaDefaultData;
	[SerializeField]
	public EmbeddedSiteConfigData embeddedDefaultData;
	private bool initialized;
	private EmbeddedSiteConfigData currentSite;

	// Nested types
	private class JSONDomainObject
	{
		// Fields
		public string domain;

		// Constructors
		public JSONDomainObject();
	}

	// Constructors
	public EmbeddedPlayerConfig();

	// Methods
	public void Initialize();
	private void OnURLSet(bool ok, string json);
	private void InitializeWithURL(string url);
	private static bool IsValidHost(string host, string[] hosts);
	private static bool DoesHostMatch(string allowedHost, string[] applicationHost);
	public EmbeddedSiteConfigData GetCurrentSiteData();
}

