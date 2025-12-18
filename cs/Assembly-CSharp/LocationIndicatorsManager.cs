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

public class LocationIndicatorsManager : MonoBehaviour
{
	// Fields
	[CompilerGenerated]
	private static LocationIndicatorsManager _Instance_k__BackingField;
	private const float UpdateIntervalSeconds = 0.5f;
	[SerializeField]
	private LocationIndicator indicatorPrefab;
	private Dictionary<int, LocationIndicator> indicators;
	private IEnumerator updateCoroutine;

	// Properties
	public static LocationIndicatorsManager Instance { [CompilerGenerated] get; [CompilerGenerated] private set; }

	// Nested types
	[Serializable]
	[CompilerGenerated]
	private sealed class __c
	{
		// Fields
		public static readonly __c __9;
		public static Func<int, PlanetPermissionType> __9__12_0;

		// Constructors
		static __c();
		public __c();

		// Methods
		internal PlanetPermissionType _SetIndicatorsPermissions_b__12_0(int i);
	}

	[CompilerGenerated]
	private sealed class _UpdateCoroutine_d__13 : IEnumerator<object>
	{
		// Fields
		private int __1__state;
		private object __2__current;
		public LocationIndicatorsManager __4__this;

		// Properties
		object IEnumerator<System.Object>.Current { [DebuggerHidden] get; }
		object IEnumerator.Current { [DebuggerHidden] get; }

		// Constructors
		[DebuggerHidden]
		public _UpdateCoroutine_d__13(int __1__state);

		// Methods
		[DebuggerHidden]
		void IDisposable.Dispose();
		private bool MoveNext();
		[DebuggerHidden]
		void IEnumerator.Reset();
	}

	// Constructors
	public LocationIndicatorsManager();

	// Methods
	private void Awake();
	private void Start();
	private void JSON_Unstripper();
	private void ReceivedPlanetPermissionsDataCallback(Dictionary<int, List<int>> data);
	private void SetIndicatorsPermissions();
	[IteratorStateMachine(typeof(_UpdateCoroutine_d__13))]
	private IEnumerator UpdateCoroutine();
	private void CreateOrDestroyIndicators();
	private bool CreateIndicatorIfNotDefined(MVPlayer player);
	private void OnDestroy();
}

