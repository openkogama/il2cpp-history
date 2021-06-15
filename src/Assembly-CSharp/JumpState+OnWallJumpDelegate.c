
/* Void Invoke() */

void Assembly-CSharp.dll::JumpState+OnWallJumpDelegate::JumpState_OnWallJumpDelegate_Invoke
               (JumpState_OnWallJumpDelegate *this,MethodInfo *method)

{
  this_00 = (JumpState_OnWallJumpDelegate *)(this->fields)._.prev;
  if (this_00 != (JumpState_OnWallJumpDelegate *)0x0) {
    JumpState_OnWallJumpDelegate_Invoke(this_00,method);
  }
  this_01 = (this->fields)._._.method;
  pcVar1 = (this->fields)._._.method_ptr;
  pOVar2 = (this->fields)._._.m_target;
  pOVar3 = pOVar2;
  method_00 = this_01;
  if (this_01->flags == 0xffff) {
    func_?(this_01);
  }
  cVar4 = func_?(this_01);
  if (cVar4 == '\0') {
    if ((char)this_01->iflags == '\0') {
      (*pcVar1)();
      return;
    }
  }
  else if ((this_01->flags != 0xffff) &&
          (((pOVar2 == (Object *)0x0 || (((pOVar2->klass->_1).token & 0x100) == 0)) &&
           ((this->fields)._._.invoke_impl != (void *)0x0)))) {
    cVar4 = func_?(pOVar2);
    if (cVar4 != '\0') {
      return;
    }
    pMVar5 = this_01;
    cVar4 = func_?();
    pOVar6 = mscorlib.dll::System::Collections::Generic::KeyValuePair`2[WinningConditionType,System
             ::Object]::KeyValuePair_2_WinningConditionType_System_Object__get_Value
                       ((KeyValuePair_2_WinningConditionType_System_Object_ *)this_01,pMVar5);
    cVar7 = func_?(pOVar6);
    if (cVar4 == '\0') {
      if (cVar7 != '\0') {
        pOVar3 = mscorlib.dll::System::Collections::Generic::
                  KeyValuePair`2[WinningConditionType,System::Object]::
                  KeyValuePair_2_WinningConditionType_System_Object__get_Value
                            ((KeyValuePair_2_WinningConditionType_System_Object_ *)this_01,method_00
                            );
        func_?(this_01->flags,pOVar3,pOVar2);
        return;
      }
      (*(code *)(&(pOVar2->klass->vtable).Equals)[this_01->flags].method)
                (pOVar2,(&(pOVar2->klass->vtable).Finalize)[this_01->flags].methodPtr);
      return;
    }
    uVar8 = (uint)this_01->flags;
    if (cVar7 == '\0') {
      puVar9 = (undefined4 *)
                func_?((&(pOVar2->klass->vtable).Finalize)[uVar8].methodPtr,this_01);
      (*(code *)*puVar9)(pOVar2,puVar9);
      return;
    }
    pOVar10 = pOVar2->klass;
    uVar11 = 0;
    uVar12._0_1_ = (pOVar10->_1).rank;
    uVar12._1_1_ = (pOVar10->_1).minimumAlignment;
    pMVar5 = this_01;
    if (uVar12 != 0) {
      do {
        if (pOVar10->interfaceOffsets[uVar11].interfaceType == (Il2CppClass *)this_01->name) {
          ppMVar13 = &(&(pOVar3->klass->vtable).Equals)
                     [(uint)method_00->flags + pOVar3->klass->interfaceOffsets[uVar11].offset].
                     method;
          goto code_?;
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 < uVar12);
      uVar8 = (uint)method_00->flags;
      pMVar5 = method_00;
      pOVar2 = pOVar3;
    }
    pOVar3 = pOVar2;
    method_00 = pMVar5;
    ppMVar13 = (MethodInfo **)func_?(pOVar3,(Il2CppClass *)this_01->name,uVar8);
code_?:
    puVar9 = (undefined4 *)func_?(ppMVar13[1],method_00);
    (*(code *)*puVar9)(pOVar3,puVar9);
    return;
  }
  (*pcVar1)(pOVar2,this_01);
  return;
}

