/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class MVGlobalSoundEmitter : MVLogicObject
{
	// Fields
	private SoundEmitterObject soundEmitterObject;
	private SoundLoader soundLoader;
	private const string defaultUrl = "AmbientAudio/Music/slowstones.unity3d";

	// Properties
	protected override bool HasVisualsInPlaymode { get; }
	public override MVWorldObjectDocumentationType DocumentationType { get; }

	// Constructors
	public MVGlobalSoundEmitter(Dictionary<object, object> data, Dictionary<int, MVWorldObjectClient> worldObjects);

	// Methods
	public override void Initialize();
	public override void OnDataUpdate();
	public void UpdateSound();
	public override void Destroy();
	public override bool Delete(MVWorldObjectClientManager worldObjectClientManager, ref string errorText);
	public override bool IsSingletonObject();
}

