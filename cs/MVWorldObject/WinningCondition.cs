/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Runtime.Versioning;

// Image 13: MVWorldObject.dll - Assembly: MVWorldObject, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null

public abstract class WinningCondition : IWinningCondition
{
	// Fields
	private bool forfilled;
	private readonly int id;
	private int limit;
	private OnCounterTypeChangedArgs instigatorCounterTypeChangedEvent;
	private readonly GameStatCounterType gameStatCounterType;
	protected WinningConditionPresentStyle winningConditionPresentStyle;
	protected readonly GameStatCounterManager gameCounterManager;
	[CompilerGenerated]
	private IWinningCondition _Parent_k__BackingField;
	[CompilerGenerated]
	private EventHandler<EventArgs> OnWinningConditionChanged;
	[CompilerGenerated]
	private bool _IsBriefingNode_k__BackingField;

	// Properties
	public int ID { get; }
	public IWinningCondition Parent { [CompilerGenerated] get; [CompilerGenerated] private set; }
	public int Limit { get; }
	public bool Forfilled { get; }
	public virtual bool IsBriefingNode { [CompilerGenerated] get; [CompilerGenerated] private set; }
	public virtual bool IsTeamMode { get; }
	public virtual HighScores HighScores { get; }
	public GameStatCounterType GameStatCounterType { get; }
	public abstract bool IsSingleton { get; }

	// Events
	public event EventHandler<EventArgs> OnWinningConditionChanged {
		add;
		remove;
	}

	// Constructors
	protected WinningCondition(WinningCondition parent, int id, GameStatCounterManager gameCounterManager, int limit, bool isBriefingNode, GameStatCounterType gameStatCounterType, WinningConditionPresentStyle winningConditionPresentStyle);

	// Methods
	public virtual bool Traverse(Func<IWinningCondition, bool> callBack);
	public void SetLimit(int limit);
	public override string ToString();
	public virtual void Reset();
	private void GameCountersQuery_OnCounterTypeChangedGameStatCounterTypeOnly(object sender, OnCounterTypeChangedArgs e);
	protected virtual void GameCountersQuery_OnCounterTypeChanged(object sender, OnCounterTypeChangedArgs e);
	protected void SendWinningConditionChangedEvent(EventArgs eventArgs, OnCounterTypeChangedArgs instigatorCounterTypeChangedEvent);
}

