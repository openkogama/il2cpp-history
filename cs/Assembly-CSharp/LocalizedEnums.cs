/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Localize;
using MV.Common;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public static class LocalizedEnums
{
	// Nested types
	private static class MVConnStateLS
	{
		// Fields
		private static EnumLocalizeBookkeeping enumLocalizeBookkeeping;

		// Constructors
		static MVConnStateLS();

		// Methods
		public static string Get(MVConnState enumVal);
		private static void Init(Dictionary<int, string> map);
	}

	private static class MVJoinStateLS
	{
		// Fields
		private static EnumLocalizeBookkeeping enumLocalizeBookkeeping;

		// Constructors
		static MVJoinStateLS();

		// Methods
		public static string Get(MVEventCodes enumVal);
		private static void Init(Dictionary<int, string> map);
	}

	private static class XPRewardTypeLS
	{
		// Fields
		private static EnumLocalizeBookkeeping enumLocalizeBookkeeping;

		// Constructors
		static XPRewardTypeLS();

		// Methods
		public static string Get(XPRewardType enumVal);
		private static void Init(Dictionary<int, string> map);
	}

	private static class AccessoryCategoryLS
	{
		// Fields
		private static EnumLocalizeBookkeeping enumLocalizeBookkeeping;

		// Constructors
		static AccessoryCategoryLS();

		// Methods
		public static string Get(AccessoryCategoryClient enumVal);
		private static void Init(Dictionary<int, string> map);
	}

	// Methods
	public static string _(MVConnState enumVal);
	public static string _(MVEventCodes enumVal);
	public static string _(XPRewardType enumVal);
	public static string _(AccessoryCategoryClient enumVal);
}

