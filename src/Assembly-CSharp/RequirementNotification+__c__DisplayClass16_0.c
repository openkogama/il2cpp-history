
/* Void <ShowTeamRequirement>b__0(INotificationRequirementPanel, BaseEventData) */

void Assembly-CSharp.dll::RequirementNotification+<>c__DisplayClass16_0::
     RequirementNotification_c_DisplayClass16_0__ShowTeamRequirement_b__0
               (RequirementNotification_c_DisplayClass16_0 *this,INotificationRequirementPanel *x,
               BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__INotificationRequirementPanel);
    func_?(&TypeInfo__MV__WorldObject__MVTeam);
    cRam_? = '\x01';
  }
  pRVar1 = this;
  this = (RequirementNotification_c_DisplayClass16_0 *)(this->fields).team;
  uVar2 = func_?(TypeInfo__MV__WorldObject__MVTeam,&this);
  if (x != (INotificationRequirementPanel *)0x0) {
    func_?(0,TypeInfo__INotificationRequirementPanel,x,uVar2,(pRVar1->fields).checkMark,
                    (pRVar1->fields).enabled);
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

