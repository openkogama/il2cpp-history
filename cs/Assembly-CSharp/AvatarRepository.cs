/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class AvatarRepository
{
	// Fields
	private readonly Dictionary<int, AvatarRepositoryItem> avatars;

	// Properties
	public int Count { get; }

	// Nested types
	[Serializable]
	[CompilerGenerated]
	private sealed class __c
	{
		// Fields
		public static readonly __c __9;
		public static Func<AvatarRepositoryItem, int> __9__5_0;

		// Constructors
		static __c();
		public __c();

		// Methods
		internal int _GetAvatars_b__5_0(AvatarRepositoryItem x);
	}

	// Constructors
	public AvatarRepository();

	// Methods
	public void AddItem(AvatarRepositoryItem item);
	public AvatarRepositoryItem GetAvatar(int slotPosition);
	public List<AvatarRepositoryItem> GetAvatars();
}

