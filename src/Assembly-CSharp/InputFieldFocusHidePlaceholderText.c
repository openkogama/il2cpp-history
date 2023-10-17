
/* Void OnDeselect(BaseEventData) */

void Assembly-CSharp.dll::InputFieldFocusHidePlaceholderText::
     InputFieldFocusHidePlaceholderText_OnDeselect
               (InputFieldFocusHidePlaceholderText *this,BaseEventData *eventData,MethodInfo *method
               )

{
  this_00 = (this->fields).placeholderText;
  if (this_00 != (Text *)0x0) {
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this_00,(MethodInfo *)0x0);
    if (pGVar1 != (GameObject *)0x0) {
      if (pcRam_? == (code *)0x0) {
        pcRam_? = (code *)func_?();
      }
      (*pcRam_?)();
      return;
    }
  }
  uVar2 = func_?(&stack0xfffffff8);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnSelect(BaseEventData) */

void Assembly-CSharp.dll::InputFieldFocusHidePlaceholderText::
     InputFieldFocusHidePlaceholderText_OnSelect
               (InputFieldFocusHidePlaceholderText *this,BaseEventData *data,MethodInfo *method)

{
  this_00 = (this->fields).placeholderText;
  if (this_00 != (Text *)0x0) {
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this_00,(MethodInfo *)0x0);
    if (pGVar1 != (GameObject *)0x0) {
      if (pcRam_? == (code *)0x0) {
        pcRam_? = (code *)func_?();
      }
      (*pcRam_?)();
      return;
    }
  }
  uVar2 = func_?(&stack0xfffffff8);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

