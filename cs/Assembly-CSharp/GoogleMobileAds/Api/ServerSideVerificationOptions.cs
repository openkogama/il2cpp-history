/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace GoogleMobileAds.Api
{
	public class ServerSideVerificationOptions
	{
		// Fields
		[CompilerGenerated]
		[DebuggerBrowsable]
		private string _UserId_k__BackingField;
		[CompilerGenerated]
		[DebuggerBrowsable]
		private string _CustomData_k__BackingField;
	
		// Properties
		public string UserId { [CompilerGenerated] get; [CompilerGenerated] private set; }
		public string CustomData { [CompilerGenerated] get; [CompilerGenerated] private set; }
	
		// Nested types
		public class Builder
		{
			// Fields
			[CompilerGenerated]
			[DebuggerBrowsable]
			private string _UserId_k__BackingField;
			[CompilerGenerated]
			[DebuggerBrowsable]
			private string _CustomData_k__BackingField;
	
			// Properties
			internal string UserId { [CompilerGenerated] get; [CompilerGenerated] private set; }
			internal string CustomData { [CompilerGenerated] get; [CompilerGenerated] private set; }
	
			// Constructors
			public Builder();
	
			// Methods
			public Builder SetUserId(string userId);
			public Builder SetCustomData(string customData);
			public ServerSideVerificationOptions Build();
		}
	
		// Constructors
		private ServerSideVerificationOptions(Builder builder);
	}
}
