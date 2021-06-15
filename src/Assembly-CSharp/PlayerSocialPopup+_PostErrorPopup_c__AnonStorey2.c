
/* Void <>m__0(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::PlayerSocialPopup+<PostErrorPopup>c__AnonStorey2::
     PlayerSocialPopup_PostErrorPopup_c_AnonStorey2___m__0
               (PlayerSocialPopup_PostErrorPopup_c_AnonStorey2 *this,IModalPopupCreator *x,
               BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (x != (IModalPopupCreator *)0x0) {
    func_?(4,TypeInfo__UnityEngine__EventSystems__IModalPopupCreator,x,(this->fields).error
                    ,StringLiteral_Error__);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

