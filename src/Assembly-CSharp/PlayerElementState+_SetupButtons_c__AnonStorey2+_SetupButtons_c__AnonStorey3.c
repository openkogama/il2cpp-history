
/* Void <>m__0(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::
     PlayerElementState+<SetupButtons>c__AnonStorey2+<SetupButtons>c__AnonStorey3::
     PlayerElementState_SetupButtons_c_AnonStorey2_SetupButtons_c_AnonStorey3___m__0
               (PlayerElementState_SetupButtons_c_AnonStorey2_SetupButtons_c_AnonStorey3 *this,
               IModalPopupCreator *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (x != (IModalPopupCreator *)0x0) {
    func_?(4,TypeInfo__UnityEngine__EventSystems__IModalPopupCreator,x,
                    (this->fields).errorText,StringLiteral_Error__);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

