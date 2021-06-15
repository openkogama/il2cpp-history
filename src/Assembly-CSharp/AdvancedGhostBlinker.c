
/* Void Awake() */

void Assembly-CSharp.dll::AdvancedGhostBlinker::AdvancedGhostBlinker_Awake
               (AdvancedGhostBlinker *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_BlinkType_System_Object_ *)func_?();
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<BlinkType,_Blinker>__Dictionary__)
  ;
  uVar1 = (this->fields).blinkDamageColor.r;
  uVar2 = (this->fields).blinkDamageColor.g;
  uVar3 = (this->fields).blinkDamageColor.b;
  color_00.b = (float)uVar3;
  color_00.g = (float)uVar2;
  color_00.r = (float)uVar1;
  fVar4 = (this->fields).blinkDamageColor.a;
  pMVar5 = (this->fields)._.blinkMaterial;
  pBVar6 = (Blinker *)func_?();
  color_00.a = fVar4;
  Blinker::Blinker__ctor(pBVar6,4.0,pMVar5,color_00,(MethodInfo *)0x0);
  if (this_00 != (Dictionary_2_BlinkType_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[BlinkType,System::Object]::
    Dictionary_2_BlinkType_System_Object__Add
              (this_00,BlinkType__Enum_Damage,(Object *)pBVar6,
               MethodInfo__System__Collections__Generic__Dictionary<BlinkType,_Blinker>__Add_BlinkType__Blinker_
              );
    uVar7 = (this->fields).blinkHealingColor.r;
    uVar8 = (this->fields).blinkHealingColor.g;
    uVar9 = (this->fields).blinkHealingColor.b;
    color.b = (float)uVar9;
    color.g = (float)uVar8;
    color.r = (float)uVar7;
    fVar4 = (this->fields).blinkHealingColor.a;
    pMVar5 = (this->fields)._.blinkMaterial;
    pBVar6 = (Blinker *)func_?();
    this_01 = (Dictionary_2_BlinkType_Blinker_ *)0x40800000;
    color.a = fVar4;
    Blinker::Blinker__ctor(pBVar6,4.0,pMVar5,color,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[BlinkType,System::Object]::
    Dictionary_2_BlinkType_System_Object__Add
              ((Dictionary_2_BlinkType_System_Object_ *)this_01,BlinkType__Enum_Healing,
               (Object *)pBVar6,
               MethodInfo__System__Collections__Generic__Dictionary<BlinkType,_Blinker>__Add_BlinkType__Blinker_
              );
    (this->fields)._.blinkers = this_01;
    GamePassesTextBubble::GamePassesTextBubble_set_DeactivateAfterFade
              ((GamePassesTextBubble *)this,1,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* AdvancedGhostBlinker() */

void Assembly-CSharp.dll::AdvancedGhostBlinker::AdvancedGhostBlinker__ctor
               (AdvancedGhostBlinker *this,MethodInfo *method)

{
  fStack_1 = 0.0;
  fStack_2 = 0.0;
  fStack_3 = 0.0;
  fStack_4 = 0.0;
  func_?(&fStack_1,0x437b0000,0,0,0);
  (this->fields).blinkHealingColor.r = fStack_1;
  (this->fields).blinkHealingColor.g = fStack_2;
  (this->fields).blinkHealingColor.b = fStack_3;
  (this->fields).blinkHealingColor.a = fStack_4;
  fStack_5 = 0.0;
  fStack_6 = 0.0;
  fStack_7 = 0.0;
  fStack_8 = 0.0;
  func_?(&fStack_5,0,0x437a0000,0x42fa0000,0);
  (this->fields).blinkDamageColor.r = fStack_5;
  (this->fields).blinkDamageColor.g = fStack_6;
  (this->fields).blinkDamageColor.b = fStack_7;
  (this->fields).blinkDamageColor.a = fStack_8;
  LockCursorManager3DMode::LockCursorManager3DMode__ctor
            ((LockCursorManager3DMode *)this,(MethodInfo *)0x0);
  return;
}

