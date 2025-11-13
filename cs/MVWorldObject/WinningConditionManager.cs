/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Runtime.Versioning;

// Image 13: MVWorldObject.dll - Assembly: MVWorldObject, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null

public class WinningConditionManager
{
	// Fields
	private WinningConditionOr winnerConditionsRoot;
	private int winnerConditionIDCounter;
	private GameStatCounterManager gameCounterManager;
	[CompilerGenerated]
	private bool _WinningConditionFound_k__BackingField;
	[CompilerGenerated]
	private EventHandler<EventArgs> OnWinningConditionChanged;
	[CompilerGenerated]
	private EventHandler<EventArgs> OnWinningConditionReset;
	[CompilerGenerated]
	private EventHandler<EventArgs> OnWinningConditionAddedOrRemoved;
	[CompilerGenerated]
	private EventHandler<EventArgs> OnWinningConditionStateChangedEditMode;

	// Properties
	public bool WinningConditionFound { [CompilerGenerated] get; [CompilerGenerated] private set; }

	// Events
	public event EventHandler<EventArgs> OnWinningConditionReset {
		add;
		remove;
	}
	public event EventHandler<EventArgs> OnWinningConditionAddedOrRemoved {
		add;
		remove;
	}

	// Nested types
	private class ForfilledWinnerConditionGenerator
	{
		// Fields
		public readonly List<IWinningCondition> gameWonWinnerConditions;

		// Constructors
		public ForfilledWinnerConditionGenerator(WinningConditionManager winnerConditionManager);

		// Methods
		private bool HandleWinningConditionForReport(IWinningCondition winnerCondition);
		private bool Report(IWinningCondition winnerCondition);
	}

	[Serializable]
	[CompilerGenerated]
	private sealed class __c
	{
		// Fields
		public static readonly __c __9;
		public static Func<IWinningCondition, bool> __9__21_0;

		// Constructors
		static __c();
		public __c();

		// Methods
		internal bool _Reset_b__21_0(IWinningCondition winnerCondition);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass29_0<T>
		where T : WinningCondition
	{
		// Fields
		public List<T> winnerConditionsResult;

		// Constructors
		public __c__DisplayClass29_0();

		// Methods
		internal bool _GetWinnerConditionsByType_b__0(IWinningCondition winnerCondtion);
	}

	// Constructors
	public WinningConditionManager();

	// Methods
	public void Initialize(GameStatCounterManager gameStatCounterManager);
	public void Reset();
	public void Traverse(Func<IWinningCondition, bool> callBack);
	public List<IWinningCondition> GetForfilledWinningConditions();
	public T CreateWinnerCondition<T>(params object[] args)
		where T : WinningCondition;
	public T CreateWinnerConditionWithParent<T>(WinningCondition parent, params object[] args)
		where T : WinningCondition;
	public void RemoveWinnerCondition(int id);
	public List<T> GetWinnerConditionsByType<T>()
		where T : WinningCondition;
	public T GetSingletonWinnerConditionByType<T>()
		where T : WinningCondition;
	public override string ToString();
	private void AddWinnerConditionToNode(WinningCondition parent, WinningCondition winnerCondition);
	private T CreateInstance<T>(WinningCondition parent, params object[] args)
		where T : WinningCondition;
	private void winnerConditionsRoot_OnWinningConditionChanged(object sender, EventArgs eventArgs);
	protected virtual T Factory<T>(params object[] args)
		where T : WinningCondition;
	public bool CanPlaceWinningCondition<T>()
		where T : WinningCondition;
	private bool IsTimeLimit(IWinningCondition winningCondition);
}

