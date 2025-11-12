
/* SpawnRoleDataMediator+SpawnRoleVariableInternal`1[UnityEngine.Vector3](Vector3) */

void Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::Mediator::
     SpawnRoleDataMediator+SpawnRoleVariableInternal`1[UnityEngine::Vector3]::
     SpawnRoleDataMediator_SpawnRoleVariableInternal_1_UnityEngine_Vector3___ctor
               (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_UnityEngine_Vector3_ *this,
               Vector3 *value,MethodInfo *method)

{
  pMVar1 = method->klass->rgctx_data[3].method;
  pvVar2 = pMVar1->klass->rgctx_data[2].rgctxDataDummy;
  if ((*(byte *)((longlong)pvVar2 + 0x135) & 1) == 0) {
    pvVar2 = (void *)FUN_?(pvVar2);
  }
  pSVar3 = (SubscribableVariable_1_UnityEngine_Vector3_ *)FUN_?(pvVar2);
  bVar4 = iRam_? != 0;
  fVar5 = value->y;
  fVar6 = value->z;
  (pSVar3->fields)._.value.x = value->x;
  (pSVar3->fields)._.value.y = fVar5;
  (pSVar3->fields)._.value.z = fVar6;
  (this->fields)._.subscribableVariable = pSVar3;
  if (bVar4) {
    uVar7 = (uint)((ulonglong)&this->fields >> 0xc);
    puVar8 = (ulonglong *)((ulonglong)((uVar7 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar9 = *puVar8;
      LOCK();
      uVar10 = *puVar8;
      if (uVar9 == uVar10) {
        *puVar8 = uVar9 | 1L << (uVar7 & 0x3f);
      }
      UNLOCK();
    } while (uVar9 != uVar10);
  }
  pSVar3 = (this->fields)._.subscribableVariable;
  pvVar2 = pMVar1->klass->rgctx_data[0xc].rgctxDataDummy;
  if ((*(byte *)((longlong)pvVar2 + 0x135) & 1) == 0) {
    pvVar2 = (void *)FUN_?(pvVar2);
  }
  b = (Delegate *)FUN_?(pvVar2);
  FUN_?(b,this,pMVar1->klass->rgctx_data[0xb].rgctxDataDummy);
  if (pSVar3 == (SubscribableVariable_1_UnityEngine_Vector3_ *)0x0) {
    FUN_?();
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  pMVar1 = pMVar1->klass->rgctx_data[0xe].method;
  ppAVar12 = &(pSVar3->fields)._.OnChange;
  a = (pSVar3->fields)._.OnChange;
  do {
    pDVar13 = mscorlib.dll::System::Delegate::Delegate_Combine((Delegate *)a,b,(MethodInfo *)0x0);
    pvVar2 = pMVar1->klass->rgctx_data[7].rgctxDataDummy;
    if ((*(byte *)((longlong)pvVar2 + 0x135) & 1) == 0) {
      pvVar2 = (void *)FUN_?();
    }
    if (pDVar13 == (Delegate *)0x0) {
      pAVar14 = (Action_1_UnityEngine_Vector3_ *)0x0;
    }
    else {
      pAVar14 = (Action_1_UnityEngine_Vector3_ *)FUN_?(pDVar13,pvVar2);
      if (pAVar14 == (Action_1_UnityEngine_Vector3_ *)0x0) {
        FUN_?(pDVar13,pvVar2);
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
    }
    LOCK();
    pAVar15 = *ppAVar12;
    bVar4 = a == pAVar15;
    if (bVar4) {
      *ppAVar12 = pAVar14;
      pAVar15 = a;
    }
    UNLOCK();
    pAVar14 = a;
    if (!bVar4) {
      pAVar14 = pAVar15;
    }
    if (iRam_? != 0) {
      uVar7 = (uint)((ulonglong)ppAVar12 >> 0xc);
      uVar10 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
      do {
        uVar9 = *(ulonglong *)(uVar10 * 8 + 0xADDR);
        puVar8 = (ulonglong *)(uVar10 * 8 + 0xADDR);
        LOCK();
        bVar4 = uVar9 == *puVar8;
        if (bVar4) {
          *puVar8 = uVar9 | 1L << (uVar7 & 0x3f);
        }
        UNLOCK();
      } while (!bVar4);
    }
    bVar4 = pAVar14 != a;
    a = pAVar14;
  } while (bVar4);
  return;
}

