/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.EventSystems;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class AvatarFader : MonoBehaviour, IFadeParent
{
	// Fields
	[SerializeField]
	private ShaderFaderInstruction[] normalShaders;
	[SerializeField]
	private ShaderFaderInstruction[] fadeShaders;
	private Transform bodyTransform;
	private Dictionary<string, Shader> normalShadersDictionary;
	private Dictionary<string, Shader> fadeShadersDictionary;
	private string trancperancyProperty;
	private string colorProperty;
	private string tintProperty;
	private List<Material> avatarMaterials;
	private bool fading;
	private bool changedShaders;
	private bool prevFading;

	// Properties
	public Transform BodyTransform { get; set; }

	// Nested types
	[Serializable]
	public struct ShaderFaderInstruction
	{
		// Fields
		public string originShader;
		public Shader originalShader;
		public Shader replacingShader;
	}

	// Constructors
	public AvatarFader();

	// Methods
	private void Start();
	public void SetTransparency(float fadeFactor);
	private Shader GetShader(Shader currShader, bool fading);
	public void AddFadeMaterial(Material addRenderer);
	public void RemoveFadeMaterial(Material removeMaterial);
}

