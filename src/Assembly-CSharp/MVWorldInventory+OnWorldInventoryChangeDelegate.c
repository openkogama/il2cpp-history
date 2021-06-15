
/* Void Invoke(MVWorldInventory) */

void Assembly-CSharp.dll::MVWorldInventory+OnWorldInventoryChangeDelegate::
     MVWorldInventory_OnWorldInventoryChangeDelegate_Invoke
               (MVWorldInventory_OnWorldInventoryChangeDelegate *this,MVWorldInventory *inventory,
               MethodInfo *method)

{
  this_00 = (MVWorldInventory_OnWorldInventoryChangeDelegate *)(this->fields)._.prev;
  if (this_00 != (MVWorldInventory_OnWorldInventoryChangeDelegate *)0x0) {
    MVWorldInventory_OnWorldInventoryChangeDelegate_Invoke(this_00,inventory,method);
  }
  this_01 = (this->fields)._._.method;
  pMVar1 = (this->fields)._._.method_ptr;
  pOVar2 = (this->fields)._._.m_target;
  pOVar3 = pOVar2;
  pMVar4 = this_01;
  if (this_01->flags == 0xffff) {
    func_?(this_01);
  }
  cVar5 = func_?(this_01);
  cVar6 = (char)this_01->iflags;
  if (cVar5 == '\0') {
    if (cVar6 == '\x01') {
      (*(code *)pMVar1)();
      return;
    }
code_?:
    (*(code *)pMVar1)(pOVar2,inventory,this_01);
    return;
  }
  if (cVar6 == '\x01') {
    if (((this_01->flags == 0xffff) ||
        ((pOVar2 != (Object *)0x0 && (((pOVar2->klass->_1).token & 0x100) != 0)))) ||
       ((this->fields)._._.invoke_impl == (void *)0x0)) goto code_?;
    cVar6 = func_?(pOVar2);
    if (cVar6 != '\0') {
      return;
    }
    if (pOVar2 != (Object *)0x0) {
      method_00 = this_01;
      cVar6 = func_?();
      pOVar7 = mscorlib.dll::System::Collections::Generic::
               KeyValuePair`2[WinningConditionType,System::Object]::
               KeyValuePair_2_WinningConditionType_System_Object__get_Value
                         ((KeyValuePair_2_WinningConditionType_System_Object_ *)this_01,method_00);
      cVar5 = func_?(pOVar7);
      if (cVar6 == '\0') {
        if (cVar5 == '\0') {
          (*(code *)(&(pOVar2->klass->vtable).Equals)[this_01->flags].method)
                    (pOVar2,inventory,(&(pOVar2->klass->vtable).Finalize)[this_01->flags].methodPtr)
          ;
          return;
        }
        pIVar8 = (Il2CppClass *)
                 mscorlib.dll::System::Collections::Generic::
                 KeyValuePair`2[WinningConditionType,System::Object]::
                 KeyValuePair_2_WinningConditionType_System_Object__get_Value
                           ((KeyValuePair_2_WinningConditionType_System_Object_ *)this_01,pMVar1);
        uVar9 = 0;
        pOVar10 = pOVar2->klass;
        uVar11._0_1_ = (pOVar10->_1).rank;
        uVar11._1_1_ = (pOVar10->_1).minimumAlignment;
        if (uVar11 != 0) {
          do {
            if (pOVar10->interfaceOffsets[uVar9].interfaceType == pIVar8) {
              ppMVar12 = &(&(pOVar2->klass->vtable).Equals)
                         [pOVar10->interfaceOffsets[uVar9].offset + (uint)this_01->flags].method;
              goto code_?;
            }
            uVar9 = uVar9 + 1;
          } while (uVar9 < uVar11);
        }
        ppMVar12 = (MethodInfo **)func_?(pOVar2,pIVar8,(uint)this_01->flags);
code_?:
        (*(code *)*ppMVar12)(pOVar2,inventory,ppMVar12[1]);
        return;
      }
      uVar13 = (uint)this_01->flags;
      if (cVar5 == '\0') {
        pIVar14 = (&(pOVar2->klass->vtable).Finalize)[uVar13].methodPtr;
      }
      else {
        pOVar10 = pOVar2->klass;
        uVar11 = 0;
        uVar9._0_1_ = (pOVar10->_1).rank;
        uVar9._1_1_ = (pOVar10->_1).minimumAlignment;
        pMVar1 = this_01;
        if (uVar9 != 0) {
          do {
            if (pOVar10->interfaceOffsets[uVar11].interfaceType == (Il2CppClass *)this_01->name) {
              ppMVar12 = &(&(pOVar3->klass->vtable).Equals)
                         [(uint)pMVar4->flags + pOVar3->klass->interfaceOffsets[uVar11].offset].
                         method;
              goto code_?;
            }
            uVar11 = uVar11 + 1;
          } while (uVar11 < uVar9);
          uVar13 = (uint)pMVar4->flags;
          pMVar1 = pMVar4;
          pOVar2 = pOVar3;
        }
        pOVar3 = pOVar2;
        pMVar4 = pMVar1;
        ppMVar12 = (MethodInfo **)func_?(pOVar3,(Il2CppClass *)this_01->name,uVar13);
code_?:
        pIVar14 = (Il2CppMethodPointer)ppMVar12[1];
        pOVar2 = pOVar3;
        this_01 = pMVar4;
      }
      puVar15 = (undefined4 *)func_?(pIVar14,this_01);
      (*(code *)*puVar15)(pOVar2,inventory,puVar15);
      return;
    }
  }
  else if ((this_01->flags != 0xffff) &&
          (((pOVar2 == (Object *)0x0 || (((pOVar2->klass->_1).token & 0x100) == 0)) &&
           ((this->fields)._._.invoke_impl != (void *)0x0)))) {
    cVar6 = func_?(pOVar2);
    if (cVar6 != '\0') {
      return;
    }
    pMVar4 = this_01;
    cVar6 = func_?();
    pOVar2 = mscorlib.dll::System::Collections::Generic::KeyValuePair`2[WinningConditionType,System
             ::Object]::KeyValuePair_2_WinningConditionType_System_Object__get_Value
                       ((KeyValuePair_2_WinningConditionType_System_Object_ *)this_01,pMVar4);
    cVar5 = func_?(pOVar2);
    if (cVar6 != '\0') {
      if (cVar5 != '\0') {
        func_?();
        return;
      }
      func_?(this_01,inventory);
      return;
    }
    if (cVar5 != '\0') {
      pOVar2 = mscorlib.dll::System::Collections::Generic::
               KeyValuePair`2[WinningConditionType,System::Object]::
               KeyValuePair_2_WinningConditionType_System_Object__get_Value
                         ((KeyValuePair_2_WinningConditionType_System_Object_ *)this_01,pMVar1);
      func_?(this_01->flags,pOVar2,inventory);
      return;
    }
    func_?(this_01->flags,inventory);
    return;
  }
  (*(code *)pMVar1)(inventory,this_01);
  return;
}

