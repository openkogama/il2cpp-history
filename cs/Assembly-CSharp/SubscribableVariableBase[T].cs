/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public abstract class SubscribableVariableBase<T>
{
	// Fields
	protected T value;
	[CompilerGenerated]
	[DebuggerBrowsable]
	private Action<T> OnChange;

	// Properties
	public T Value { get; }

	// Events
	public event Action<T> OnChange {
		add;
		remove;
	}

	// Constructors
	protected SubscribableVariableBase(T value);

	// Methods
	public override bool Equals(object obj);
	public override int GetHashCode();
	public static implicit operator T(SubscribableVariableBase<T> s);
	public bool Equals(SubscribableVariableBase<T> other);
	public static bool operator ==(SubscribableVariableBase<T> a, SubscribableVariableBase<T> b);
	public static bool operator !=(SubscribableVariableBase<T> a, SubscribableVariableBase<T> b);
	public static bool operator !=(SubscribableVariableBase<T> a, T b);
	public static bool operator ==(SubscribableVariableBase<T> a, T b);
	public static bool operator !=(T b, SubscribableVariableBase<T> a);
	public static bool operator ==(T b, SubscribableVariableBase<T> a);
	protected void Notify();
}

