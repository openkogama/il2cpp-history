
/* Void OnDisable() */

void Assembly-CSharp.dll::AvatarEnabledChangeHandler::AvatarEnabledChangeHandler_OnDisable
               (AvatarEnabledChangeHandler *this,MethodInfo *method)

{
  pAVar1 = (this->fields).OnDisabled;
  if (pAVar1 == (Action *)0x0) {
    return;
  }
  this_00 = (JumpState_OnWallJumpDelegate *)(pAVar1->fields)._.prev;
  if (this_00 != (JumpState_OnWallJumpDelegate *)0x0) {
    JumpState+OnWallJumpDelegate::JumpState_OnWallJumpDelegate_Invoke(this_00,(MethodInfo *)0x0);
  }
  this_01 = (pAVar1->fields)._._.method;
  pcVar2 = (pAVar1->fields)._._.method_ptr;
  pOVar3 = (pAVar1->fields)._._.m_target;
  pOVar4 = pOVar3;
  method_00 = this_01;
  if (this_01->flags == 0xffff) {
    func_?(this_01);
  }
  cVar5 = func_?(this_01);
  if (cVar5 == '\0') {
    if ((char)this_01->iflags == '\0') {
      (*pcVar2)();
      return;
    }
  }
  else if ((this_01->flags != 0xffff) &&
          (((pOVar3 == (Object *)0x0 || (((pOVar3->klass->_1).token & 0x100) == 0)) &&
           ((pAVar1->fields)._._.invoke_impl != (void *)0x0)))) {
    cVar5 = func_?(pOVar3);
    if (cVar5 != '\0') {
      return;
    }
    pMVar6 = this_01;
    cVar5 = func_?();
    pOVar7 = mscorlib.dll::System::Collections::Generic::KeyValuePair`2[WinningConditionType,System
             ::Object]::KeyValuePair_2_WinningConditionType_System_Object__get_Value
                       ((KeyValuePair_2_WinningConditionType_System_Object_ *)this_01,pMVar6);
    cVar8 = func_?(pOVar7);
    if (cVar5 == '\0') {
      if (cVar8 != '\0') {
        pOVar4 = mscorlib.dll::System::Collections::Generic::
                  KeyValuePair`2[WinningConditionType,System::Object]::
                  KeyValuePair_2_WinningConditionType_System_Object__get_Value
                            ((KeyValuePair_2_WinningConditionType_System_Object_ *)this_01,method_00
                            );
        func_?(this_01->flags,pOVar4,pOVar3);
        return;
      }
      (*(code *)(&(pOVar3->klass->vtable).Equals)[this_01->flags].method)
                (pOVar3,(&(pOVar3->klass->vtable).Finalize)[this_01->flags].methodPtr);
      return;
    }
    uVar9 = (uint)this_01->flags;
    if (cVar8 == '\0') {
      puVar10 = (undefined4 *)
                func_?((&(pOVar3->klass->vtable).Finalize)[uVar9].methodPtr,this_01);
      (*(code *)*puVar10)(pOVar3,puVar10);
      return;
    }
    pOVar11 = pOVar3->klass;
    uVar12 = 0;
    uVar13._0_1_ = (pOVar11->_1).rank;
    uVar13._1_1_ = (pOVar11->_1).minimumAlignment;
    pMVar6 = this_01;
    if (uVar13 != 0) {
      do {
        if (pOVar11->interfaceOffsets[uVar12].interfaceType == (Il2CppClass *)this_01->name) {
          ppMVar14 = &(&(pOVar4->klass->vtable).Equals)
                      [(uint)method_00->flags + pOVar4->klass->interfaceOffsets[uVar12].offset].
                      method;
          goto code_?;
        }
        uVar12 = uVar12 + 1;
      } while (uVar12 < uVar13);
      uVar9 = (uint)method_00->flags;
      pMVar6 = method_00;
      pOVar3 = pOVar4;
    }
    pOVar4 = pOVar3;
    method_00 = pMVar6;
    ppMVar14 = (MethodInfo **)func_?(pOVar4,(Il2CppClass *)this_01->name,uVar9);
code_?:
    puVar10 = (undefined4 *)func_?(ppMVar14[1],method_00);
    (*(code *)*puVar10)(pOVar4,puVar10);
    return;
  }
  (*pcVar2)(pOVar3,this_01);
  return;
}

