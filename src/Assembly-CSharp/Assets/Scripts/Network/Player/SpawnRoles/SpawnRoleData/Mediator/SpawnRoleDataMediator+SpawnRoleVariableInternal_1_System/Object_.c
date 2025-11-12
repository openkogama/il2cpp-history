
/* SpawnRoleDataMediator+SpawnRoleVariableInternal`1[System.Object](Object) */

void Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::Mediator::
     SpawnRoleDataMediator+SpawnRoleVariableInternal`1[System::Object]::
     SpawnRoleDataMediator_SpawnRoleVariableInternal_1_System_Object___ctor
               (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_System_Object_ *this,Object *value
               ,MethodInfo *method)

{
  pMVar1 = method->klass->rgctx_data[3].method;
  pvVar2 = pMVar1->klass->rgctx_data[2].rgctxDataDummy;
  if ((*(byte *)((longlong)pvVar2 + 0x135) & 1) == 0) {
    pvVar2 = (void *)FUN_?(pvVar2);
  }
  pSVar3 = (SubscribableVariable_1_System_Object_ *)FUN_?(pvVar2);
  iVar4 = iRam_?;
  (pSVar3->fields)._.value = value;
  if (iVar4 != 0) {
    uVar5 = (uint)((ulonglong)&pSVar3->fields >> 0xc);
    lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
    do {
      uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
      puVar8 = (ulonglong *)(lVar6 + 0xADDR);
      LOCK();
      bVar9 = uVar7 == *puVar8;
      if (bVar9) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
      iVar4 = iRam_?;
    } while (!bVar9);
  }
  (this->fields)._.subscribableVariable = pSVar3;
  if (iVar4 != 0) {
    uVar5 = (uint)((ulonglong)&this->fields >> 0xc);
    lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
    do {
      uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
      puVar8 = (ulonglong *)(lVar6 + 0xADDR);
      LOCK();
      bVar9 = uVar7 == *puVar8;
      if (bVar9) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar9);
  }
  pSVar3 = (this->fields)._.subscribableVariable;
  pvVar2 = pMVar1->klass->rgctx_data[0xc].rgctxDataDummy;
  if ((*(byte *)((longlong)pvVar2 + 0x135) & 1) == 0) {
    pvVar2 = (void *)FUN_?(pvVar2);
  }
  this_00 = (UnityAction_1_System_Object_ *)FUN_?(pvVar2);
  pIVar10 = pMVar1->klass->rgctx_data;
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
  UnityAction_1_System_Object___ctor
            (this_00,(Object *)this,pIVar10[0xb].rgctxDataDummy,pIVar10[0xd].method);
  if (pSVar3 == (SubscribableVariable_1_System_Object_ *)0x0) {
    FUN_?();
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  pMVar1 = pMVar1->klass->rgctx_data[0xe].method;
  ppAVar12 = &(pSVar3->fields)._.OnChange;
  a = (pSVar3->fields)._.OnChange;
  do {
    pDVar13 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)this_00,(MethodInfo *)0x0);
    pvVar2 = pMVar1->klass->rgctx_data[7].rgctxDataDummy;
    if ((*(byte *)((longlong)pvVar2 + 0x135) & 1) == 0) {
      pvVar2 = (void *)FUN_?();
    }
    if (pDVar13 == (Delegate *)0x0) {
      pAVar14 = (Action_1_Object_ *)0x0;
    }
    else {
      pAVar14 = (Action_1_Object_ *)FUN_?(pDVar13,pvVar2);
      if (pAVar14 == (Action_1_Object_ *)0x0) {
        FUN_?(pDVar13,pvVar2);
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
    }
    LOCK();
    pAVar15 = *ppAVar12;
    bVar9 = a == pAVar15;
    if (bVar9) {
      *ppAVar12 = pAVar14;
      pAVar15 = a;
    }
    UNLOCK();
    pAVar14 = a;
    if (!bVar9) {
      pAVar14 = pAVar15;
    }
    if (iRam_? != 0) {
      uVar5 = (uint)((ulonglong)ppAVar12 >> 0xc);
      uVar7 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
      do {
        uVar16 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
        puVar8 = (ulonglong *)(uVar7 * 8 + 0xADDR);
        LOCK();
        bVar9 = uVar16 == *puVar8;
        if (bVar9) {
          *puVar8 = uVar16 | 1L << (uVar5 & 0x3f);
        }
        UNLOCK();
      } while (!bVar9);
    }
    bVar9 = pAVar14 != a;
    a = pAVar14;
  } while (bVar9);
  return;
}

