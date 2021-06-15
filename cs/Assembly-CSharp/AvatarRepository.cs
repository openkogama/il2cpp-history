/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class AvatarRepository
{
	// Fields
	private readonly Dictionary<int, AvatarRepositoryItem> avatars;
	[CompilerGenerated]
	private static Func<AvatarRepositoryItem, int> __f__am_cache0;

	// Properties
	public int Count { get; }

	// Constructors
	public AvatarRepository();

	// Methods
	public void AddItem(AvatarRepositoryItem item);
	public AvatarRepositoryItem GetAvatar(int slotPosition);
	public List<AvatarRepositoryItem> GetAvatars();
	[CompilerGenerated]
	private static int _GetAvatars_m__0(AvatarRepositoryItem x);
}

