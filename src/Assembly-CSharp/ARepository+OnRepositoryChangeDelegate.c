
/* Void Invoke(ARepository) */

void Assembly-CSharp.dll::ARepository+OnRepositoryChangeDelegate::
     ARepository_OnRepositoryChangeDelegate_Invoke
               (ARepository_OnRepositoryChangeDelegate *this,ARepository *repository,
               MethodInfo *method)

{
  this_00 = (ARepository_OnRepositoryChangeDelegate *)(this->fields)._.prev;
  if (this_00 != (ARepository_OnRepositoryChangeDelegate *)0x0) {
    ARepository_OnRepositoryChangeDelegate_Invoke(this_00,repository,method);
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
    (*(code *)pMVar1)(pOVar2,repository,this_01);
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
      pMVar7 = this_01;
      cVar6 = func_?();
      pOVar8 = mscorlib.dll::System::Collections::Generic::
                KeyValuePair`2[WinningConditionType,System::Object]::
                KeyValuePair_2_WinningConditionType_System_Object__get_Value
                          ((KeyValuePair_2_WinningConditionType_System_Object_ *)this_01,pMVar7);
      cVar5 = func_?(pOVar8);
      if (cVar6 == '\0') {
        if (cVar5 == '\0') {
          (*(code *)(&(pOVar2->klass->vtable).Equals)[this_01->flags].method)
                    (pOVar2,repository,(&(pOVar2->klass->vtable).Finalize)[this_01->flags].methodPtr
                    );
          return;
        }
        pIVar9 = (Il2CppClass *)
                  mscorlib.dll::System::Collections::Generic::
                  KeyValuePair`2[WinningConditionType,System::Object]::
                  KeyValuePair_2_WinningConditionType_System_Object__get_Value
                            ((KeyValuePair_2_WinningConditionType_System_Object_ *)this_01,pMVar1);
        uVar10 = 0;
        pOVar11 = pOVar2->klass;
        uVar12._0_1_ = (pOVar11->_1).rank;
        uVar12._1_1_ = (pOVar11->_1).minimumAlignment;
        if (uVar12 != 0) {
          do {
            if (pOVar11->interfaceOffsets[uVar10].interfaceType == pIVar9) {
              ppMVar13 = &(&(pOVar2->klass->vtable).Equals)
                         [pOVar11->interfaceOffsets[uVar10].offset + (uint)this_01->flags].method;
              goto code_?;
            }
            uVar10 = uVar10 + 1;
          } while (uVar10 < uVar12);
        }
        ppMVar13 = (MethodInfo **)func_?(pOVar2,pIVar9,(uint)this_01->flags);
code_?:
        (*(code *)*ppMVar13)(pOVar2,repository,ppMVar13[1]);
        return;
      }
      uVar14 = (uint)this_01->flags;
      if (cVar5 == '\0') {
        pIVar15 = (&(pOVar2->klass->vtable).Finalize)[uVar14].methodPtr;
      }
      else {
        pOVar11 = pOVar2->klass;
        uVar10 = 0;
        uVar16._0_1_ = (pOVar11->_1).rank;
        uVar16._1_1_ = (pOVar11->_1).minimumAlignment;
        pMVar1 = this_01;
        if (uVar16 != 0) {
          do {
            if (pOVar11->interfaceOffsets[uVar10].interfaceType == (Il2CppClass *)this_01->name) {
              ppMVar13 = &(&(pOVar3->klass->vtable).Equals)
                         [(uint)pMVar4->flags + pOVar3->klass->interfaceOffsets[uVar10].offset].
                         method;
              goto code_?;
            }
            uVar10 = uVar10 + 1;
          } while (uVar10 < uVar16);
          uVar14 = (uint)pMVar4->flags;
          pMVar1 = pMVar4;
          pOVar2 = pOVar3;
        }
        pOVar3 = pOVar2;
        pMVar4 = pMVar1;
        ppMVar13 = (MethodInfo **)func_?(pOVar3,(Il2CppClass *)this_01->name,uVar14);
code_?:
        pIVar15 = (Il2CppMethodPointer)ppMVar13[1];
        pOVar2 = pOVar3;
        this_01 = pMVar4;
      }
      puVar17 = (undefined4 *)func_?(pIVar15,this_01);
      (*(code *)*puVar17)(pOVar2,repository,puVar17);
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
    pMVar7 = this_01;
    cVar6 = func_?();
    pOVar2 = mscorlib.dll::System::Collections::Generic::KeyValuePair`2[WinningConditionType,System
             ::Object]::KeyValuePair_2_WinningConditionType_System_Object__get_Value
                       ((KeyValuePair_2_WinningConditionType_System_Object_ *)this_01,pMVar7);
    cVar5 = func_?(pOVar2);
    if (cVar6 == '\0') {
      if (cVar5 != '\0') {
        pOVar2 = mscorlib.dll::System::Collections::Generic::
                 KeyValuePair`2[WinningConditionType,System::Object]::
                 KeyValuePair_2_WinningConditionType_System_Object__get_Value
                           ((KeyValuePair_2_WinningConditionType_System_Object_ *)this_01,pMVar1);
        func_?(this_01->flags,pOVar2,repository);
        return;
      }
      (*(code *)(&(repository->klass->vtable).Equals)[this_01->flags].method)
                (repository,(&(repository->klass->vtable).Finalize)[this_01->flags].methodPtr);
      return;
    }
    uVar14 = (uint)this_01->flags;
    if (cVar5 == '\0') {
      puVar17 = (undefined4 *)
               func_?((&(repository->klass->vtable).Finalize)[uVar14].methodPtr,this_01);
      (*(code *)*puVar17)(repository,puVar17);
      return;
    }
    pAVar18 = repository->klass;
    uVar12 = 0;
    uVar10._0_1_ = (pAVar18->_1).rank;
    uVar10._1_1_ = (pAVar18->_1).minimumAlignment;
    pMVar1 = this_01;
    if (uVar10 != 0) {
      do {
        if (pAVar18->interfaceOffsets[uVar12].interfaceType == (Il2CppClass *)this_01->name) {
          ppMVar13 = &(&(repository->klass->vtable).Equals)
                     [(uint)pMVar4->flags + repository->klass->interfaceOffsets[uVar12].offset].
                     method;
          goto code_?;
        }
        uVar12 = uVar12 + 1;
      } while (uVar12 < uVar10);
      uVar14 = (uint)pMVar4->flags;
      pMVar1 = pMVar4;
    }
    pMVar4 = pMVar1;
    ppMVar13 = (MethodInfo **)func_?(repository,(Il2CppClass *)this_01->name,uVar14);
code_?:
    puVar17 = (undefined4 *)func_?(ppMVar13[1],pMVar4);
    (*(code *)*puVar17)(repository,puVar17);
    return;
  }
  (*(code *)pMVar1)(repository,this_01);
  return;
}

