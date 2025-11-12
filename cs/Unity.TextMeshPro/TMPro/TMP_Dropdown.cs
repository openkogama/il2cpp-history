/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.EventSystems;
using UnityEngine.UI;

// Image 7: Unity.TextMeshPro.dll - Assembly: Unity.TextMeshPro, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace TMPro
{
	[AddComponentMenu("UI/Dropdown - TextMeshPro", 35)]
	[RequireComponent(typeof(RectTransform))]
	public class TMP_Dropdown : Selectable, IPointerClickHandler, ISubmitHandler, ICancelHandler
	{
		// Fields
		private static readonly OptionData k_NothingOption;
		private static readonly OptionData k_EverythingOption;
		private static readonly OptionData k_MixedOption;
		[SerializeField]
		private RectTransform m_Template;
		[SerializeField]
		private TMP_Text m_CaptionText;
		[SerializeField]
		private Image m_CaptionImage;
		[SerializeField]
		private Graphic m_Placeholder;
		[SerializeField]
		[Space]
		private TMP_Text m_ItemText;
		[SerializeField]
		private Image m_ItemImage;
		[SerializeField]
		[Space]
		private int m_Value;
		[SerializeField]
		private bool m_MultiSelect;
		[SerializeField]
		[Space]
		private OptionDataList m_Options;
		[SerializeField]
		[Space]
		private DropdownEvent m_OnValueChanged;
		[SerializeField]
		private float m_AlphaFadeSpeed;
		private GameObject m_Dropdown;
		private GameObject m_Blocker;
		private List<DropdownItem> m_Items;
		private TweenRunner<FloatTween> m_AlphaTweenRunner;
		private bool validTemplate;
		private Coroutine m_Coroutine;
		private static OptionData s_NoOptionData;
	
		// Properties
		public RectTransform template { get; set; }
		public TMP_Text captionText { get; set; }
		public Image captionImage { get; set; }
		public Graphic placeholder { get; set; }
		public TMP_Text itemText { get; set; }
		public Image itemImage { get; set; }
		public List<OptionData> options { get; set; }
		public DropdownEvent onValueChanged { get; set; }
		public float alphaFadeSpeed { get; set; }
		public int value { get; set; }
		public bool IsExpanded { get; }
		public bool MultiSelect { get; set; }
	
		// Nested types
		protected internal class DropdownItem : MonoBehaviour, IPointerEnterHandler, ICancelHandler
		{
			// Fields
			[SerializeField]
			private TMP_Text m_Text;
			[SerializeField]
			private Image m_Image;
			[SerializeField]
			private RectTransform m_RectTransform;
			[SerializeField]
			private Toggle m_Toggle;
	
			// Properties
			public TMP_Text text { get; set; }
			public Image image { get; set; }
			public RectTransform rectTransform { get; set; }
			public Toggle toggle { get; set; }
	
			// Constructors
			public DropdownItem();
	
			// Methods
			public virtual void OnPointerEnter(PointerEventData eventData);
			public virtual void OnCancel(BaseEventData eventData);
		}
	
		[Serializable]
		public class OptionData
		{
			// Fields
			[SerializeField]
			private string m_Text;
			[SerializeField]
			private Sprite m_Image;
			[SerializeField]
			private Color m_Color;
	
			// Properties
			public string text { get; set; }
			public Sprite image { get; set; }
			public Color color { get; set; }
	
			// Constructors
			public OptionData();
			public OptionData(string text);
			public OptionData(Sprite image);
			public OptionData(string text, Sprite image, Color color);
		}
	
		[Serializable]
		public class OptionDataList
		{
			// Fields
			[SerializeField]
			private List<OptionData> m_Options;
	
			// Properties
			public List<OptionData> options { get; set; }
	
			// Constructors
			public OptionDataList();
		}
	
		[Serializable]
		public class DropdownEvent : UnityEvent<int>
		{
			// Constructors
			public DropdownEvent();
		}
	
		[CompilerGenerated]
		private sealed class __c__DisplayClass76_0
		{
			// Fields
			public Toggle nothingToggle;
			public Toggle everythingToggle;
			public TMP_Dropdown __4__this;
	
			// Constructors
			public __c__DisplayClass76_0();
	
			// Methods
			internal void _Show_b__0(bool x);
			internal void _Show_b__1(bool x);
		}
	
		[CompilerGenerated]
		private sealed class __c__DisplayClass76_1
		{
			// Fields
			public DropdownItem item;
			public TMP_Dropdown __4__this;
	
			// Constructors
			public __c__DisplayClass76_1();
	
			// Methods
			internal void _Show_b__2(bool x);
		}
	
		[CompilerGenerated]
		private sealed class _DelayedDestroyDropdownList_d__90 : IEnumerator<object>
		{
			// Fields
			private int __1__state;
			private object __2__current;
			public float delay;
			public TMP_Dropdown __4__this;
	
			// Properties
			object IEnumerator<System.Object>.Current { [DebuggerHidden] get; }
			object IEnumerator.Current { [DebuggerHidden] get; }
	
			// Constructors
			[DebuggerHidden]
			public _DelayedDestroyDropdownList_d__90(int __1__state);
	
			// Methods
			[DebuggerHidden]
			void IDisposable.Dispose();
			private bool MoveNext();
			[DebuggerHidden]
			void IEnumerator.Reset();
		}
	
		// Constructors
		protected TMP_Dropdown();
		static TMP_Dropdown();
	
		// Methods
		public void SetValueWithoutNotify(int input);
		private void SetValue(int value, bool sendCallback = true);
		protected override void Awake();
		protected override void Start();
		protected override void OnDisable();
		public void RefreshShownValue();
		public void AddOptions(List<OptionData> options);
		public void AddOptions(List<string> options);
		public void AddOptions(List<Sprite> options);
		public void ClearOptions();
		private void SetupTemplate();
		private static T GetOrAddComponent<T>(GameObject go)
			where T : Component;
		public virtual void OnPointerClick(PointerEventData eventData);
		public virtual void OnSubmit(BaseEventData eventData);
		public virtual void OnCancel(BaseEventData eventData);
		public void Show();
		private static bool IsEverythingValue(int count, int value);
		private static int EverythingValue(int count);
		protected virtual GameObject CreateBlocker(Canvas rootCanvas);
		protected virtual void DestroyBlocker(GameObject blocker);
		protected virtual GameObject CreateDropdownList(GameObject template);
		protected virtual void DestroyDropdownList(GameObject dropdownList);
		protected virtual DropdownItem CreateItem(DropdownItem itemTemplate);
		protected virtual void DestroyItem(DropdownItem item);
		private DropdownItem AddItem(OptionData data, bool selected, DropdownItem itemTemplate, List<DropdownItem> items);
		private void AlphaFadeList(float duration, float alpha);
		private void AlphaFadeList(float duration, float start, float end);
		private void SetAlpha(float alpha);
		public void Hide();
		[IteratorStateMachine(typeof(_DelayedDestroyDropdownList_d__90))]
		private IEnumerator DelayedDestroyDropdownList(float delay);
		private void ImmediateDestroyDropdownList();
		private void OnSelectItem(Toggle toggle);
		private static int FirstActiveFlagIndex(int value);
	}
}
