/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;

// Image 33: MVWorldObject.dll - Assembly: MVWorldObject, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null

public class WinningConditionManager
{
	// Fields
	private WinningConditionOr winnerConditionsRoot;
	private int winnerConditionIDCounter;
	private GameStatCounterManager gameCounterManager;
	private EventHandler<EventArgs> OnWinningConditionChanged;
	private EventHandler<EventArgs> OnWinningConditionReset;
	private EventHandler<EventArgs> OnWinningConditionAddedOrRemoved;
	private EventHandler<EventArgs> OnWinningConditionStateChangedEditMode;
	[CompilerGenerated]
	private bool _WinningConditionFound_k__BackingField;
	[CompilerGenerated]
	private static Func<IWinningCondition, bool> CS___9__CachedAnonymousMethodDelegate1;

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

	[CompilerGenerated]
	private sealed class __c__DisplayClass3<T>
		where T : WinningCondition
	{
		// Fields
		public List<T> winnerConditionsResult;

		// Constructors
		public __c__DisplayClass3();

		// Methods
		public bool _GetWinnerConditionsByType_b__2(IWinningCondition winnerCondtion);
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
	[CompilerGenerated]
	private static bool _Reset_b__0(IWinningCondition winnerCondition);
}

