
/* Void Invoke() */

void MVCommon.dll::MV::Common::Urls+OnStreamingAssetsUrlAvailable::
     Urls_OnStreamingAssetsUrlAvailable_Invoke
               (Urls_OnStreamingAssetsUrlAvailable *this,MethodInfo *method)

{
  this_00 = (Urls_OnStreamingAssetsUrlAvailable *)(this->fields)._.prev;
  if (this_00 != (Urls_OnStreamingAssetsUrlAvailable *)0x0) {
    Urls_OnStreamingAssetsUrlAvailable_Invoke(this_00,method);
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
      if (cVar7 == '\0') {
        (*(code *)(&(pOVar2->klass->vtable).Equals)[this_01->flags].method)
                  (pOVar2,(&(pOVar2->klass->vtable).Finalize)[this_01->flags].methodPtr);
        return;
      }
      pIVar8 = (Il2CppClass *)
                mscorlib.dll::System::Collections::Generic::
                KeyValuePair`2[WinningConditionType,System::Object]::
                KeyValuePair_2_WinningConditionType_System_Object__get_Value
                          ((KeyValuePair_2_WinningConditionType_System_Object_ *)this_01,method_00);
      uVar9 = 0;
      pOVar10 = pOVar2->klass;
      uVar11._0_1_ = (pOVar10->_1).rank;
      uVar11._1_1_ = (pOVar10->_1).minimumAlignment;
      if (uVar11 != 0) {
        do {
          if (pOVar10->interfaceOffsets[uVar9].interfaceType == pIVar8) {
            iVar12 = pOVar10->interfaceOffsets[uVar9].offset + (uint)this_01->flags;
            (*(code *)(&(pOVar2->klass->vtable).Equals)[iVar12].method)
                      (pOVar2,(&(pOVar2->klass->vtable).Finalize)[iVar12].methodPtr);
            return;
          }
          uVar9 = uVar9 + 1;
        } while (uVar9 < uVar11);
      }
      puVar13 = (undefined4 *)func_?(pOVar2,pIVar8,(uint)this_01->flags);
      (*(code *)*puVar13)(pOVar2,puVar13[1]);
      return;
    }
    uVar14 = (uint)this_01->flags;
    if (cVar7 == '\0') {
      puVar13 = (undefined4 *)
               func_?((&(pOVar2->klass->vtable).Finalize)[uVar14].methodPtr,this_01);
      (*(code *)*puVar13)(pOVar2,puVar13);
      return;
    }
    pOVar10 = pOVar2->klass;
    uVar11 = 0;
    uVar9._0_1_ = (pOVar10->_1).rank;
    uVar9._1_1_ = (pOVar10->_1).minimumAlignment;
    pMVar5 = this_01;
    if (uVar9 != 0) {
      do {
        if (pOVar10->interfaceOffsets[uVar11].interfaceType == (Il2CppClass *)this_01->name) {
          ppMVar15 = &(&(pOVar3->klass->vtable).Equals)
                     [(uint)method_00->flags + pOVar3->klass->interfaceOffsets[uVar11].offset].
                     method;
          goto code_?;
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 < uVar9);
      uVar14 = (uint)method_00->flags;
      pMVar5 = method_00;
      pOVar2 = pOVar3;
    }
    pOVar3 = pOVar2;
    method_00 = pMVar5;
    ppMVar15 = (MethodInfo **)func_?(pOVar3,(Il2CppClass *)this_01->name,uVar14);
code_?:
    puVar13 = (undefined4 *)func_?(ppMVar15[1],method_00);
    (*(code *)*puVar13)(pOVar3,puVar13);
    return;
  }
  (*pcVar1)(pOVar2,this_01);
  return;
}

