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
	[AddComponentMenu("UI/TextMeshPro - Input Field", 11)]
	[HelpURL("https://docs.unity3d.com/Packages/com.unity.ugui@2.0/manual/TextMeshPro/index.html")]
	public class TMP_InputField : Selectable, IUpdateSelectedHandler, IBeginDragHandler, IDragHandler, IEndDragHandler, IPointerClickHandler, ISubmitHandler, ICancelHandler, ICanvasElement, ILayoutElement, IScrollHandler
	{
		// Fields
		protected TouchScreenKeyboard m_SoftKeyboard;
		private static readonly char[] kSeparators;
		private static bool s_IsQuestDevice;
		protected RectTransform m_RectTransform;
		[SerializeField]
		protected RectTransform m_TextViewport;
		protected RectMask2D m_TextComponentRectMask;
		protected RectMask2D m_TextViewportRectMask;
		[SerializeField]
		protected TMP_Text m_TextComponent;
		protected RectTransform m_TextComponentRectTransform;
		[SerializeField]
		protected Graphic m_Placeholder;
		[SerializeField]
		protected Scrollbar m_VerticalScrollbar;
		[SerializeField]
		protected TMP_ScrollbarEventHandler m_VerticalScrollbarEventHandler;
		private bool m_IsDrivenByLayoutComponents;
		[SerializeField]
		private LayoutGroup m_LayoutGroup;
		private IScrollHandler m_IScrollHandlerParent;
		private float m_ScrollPosition;
		[SerializeField]
		protected float m_ScrollSensitivity;
		[SerializeField]
		private ContentType m_ContentType;
		[SerializeField]
		private InputType m_InputType;
		[SerializeField]
		private char m_AsteriskChar;
		[SerializeField]
		private TouchScreenKeyboardType m_KeyboardType;
		[SerializeField]
		private LineType m_LineType;
		[SerializeField]
		private bool m_HideMobileInput;
		[SerializeField]
		private bool m_HideSoftKeyboard;
		[SerializeField]
		private CharacterValidation m_CharacterValidation;
		[SerializeField]
		private string m_RegexValue;
		[SerializeField]
		private float m_GlobalPointSize;
		[SerializeField]
		private int m_CharacterLimit;
		[SerializeField]
		private SubmitEvent m_OnEndEdit;
		[SerializeField]
		private SubmitEvent m_OnSubmit;
		[SerializeField]
		private SelectionEvent m_OnSelect;
		[SerializeField]
		private SelectionEvent m_OnDeselect;
		[SerializeField]
		private TextSelectionEvent m_OnTextSelection;
		[SerializeField]
		private TextSelectionEvent m_OnEndTextSelection;
		[SerializeField]
		private OnChangeEvent m_OnValueChanged;
		[SerializeField]
		private TouchScreenKeyboardEvent m_OnTouchScreenKeyboardStatusChanged;
		[SerializeField]
		private OnValidateInput m_OnValidateInput;
		[SerializeField]
		private Color m_CaretColor;
		[SerializeField]
		private bool m_CustomCaretColor;
		[SerializeField]
		private Color m_SelectionColor;
		[SerializeField]
		[TextArea(5, 10)]
		protected string m_Text;
		[Range(0f, 4f)]
		[SerializeField]
		private float m_CaretBlinkRate;
		[Range(1f, 5f)]
		[SerializeField]
		private int m_CaretWidth;
		[SerializeField]
		private bool m_ReadOnly;
		[SerializeField]
		private bool m_RichText;
		protected int m_StringPosition;
		protected int m_StringSelectPosition;
		protected int m_CaretPosition;
		protected int m_CaretSelectPosition;
		private RectTransform caretRectTrans;
		protected UIVertex[] m_CursorVerts;
		private CanvasRenderer m_CachedInputRenderer;
		private Vector2 m_LastPosition;
		[NonSerialized]
		protected Mesh m_Mesh;
		private bool m_AllowInput;
		private bool m_ShouldActivateNextUpdate;
		private bool m_UpdateDrag;
		private bool m_DragPositionOutOfBounds;
		private const float kHScrollSpeed = 0.05f;
		private const float kVScrollSpeed = 0.1f;
		protected bool m_CaretVisible;
		private Coroutine m_BlinkCoroutine;
		private float m_BlinkStartTime;
		private Coroutine m_DragCoroutine;
		private string m_OriginalText;
		private bool m_WasCanceled;
		private bool m_HasDoneFocusTransition;
		private WaitForSecondsRealtime m_WaitForSecondsRealtime;
		private bool m_PreventCallback;
		private bool m_TouchKeyboardAllowsInPlaceEditing;
		private bool m_IsTextComponentUpdateRequired;
		private bool m_HasTextBeenRemoved;
		private float m_PointerDownClickStartTime;
		private float m_KeyDownStartTime;
		private float m_DoubleClickDelay;
		private bool m_IsApplePlatform;
		private const string kEmailSpecialCharacters = "!#$%&\'*+-/=?^_`{|}~";
		private const string kOculusQuestDeviceModel = "Oculus Quest";
		private bool m_IsCompositionActive;
		private bool m_ShouldUpdateIMEWindowPosition;
		private int m_PreviousIMEInsertionLine;
		[SerializeField]
		protected TMP_FontAsset m_GlobalFontAsset;
		[SerializeField]
		protected bool m_OnFocusSelectAll;
		protected bool m_isSelectAll;
		[SerializeField]
		protected bool m_ResetOnDeActivation;
		private bool m_SelectionStillActive;
		private bool m_ReleaseSelection;
		private KeyCode m_LastKeyCode;
		private GameObject m_PreviouslySelectedObject;
		[SerializeField]
		private bool m_KeepTextSelectionVisible;
		[SerializeField]
		private bool m_RestoreOriginalTextOnEscape;
		[SerializeField]
		protected bool m_isRichTextEditingAllowed;
		[SerializeField]
		protected int m_LineLimit;
		public bool isAlert;
		[SerializeField]
		protected TMP_InputValidator m_InputValidator;
		[SerializeField]
		private bool m_ShouldActivateOnSelect;
		private bool m_isSelected;
		private bool m_IsStringPositionDirty;
		private bool m_IsCaretPositionDirty;
		private bool m_forceRectTransformAdjustment;
		private bool m_IsKeyboardBeingClosedInHoloLens;
		private Event m_ProcessingEvent;
	
		// Properties
		private BaseInput inputSystem { get; }
		private string compositionString { get; }
		private int compositionLength { get; }
		protected Mesh mesh { get; }
		public virtual bool shouldActivateOnSelect { get; set; }
		public bool shouldHideMobileInput { get; set; }
		public bool shouldHideSoftKeyboard { get; set; }
		public string text { get; set; }
		public bool isFocused { get; }
		public float caretBlinkRate { get; set; }
		public int caretWidth { get; set; }
		public RectTransform textViewport { get; set; }
		public TMP_Text textComponent { get; set; }
		public Graphic placeholder { get; set; }
		public Scrollbar verticalScrollbar { get; set; }
		public float scrollSensitivity { get; set; }
		public Color caretColor { get; set; }
		public bool customCaretColor { get; set; }
		public Color selectionColor { get; set; }
		public SubmitEvent onEndEdit { get; set; }
		public SubmitEvent onSubmit { get; set; }
		public SelectionEvent onSelect { get; set; }
		public SelectionEvent onDeselect { get; set; }
		public TextSelectionEvent onTextSelection { get; set; }
		public TextSelectionEvent onEndTextSelection { get; set; }
		public OnChangeEvent onValueChanged { get; set; }
		public TouchScreenKeyboardEvent onTouchScreenKeyboardStatusChanged { get; set; }
		public OnValidateInput onValidateInput { get; set; }
		public int characterLimit { get; set; }
		public float pointSize { get; set; }
		public TMP_FontAsset fontAsset { get; set; }
		public bool onFocusSelectAll { get; set; }
		public bool resetOnDeActivation { get; set; }
		public bool keepTextSelectionVisible { get; set; }
		public bool restoreOriginalTextOnEscape { get; set; }
		public bool isRichTextEditingAllowed { get; set; }
		public ContentType contentType { get; set; }
		public LineType lineType { get; set; }
		public int lineLimit { get; set; }
		public InputType inputType { get; set; }
		public TouchScreenKeyboard touchScreenKeyboard { get; }
		public TouchScreenKeyboardType keyboardType { get; set; }
		public CharacterValidation characterValidation { get; set; }
		public TMP_InputValidator inputValidator { get; set; }
		public bool readOnly { get; set; }
		public bool richText { get; set; }
		public bool multiLine { get; }
		public char asteriskChar { get; set; }
		public bool wasCanceled { get; }
		protected int caretPositionInternal { get; set; }
		protected int stringPositionInternal { get; set; }
		protected int caretSelectPositionInternal { get; set; }
		protected int stringSelectPositionInternal { get; set; }
		private new bool hasSelection { get; }
		public int caretPosition { get; set; }
		public int selectionAnchorPosition { get; set; }
		public int selectionFocusPosition { get; set; }
		public int stringPosition { get; set; }
		public int selectionStringAnchorPosition { get; set; }
		public int selectionStringFocusPosition { get; set; }
		private static string clipboard { get; set; }
		public virtual float minWidth { get; }
		public virtual float preferredWidth { get; }
		public virtual float flexibleWidth { get; }
		public virtual float minHeight { get; }
		public virtual float preferredHeight { get; }
		public virtual float flexibleHeight { get; }
		public virtual int layoutPriority { get; }
		Transform ICanvasElement.transform { get; }
	
		// Nested types
		public enum ContentType
		{
			Standard = 0,
			Autocorrected = 1,
			IntegerNumber = 2,
			DecimalNumber = 3,
			Alphanumeric = 4,
			Name = 5,
			EmailAddress = 6,
			Password = 7,
			Pin = 8,
			Custom = 9
		}
	
		public enum InputType
		{
			Standard = 0,
			AutoCorrect = 1,
			Password = 2
		}
	
		public enum CharacterValidation
		{
			None = 0,
			Digit = 1,
			Integer = 2,
			Decimal = 3,
			Alphanumeric = 4,
			Name = 5,
			Regex = 6,
			EmailAddress = 7,
			CustomValidator = 8
		}
	
		public enum LineType
		{
			SingleLine = 0,
			MultiLineSubmit = 1,
			MultiLineNewline = 2
		}
	
		public delegate char OnValidateInput(string text, int charIndex, char addedChar);
	
		[Serializable]
		public class SubmitEvent : UnityEvent<string>
		{
			// Constructors
			public SubmitEvent();
		}
	
		[Serializable]
		public class OnChangeEvent : UnityEvent<string>
		{
			// Constructors
			public OnChangeEvent();
		}
	
		[Serializable]
		public class SelectionEvent : UnityEvent<string>
		{
			// Constructors
			public SelectionEvent();
		}
	
		[Serializable]
		public class TextSelectionEvent : UnityEvent<string, int, int>
		{
			// Constructors
			public TextSelectionEvent();
		}
	
		[Serializable]
		public class TouchScreenKeyboardEvent : UnityEvent<TouchScreenKeyboard.Status>
		{
			// Constructors
			public TouchScreenKeyboardEvent();
		}
	
		protected enum EditState
		{
			Continue = 0,
			Finish = 1
		}
	
		[CompilerGenerated]
		private sealed class _CaretBlink_d__293 : IEnumerator<object>
		{
			// Fields
			private int __1__state;
			private object __2__current;
			public TMP_InputField __4__this;
	
			// Properties
			object IEnumerator<System.Object>.Current { [DebuggerHidden] get; }
			object IEnumerator.Current { [DebuggerHidden] get; }
	
			// Constructors
			[DebuggerHidden]
			public _CaretBlink_d__293(int __1__state);
	
			// Methods
			[DebuggerHidden]
			void IDisposable.Dispose();
			private bool MoveNext();
			[DebuggerHidden]
			void IEnumerator.Reset();
		}
	
		[CompilerGenerated]
		private sealed class _MouseDragOutsideRect_d__314 : IEnumerator<object>
		{
			// Fields
			private int __1__state;
			private object __2__current;
			public TMP_InputField __4__this;
			public PointerEventData eventData;
	
			// Properties
			object IEnumerator<System.Object>.Current { [DebuggerHidden] get; }
			object IEnumerator.Current { [DebuggerHidden] get; }
	
			// Constructors
			[DebuggerHidden]
			public _MouseDragOutsideRect_d__314(int __1__state);
	
			// Methods
			[DebuggerHidden]
			void IDisposable.Dispose();
			private bool MoveNext();
			[DebuggerHidden]
			void IEnumerator.Reset();
		}
	
		// Constructors
		protected TMP_InputField();
		static TMP_InputField();
	
		// Methods
		private bool isKeyboardUsingEvents();
		private bool isUWP();
		public void SetTextWithoutNotify(string input);
		private void SetText(string value, bool sendCallback = true);
		protected void ClampStringPos(ref int pos);
		protected void ClampCaretPos(ref int pos);
		private int ClampArrayIndex(int index);
		protected override void OnEnable();
		protected override void OnDisable();
		private void ON_TEXT_CHANGED(UnityEngine.Object obj);
		[IteratorStateMachine(typeof(_CaretBlink_d__293))]
		private IEnumerator CaretBlink();
		private void SetCaretVisible();
		private void SetCaretActive();
		protected void OnFocus();
		protected void SelectAll();
		public void MoveTextEnd(bool shift);
		public void MoveTextStart(bool shift);
		public void MoveToEndOfLine(bool shift, bool ctrl);
		public void MoveToStartOfLine(bool shift, bool ctrl);
		private bool InPlaceEditing();
		private bool InPlaceEditingChanged();
		private bool TouchScreenKeyboardShouldBeUsed();
		private void UpdateKeyboardStringPosition();
		private void UpdateStringPositionFromKeyboard();
		protected virtual void LateUpdate();
		private bool MayDrag(PointerEventData eventData);
		public virtual void OnBeginDrag(PointerEventData eventData);
		public virtual void OnDrag(PointerEventData eventData);
		[IteratorStateMachine(typeof(_MouseDragOutsideRect_d__314))]
		private IEnumerator MouseDragOutsideRect(PointerEventData eventData);
		public virtual void OnEndDrag(PointerEventData eventData);
		public override void OnPointerDown(PointerEventData eventData);
		protected EditState KeyPressed(Event evt);
		protected virtual bool IsValidChar(char c);
		public void ProcessEvent(Event e);
		public virtual void OnUpdateSelected(BaseEventData eventData);
		public virtual void OnScroll(PointerEventData eventData);
		private float GetScrollPositionRelativeToViewport();
		private string GetSelectedString();
		private int FindNextWordBegin();
		private void MoveRight(bool shift, bool ctrl);
		private int FindPrevWordBegin();
		private void MoveLeft(bool shift, bool ctrl);
		private int LineUpCharacterPosition(int originalPos, bool goToFirstChar);
		private int LineDownCharacterPosition(int originalPos, bool goToLastChar);
		private int PageUpCharacterPosition(int originalPos, bool goToFirstChar);
		private int PageDownCharacterPosition(int originalPos, bool goToLastChar);
		private void MoveDown(bool shift);
		private void MoveDown(bool shift, bool goToLastChar);
		private void MoveUp(bool shift);
		private void MoveUp(bool shift, bool goToFirstChar);
		private void MovePageUp(bool shift);
		private void MovePageUp(bool shift, bool goToFirstChar);
		private void MovePageDown(bool shift);
		private void MovePageDown(bool shift, bool goToLastChar);
		private void Delete();
		private void DeleteKey();
		private void Backspace();
		protected virtual void Append(string input);
		protected virtual void Append(char input);
		private void Insert(char c);
		private void UpdateTouchKeyboardFromEditChanges();
		private void SendOnValueChangedAndUpdateLabel();
		private void SendOnValueChanged();
		protected void SendOnEndEdit();
		protected void SendOnSubmit();
		protected void SendOnFocus();
		protected void SendOnFocusLost();
		protected void SendOnTextSelection();
		protected void SendOnEndTextSelection();
		protected void SendTouchScreenKeyboardStatusChanged();
		protected void UpdateLabel();
		private void UpdateScrollbar();
		private void OnScrollbarValueChange(float value);
		private void UpdateMaskRegions();
		private void AdjustTextPositionRelativeToViewport(float relativePosition);
		private int GetCaretPositionFromStringIndex(int stringIndex);
		private int GetMinCaretPositionFromStringIndex(int stringIndex);
		private int GetMaxCaretPositionFromStringIndex(int stringIndex);
		private int GetStringIndexFromCaretPosition(int caretPosition);
		private void UpdateStringIndexFromCaretPosition();
		private void UpdateCaretPositionFromStringIndex();
		public void ForceLabelUpdate();
		private void MarkGeometryAsDirty();
		public virtual void Rebuild(CanvasUpdate update);
		public virtual void LayoutComplete();
		public virtual void GraphicUpdateComplete();
		private void UpdateGeometry();
		private void AssignPositioningIfNeeded();
		private void OnFillVBO(Mesh vbo);
		private void GenerateCaret(VertexHelper vbo, Vector2 roundingOffset);
		private void CreateCursorVerts();
		private void GenerateHighlight(VertexHelper vbo, Vector2 roundingOffset);
		private void AdjustRectTransformRelativeToViewport(Vector2 startPosition, float height, bool isCharVisible);
		protected char Validate(string text, int pos, char ch);
		public void ActivateInputField();
		private void ActivateInputFieldInternal();
		public override void OnSelect(BaseEventData eventData);
		public virtual void OnPointerClick(PointerEventData eventData);
		public void OnControlClick();
		public void ReleaseSelection();
		public void DeactivateInputField(bool clearSelection = false);
		public override void OnDeselect(BaseEventData eventData);
		public virtual void OnSubmit(BaseEventData eventData);
		public virtual void OnCancel(BaseEventData eventData);
		public override void OnMove(AxisEventData eventData);
		private void EnforceContentType();
		private void SetTextComponentWrapMode();
		private void SetTextComponentRichTextMode();
		private void SetToCustomIfContentTypeIsNot(params ContentType[] allowedContentTypes);
		private void SetToCustom();
		private void SetToCustom(CharacterValidation characterValidation);
		protected override void DoStateTransition(SelectionState state, bool instant);
		public virtual void CalculateLayoutInputHorizontal();
		public virtual void CalculateLayoutInputVertical();
		public void SetGlobalPointSize(float pointSize);
		public void SetGlobalFontAsset(TMP_FontAsset fontAsset);
	}
}
