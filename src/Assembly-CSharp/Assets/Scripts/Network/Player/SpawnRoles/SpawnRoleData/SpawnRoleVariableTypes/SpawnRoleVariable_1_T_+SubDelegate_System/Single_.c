
/* IAsyncResult BeginInvoke(Single, AsyncCallback, Object) */

IAsyncResult *
Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
SpawnRoleVariableTypes::SpawnRoleVariable`1[T]+SubDelegate[System::Single]::
SpawnRoleVariable_1_T_SubDelegate_System_Single__BeginInvoke
          (SpawnRoleVariable_1_T_SubDelegate_System_Single_ *this,float value,
          AsyncCallback *callback,Object *object,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  uVar2 = func_?(TypeInfo__System__Single,&value);
  uStack_1 = CONCAT44(uStack_1._4_4_,uVar2);
  pIVar3 = (IAsyncResult *)func_?(this,&uStack_1,callback,object);
  return pIVar3;
}


/* Void Invoke(Single) */

void Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[T]+SubDelegate[System::Single]::
     SpawnRoleVariable_1_T_SubDelegate_System_Single__Invoke
               (SpawnRoleVariable_1_T_SubDelegate_System_Single_ *this,float value,
               MethodInfo *method)

{
  this_00 = (SpawnRoleVariable_1_T_SubDelegate_System_Single_ *)(this->fields)._.prev;
  if (this_00 != (SpawnRoleVariable_1_T_SubDelegate_System_Single_ *)0x0) {
    SpawnRoleVariable_1_T_SubDelegate_System_Single__Invoke(this_00,value,method);
  }
  this_01 = (this->fields)._._.method;
  pcVar1 = (this->fields)._._.method_ptr;
  pOVar2 = (this->fields)._._.m_target;
  pOVar3 = pOVar2;
  pMVar4 = this_01;
  if (this_01->flags == 0xffff) {
    func_?(this_01);
  }
  cVar5 = func_?(this_01);
  if (cVar5 == '\0') {
    if ((char)this_01->iflags == '\x01') {
      (*pcVar1)();
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
      (*pcVar1)(value);
      return;
    }
    pMVar6 = this_01;
    cVar5 = func_?();
    pOVar7 = mscorlib.dll::System::Collections::Generic::KeyValuePair`2[WinningConditionType,System
             ::Object]::KeyValuePair_2_WinningConditionType_System_Object__get_Value
                       ((KeyValuePair_2_WinningConditionType_System_Object_ *)this_01,pMVar6);
    cVar8 = func_?(pOVar7);
    if (cVar5 == '\0') {
      if (cVar8 == '\0') {
        (*(code *)(&(pOVar2->klass->vtable).Equals)[this_01->flags].method)
                  (pOVar2,value,(&(pOVar2->klass->vtable).Finalize)[this_01->flags].methodPtr);
        return;
      }
      pIVar9 = (Il2CppClass *)
               mscorlib.dll::System::Collections::Generic::
               KeyValuePair`2[WinningConditionType,System::Object]::
               KeyValuePair_2_WinningConditionType_System_Object__get_Value
                         ((KeyValuePair_2_WinningConditionType_System_Object_ *)this_01,
                          in_stack_10);
      uVar11 = 0;
      pOVar12 = pOVar2->klass;
      uVar13._0_1_ = (pOVar12->_1).rank;
      uVar13._1_1_ = (pOVar12->_1).minimumAlignment;
      if (uVar13 != 0) {
        do {
          if (pOVar12->interfaceOffsets[uVar11].interfaceType == pIVar9) {
            ppMVar14 = &(&(pOVar2->klass->vtable).Equals)
                       [(uint)this_01->flags + pOVar12->interfaceOffsets[uVar11].offset].method;
            goto code_?;
          }
          uVar11 = uVar11 + 1;
        } while (uVar11 < uVar13);
      }
      ppMVar14 = (MethodInfo **)func_?(pOVar2,pIVar9,(uint)this_01->flags);
code_?:
      (*(code *)*ppMVar14)(pOVar2,value,ppMVar14[1]);
      return;
    }
    uVar15 = (uint)this_01->flags;
    if (cVar8 == '\0') {
      pIVar16 = (&(pOVar2->klass->vtable).Finalize)[uVar15].methodPtr;
    }
    else {
      pOVar12 = pOVar2->klass;
      uVar13 = 0;
      uVar11._0_1_ = (pOVar12->_1).rank;
      uVar11._1_1_ = (pOVar12->_1).minimumAlignment;
      pMVar6 = this_01;
      if (uVar11 != 0) {
        do {
          if (pOVar12->interfaceOffsets[uVar13].interfaceType == (Il2CppClass *)this_01->name) {
            ppMVar14 = &(&(pOVar3->klass->vtable).Equals)
                       [(uint)pMVar4->flags + pOVar3->klass->interfaceOffsets[uVar13].offset].
                       method;
            goto code_?;
          }
          uVar13 = uVar13 + 1;
        } while (uVar13 < uVar11);
        uVar15 = (uint)pMVar4->flags;
        pMVar6 = pMVar4;
        pOVar2 = pOVar3;
      }
      pOVar3 = pOVar2;
      pMVar4 = pMVar6;
      ppMVar14 = (MethodInfo **)func_?(pOVar3,(Il2CppClass *)this_01->name,uVar15);
code_?:
      pIVar16 = (Il2CppMethodPointer)ppMVar14[1];
      pOVar2 = pOVar3;
      this_01 = pMVar4;
    }
    puVar17 = (undefined4 *)func_?(pIVar16,this_01);
    (*(code *)*puVar17)(pOVar2,value,puVar17);
    return;
  }
  (*pcVar1)(pOVar2,value,this_01);
  return;
}

