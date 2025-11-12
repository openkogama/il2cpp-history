
/* Void OnPointerEnter(PointerEventData) */

void Assembly-CSharp.dll::HoverInputHandler::HoverInputHandler_OnPointerEnter
               (HoverInputHandler *this,PointerEventData *eventData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__HoverInputReceiver);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<HoverInputReceiver>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<HoverInputReceiver>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).hoverInputReceivers;
  uVar2 = 0;
  if (pLVar1 != (List_1_HoverInputReceiver_ *)0x0) {
    lVar3 = 0x20;
    do {
      if ((pLVar1->fields)._size <= (int)uVar2) {
        return;
      }
      pLVar1 = (this->fields).hoverInputReceivers;
      if (pLVar1 == (List_1_HoverInputReceiver_ *)0x0) break;
      if ((uint)(pLVar1->fields)._size <= uVar2) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pHVar5 = (pLVar1->fields)._items;
      if (pHVar5 == (HoverInputReceiver__Array *)0x0) break;
      if ((uint)pHVar5->max_length <= uVar2) {
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      plVar6 = *(longlong **)((longlong)pHVar5->vector + lVar3 + -0x20);
      if (plVar6 == (longlong *)0x0) break;
      lVar7 = *plVar6;
      uVar8 = 0;
      if (*(ushort *)(lVar7 + 0x12e) != 0) {
        do {
          if (*(HoverInputReceiver__Class **)(*(longlong *)(lVar7 + 0xb0) + uVar8 * 0x10) ==
              TypeInfo__HoverInputReceiver) {
            puVar9 = (undefined8 *)
                     ((longlong)*(int *)(*(longlong *)(lVar7 + 0xb0) + 8 + uVar8 * 0x10) * 0x10 +
                      0x138 + lVar7);
            goto code_?;
          }
          uVar10 = (short)uVar8 + 1;
          uVar8 = (ulonglong)uVar10;
        } while (uVar10 < *(ushort *)(lVar7 + 0x12e));
      }
      puVar9 = (undefined8 *)FUN_?(plVar6,TypeInfo__HoverInputReceiver,0);
code_?:
      (*(code *)*puVar9)(plVar6,puVar9[1]);
      pLVar1 = (this->fields).hoverInputReceivers;
      uVar2 = uVar2 + 1;
      lVar3 = lVar3 + 8;
    } while (pLVar1 != (List_1_HoverInputReceiver_ *)0x0);
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnPointerExit(PointerEventData) */

void Assembly-CSharp.dll::HoverInputHandler::HoverInputHandler_OnPointerExit
               (HoverInputHandler *this,PointerEventData *eventData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__HoverInputReceiver);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<HoverInputReceiver>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<HoverInputReceiver>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).hoverInputReceivers;
  uVar2 = 0;
  if (pLVar1 != (List_1_HoverInputReceiver_ *)0x0) {
    lVar3 = 0x20;
    do {
      if ((pLVar1->fields)._size <= (int)uVar2) {
        return;
      }
      pLVar1 = (this->fields).hoverInputReceivers;
      if (pLVar1 == (List_1_HoverInputReceiver_ *)0x0) break;
      if ((uint)(pLVar1->fields)._size <= uVar2) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pHVar5 = (pLVar1->fields)._items;
      if (pHVar5 == (HoverInputReceiver__Array *)0x0) break;
      if ((uint)pHVar5->max_length <= uVar2) {
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      plVar6 = *(longlong **)((longlong)pHVar5->vector + lVar3 + -0x20);
      if (plVar6 == (longlong *)0x0) break;
      lVar7 = *plVar6;
      uVar8 = 0;
      if (*(ushort *)(lVar7 + 0x12e) != 0) {
        do {
          if (*(HoverInputReceiver__Class **)(*(longlong *)(lVar7 + 0xb0) + uVar8 * 0x10) ==
              TypeInfo__HoverInputReceiver) {
            puVar9 = (undefined8 *)
                     ((longlong)(*(int *)(*(longlong *)(lVar7 + 0xb0) + 8 + uVar8 * 0x10) + 1) *
                      0x10 + 0x138 + lVar7);
            goto code_?;
          }
          uVar10 = (short)uVar8 + 1;
          uVar8 = (ulonglong)uVar10;
        } while (uVar10 < *(ushort *)(lVar7 + 0x12e));
      }
      puVar9 = (undefined8 *)FUN_?(plVar6,TypeInfo__HoverInputReceiver,1);
code_?:
      (*(code *)*puVar9)(plVar6,puVar9[1]);
      pLVar1 = (this->fields).hoverInputReceivers;
      uVar2 = uVar2 + 1;
      lVar3 = lVar3 + 8;
    } while (pLVar1 != (List_1_HoverInputReceiver_ *)0x0);
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SubscribeToHoverInput(HoverInputReceiver) */

void Assembly-CSharp.dll::HoverInputHandler::HoverInputHandler_SubscribeToHoverInput
               (HoverInputHandler *this,HoverInputReceiver *newInputReceiver,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<HoverInputReceiver>__Add_HoverInputReceiver_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = 
  MethodInfo__System__Collections__Generic__List<HoverInputReceiver>__Add_HoverInputReceiver_;
  pLVar2 = (this->fields).hoverInputReceivers;
  if (pLVar2 != (List_1_HoverInputReceiver_ *)0x0) {
    piVar3 = &(pLVar2->fields)._version;
    *piVar3 = *piVar3 + 1;
    pHVar4 = (pLVar2->fields)._items;
    if (pHVar4 != (HoverInputReceiver__Array *)0x0) {
      uVar5 = (pLVar2->fields)._size;
      if (uVar5 < (uint)pHVar4->max_length) {
        (pLVar2->fields)._size = uVar5 + 1;
      }
      else {
        uVar5 = (pLVar2->fields)._size;
        FUN_?(pLVar2,uVar5 + 1,
                      (pMVar1->klass->rgctx_data[0xe].method)->klass->rgctx_data[0xf].rgctxDataDummy
                      ,pHVar4,unaff_RDI);
        pHVar4 = (pLVar2->fields)._items;
        (pLVar2->fields)._size = uVar5 + 1;
        if (pHVar4 == (HoverInputReceiver__Array *)0x0) {
          FUN_?();
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      if ((uint)pHVar4->max_length <= uVar5) {
        FUN_?();
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      bVar7 = iRam_? != 0;
      pHVar4->vector[(int)uVar5] = newInputReceiver;
      if (bVar7) {
        uVar5 = (uint)((ulonglong)(pHVar4->vector + (int)uVar5) >> 0xc);
        puVar8 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar9 = *puVar8;
          LOCK();
          uVar10 = *puVar8;
          if (uVar9 == uVar10) {
            *puVar8 = uVar9 | 1L << (uVar5 & 0x3f);
          }
          UNLOCK();
        } while (uVar9 != uVar10);
      }
      return;
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void UnsubscribeToHoverInput(HoverInputReceiver) */

void Assembly-CSharp.dll::HoverInputHandler::HoverInputHandler_UnsubscribeToHoverInput
               (HoverInputHandler *this,HoverInputReceiver *newInputReceiver,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<HoverInputReceiver>__Remove_HoverInputReceiver_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = 
  MethodInfo__System__Collections__Generic__List<HoverInputReceiver>__Remove_HoverInputReceiver_;
  this_00 = (List_1_System_Object_ *)(this->fields).hoverInputReceivers;
  if (this_00 != (List_1_System_Object_ *)0x0) {
    index = mscorlib.dll::System::Array::Array_IndexOf_69
                      ((this_00->fields)._items,(Object *)newInputReceiver,0,(this_00->fields)._size
                       ,(MethodInfo__System__Collections__Generic__List<HoverInputReceiver>__Remove_HoverInputReceiver_
                         ->klass->rgctx_data[0x17].method)->klass->rgctx_data[0x27].method);
    if (index < 0) {
      return;
    }
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
    List_1_System_Object__RemoveAt(this_00,index,pMVar1->klass->rgctx_data[0x2b].method);
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* HoverInputHandler() */

void Assembly-CSharp.dll::HoverInputHandler::HoverInputHandler__ctor
               (HoverInputHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<HoverInputReceiver>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<HoverInputReceiver>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (List_1_HoverInputReceiver_ *)
            FUN_?(TypeInfo__System__Collections__Generic__List<HoverInputReceiver>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<HoverInputReceiver>__List__);
  bVar1 = iRam_? != 0;
  (this->fields).hoverInputReceivers = this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).hoverInputReceivers >> 0xc);
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
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  return;
}

