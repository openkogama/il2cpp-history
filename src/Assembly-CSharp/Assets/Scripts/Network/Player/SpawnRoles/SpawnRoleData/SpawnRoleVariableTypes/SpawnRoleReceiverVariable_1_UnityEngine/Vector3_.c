
/* Void OnChange(Vector3) */

void Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleReceiverVariable`1[UnityEngine::Vector3]::
     SpawnRoleReceiverVariable_1_UnityEngine_Vector3__OnChange
               (SpawnRoleReceiverVariable_1_UnityEngine_Vector3_ *this,Vector3 *newValue,
               MethodInfo *method)

{
  pSVar1 = (this->fields).subscribableVariableExternal;
  if (pSVar1 != (SubscribableVariable_1_UnityEngine_Vector3_ *)0x0) {
    pAVar2 = (pSVar1->fields)._.OnChange;
    uStack_3._0_4_ = newValue->x;
    uStack_3._4_4_ = newValue->y;
    fStack_4 = newValue->z;
    (pSVar1->fields)._.value.x = (float)(undefined4)uStack_3;
    (pSVar1->fields)._.value.y = (float)uStack_3._4_4_;
    (pSVar1->fields)._.value.z = fStack_4;
    if (pAVar2 != (Action_1_UnityEngine_Vector3_ *)0x0) {
      pAVar2 = (pSVar1->fields)._.OnChange;
      (*(pAVar2->fields)._._.invoke_impl)
                ((pAVar2->fields)._._.method_code,&uStack_3,(pAVar2->fields)._._.method);
    }
    return;
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* SpawnRoleReceiverVariable`1[UnityEngine.Vector3](SubscribableVariable`1[UnityEngine.Vector3],
   SpawnRoleDataReceiver) */

void Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleReceiverVariable`1[UnityEngine::Vector3]::
     SpawnRoleReceiverVariable_1_UnityEngine_Vector3___ctor
               (SpawnRoleReceiverVariable_1_UnityEngine_Vector3_ *this,
               SubscribableVariable_1_UnityEngine_Vector3_ *subscribableVariableExternal,
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
  if (subscribableVariableExternal != (SubscribableVariable_1_UnityEngine_Vector3_ *)0x0) {
    fVar6 = (subscribableVariableExternal->fields)._.value.x;
    fVar7 = (subscribableVariableExternal->fields)._.value.y;
    fVar8 = (subscribableVariableExternal->fields)._.value.z;
    pvVar9 = method->klass->rgctx_data[1].rgctxDataDummy;
    if ((*(byte *)((longlong)pvVar9 + 0x135) & 1) == 0) {
      pvVar9 = (void *)FUN_?(pvVar9);
    }
    pSVar10 = (SubscribableVariable_1_UnityEngine_Vector3_ *)FUN_?(pvVar9);
    bVar1 = iRam_? != 0;
    (pSVar10->fields)._.value.x = fVar6;
    (pSVar10->fields)._.value.y = fVar7;
    (pSVar10->fields)._.value.z = fVar8;
    (this->fields).subscribableVariable = pSVar10;
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
    pSVar10 = (this->fields).subscribableVariable;
    pvVar9 = method->klass->rgctx_data[8].rgctxDataDummy;
    if ((*(byte *)((longlong)pvVar9 + 0x135) & 1) == 0) {
      pvVar9 = (void *)FUN_?(pvVar9);
    }
    uVar11 = FUN_?(pvVar9);
    FUN_?(uVar11,this,method->klass->rgctx_data[7].rgctxDataDummy);
    if (pSVar10 != (SubscribableVariable_1_UnityEngine_Vector3_ *)0x0) {
      FUN_?(pSVar10,uVar11,method->klass->rgctx_data[10].rgctxDataDummy);
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
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Vector3 get_Value() */

Vector3 * Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
          SpawnRoleVariableTypes::SpawnRoleReceiverVariable`1[UnityEngine::Vector3]::
          SpawnRoleReceiverVariable_1_UnityEngine_Vector3__get_Value
                    (Vector3 *__return_storage_ptr__,
                    SpawnRoleReceiverVariable_1_UnityEngine_Vector3_ *this,MethodInfo *method)

{
  pSVar1 = (this->fields).subscribableVariable;
  if (pSVar1 != (SubscribableVariable_1_UnityEngine_Vector3_ *)0x0) {
    fVar2 = (pSVar1->fields)._.value.y;
    fVar3 = (pSVar1->fields)._.value.z;
    __return_storage_ptr__->x = (pSVar1->fields)._.value.x;
    __return_storage_ptr__->y = fVar2;
    __return_storage_ptr__->z = fVar3;
    return __return_storage_ptr__;
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  pVVar5 = (Vector3 *)(*pcVar4)();
  return pVVar5;
}


/* Void set_Value(Vector3) */

void Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleReceiverVariable`1[UnityEngine::Vector3]::
     SpawnRoleReceiverVariable_1_UnityEngine_Vector3__set_Value
               (SpawnRoleReceiverVariable_1_UnityEngine_Vector3_ *this,Vector3 *value,
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
    if (pSVar4 != (SubscribableVariable_1_UnityEngine_Vector3_ *)0x0) {
      pAVar5 = (pSVar4->fields)._.OnChange;
      uStack_6._0_4_ = value->x;
      uStack_6._4_4_ = value->y;
      fStack_7 = value->z;
      (pSVar4->fields)._.value.x = (float)(undefined4)uStack_6;
      (pSVar4->fields)._.value.y = (float)uStack_6._4_4_;
      (pSVar4->fields)._.value.z = fStack_7;
      if (pAVar5 != (Action_1_UnityEngine_Vector3_ *)0x0) {
        pAVar5 = (pSVar4->fields)._.OnChange;
        (*(pAVar5->fields)._._.invoke_impl)
                  ((pAVar5->fields)._._.method_code,&uStack_6,(pAVar5->fields)._._.method);
      }
      return;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

