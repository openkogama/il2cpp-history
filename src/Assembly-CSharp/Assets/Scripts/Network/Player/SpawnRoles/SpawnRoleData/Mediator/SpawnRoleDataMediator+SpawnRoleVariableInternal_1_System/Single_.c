
/* SpawnRoleDataMediator+SpawnRoleVariableInternal`1[System.Single](Single) */

void Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::Mediator::
     SpawnRoleDataMediator+SpawnRoleVariableInternal`1[System::Single]::
     SpawnRoleDataMediator_SpawnRoleVariableInternal_1_System_Single___ctor
               (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_System_Single_ *this,float value,
               MethodInfo *method)

{
  pMVar1 = method->klass->rgctx_data[3].method;
  pIVar2 = pMVar1->klass->rgctx_data;
  pvVar3 = pIVar2[2].rgctxDataDummy;
  if ((*(byte *)((longlong)pvVar3 + 0x135) & 1) == 0) {
    pvVar3 = (void *)FUN_?(pvVar3,pIVar2,method,in_R9,
                                    CONCAT44(unaff_XMM6_Db,unaff_XMM6_Da),
                                    CONCAT44(unaff_XMM6_Dd,unaff_XMM6_Dc));
  }
  pSVar4 = (SubscribableVariable_1_System_Single_ *)FUN_?(pvVar3);
  bVar5 = iRam_? != 0;
  (pSVar4->fields)._.value = value;
  (this->fields)._.subscribableVariable = pSVar4;
  if (bVar5) {
    uVar6 = (uint)((ulonglong)&this->fields >> 0xc);
    uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
    do {
      uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
      puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
      LOCK();
      bVar5 = uVar8 == *puVar9;
      if (bVar5) {
        *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (!bVar5);
  }
  pSVar4 = (this->fields)._.subscribableVariable;
  pvVar3 = pMVar1->klass->rgctx_data[0xc].rgctxDataDummy;
  if ((*(byte *)((longlong)pvVar3 + 0x135) & 1) == 0) {
    pvVar3 = (void *)FUN_?(pvVar3);
  }
  b = (Delegate *)FUN_?(pvVar3);
  FUN_?(b,this,pMVar1->klass->rgctx_data[0xb].rgctxDataDummy);
  if (pSVar4 == (SubscribableVariable_1_System_Single_ *)0x0) {
    FUN_?();
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pMVar1 = pMVar1->klass->rgctx_data[0xe].method;
  ppAVar11 = &(pSVar4->fields)._.OnChange;
  a = (pSVar4->fields)._.OnChange;
  do {
    pDVar12 = mscorlib.dll::System::Delegate::Delegate_Combine((Delegate *)a,b,(MethodInfo *)0x0);
    pvVar3 = pMVar1->klass->rgctx_data[7].rgctxDataDummy;
    if ((*(byte *)((longlong)pvVar3 + 0x135) & 1) == 0) {
      pvVar3 = (void *)FUN_?();
    }
    if (pDVar12 == (Delegate *)0x0) {
      pAVar13 = (Action_1_Single_ *)0x0;
    }
    else {
      pAVar13 = (Action_1_Single_ *)FUN_?(pDVar12,pvVar3);
      if (pAVar13 == (Action_1_Single_ *)0x0) {
        FUN_?(pDVar12,pvVar3);
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
    LOCK();
    pAVar14 = *ppAVar11;
    bVar5 = a == pAVar14;
    if (bVar5) {
      *ppAVar11 = pAVar13;
      pAVar14 = a;
    }
    UNLOCK();
    pAVar13 = a;
    if (!bVar5) {
      pAVar13 = pAVar14;
    }
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)ppAVar11 >> 0xc);
      uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
      do {
        uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
        puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
        LOCK();
        bVar5 = uVar8 == *puVar9;
        if (bVar5) {
          *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
    bVar5 = pAVar13 != a;
    a = pAVar13;
  } while (bVar5);
  return;
}

