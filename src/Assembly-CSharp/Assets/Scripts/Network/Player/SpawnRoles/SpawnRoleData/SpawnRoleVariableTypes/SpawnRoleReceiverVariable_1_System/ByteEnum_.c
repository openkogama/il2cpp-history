
/* Void OnChange(ByteEnum) */

void Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleReceiverVariable`1[System::ByteEnum]::
     SpawnRoleReceiverVariable_1_System_ByteEnum__OnChange
               (SpawnRoleReceiverVariable_1_System_ByteEnum_ *this,ByteEnum__Enum newValue,
               MethodInfo *method)

{
  pSVar1 = (this->fields).subscribableVariableExternal;
  if (pSVar1 == (SubscribableVariable_1_System_ByteEnum_ *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pAVar3 = (pSVar1->fields)._.OnChange;
  (pSVar1->fields)._.value = (uint8_t)newValue;
  if (pAVar3 != (Action_1_ByteEnum_ *)0x0) {
    pAVar3 = (pSVar1->fields)._.OnChange;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pAVar3->fields)._._.invoke_impl)
              ((pAVar3->fields)._._.method_code,newValue,(pAVar3->fields)._._.method);
    return;
  }
  return;
}


/* SpawnRoleReceiverVariable`1[System.ByteEnum](SubscribableVariable`1[System.ByteEnum],
   SpawnRoleDataReceiver) */

void Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleReceiverVariable`1[System::ByteEnum]::
     SpawnRoleReceiverVariable_1_System_ByteEnum___ctor
               (SpawnRoleReceiverVariable_1_System_ByteEnum_ *this,
               SubscribableVariable_1_System_ByteEnum_ *subscribableVariableExternal,
               SpawnRoleDataReceiver *spawnRoleDataReceiver,MethodInfo *method)

{
  bVar1 = iRam_? != 0;
  (this->fields).subscribableVariableExternal = subscribableVariableExternal;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).subscribableVariableExternal >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  if (subscribableVariableExternal != (SubscribableVariable_1_System_ByteEnum_ *)0x0) {
    uVar6 = (subscribableVariableExternal->fields)._.value;
    pvVar7 = method->klass->rgctx_data[1].rgctxDataDummy;
    if ((*(byte *)((longlong)pvVar7 + 0x135) & 1) == 0) {
      pvVar7 = (void *)FUN_?(pvVar7);
    }
    pSVar8 = (SubscribableVariable_1_System_ByteEnum_ *)FUN_?(pvVar7);
    bVar1 = iRam_? != 0;
    (pSVar8->fields)._.value = uVar6;
    (this->fields).subscribableVariable = pSVar8;
    if (bVar1) {
      uVar2 = (uint)((ulonglong)&(this->fields).subscribableVariable >> 0xc);
      lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
      do {
        uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
        puVar5 = (ulonglong *)(lVar3 + 0xADDR);
        LOCK();
        bVar1 = uVar4 == *puVar5;
        if (bVar1) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar1);
    }
    pSVar8 = (this->fields).subscribableVariable;
    pvVar7 = method->klass->rgctx_data[8].rgctxDataDummy;
    if ((*(byte *)((longlong)pvVar7 + 0x135) & 1) == 0) {
      pvVar7 = (void *)FUN_?(pvVar7);
    }
    this_00 = (UnityAction_1_System_ByteEnum_ *)FUN_?(pvVar7);
    pIVar9 = method->klass->rgctx_data;
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::ByteEnum]::
    UnityAction_1_System_ByteEnum___ctor
              (this_00,(Object *)this,pIVar9[7].rgctxDataDummy,pIVar9[9].method);
    if (pSVar8 != (SubscribableVariable_1_System_ByteEnum_ *)0x0) {
      FUN_?(pSVar8,this_00,method->klass->rgctx_data[10].rgctxDataDummy);
      bVar1 = iRam_? != 0;
      (this->fields).spawnRoleDataReceiver = spawnRoleDataReceiver;
      if (bVar1) {
        uVar2 = (uint)((ulonglong)&this->fields >> 0xc);
        lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
        do {
          uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
          puVar5 = (ulonglong *)(lVar3 + 0xADDR);
          LOCK();
          bVar1 = uVar4 == *puVar5;
          if (bVar1) {
            *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
          }
          UNLOCK();
        } while (!bVar1);
      }
      return;
    }
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* ByteEnum get_Value() */

ByteEnum__Enum
Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
SpawnRoleVariableTypes::SpawnRoleReceiverVariable`1[System::ByteEnum]::
SpawnRoleReceiverVariable_1_System_ByteEnum__get_Value
          (SpawnRoleReceiverVariable_1_System_ByteEnum_ *this,MethodInfo *method)

{
  pSVar1 = (this->fields).subscribableVariable;
  if (pSVar1 != (SubscribableVariable_1_System_ByteEnum_ *)0x0) {
    return (ByteEnum__Enum)(pSVar1->fields)._.value;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  BVar3 = (*pcVar2)();
  return BVar3;
}


/* Void set_Value(ByteEnum) */

void Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleReceiverVariable`1[System::ByteEnum]::
     SpawnRoleReceiverVariable_1_System_ByteEnum__set_Value
               (SpawnRoleReceiverVariable_1_System_ByteEnum_ *this,ByteEnum__Enum value,
               MethodInfo *method)

{
  pSVar1 = (this->fields).spawnRoleDataReceiver;
  if (pSVar1 != (SpawnRoleDataReceiver *)0x0) {
    if ((pSVar1->fields).isActive == 0) {
      uVar2 = func_?(&TypeInfo__System__Exception);
      this_00 = (Exception *)func_?(uVar2);
      message = (String *)func_?(&StringLiteral_SpawnRole_receiver_not_active__P);
      mscorlib.dll::System::Exception::Exception__ctor_1(this_00,message,(MethodInfo *)0x0);
      FUN_?(this_00,method);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pSVar4 = (this->fields).subscribableVariable;
    if (pSVar4 != (SubscribableVariable_1_System_ByteEnum_ *)0x0) {
      pAVar5 = (pSVar4->fields)._.OnChange;
      (pSVar4->fields)._.value = (uint8_t)value;
      if (pAVar5 != (Action_1_ByteEnum_ *)0x0) {
        pAVar5 = (pSVar4->fields)._.OnChange;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(pAVar5->fields)._._.invoke_impl)
                  ((pAVar5->fields)._._.method_code,CONCAT44(in_register_00000014,value),
                   (pAVar5->fields)._._.method);
        return;
      }
      return;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

