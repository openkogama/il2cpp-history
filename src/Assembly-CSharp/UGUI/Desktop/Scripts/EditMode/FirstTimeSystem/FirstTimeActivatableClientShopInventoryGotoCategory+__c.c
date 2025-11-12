
/* Void <DoShowing>b__5_0(InventoryController, BaseEventData) */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::FirstTimeSystem::
     FirstTimeActivatableClientShopInventoryGotoCategory+<>c::
     FirstTimeActivatableClientShopInventoryGotoCategory_c__DoShowing_b__5_0
               (FirstTimeActivatableClientShopInventoryGotoCategory_c *this,InventoryController *x,
               BaseEventData *y,MethodInfo *method)

{
  if (x != (InventoryController *)0x0) {
    pTVar1 = (x->fields).tabMenu;
    this = (FirstTimeActivatableClientShopInventoryGotoCategory_c *)0x0;
    if (pTVar1 != (TabMenuBase *)0x0) {
      uStack_2 = (pTVar1->klass->vtable).__unknown_1.method;
      (*(pTVar1->klass->vtable).__unknown_1.methodPtr)(pTVar1,3,0,0);
      pIVar3 = (x->fields).inventorySlots;
      this = (FirstTimeActivatableClientShopInventoryGotoCategory_c *)0x0;
      if (pIVar3 != (InventorySlots *)0x0) {
        iVar4 = (x->fields).numberOfSlots;
        if (cRam_? == '\0') {
          FUN_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<int,_InventorySlot>__GetEnumerator__
                        ,0,iVar4,0);
          LOCK();
          UNLOCK();
          FUN_?(&
                        MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_InventorySlot>__Dispose__
                       );
          LOCK();
          UNLOCK();
          FUN_?(&
                        MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_InventorySlot>__MoveNext__
                       );
          LOCK();
          UNLOCK();
          FUN_?(&
                        MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_InventorySlot>__get_Current__
                       );
          LOCK();
          UNLOCK();
          FUN_?(&
                        MethodInfo__System__Collections__Generic__KeyValuePair<int,_InventorySlot>__get_Key__
                       );
          LOCK();
          UNLOCK();
          FUN_?(&
                        MethodInfo__System__Collections__Generic__KeyValuePair<int,_InventorySlot>__get_Value__
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pDStack_5 = (Dictionary_2_System_UInt32_System_Object_ *)(pIVar3->fields).inventorySlots;
        if (pDStack_5 == (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
          FUN_?();
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uStack_7 = 0;
        uStack_8 = 0;
        if (iRam_? != 0) {
          uVar9 = (uint)((ulonglong)&pDStack_5 >> 0xc);
          puVar10 = (ulonglong *)((ulonglong)((uVar9 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar11 = *puVar10;
            LOCK();
            uVar12 = *puVar10;
            if (uVar11 == uVar12) {
              *puVar10 = uVar11 | 1L << (uVar9 & 0x3f);
            }
            UNLOCK();
          } while (uVar11 != uVar12);
        }
        uStack_13 = (ulonglong)(uint)(pDStack_5->fields)._version;
        puStack_14 = (undefined *)0x2;
        auStack_15._8_8_ = uStack_13;
        auStack_15._16_8_ = 0;
        auStack_15._24_8_ = (Object *)0x0;
        uStack_2._0_4_ = 2;
        uStack_2._4_4_ = 0;
        auStack_15._0_8_ = pDStack_5;
        while( true ) {
          bVar16 = mscorlib.dll::System::Collections::Generic::
                  Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
                  Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                            ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                             auStack_15,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_InventorySlot>__MoveNext__
                            );
          if (bVar16 == 0) {
            return;
          }
          if ((Object *)auStack_15._24_8_ == (Object *)0x0) break;
          *(int *)&((Object *)(auStack_15._24_8_ + 0x20))->klass = auStack_15._16_4_ - iVar4;
        }
        FUN_?();
        FUN_?();
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
  }
  FUN_?(this);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void <DoShowing>b__5_1(InventoryController, BaseEventData) */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::FirstTimeSystem::
     FirstTimeActivatableClientShopInventoryGotoCategory+<>c::
     FirstTimeActivatableClientShopInventoryGotoCategory_c__DoShowing_b__5_1
               (FirstTimeActivatableClientShopInventoryGotoCategory_c *this,InventoryController *x,
               BaseEventData *y,MethodInfo *method)

{
  if (x == (InventoryController *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pUVar2 = (x->fields).OnTabSelected;
  if (pUVar2 != (UnityAction_1_System_Int32_ *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pUVar2->fields)._._.invoke_impl)
              ((pUVar2->fields)._._.method_code,3,(pUVar2->fields)._._.method);
    return;
  }
  return;
}


/* FirstTimeActivatableClientShopInventoryGotoCategory+<>c() */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::FirstTimeSystem::
     FirstTimeActivatableClientShopInventoryGotoCategory+<>c::
     FirstTimeActivatableClientShopInventoryGotoCategory_c__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UGUI__Desktop__Scripts__EditMode__FirstTimeSystem__FirstTimeActivatableClientShopInventoryGotoCategory____c
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pFVar1 = (FirstTimeActivatableClientShopInventoryGotoCategory_c *)
           FUN_?(
                        TypeInfo__UGUI__Desktop__Scripts__EditMode__FirstTimeSystem__FirstTimeActivatableClientShopInventoryGotoCategory____c
                        );
  TypeInfo__UGUI__Desktop__Scripts__EditMode__FirstTimeSystem__FirstTimeActivatableClientShopInventoryGotoCategory____c
  ->static_fields->__9 = pFVar1;
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)
                   TypeInfo__UGUI__Desktop__Scripts__EditMode__FirstTimeSystem__FirstTimeActivatableClientShopInventoryGotoCategory____c
                   ->static_fields >> 0xc);
    puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar4 = *puVar3;
      LOCK();
      uVar5 = *puVar3;
      if (uVar4 == uVar5) {
        *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (uVar4 != uVar5);
  }
  return;
}

