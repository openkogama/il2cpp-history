
/* Void Initialize(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::KillPrimaryNotification::KillPrimaryNotification_Initialize
               (KillPrimaryNotification *this,Dictionary_2_System_Object_System_Object_ *data,
               MethodInfo *method)

{
  pNVar1 = (this->fields).fader;
  (this->fields)._.timeSinceStart = 0.0;
  if (pNVar1 != (NotificationFade *)0x0) {
    (pNVar1->fields).pauseAt = (pNVar1->fields).duration;
    this_00 = (pNVar1->fields).group;
    (pNVar1->fields).playing = 1;
    if (this_00 != (CanvasGroup *)0x0) {
      UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                (this_00,0.0,(MethodInfo *)0x0);
      (pNVar1->fields).currentTime = 0.0;
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

