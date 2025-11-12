
/* Void SetCanAfford(Sprite) */

void Assembly-CSharp.dll::RequirementPanel::RequirementPanel_SetCanAfford
               (RequirementPanel *this,Sprite *canAffordSprite,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields).canUseSprite;
  if (pIVar1 != (Image *)0x0) {
    pSVar2 = (pIVar1->fields).m_Sprite;
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (canAffordSprite != (Sprite *)0x0 || pSVar2 != (Sprite *)0x0) {
      if (canAffordSprite == (Sprite *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (pSVar2 == (Sprite *)0x0) goto code_?;
        bVar3 = (pSVar2->fields)._.m_CachedPtr == (void *)0x0;
      }
      else if (pSVar2 == (Sprite *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        bVar3 = (canAffordSprite->fields)._.m_CachedPtr == (void *)0x0;
      }
      else {
        bVar3 = pSVar2 == canAffordSprite;
      }
      if (!bVar3) {
        pIVar1 = (this->fields).canUseSprite;
        if (pIVar1 == (Image *)0x0) goto code_?;
        UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_sprite
                  (pIVar1,canAffordSprite,(MethodInfo *)0x0);
      }
    }
    return;
  }
code_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetRequirementCostText(Int32) */

void Assembly-CSharp.dll::RequirementPanel::RequirementPanel_SetRequirementCostText
               (RequirementPanel *this,int32_t cost,MethodInfo *method)

{
  pTVar1 = (this->fields).requirementCost;
  aIStackX_10[0].m_value = cost;
  pSVar2 = mscorlib.dll::System::Int32::Int32_ToString(aIStackX_10,(MethodInfo *)0x0);
  if (pTVar1 != (Text *)0x0) {
    UNRECOVERED_JUMPTABLE = (pTVar1->klass->vtable).set_text.methodPtr;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              (pTVar1,pSVar2,(pTVar1->klass->vtable).set_text.method,UNRECOVERED_JUMPTABLE);
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

