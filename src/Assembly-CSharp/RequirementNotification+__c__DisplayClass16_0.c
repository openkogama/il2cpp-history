
/* Void <ShowTeamRequirement>b__0(INotificationRequirementPanel, BaseEventData) */

void Assembly-CSharp.dll::RequirementNotification+<>c__DisplayClass16_0::
     RequirementNotification_c_DisplayClass16_0__ShowTeamRequirement_b__0
               (RequirementNotification_c_DisplayClass16_0 *this,INotificationRequirementPanel *x,
               BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__INotificationRequirementPanel);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__MVTeam);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  aiStackX_8[0] = (this->fields).team;
  FUN_?(TypeInfo__MV__WorldObject__MVTeam,aiStackX_8);
  if (x != (INotificationRequirementPanel *)0x0) {
    FUN_?();
    return;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

