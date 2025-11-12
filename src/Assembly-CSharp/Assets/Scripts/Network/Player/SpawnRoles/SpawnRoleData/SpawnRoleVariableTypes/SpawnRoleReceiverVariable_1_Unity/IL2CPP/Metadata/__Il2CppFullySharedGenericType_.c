
/* Void OnChange(__Il2CppFullySharedGenericType) */

void Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleReceiverVariable`1[Unity::IL2CPP::Metadata::
     __Il2CppFullySharedGenericType]::
     SpawnRoleReceiverVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__OnChange
               (SpawnRoleReceiverVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                *this,_Il2CppFullySharedGenericType *newValue,MethodInfo *method)

{
  apuStack_1[0] = &UNK_?;
  p_StackX_10 = (_Il2CppFullySharedGenericType__Class *)newValue;
  lVar2 = FUN_?();
  pSVar3 = (this->fields).subscribableVariableExternal;
  lVar2 = -lVar2;
  p_Var9 = (_Il2CppFullySharedGenericType__Class *)(&stack0xffffffffffffffe8 + lVar2);
  p_Var8 = (_Il2CppFullySharedGenericType *)&p_StackX_10;
  if (*(int *)&(method->klass->rgctx_data[4].method)->return_type < 0) {
    p_Var8 = newValue;
  }
  *(undefined **)((longlong)apuStack_1 + lVar2) = &UNK_?;
  FUN_?(p_Var9,p_Var8);
  if (pSVar3 != (SubscribableVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) {
    if (-1 < *(int *)&(method->klass->rgctx_data[4].method)->return_type) {
      p_Var9 = (_Il2CppFullySharedGenericType__Class *)(p_Var9->_0).image;
    }
    pIVar4 = method->klass;
    *(_Il2CppFullySharedGenericType__Class **)((longlong)alStack_5 + lVar2) = p_Var9;
    pMVar6 = pIVar4->rgctx_data[5].method;
    pIVar7 = pMVar6->invoker_method;
    pIVar8 = pMVar6->methodPointer;
    *(undefined **)((longlong)apuStack_1 + lVar2) = &UNK_?;
    p_StackX_10 = p_Var9;
    (*pIVar7)(pIVar8,pMVar6,pSVar3,&p_StackX_10,*(void **)((longlong)alStack_5 + lVar2));
    return;
  }
  *(undefined **)((longlong)apuStack_1 + lVar2) = &UNK_?;
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* SpawnRoleReceiverVariable`1[Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType](SubscribableVariable`1[Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType],
   SpawnRoleDataReceiver) */

void Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleReceiverVariable`1[Unity::IL2CPP::Metadata::
     __Il2CppFullySharedGenericType]::
     SpawnRoleReceiverVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
               (SpawnRoleReceiverVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                *this,SubscribableVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                      *subscribableVariableExternal,SpawnRoleDataReceiver *spawnRoleDataReceiver,
               MethodInfo *method)

{
  apuStack_1[0] = &UNK_?;
  pSVar2 = this;
  pMVar3 = method;
  lVar4 = FUN_?();
  lVar4 = -lVar4;
  (pSVar2->fields).subscribableVariableExternal = subscribableVariableExternal;
  plVar5 = (longlong *)(&stack0xffffffffffffffd8 + lVar4);
  if (iRam_? != 0) {
    uVar6 = (uint)((ulonglong)&(pSVar2->fields).subscribableVariableExternal >> 0xc);
    lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
    do {
      uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
      puVar9 = (ulonglong *)(lVar7 + 0xADDR);
      LOCK();
      bVar10 = uVar8 == *puVar9;
      if (bVar10) {
        *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (!bVar10);
  }
  if (subscribableVariableExternal !=
      (SubscribableVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) {
    pIVar11 = pMVar3->klass;
    *(longlong **)((longlong)alStack_12 + lVar4) = plVar5;
    pMVar3 = pIVar11->rgctx_data[3].method;
    pIVar13 = pMVar3->invoker_method;
    pIVar14 = pMVar3->methodPointer;
    *(undefined **)((longlong)apuStack_1 + lVar4) = &UNK_?;
    plStackX_8 = plVar5;
    (*pIVar13)(pIVar14,pMVar3,subscribableVariableExternal,&plStackX_8,
              *(void **)((longlong)alStack_12 + lVar4));
    pvVar15 = method->klass->rgctx_data[1].rgctxDataDummy;
    if ((*(byte *)((longlong)pvVar15 + 0x135) & 1) == 0) {
      *(undefined **)((longlong)apuStack_1 + lVar4) = &UNK_?;
      pvVar15 = (void *)FUN_?(pvVar15);
    }
    *(undefined **)((longlong)apuStack_1 + lVar4) = &UNK_?;
    pSVar16 = (SubscribableVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
              FUN_?(pvVar15);
    if (-1 < *(int *)&(method->klass->rgctx_data[4].method)->return_type) {
      plVar5 = (longlong *)*plVar5;
    }
    pIVar11 = method->klass;
    *(longlong **)((longlong)alStack_12 + lVar4) = plVar5;
    pMVar3 = pIVar11->rgctx_data[6].method;
    pIVar13 = pMVar3->invoker_method;
    pIVar14 = pMVar3->methodPointer;
    *(undefined **)((longlong)apuStack_1 + lVar4) = &UNK_?;
    plStackX_8 = plVar5;
    (*pIVar13)(pIVar14,pMVar3,pSVar16,&plStackX_8,*(void **)((longlong)alStack_12 + lVar4));
    bVar10 = iRam_? != 0;
    (this->fields).subscribableVariable = pSVar16;
    if (bVar10) {
      uVar6 = (uint)((ulonglong)&(this->fields).subscribableVariable >> 0xc);
      lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
      do {
        uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
        puVar9 = (ulonglong *)(lVar7 + 0xADDR);
        LOCK();
        bVar10 = uVar8 == *puVar9;
        if (bVar10) {
          *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar10);
    }
    pSVar16 = (this->fields).subscribableVariable;
    pvVar15 = method->klass->rgctx_data[8].rgctxDataDummy;
    if ((*(byte *)((longlong)pvVar15 + 0x135) & 1) == 0) {
      *(undefined **)((longlong)apuStack_1 + lVar4) = &UNK_?;
      pvVar15 = (void *)FUN_?(pvVar15);
    }
    *(undefined **)((longlong)apuStack_1 + lVar4) = &UNK_?;
    uVar17 = FUN_?(pvVar15);
    pIVar18 = method->klass->rgctx_data;
    pvVar15 = pIVar18[7].rgctxDataDummy;
    pIVar14 = (pIVar18[9].method)->methodPointer;
    *(undefined **)((longlong)apuStack_1 + lVar4) = &UNK_?;
    (*pIVar14)(uVar17,this,pvVar15);
    if (pSVar16 != (SubscribableVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0
       ) {
      pIVar14 = (method->klass->rgctx_data[10].method)->methodPointer;
      *(undefined **)((longlong)apuStack_1 + lVar4) = &UNK_?;
      (*pIVar14)(pSVar16,uVar17);
      bVar10 = iRam_? != 0;
      (this->fields).spawnRoleDataReceiver = spawnRoleDataReceiver;
      if (bVar10) {
        uVar6 = (uint)((ulonglong)&this->fields >> 0xc);
        lVar4 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
        do {
          uVar8 = *(ulonglong *)(lVar4 + 0xADDR);
          puVar9 = (ulonglong *)(lVar4 + 0xADDR);
          LOCK();
          bVar10 = uVar8 == *puVar9;
          if (bVar10) {
            *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
          }
          UNLOCK();
        } while (!bVar10);
      }
      return;
    }
  }
  *(undefined **)((longlong)apuStack_1 + lVar4) = &UNK_?;
  FUN_?();
  pcVar19 = (code *)swi(3);
  (*pcVar19)();
  return;
}


/* __Il2CppFullySharedGenericType get_Value() */

_Il2CppFullySharedGenericType *
Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
SpawnRoleVariableTypes::SpawnRoleReceiverVariable`1[Unity::IL2CPP::Metadata::
__Il2CppFullySharedGenericType]::
SpawnRoleReceiverVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__get_Value
          (SpawnRoleReceiverVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *this,
          MethodInfo *method)

{
  uVar1 = *(undefined4 *)
           (*(longlong *)(*(longlong *)(*(longlong *)(in_R8 + 0x20) + 0xc0) + 0x20) + 0xfc);
  apuStack_2[0] = &UNK_?;
  lVar3 = FUN_?();
  pSVar4 = (this->fields).subscribableVariable;
  lVar3 = -lVar3;
  puVar5 = &stack0xffffffffffffffe8 + lVar3;
  if (pSVar4 != (SubscribableVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) {
    lVar6 = *(longlong *)(in_R8 + 0x20);
    *(undefined1 **)((longlong)alStack_7 + lVar3) = puVar5;
    puVar8 = *(undefined8 **)(*(longlong *)(lVar6 + 0xc0) + 0x18);
    pcVar9 = (code *)puVar8[2];
    uVar10 = *puVar8;
    *(undefined **)((longlong)apuStack_2 + lVar3) = &UNK_?;
    puStackX_8 = puVar5;
    (*pcVar9)(uVar10,puVar8,pSVar4,&puStackX_8);
    *(undefined **)((longlong)apuStack_2 + lVar3) = &UNK_?;
    p_Var9 = (_Il2CppFullySharedGenericType *)FUN_?(method,puVar5,uVar1);
    return p_Var9;
  }
  *(undefined **)((longlong)apuStack_2 + lVar3) = &UNK_?;
  FUN_?();
  pcVar9 = (code *)swi(3);
  p_Var9 = (_Il2CppFullySharedGenericType *)(*pcVar9)();
  return p_Var9;
}


/* Void set_Value(__Il2CppFullySharedGenericType) */

void Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleReceiverVariable`1[Unity::IL2CPP::Metadata::
     __Il2CppFullySharedGenericType]::
     SpawnRoleReceiverVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__set_Value
               (SpawnRoleReceiverVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                *this,_Il2CppFullySharedGenericType *value,MethodInfo *method)

{
  apuStack_1[0] = &UNK_?;
  p_StackX_10 = (_Il2CppFullySharedGenericType__Class *)value;
  lVar2 = FUN_?();
  lVar2 = -lVar2;
  pSVar3 = (this->fields).spawnRoleDataReceiver;
  plVar4 = (longlong *)(&stack0xffffffffffffffe8 + lVar2);
  if (pSVar3 != (SpawnRoleDataReceiver *)0x0) {
    if ((pSVar3->fields).isActive == 0) {
      *(undefined **)((longlong)apuStack_1 + lVar2) = &UNK_?;
      uVar5 = func_?(&TypeInfo__System__Exception);
      *(undefined **)((longlong)apuStack_1 + lVar2) = &UNK_?;
      this_00 = (Exception *)func_?(uVar5);
      *(undefined **)((longlong)apuStack_1 + lVar2) = &UNK_?;
      message = (String *)func_?(&StringLiteral_SpawnRole_receiver_not_active__P);
      *(undefined **)((longlong)apuStack_1 + lVar2) = &UNK_?;
      mscorlib.dll::System::Exception::Exception__ctor_1(this_00,message,(MethodInfo *)0x0);
      *(undefined **)((longlong)apuStack_1 + lVar2) = &UNK_?;
      FUN_?(this_00,method);
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pSVar7 = (this->fields).subscribableVariable;
    p_Var10 = (_Il2CppFullySharedGenericType *)&p_StackX_10;
    if (*(int *)&(method->klass->rgctx_data[4].method)->return_type < 0) {
      p_Var10 = value;
    }
    *(undefined **)((longlong)apuStack_1 + lVar2) = &UNK_?;
    FUN_?(plVar4,p_Var10);
    if (pSVar7 != (SubscribableVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0)
    {
      if (-1 < *(int *)&(method->klass->rgctx_data[4].method)->return_type) {
        plVar4 = (longlong *)*plVar4;
      }
      pIVar8 = method->klass;
      *(longlong **)((longlong)alStack_9 + lVar2) = plVar4;
      pMVar10 = pIVar8->rgctx_data[5].method;
      pIVar11 = pMVar10->invoker_method;
      pIVar12 = pMVar10->methodPointer;
      *(undefined **)((longlong)apuStack_1 + lVar2) = &UNK_?;
      pvStackX_8 = plVar4;
      (*pIVar11)(pIVar12,pMVar10,pSVar7,&pvStackX_8,*(void **)((longlong)alStack_9 + lVar2));
      return;
    }
  }
  *(undefined **)((longlong)apuStack_1 + lVar2) = &UNK_?;
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

