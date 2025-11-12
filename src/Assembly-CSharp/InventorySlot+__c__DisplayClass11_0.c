
/* Void <OnDrop>b__0(IGameObjectDroppedInSlot, BaseEventData) */

void Assembly-CSharp.dll::InventorySlot+<>c__DisplayClass11_0::
     InventorySlot_c_DisplayClass11_0__OnDrop_b__0
               (InventorySlot_c_DisplayClass11_0 *this,IGameObjectDroppedInSlot *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IGameObjectDroppedInSlot);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar1 = (this->fields).eventData;
  if ((pPVar1 != (PointerEventData *)0x0) &&
     (pEVar2 = (pPVar1->fields)._.m_EventSystem, pEVar2 != (EventSystem *)0x0)) {
    pIVar3 = (this->fields).__4__this;
    pGVar4 = (pEVar2->fields).m_CurrentSelected;
    if ((pIVar3 != (InventorySlot *)0x0) &&
       (uVar5 = (pIVar3->fields)._AbsoluteSlot_k__BackingField, x != (IGameObjectDroppedInSlot *)0x0
       )) {
      pIVar6 = x->klass;
      uVar7 = 0;
      uVar8._0_1_ = (pIVar6->_1).rank;
      uVar8._1_1_ = (pIVar6->_1).minimumAlignment;
      if (uVar8 != 0) {
        do {
          if (pIVar6->interfaceOffsets[uVar7].interfaceType ==
              (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__IGameObjectDroppedInSlot) {
            pIVar9 = &pIVar6->vtable + pIVar6->interfaceOffsets[uVar7].offset;
            goto code_?;
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 < uVar8);
      }
      pIVar9 = (IGameObjectDroppedInSlot__VTable *)
               FUN_?(x,TypeInfo__UnityEngine__EventSystems__IGameObjectDroppedInSlot,0);
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(pIVar9->SlotChanged).methodPtr)(x,pGVar4,(ulonglong)uVar5,(pIVar9->SlotChanged).method);
      return;
    }
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}

