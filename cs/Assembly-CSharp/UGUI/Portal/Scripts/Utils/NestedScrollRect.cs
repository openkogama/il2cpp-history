/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine.EventSystems;
using UnityEngine.UI;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace UGUI.Portal.Scripts.Utils
{
	public class NestedScrollRect : ScrollRect
	{
		// Fields
		private bool routeToParent;
	
		// Nested types
		[CompilerGenerated]
		private sealed class __c__DisplayClass2_0
		{
			// Fields
			public PointerEventData eventData;
	
			// Constructors
			public __c__DisplayClass2_0();
	
			// Methods
			internal void _OnInitializePotentialDrag_b__0(IInitializePotentialDragHandler parent);
		}
	
		[CompilerGenerated]
		private sealed class __c__DisplayClass3_0
		{
			// Fields
			public PointerEventData eventData;
	
			// Constructors
			public __c__DisplayClass3_0();
	
			// Methods
			internal void _OnDrag_b__0(IDragHandler parent);
		}
	
		[CompilerGenerated]
		private sealed class __c__DisplayClass4_0
		{
			// Fields
			public PointerEventData eventData;
	
			// Constructors
			public __c__DisplayClass4_0();
	
			// Methods
			internal void _OnBeginDrag_b__0(IBeginDragHandler parent);
		}
	
		[CompilerGenerated]
		private sealed class __c__DisplayClass5_0
		{
			// Fields
			public PointerEventData eventData;
	
			// Constructors
			public __c__DisplayClass5_0();
	
			// Methods
			internal void _OnEndDrag_b__0(IEndDragHandler parent);
		}
	
		// Constructors
		public NestedScrollRect();
	
		// Methods
		private void DoForParents<T>(Action<T> action)
			where T : IEventSystemHandler;
		public override void OnInitializePotentialDrag(PointerEventData eventData);
		public override void OnDrag(PointerEventData eventData);
		public override void OnBeginDrag(PointerEventData eventData);
		public override void OnEndDrag(PointerEventData eventData);
	}
}
