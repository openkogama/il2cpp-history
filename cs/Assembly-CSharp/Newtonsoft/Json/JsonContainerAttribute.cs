/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace Newtonsoft.Json
{
	[AttributeUsage]
	public abstract class JsonContainerAttribute : Attribute
	{
		// Fields
		[CompilerGenerated]
		[DebuggerBrowsable]
		private string _Id_k__BackingField;
		[CompilerGenerated]
		[DebuggerBrowsable]
		private string _Title_k__BackingField;
		[CompilerGenerated]
		[DebuggerBrowsable]
		private string _Description_k__BackingField;
		internal bool? _isReference;
	
		// Properties
		public string Id { [CompilerGenerated] get; [CompilerGenerated] set; }
		public string Title { [CompilerGenerated] get; [CompilerGenerated] set; }
		public string Description { [CompilerGenerated] get; [CompilerGenerated] set; }
		public bool IsReference { get; set; }
	
		// Constructors
		protected JsonContainerAttribute();
		protected JsonContainerAttribute(string id);
	}
}
