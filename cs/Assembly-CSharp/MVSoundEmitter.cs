/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class MVSoundEmitter : MVLogicObject, ILogicWorldObject
{
	// Fields
	private readonly SoundEmitterObject soundEmitterObject;
	private readonly SoundLoader soundLoader;
	private const string DefaultUrl = "AmbientAudio/Nature/kgm_amb_forest.unity3d";
	private const string DataKeyURL = "url";
	private const string DataKeyVolume = "volume";
	private const string DataKeyPitch = "pitch";
	private const string DataKeyLoop = "loop";
	private const string DataKeyRange = "range";
	private const string DataKeyMute = "mute";
	[CompilerGenerated]
	private IInputSignalReceiver _InputSignalReceiver_k__BackingField;

	// Properties
	public override MVWorldObjectDocumentationType DocumentationType { get; }
	public override bool HasInputConnector { get; }
	public override bool HasOutputConnector { get; }
	protected override bool HasVisualsInPlaymode { get; }
	public IInputSignalReceiver InputSignalReceiver { [CompilerGenerated] get; [CompilerGenerated] private set; }

	// Constructors
	public MVSoundEmitter(Dictionary<object, object> data, Dictionary<int, MVWorldObjectClient> worldObjects);

	// Methods
	public override void Initialize();
	public override void OnDataUpdate();
	private void InputStateUpdateCallback(LogicInputState logicInputState, LogicObjectManager logicObjectManager);
	public override void Destroy();
	public override bool Delete(MVWorldObjectClientManager worldObjectClientManager, ref string errorText);
	public void UpdateSound();
	private bool ShouldPlay();
	private static float GetMinDistanceFromRangeAmbient(SoundRangeDistance range);
	private static float GetMaxDistanceFromRangeAmbient(SoundRangeDistance range);
}

