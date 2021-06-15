
/* Void <>m__0(INotificationRequirementPanel, BaseEventData) */

void Assembly-CSharp.dll::RequirementNotification+<ShowLevelRequirement>c__AnonStorey3::
     RequirementNotification_ShowLevelRequirement_c_AnonStorey3___m__0
               (RequirementNotification_ShowLevelRequirement_c_AnonStorey3 *this,
               INotificationRequirementPanel *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pRVar1 = this;
  this = (RequirementNotification_ShowLevelRequirement_c_AnonStorey3 *)(this->fields).level;
  uVar2 = func_?(TypeInfo__System__Int32,&this);
  if (x != (INotificationRequirementPanel *)0x0) {
    func_?(0,TypeInfo__INotificationRequirementPanel,x,uVar2,(pRVar1->fields).checkMark,
                    (pRVar1->fields).enabled);
    return;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

