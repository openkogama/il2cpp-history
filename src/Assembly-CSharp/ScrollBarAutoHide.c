
/* Void OnBeginDrag(PointerEventData) */

void Assembly-CSharp.dll::ScrollBarAutoHide::ScrollBarAutoHide_OnBeginDrag
               (ScrollBarAutoHide *this,PointerEventData *eventData,MethodInfo *method)

{
  this_00 = (this->fields).scrollbarCanvasGroup;
  if (this_00 != (CanvasGroup *)0x0) {
    UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
              (this_00,1.0,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OnEndDrag(PointerEventData) */

void Assembly-CSharp.dll::ScrollBarAutoHide::ScrollBarAutoHide_OnEndDrag
               (ScrollBarAutoHide *this,PointerEventData *eventData,MethodInfo *method)

{
  this_00 = (this->fields).scrollBarFader;
  if (this_00 != (NotificationFade *)0x0) {
    NotificationFade::NotificationFade_Activate(this_00,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

