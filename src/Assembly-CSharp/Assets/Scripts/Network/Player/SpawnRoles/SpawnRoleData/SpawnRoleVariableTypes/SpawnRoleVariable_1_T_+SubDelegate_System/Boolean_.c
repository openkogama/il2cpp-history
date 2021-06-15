
/* IAsyncResult BeginInvoke(Boolean, AsyncCallback, Object) */

IAsyncResult *
Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
SpawnRoleVariableTypes::SpawnRoleVariable`1[T]+SubDelegate[System::Boolean]::
SpawnRoleVariable_1_T_SubDelegate_System_Boolean__BeginInvoke
          (SpawnRoleVariable_1_T_SubDelegate_System_Boolean_ *this,bool value,
          AsyncCallback *callback,Object *object,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  uVar2 = func_?(TypeInfo__System__Boolean,&value);
  uStack_1 = CONCAT44(uStack_1._4_4_,uVar2);
  pIVar3 = (IAsyncResult *)func_?(this,&uStack_1,callback,object);
  return pIVar3;
}


/* Void Invoke(Boolean) */

void Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[T]+SubDelegate[System::Boolean]::
     SpawnRoleVariable_1_T_SubDelegate_System_Boolean__Invoke
               (SpawnRoleVariable_1_T_SubDelegate_System_Boolean_ *this,bool value,
               MethodInfo *method)

{
  this_00 = (SpawnRoleVariable_1_T_SubDelegate_System_Boolean_ *)(this->fields)._.prev;
  if (this_00 != (SpawnRoleVariable_1_T_SubDelegate_System_Boolean_ *)0x0) {
    SpawnRoleVariable_1_T_SubDelegate_System_Boolean__Invoke(this_00,value,method);
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
  if (cVar5 == '\0') {
    if ((char)this_01->iflags == '\x01') {
      (*(code *)pMVar1)();
      return;
    }
  }
  else if ((this_01->flags != 0xffff) &&
          (((pOVar2 == (Object *)0x0 || (((pOVar2->klass->_1).token & 0x100) == 0)) &&
           ((this->fields)._._.invoke_impl != (void *)0x0)))) {
    cVar5 = func_?(pOVar2);
    if (cVar5 != '\0') {
      return;
    }
    if (pOVar2 == (Object *)0x0) {
      (*(code *)pMVar1)(_value);
      return;
    }
    method_00 = this_01;
    cVar5 = func_?();
    pOVar6 = mscorlib.dll::System::Collections::Generic::KeyValuePair`2[WinningConditionType,System
             ::Object]::KeyValuePair_2_WinningConditionType_System_Object__get_Value
                       ((KeyValuePair_2_WinningConditionType_System_Object_ *)this_01,method_00);
    cVar7 = func_?(pOVar6);
    if (cVar5 == '\0') {
      if (cVar7 == '\0') {
        (*(code *)(&(pOVar2->klass->vtable).Equals)[this_01->flags].method)
                  (pOVar2,_value,(&(pOVar2->klass->vtable).Finalize)[this_01->flags].methodPtr);
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
      (*(code *)*ppMVar12)(pOVar2,_value,ppMVar12[1]);
      return;
    }
    uVar13 = (uint)this_01->flags;
    if (cVar7 == '\0') {
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
    (*(code *)*puVar15)(pOVar2,_value,puVar15);
    return;
  }
  (*(code *)pMVar1)(pOVar2,_value,this_01);
  return;
}

