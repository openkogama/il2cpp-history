
/* SpawnRoleDataMediator+SpawnRoleVariableInternal`1[UnityEngine.Quaternion](Quaternion) */

void Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::Mediator::
     SpawnRoleDataMediator+SpawnRoleVariableInternal`1[UnityEngine::Quaternion]::
     SpawnRoleDataMediator_SpawnRoleVariableInternal_1_UnityEngine_Quaternion___ctor
               (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_UnityEngine_Quaternion_ *this,
               Quaternion *value,MethodInfo *method)

{
  pMVar1 = method->klass->rgctx_data[3].method;
  pvVar2 = pMVar1->klass->rgctx_data[2].rgctxDataDummy;
  if ((*(byte *)((longlong)pvVar2 + 0x135) & 1) == 0) {
    pvVar2 = (void *)FUN_?(pvVar2);
  }
  pSVar3 = (SubscribableVariable_1_UnityEngine_Quaternion_ *)FUN_?(pvVar2);
  bVar4 = iRam_? != 0;
  fVar5 = value->y;
  fVar6 = value->z;
  fVar7 = value->w;
  (pSVar3->fields)._.value.x = value->x;
  (pSVar3->fields)._.value.y = fVar5;
  (pSVar3->fields)._.value.z = fVar6;
  (pSVar3->fields)._.value.w = fVar7;
  (this->fields)._.subscribableVariable = pSVar3;
  if (bVar4) {
    uVar8 = (uint)((ulonglong)&this->fields >> 0xc);
    puVar9 = (ulonglong *)((ulonglong)((uVar8 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar10 = *puVar9;
      LOCK();
      uVar11 = *puVar9;
      if (uVar10 == uVar11) {
        *puVar9 = uVar10 | 1L << (uVar8 & 0x3f);
      }
      UNLOCK();
    } while (uVar10 != uVar11);
  }
  pSVar3 = (this->fields)._.subscribableVariable;
  pvVar2 = pMVar1->klass->rgctx_data[0xc].rgctxDataDummy;
  if ((*(byte *)((longlong)pvVar2 + 0x135) & 1) == 0) {
    pvVar2 = (void *)FUN_?(pvVar2);
  }
  b = (Delegate *)FUN_?(pvVar2);
  FUN_?(b,this,pMVar1->klass->rgctx_data[0xb].rgctxDataDummy);
  if (pSVar3 == (SubscribableVariable_1_UnityEngine_Quaternion_ *)0x0) {
    FUN_?();
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  pMVar1 = pMVar1->klass->rgctx_data[0xe].method;
  ppAVar13 = &(pSVar3->fields)._.OnChange;
  a = (pSVar3->fields)._.OnChange;
  do {
    pDVar14 = mscorlib.dll::System::Delegate::Delegate_Combine((Delegate *)a,b,(MethodInfo *)0x0);
    pvVar2 = pMVar1->klass->rgctx_data[7].rgctxDataDummy;
    if ((*(byte *)((longlong)pvVar2 + 0x135) & 1) == 0) {
      pvVar2 = (void *)FUN_?();
    }
    if (pDVar14 == (Delegate *)0x0) {
      pAVar15 = (Action_1_UnityEngine_Quaternion_ *)0x0;
    }
    else {
      pAVar15 = (Action_1_UnityEngine_Quaternion_ *)FUN_?(pDVar14,pvVar2);
      if (pAVar15 == (Action_1_UnityEngine_Quaternion_ *)0x0) {
        FUN_?(pDVar14,pvVar2);
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
    }
    LOCK();
    pAVar16 = *ppAVar13;
    bVar4 = a == pAVar16;
    if (bVar4) {
      *ppAVar13 = pAVar15;
      pAVar16 = a;
    }
    UNLOCK();
    pAVar15 = a;
    if (!bVar4) {
      pAVar15 = pAVar16;
    }
    if (iRam_? != 0) {
      uVar8 = (uint)((ulonglong)ppAVar13 >> 0xc);
      uVar11 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
      do {
        uVar10 = *(ulonglong *)(uVar11 * 8 + 0xADDR);
        puVar9 = (ulonglong *)(uVar11 * 8 + 0xADDR);
        LOCK();
        bVar4 = uVar10 == *puVar9;
        if (bVar4) {
          *puVar9 = uVar10 | 1L << (uVar8 & 0x3f);
        }
        UNLOCK();
      } while (!bVar4);
    }
    bVar4 = pAVar15 != a;
    a = pAVar15;
  } while (bVar4);
  return;
}

