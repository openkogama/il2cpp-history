
/* Void SetCanAfford(Sprite) */

void Assembly-CSharp.dll::RequirementPanel::RequirementPanel_SetCanAfford
               (RequirementPanel *this,Sprite *canAffordSprite,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (PrefabPool *)(this->fields).canUseSprite;
  if (this_00 != (PrefabPool *)0x0) {
    x = PrefabPool::PrefabPool_get_MVCheckpointPrefab(this_00,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)x,(Object_1 *)canAffordSprite,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      return;
    }
    if ((this->fields).canUseSprite != (Image *)0x0) {
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      bVar1 = UnityEngine.UI.dll::UnityEngine::UI::SetPropertyUtility::SetPropertyUtility_SetClass_8
                        ((AnimationTriggers **)&(in_stack_2->fields).m_Sprite,
                         in_stack_3,
                         bool_MethodInfo__UnityEngine__UI__SetPropertyUtility__SetClass<UnityEngine::Sprite>_UnityEngine__Sprite___UnityEngine__Sprite_
                        );
      if (bVar1 != 0) {
        pIStack4 = (in_stack_2->klass->vtable).SetLayoutDirty.methodPtr;
        (*(code *)(in_stack_2->klass->vtable).SetAllDirty.method)();
        UnityEngine.UI.dll::UnityEngine::UI::Image::Image_TrackSprite
                  (in_stack_2,(MethodInfo *)0x0);
      }
      return;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetRequirementCostText(Int32) */

void Assembly-CSharp.dll::RequirementPanel::RequirementPanel_SetRequirementCostText
               (RequirementPanel *this,int32_t cost,MethodInfo *method)

{
  pTVar1 = (this->fields).requirementCost;
  uVar2 = func_?(&cost,0);
  if (pTVar1 != (Text *)0x0) {
    (*(code *)(pTVar1->klass->vtable).set_text.method)
              (pTVar1,uVar2,(pTVar1->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
    return;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

