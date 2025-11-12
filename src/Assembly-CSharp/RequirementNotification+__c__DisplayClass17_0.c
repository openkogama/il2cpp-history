
/* Void <ShowLevelRequirement>b__0(INotificationRequirementPanel, BaseEventData) */

void Assembly-CSharp.dll::RequirementNotification+<>c__DisplayClass17_0::
     RequirementNotification_c_DisplayClass17_0__ShowLevelRequirement_b__0
               (RequirementNotification_c_DisplayClass17_0 *this,INotificationRequirementPanel *x,
               BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__INotificationRequirementPanel);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  aiStackX_8[0] = (this->fields).level;
  FUN_?(uRam_?,aiStackX_8);
  if (x != (INotificationRequirementPanel *)0x0) {
    FUN_?();
    return;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

