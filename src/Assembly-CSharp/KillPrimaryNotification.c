
/* Void Initialize(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::KillPrimaryNotification::KillPrimaryNotification_Initialize
               (KillPrimaryNotification *this,Dictionary_2_System_Object_System_Object_ *data,
               MethodInfo *method)

{
  (this->fields)._.timeSinceStart = 0.0;
  this_00 = (this->fields).fader;
  if (this_00 != (NotificationFade *)0x0) {
    NotificationFade::NotificationFade_Activate(this_00,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&puStack_2);
  func_?(uVar1);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

