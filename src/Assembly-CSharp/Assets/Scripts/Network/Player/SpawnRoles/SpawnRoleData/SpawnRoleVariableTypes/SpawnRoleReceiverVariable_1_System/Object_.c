
/* Void OnChange(Object) */

void Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleReceiverVariable`1[System::Object]::
     SpawnRoleReceiverVariable_1_System_Object__OnChange
               (SpawnRoleReceiverVariable_1_System_Object_ *this,Object *newValue,MethodInfo *method
               )

{
  pSVar1 = (this->fields).subscribableVariableExternal;
  if (pSVar1 == (SubscribableVariable_1_System_Object_ *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  bVar3 = iRam_? != 0;
  (pSVar1->fields)._.value = newValue;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)&pSVar1->fields >> 0xc);
    puVar5 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar6 = *puVar5;
      LOCK();
      uVar7 = *puVar5;
      if (uVar6 == uVar7) {
        *puVar5 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (uVar6 != uVar7);
  }
  if ((pSVar1->fields)._.OnChange == (Action_1_Object_ *)0x0) {
    return;
  }
  pAVar8 = (pSVar1->fields)._.OnChange;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(pAVar8->fields)._._.invoke_impl)
            ((pAVar8->fields)._._.method_code,(pSVar1->fields)._.value,(pAVar8->fields)._._.method);
  return;
}


/* SpawnRoleReceiverVariable`1[System.Object](SubscribableVariable`1[System.Object],
   SpawnRoleDataReceiver) */

void Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleReceiverVariable`1[System::Object]::
     SpawnRoleReceiverVariable_1_System_Object___ctor
               (SpawnRoleReceiverVariable_1_System_Object_ *this,
               SubscribableVariable_1_System_Object_ *subscribableVariableExternal,
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
  if (subscribableVariableExternal != (SubscribableVariable_1_System_Object_ *)0x0) {
    pOVar6 = (subscribableVariableExternal->fields)._.value;
    pvVar7 = method->klass->rgctx_data[1].rgctxDataDummy;
    if ((*(byte *)((longlong)pvVar7 + 0x135) & 1) == 0) {
      pvVar7 = (void *)FUN_?(pvVar7);
    }
    pSVar8 = (SubscribableVariable_1_System_Object_ *)FUN_?(pvVar7);
    iVar9 = iRam_?;
    (pSVar8->fields)._.value = pOVar6;
    if (iVar9 != 0) {
      uVar2 = (uint)((ulonglong)&pSVar8->fields >> 0xc);
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
        iVar9 = iRam_?;
      } while (!bVar1);
    }
    (this->fields).subscribableVariable = pSVar8;
    if (iVar9 != 0) {
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
    this_00 = (UnityAction_1_System_Object_ *)FUN_?(pvVar7);
    pIVar10 = method->klass->rgctx_data;
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
    UnityAction_1_System_Object___ctor
              (this_00,(Object *)this,pIVar10[7].rgctxDataDummy,pIVar10[9].method);
    if (pSVar8 != (SubscribableVariable_1_System_Object_ *)0x0) {
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
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Object get_Value() */

Object * Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
         SpawnRoleVariableTypes::SpawnRoleReceiverVariable`1[System::Object]::
         SpawnRoleReceiverVariable_1_System_Object__get_Value
                   (SpawnRoleReceiverVariable_1_System_Object_ *this,MethodInfo *method)

{
  pSVar1 = (this->fields).subscribableVariable;
  if (pSVar1 != (SubscribableVariable_1_System_Object_ *)0x0) {
    return (pSVar1->fields)._.value;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pOVar3 = (Object *)(*pcVar2)();
  return pOVar3;
}


/* Void set_Value(Object) */

void Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleReceiverVariable`1[System::Object]::
     SpawnRoleReceiverVariable_1_System_Object__set_Value
               (SpawnRoleReceiverVariable_1_System_Object_ *this,Object *value,MethodInfo *method)

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
    if (pSVar4 != (SubscribableVariable_1_System_Object_ *)0x0) {
      bVar5 = iRam_? != 0;
      (pSVar4->fields)._.value = value;
      if (bVar5) {
        uVar6 = (uint)((ulonglong)&pSVar4->fields >> 0xc);
        puVar7 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar8 = *puVar7;
          LOCK();
          uVar9 = *puVar7;
          if (uVar8 == uVar9) {
            *puVar7 = uVar8 | 1L << (uVar6 & 0x3f);
          }
          UNLOCK();
        } while (uVar8 != uVar9);
      }
      if ((pSVar4->fields)._.OnChange == (Action_1_Object_ *)0x0) {
        return;
      }
      pAVar10 = (pSVar4->fields)._.OnChange;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(pAVar10->fields)._._.invoke_impl)
                ((pAVar10->fields)._._.method_code,(pSVar4->fields)._.value,
                 (pAVar10->fields)._._.method);
      return;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

