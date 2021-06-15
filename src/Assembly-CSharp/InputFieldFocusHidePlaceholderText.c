
/* Void OnDeselect(BaseEventData) */

void Assembly-CSharp.dll::InputFieldFocusHidePlaceholderText::
     InputFieldFocusHidePlaceholderText_OnDeselect
               (InputFieldFocusHidePlaceholderText *this,BaseEventData *eventData,MethodInfo *method
               )

{
  this_00 = (this->fields).placeholderText;
  if ((this_00 == (Text *)0x0) ||
     (pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         ((Component_1 *)this_00,(MethodInfo *)0x0), pGVar1 == (GameObject *)0x0)) {
    func_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) && (pcVar2 = (code *)func_?(), pcVar2 == (code *)0x0))
  {
    uVar3 = func_?(&UNK_?,0);
    func_?(uVar3);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
  (*pcRam_?)(0);
  return;
}


/* Void OnSelect(BaseEventData) */

void Assembly-CSharp.dll::InputFieldFocusHidePlaceholderText::
     InputFieldFocusHidePlaceholderText_OnSelect
               (InputFieldFocusHidePlaceholderText *this,BaseEventData *data,MethodInfo *method)

{
  this_00 = (this->fields).placeholderText;
  if ((this_00 == (Text *)0x0) ||
     (pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         ((Component_1 *)this_00,(MethodInfo *)0x0), pGVar1 == (GameObject *)0x0)) {
    func_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) && (pcVar2 = (code *)func_?(), pcVar2 == (code *)0x0))
  {
    uVar3 = func_?(&UNK_?,0);
    func_?(uVar3);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
  (*pcRam_?)(0);
  return;
}

