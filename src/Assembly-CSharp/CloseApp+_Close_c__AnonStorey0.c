
/* Void <>m__0(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::CloseApp+<Close>c__AnonStorey0::CloseApp_Close_c_AnonStorey0___m__0
               (CloseApp_Close_c_AnonStorey0 *this,IModalPopupCreator *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSVar1 = TM::TM__(StringLiteral_Quit_game_,(MethodInfo *)0x0);
  pUVar2 = (this->fields).quit;
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  if (x != (IModalPopupCreator *)0x0) {
    func_?(3,TypeInfo__UnityEngine__EventSystems__IModalPopupCreator,x,pSVar1,pUVar2,
                    TypeInfo__System__String->static_fields->Empty);
    return;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

