
/* SpawnRoleDataMediator+SpawnRoleVariableInternal`1[System.ByteEnum](ByteEnum) */

void Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::Mediator::
     SpawnRoleDataMediator+SpawnRoleVariableInternal`1[System::ByteEnum]::
     SpawnRoleDataMediator_SpawnRoleVariableInternal_1_System_ByteEnum___ctor
               (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_System_ByteEnum_ *this,
               ByteEnum__Enum value,MethodInfo *method)

{
  pMVar1 = method->klass->rgctx_data[3].method;
  pvVar2 = pMVar1->klass->rgctx_data[2].rgctxDataDummy;
  if ((*(byte *)((longlong)pvVar2 + 0x135) & 1) == 0) {
    pvVar2 = (void *)FUN_?(pvVar2);
  }
  pSVar3 = (SubscribableVariable_1_System_ByteEnum_ *)FUN_?(pvVar2);
  bVar4 = iRam_? != 0;
  (pSVar3->fields)._.value = (uint8_t)value;
  (this->fields)._.subscribableVariable = pSVar3;
  if (bVar4) {
    uVar5 = (uint)((ulonglong)&this->fields >> 0xc);
    puVar6 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar7 = *puVar6;
      LOCK();
      uVar8 = *puVar6;
      if (uVar7 == uVar8) {
        *puVar6 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (uVar7 != uVar8);
  }
  pSVar3 = (this->fields)._.subscribableVariable;
  pvVar2 = pMVar1->klass->rgctx_data[0xc].rgctxDataDummy;
  if ((*(byte *)((longlong)pvVar2 + 0x135) & 1) == 0) {
    pvVar2 = (void *)FUN_?(pvVar2);
  }
  this_00 = (UnityAction_1_System_ByteEnum_ *)FUN_?(pvVar2);
  pIVar9 = pMVar1->klass->rgctx_data;
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::ByteEnum]::
  UnityAction_1_System_ByteEnum___ctor
            (this_00,(Object *)this,pIVar9[0xb].rgctxDataDummy,pIVar9[0xd].method);
  if (pSVar3 == (SubscribableVariable_1_System_ByteEnum_ *)0x0) {
    FUN_?();
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pMVar1 = pMVar1->klass->rgctx_data[0xe].method;
  ppAVar11 = &(pSVar3->fields)._.OnChange;
  a = (pSVar3->fields)._.OnChange;
  do {
    pDVar12 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)this_00,(MethodInfo *)0x0);
    pvVar2 = pMVar1->klass->rgctx_data[7].rgctxDataDummy;
    if ((*(byte *)((longlong)pvVar2 + 0x135) & 1) == 0) {
      pvVar2 = (void *)FUN_?();
    }
    if (pDVar12 == (Delegate *)0x0) {
      pAVar13 = (Action_1_ByteEnum_ *)0x0;
    }
    else {
      pAVar13 = (Action_1_ByteEnum_ *)FUN_?(pDVar12,pvVar2);
      if (pAVar13 == (Action_1_ByteEnum_ *)0x0) {
        FUN_?(pDVar12,pvVar2);
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
    LOCK();
    pAVar14 = *ppAVar11;
    bVar4 = a == pAVar14;
    if (bVar4) {
      *ppAVar11 = pAVar13;
      pAVar14 = a;
    }
    UNLOCK();
    pAVar13 = a;
    if (!bVar4) {
      pAVar13 = pAVar14;
    }
    if (iRam_? != 0) {
      uVar5 = (uint)((ulonglong)ppAVar11 >> 0xc);
      uVar8 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
      do {
        uVar7 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
        puVar6 = (ulonglong *)(uVar8 * 8 + 0xADDR);
        LOCK();
        bVar4 = uVar7 == *puVar6;
        if (bVar4) {
          *puVar6 = uVar7 | 1L << (uVar5 & 0x3f);
        }
        UNLOCK();
      } while (!bVar4);
    }
    bVar4 = pAVar13 != a;
    a = pAVar13;
  } while (bVar4);
  return;
}

