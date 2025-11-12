
/* SpawnRoleDataMediator+SpawnRoleVariableInternal`1[System.Boolean](Boolean) */

void Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::Mediator::
     SpawnRoleDataMediator+SpawnRoleVariableInternal`1[System::Boolean]::
     SpawnRoleDataMediator_SpawnRoleVariableInternal_1_System_Boolean___ctor
               (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_System_Boolean_ *this,bool value,
               MethodInfo *method)

{
  pMVar1 = method->klass->rgctx_data[3].method;
  pvVar2 = pMVar1->klass->rgctx_data[2].rgctxDataDummy;
  if ((*(byte *)((longlong)pvVar2 + 0x135) & 1) == 0) {
    pvVar2 = (void *)FUN_?(pvVar2);
  }
  pSVar3 = (SubscribableVariable_1_System_Boolean_ *)FUN_?(pvVar2);
  bVar4 = iRam_? != 0;
  (pSVar3->fields)._.value = value;
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
  b = (Delegate *)FUN_?(pvVar2);
  FUN_?(b,this,pMVar1->klass->rgctx_data[0xb].rgctxDataDummy);
  if (pSVar3 == (SubscribableVariable_1_System_Boolean_ *)0x0) {
    FUN_?();
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pMVar1 = pMVar1->klass->rgctx_data[0xe].method;
  ppAVar10 = &(pSVar3->fields)._.OnChange;
  a = (pSVar3->fields)._.OnChange;
  do {
    pDVar11 = mscorlib.dll::System::Delegate::Delegate_Combine((Delegate *)a,b,(MethodInfo *)0x0);
    pvVar2 = pMVar1->klass->rgctx_data[7].rgctxDataDummy;
    if ((*(byte *)((longlong)pvVar2 + 0x135) & 1) == 0) {
      pvVar2 = (void *)FUN_?();
    }
    if (pDVar11 == (Delegate *)0x0) {
      pAVar12 = (Action_1_Boolean_ *)0x0;
    }
    else {
      pAVar12 = (Action_1_Boolean_ *)FUN_?(pDVar11,pvVar2);
      if (pAVar12 == (Action_1_Boolean_ *)0x0) {
        FUN_?(pDVar11,pvVar2);
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    LOCK();
    pAVar13 = *ppAVar10;
    bVar4 = a == pAVar13;
    if (bVar4) {
      *ppAVar10 = pAVar12;
      pAVar13 = a;
    }
    UNLOCK();
    pAVar12 = a;
    if (!bVar4) {
      pAVar12 = pAVar13;
    }
    if (iRam_? != 0) {
      uVar5 = (uint)((ulonglong)ppAVar10 >> 0xc);
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
    bVar4 = pAVar12 != a;
    a = pAVar12;
  } while (bVar4);
  return;
}

