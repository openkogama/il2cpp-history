
/* Void <>m__0(IFadeParent, BaseEventData) */

void Assembly-CSharp.dll::FadeableObject+<OnDestroy>c__AnonStorey1::
     FadeableObject_OnDestroy_c_AnonStorey1___m__0
               (FadeableObject_OnDestroy_c_AnonStorey1 *this,IFadeParent *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pFVar1 = (this->fields)._this;
  if ((pFVar1 != (FadeableObject *)0x0) &&
     (this_00 = (pFVar1->fields).materials, this_00 != (List_1_UnityEngine_Material_ *)0x0)) {
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
    IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
              ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_00,(this->fields).i,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Material>__get_Item_int_)
    ;
    if (x != (IFadeParent *)0x0) {
      func_?(1,TypeInfo__IFadeParent);
      return;
    }
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

