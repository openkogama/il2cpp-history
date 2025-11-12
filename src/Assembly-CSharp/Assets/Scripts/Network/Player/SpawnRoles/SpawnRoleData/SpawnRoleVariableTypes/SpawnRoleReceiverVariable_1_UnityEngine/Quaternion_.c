
/* Void OnChange(Quaternion) */

void Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleReceiverVariable`1[UnityEngine::Quaternion]::
     SpawnRoleReceiverVariable_1_UnityEngine_Quaternion__OnChange
               (SpawnRoleReceiverVariable_1_UnityEngine_Quaternion_ *this,Quaternion *newValue,
               MethodInfo *method)

{
  pSVar1 = (this->fields).subscribableVariableExternal;
  if (pSVar1 != (SubscribableVariable_1_UnityEngine_Quaternion_ *)0x0) {
    pAVar2 = (pSVar1->fields)._.OnChange;
    fStack_3 = newValue->x;
    fStack_4 = newValue->y;
    fStack_5 = newValue->z;
    fStack_6 = newValue->w;
    (pSVar1->fields)._.value.x = fStack_3;
    (pSVar1->fields)._.value.y = fStack_4;
    (pSVar1->fields)._.value.z = fStack_5;
    (pSVar1->fields)._.value.w = fStack_6;
    if (pAVar2 != (Action_1_UnityEngine_Quaternion_ *)0x0) {
      pAVar2 = (pSVar1->fields)._.OnChange;
      (*(pAVar2->fields)._._.invoke_impl)
                ((pAVar2->fields)._._.method_code,&fStack_3,(pAVar2->fields)._._.method);
    }
    return;
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* SpawnRoleReceiverVariable`1[UnityEngine.Quaternion](SubscribableVariable`1[UnityEngine.Quaternion],
   SpawnRoleDataReceiver) */

void Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleReceiverVariable`1[UnityEngine::Quaternion]::
     SpawnRoleReceiverVariable_1_UnityEngine_Quaternion___ctor
               (SpawnRoleReceiverVariable_1_UnityEngine_Quaternion_ *this,
               SubscribableVariable_1_UnityEngine_Quaternion_ *subscribableVariableExternal,
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
  if (subscribableVariableExternal != (SubscribableVariable_1_UnityEngine_Quaternion_ *)0x0) {
    fVar6 = (subscribableVariableExternal->fields)._.value.x;
    fVar7 = (subscribableVariableExternal->fields)._.value.y;
    fVar8 = (subscribableVariableExternal->fields)._.value.z;
    fVar9 = (subscribableVariableExternal->fields)._.value.w;
    pvVar10 = method->klass->rgctx_data[1].rgctxDataDummy;
    if ((*(byte *)((longlong)pvVar10 + 0x135) & 1) == 0) {
      pvVar10 = (void *)FUN_?(pvVar10);
    }
    pSVar11 = (SubscribableVariable_1_UnityEngine_Quaternion_ *)FUN_?(pvVar10);
    bVar1 = iRam_? != 0;
    (pSVar11->fields)._.value.x = fVar6;
    (pSVar11->fields)._.value.y = fVar7;
    (pSVar11->fields)._.value.z = fVar8;
    (pSVar11->fields)._.value.w = fVar9;
    (this->fields).subscribableVariable = pSVar11;
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
    pSVar11 = (this->fields).subscribableVariable;
    pvVar10 = method->klass->rgctx_data[8].rgctxDataDummy;
    if ((*(byte *)((longlong)pvVar10 + 0x135) & 1) == 0) {
      pvVar10 = (void *)FUN_?(pvVar10);
    }
    uVar12 = FUN_?(pvVar10);
    FUN_?(uVar12,this,method->klass->rgctx_data[7].rgctxDataDummy);
    if (pSVar11 != (SubscribableVariable_1_UnityEngine_Quaternion_ *)0x0) {
      FUN_?(pSVar11,uVar12,method->klass->rgctx_data[10].rgctxDataDummy);
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
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Quaternion get_Value() */

Quaternion *
Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
SpawnRoleVariableTypes::SpawnRoleReceiverVariable`1[UnityEngine::Quaternion]::
SpawnRoleReceiverVariable_1_UnityEngine_Quaternion__get_Value
          (Quaternion *__return_storage_ptr__,
          SpawnRoleReceiverVariable_1_UnityEngine_Quaternion_ *this,MethodInfo *method)

{
  pSVar1 = (this->fields).subscribableVariable;
  if (pSVar1 != (SubscribableVariable_1_UnityEngine_Quaternion_ *)0x0) {
    fVar2 = (pSVar1->fields)._.value.y;
    fVar3 = (pSVar1->fields)._.value.z;
    fVar4 = (pSVar1->fields)._.value.w;
    __return_storage_ptr__->x = (pSVar1->fields)._.value.x;
    __return_storage_ptr__->y = fVar2;
    __return_storage_ptr__->z = fVar3;
    __return_storage_ptr__->w = fVar4;
    return __return_storage_ptr__;
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  pQVar6 = (Quaternion *)(*pcVar5)();
  return pQVar6;
}


/* Void set_Value(Quaternion) */

void Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleReceiverVariable`1[UnityEngine::Quaternion]::
     SpawnRoleReceiverVariable_1_UnityEngine_Quaternion__set_Value
               (SpawnRoleReceiverVariable_1_UnityEngine_Quaternion_ *this,Quaternion *value,
               MethodInfo *method)

{
  pSVar1 = (this->fields).spawnRoleDataReceiver;
  if (pSVar1 != (SpawnRoleDataReceiver *)0x0) {
    if ((pSVar1->fields).isActive == 0) {
      uVar2 = func_?(&TypeInfo__System__Exception);
      this_00 = (Exception *)func_?(uVar2);
      message = (String *)func_?(&StringLiteral_SpawnRole_receiver_not_active__P);
      pSVar3 = (String *)0x0;
      mscorlib.dll::System::Exception::Exception__ctor_1(this_00,message,(MethodInfo *)0x0);
      FUN_?();
      bVar4 = iRam_? != 0;
      (this_00->fields)._message = (String *)method;
      if (bVar4) {
        uVar5 = (uint)((ulonglong)&(this_00->fields)._message >> 0xc);
        lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
        do {
          uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
          puVar8 = (ulonglong *)(lVar6 + 0xADDR);
          LOCK();
          bVar4 = uVar7 == *puVar8;
          if (bVar4) {
            *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
          }
          UNLOCK();
        } while (!bVar4);
      }
      if (method != (MethodInfo *)0x0) {
        iVar9 = ((String__Fields *)&method->invoker_method)->_stringLength;
        uVar10 = *(undefined4 *)&((String__Fields *)&method->invoker_method)->_firstChar;
        uVar11 = *(undefined4 *)&method->name;
        uVar12 = *(undefined4 *)((longlong)&method->name + 4);
        lVar6 = *(longlong *)(*(longlong *)(*(longlong *)(in_R9 + 0x20) + 0xc0) + 8);
        if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_?(lVar6);
        }
        pIVar13 = (IDictionary *)FUN_?(lVar6);
        bVar4 = iRam_? != 0;
        *(int32_t *)&pIVar13[1].klass = iVar9;
        *(undefined4 *)((longlong)&pIVar13[1].klass + 4) = uVar10;
        *(undefined4 *)&pIVar13[1].monitor = uVar11;
        *(undefined4 *)((longlong)&pIVar13[1].monitor + 4) = uVar12;
        (this_00->fields)._data = pIVar13;
        if (bVar4) {
          uVar5 = (uint)((ulonglong)&(this_00->fields)._data >> 0xc);
          lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
          do {
            uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
            puVar8 = (ulonglong *)(lVar6 + 0xADDR);
            LOCK();
            bVar4 = uVar7 == *puVar8;
            if (bVar4) {
              *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
            }
            UNLOCK();
          } while (!bVar4);
        }
        pIVar13 = (this_00->fields)._data;
        lVar6 = *(longlong *)(*(longlong *)(*(longlong *)(in_R9 + 0x20) + 0xc0) + 0x40);
        if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_?(lVar6);
        }
        uVar2 = FUN_?(lVar6);
        FUN_?(uVar2,this_00,
                      *(undefined8 *)(*(longlong *)(*(longlong *)(in_R9 + 0x20) + 0xc0) + 0x38));
        if (pIVar13 != (IDictionary *)0x0) {
          FUN_?(pIVar13,uVar2,
                        *(undefined8 *)(*(longlong *)(*(longlong *)(in_R9 + 0x20) + 0xc0) + 0x50));
          bVar4 = iRam_? != 0;
          (this_00->fields)._className = pSVar3;
          if (bVar4) {
            uVar5 = (uint)((ulonglong)&this_00->fields >> 0xc);
            lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
            do {
              uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
              puVar8 = (ulonglong *)(lVar6 + 0xADDR);
              LOCK();
              bVar4 = uVar7 == *puVar8;
              if (bVar4) {
                *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
              }
              UNLOCK();
            } while (!bVar4);
          }
          return;
        }
      }
      FUN_?();
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
    pSVar15 = (this->fields).subscribableVariable;
    if (pSVar15 != (SubscribableVariable_1_UnityEngine_Quaternion_ *)0x0) {
      pAVar16 = (pSVar15->fields)._.OnChange;
      fStack_17 = value->x;
      fStack_18 = value->y;
      fStack_19 = value->z;
      fStack_20 = value->w;
      (pSVar15->fields)._.value.x = fStack_17;
      (pSVar15->fields)._.value.y = fStack_18;
      (pSVar15->fields)._.value.z = fStack_19;
      (pSVar15->fields)._.value.w = fStack_20;
      if (pAVar16 != (Action_1_UnityEngine_Quaternion_ *)0x0) {
        pAVar16 = (pSVar15->fields)._.OnChange;
        (*(pAVar16->fields)._._.invoke_impl)
                  ((pAVar16->fields)._._.method_code,&fStack_17,(pAVar16->fields)._._.method);
      }
      return;
    }
  }
  FUN_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}

