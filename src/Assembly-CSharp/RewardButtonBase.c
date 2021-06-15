
/* Void EnableEffects() */

void Assembly-CSharp.dll::RewardButtonBase::RewardButtonBase_EnableEffects
               (RewardButtonBase *this,MethodInfo *method)

{
  this_00 = (this->fields).RadialFill;
  if (this_00 != (Image *)0x0) {
    UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_fillAmount(this_00,1.0,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void UpdateOutline(Single) */

void Assembly-CSharp.dll::RewardButtonBase::RewardButtonBase_UpdateOutline
               (RewardButtonBase *this,float progress,MethodInfo *method)

{
  this_00 = (this->fields).RadialFill;
  if (this_00 != (Image *)0x0) {
    UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_fillAmount
              (this_00,progress,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

