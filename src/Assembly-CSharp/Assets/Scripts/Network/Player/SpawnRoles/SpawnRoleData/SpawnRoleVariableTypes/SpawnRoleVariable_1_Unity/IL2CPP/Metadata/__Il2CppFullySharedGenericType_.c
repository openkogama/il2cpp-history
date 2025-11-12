
/* Boolean Equals(SpawnRoleVariable`1[Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType]) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[Unity::IL2CPP::Metadata::
     __Il2CppFullySharedGenericType]::
     SpawnRoleVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__Equals
               (SpawnRoleVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *this,
               SpawnRoleVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *other,
               MethodInfo *method)

{
  uVar1 = (ulonglong)(method->klass->rgctx_data[9].klass)->actualSize;
  pIVar2 = method->klass->rgctx_data[9].klass;
  if ((pIVar2->field_0x135 & 1) == 0) {
    apuStack_3[0] = &UNK_?;
    FUN_?(pIVar2);
  }
  uVar4 = 0xffffffffffffff0;
  apuStack_3[0] = &UNK_?;
  lVar5 = FUN_?();
  lVar5 = -lVar5;
  uVar6 = uVar1 + 0xf;
  if (uVar1 + 0xf <= uVar1) {
    uVar6 = uVar4;
  }
  uVar6 = uVar6 & 0xfffffffffffffff0;
  *(undefined **)((longlong)apuStack_3 + lVar5) = &UNK_?;
  FUN_?();
  lVar7 = -uVar6;
  puVar8 = &stack0xffffffffffffffc8 + lVar7 + lVar5;
  uVar6 = uVar1 + 0xf;
  if (uVar1 + 0xf <= uVar1) {
    uVar6 = uVar4;
  }
  uVar6 = uVar6 & 0xfffffffffffffff0;
  *(undefined **)((longlong)apuStack_3 + lVar7 + lVar5) = &UNK_?;
  FUN_?();
  lVar9 = -uVar6;
  apuStackX_18[0] = &stack0xffffffffffffffc8 + lVar9 + lVar7 + lVar5;
  uVar6 = uVar1 + 0xf;
  if (uVar1 + 0xf <= uVar1) {
    uVar6 = uVar4;
  }
  uVar6 = uVar6 & 0xfffffffffffffff0;
  *(undefined **)((longlong)apuStack_3 + lVar9 + lVar7 + lVar5) = &UNK_?;
  FUN_?();
  lVar10 = -uVar6;
  puVar11 = &stack0xffffffffffffffc8 + lVar10 + lVar9 + lVar7 + lVar5;
  *(undefined **)((longlong)apuStack_3 + lVar10 + lVar9 + lVar7 + lVar5) = &UNK_?;
  FUN_?(puVar11,0,uVar1);
  pSVar12 = (this->fields).subscribableVariable;
  if (pSVar12 != (SubscribableVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) {
    pIVar2 = method->klass;
    *(undefined1 **)((longlong)alStack_13 + lVar10 + lVar9 + lVar7 + lVar5) = puVar8;
    pMVar14 = pIVar2->rgctx_data[8].method;
    pIVar15 = pMVar14->invoker_method;
    pIVar16 = pMVar14->methodPointer;
    *(undefined **)((longlong)apuStack_3 + lVar10 + lVar9 + lVar7 + lVar5) = &UNK_?;
    puStackX_8 = puVar8;
    (*pIVar15)(pIVar16,pMVar14,pSVar12,&puStackX_8,
              *(void **)((longlong)alStack_13 + lVar10 + lVar9 + lVar7 + lVar5));
    *(undefined **)((longlong)apuStack_3 + lVar10 + lVar9 + lVar7 + lVar5) = &UNK_?;
    FUN_?(puVar11,puVar8,uVar1);
    puVar8 = apuStackX_18[0];
    if ((other != (SpawnRoleVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) &&
       (pSVar12 = (other->fields).subscribableVariable,
       pSVar12 != (SubscribableVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0))
    {
      pIVar2 = method->klass;
      puStackX_8 = apuStackX_18[0];
      *(undefined1 **)((longlong)alStack_13 + lVar10 + lVar9 + lVar7 + lVar5) = apuStackX_18[0];
      pMVar14 = pIVar2->rgctx_data[8].method;
      pIVar15 = pMVar14->invoker_method;
      pIVar16 = pMVar14->methodPointer;
      *(undefined **)((longlong)apuStack_3 + lVar10 + lVar9 + lVar7 + lVar5) = &UNK_?;
      (*pIVar15)(pIVar16,pMVar14,pSVar12,&puStackX_8,
                *(void **)((longlong)alStack_13 + lVar10 + lVar9 + lVar7 + lVar5));
      pvVar17 = method->klass->rgctx_data[9].rgctxDataDummy;
      *(undefined **)((longlong)apuStack_3 + lVar10 + lVar9 + lVar7 + lVar5) = &UNK_?;
      puVar8 = (undefined1 *)FUN_?(pvVar17,puVar8);
      pIVar18 = method->klass->rgctx_data;
      pvVar17 = pIVar18[9].rgctxDataDummy;
      pvVar19 = pIVar18[0x10].rgctxDataDummy;
      if ((*(byte *)((longlong)pvVar17 + 0x135) & 1) == 0) {
        *(undefined **)((longlong)apuStack_3 + lVar10 + lVar9 + lVar7 + lVar5) = &UNK_?;
        pvVar17 = (void *)FUN_?(pvVar17);
      }
      *(undefined1 ***)((longlong)alStack_13 + lVar10 + lVar9 + lVar7 + lVar5 + 8) = &puStackX_8;
      *(undefined1 ***)((longlong)alStack_13 + lVar10 + lVar9 + lVar7 + lVar5) = apuStackX_18;
      *(undefined **)((longlong)apuStack_3 + lVar10 + lVar9 + lVar7 + lVar5) = &UNK_?;
      apuStackX_18[0] = puVar8;
      FUN_?(pvVar17,pvVar19,&stack0xffffffffffffffc8 + lVar5,puVar11);
      return (bool)puStackX_8;
    }
  }
  *(undefined **)((longlong)apuStack_3 + lVar10 + lVar9 + lVar7 + lVar5) = &UNK_?;
  FUN_?();
  pcVar20 = (code *)swi(3);
  bVar21 = (*pcVar20)();
  return bVar21;
}


/* Int32 GetHashCode() */

int32_t Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
        SpawnRoleVariableTypes::SpawnRoleVariable`1[Unity::IL2CPP::Metadata::
        __Il2CppFullySharedGenericType]::
        SpawnRoleVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__GetHashCode
                  (SpawnRoleVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *this,
                  MethodInfo *method)

{
  pMVar1 = method->klass->rgctx_data[3].method;
  cVar2 = (*pMVar1->methodPointer)((this->fields).subscribableVariable,0,pMVar1);
  if (cVar2 == '\0') {
    return 0;
  }
  pSVar3 = (this->fields).subscribableVariable;
  if (pSVar3 != (SubscribableVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar4 = (*(pSVar3->klass->vtable).GetHashCode.methodPtr)
                      (pSVar3,(pSVar3->klass->vtable).GetHashCode.method);
    return iVar4;
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  iVar4 = (*pcVar5)();
  return iVar4;
}


/* Void SubscribableVariableOnOnChange(__Il2CppFullySharedGenericType) */

void Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[Unity::IL2CPP::Metadata::
     __Il2CppFullySharedGenericType]::
     SpawnRoleVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__SubscribableVariableOnOnChange
               (SpawnRoleVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *this,
               _Il2CppFullySharedGenericType *value,MethodInfo *method)

{
  apuStack_1[0] = &UNK_?;
  p_StackX_10 = (_Il2CppFullySharedGenericType__Class *)value;
  lVar2 = FUN_?();
  lVar2 = -lVar2;
  pvStackX_8 = &stack0xffffffffffffffe8 + lVar2;
  if ((this->fields).OnChange !=
      (SpawnRoleVariable_1_T_SubDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0)
  {
    pSVar3 = (this->fields).OnChange;
    p_Var7 = (_Il2CppFullySharedGenericType *)&p_StackX_10;
    if (*(int *)&(method->klass->rgctx_data[9].method)->return_type < 0) {
      p_Var7 = value;
    }
    *(undefined **)((longlong)apuStack_1 + lVar2) = &UNK_?;
    FUN_?(pvStackX_8,p_Var7);
    if (-1 < *(int *)&(method->klass->rgctx_data[9].method)->return_type) {
      pvStackX_8 = *(void **)pvStackX_8;
    }
    pIVar4 = method->klass;
    *(void **)((longlong)alStack_5 + lVar2) = pvStackX_8;
    pMVar6 = pIVar4->rgctx_data[0xf].method;
    pIVar7 = pMVar6->invoker_method;
    pIVar8 = pMVar6->methodPointer;
    *(undefined **)((longlong)apuStack_1 + lVar2) = &UNK_?;
    (*pIVar7)(pIVar8,pMVar6,pSVar3,&pvStackX_8,*(void **)((longlong)alStack_5 + lVar2));
  }
  return;
}


/* SpawnRoleVariable`1[Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType](__Il2CppFullySharedGenericType)
    */

void Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[Unity::IL2CPP::Metadata::
     __Il2CppFullySharedGenericType]::
     SpawnRoleVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
               (SpawnRoleVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *this,
               _Il2CppFullySharedGenericType *value,MethodInfo *method)

{
  apuStack_1[0] = &UNK_?;
  p_StackX_10 = (_Il2CppFullySharedGenericType__Class *)value;
  lVar2 = FUN_?();
  lVar2 = -lVar2;
  p_Var15 = (_Il2CppFullySharedGenericType__Class *)(&stack0xffffffffffffffe8 + lVar2);
  p_Var14 = (_Il2CppFullySharedGenericType *)&p_StackX_10;
  if (*(int *)&(method->klass->rgctx_data[9].method)->return_type < 0) {
    p_Var14 = value;
  }
  *(undefined **)((longlong)apuStack_1 + lVar2) = &UNK_?;
  FUN_?(p_Var15,p_Var14);
  pvVar3 = method->klass->rgctx_data[2].rgctxDataDummy;
  if ((*(byte *)((longlong)pvVar3 + 0x135) & 1) == 0) {
    *(undefined **)((longlong)apuStack_1 + lVar2) = &UNK_?;
    pvVar3 = (void *)FUN_?(pvVar3);
  }
  *(undefined **)((longlong)apuStack_1 + lVar2) = &UNK_?;
  pSVar4 = (SubscribableVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
            FUN_?(pvVar3);
  if (-1 < *(int *)&(method->klass->rgctx_data[9].method)->return_type) {
    p_Var15 = (_Il2CppFullySharedGenericType__Class *)(p_Var15->_0).image;
  }
  pIVar5 = method->klass;
  *(_Il2CppFullySharedGenericType__Class **)((longlong)alStack_6 + lVar2) = p_Var15;
  pMVar7 = pIVar5->rgctx_data[10].method;
  pIVar8 = pMVar7->invoker_method;
  pIVar9 = pMVar7->methodPointer;
  *(undefined **)((longlong)apuStack_1 + lVar2) = &UNK_?;
  p_StackX_10 = p_Var15;
  (*pIVar8)(pIVar9,pMVar7,pSVar4,&p_StackX_10,*(void **)((longlong)alStack_6 + lVar2));
  bVar10 = iRam_? != 0;
  (this->fields).subscribableVariable = pSVar4;
  if (bVar10) {
    uVar11 = (uint)((ulonglong)&this->fields >> 0xc);
    puVar12 = (ulonglong *)((ulonglong)((uVar11 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar13 = *puVar12;
      LOCK();
      uVar14 = *puVar12;
      if (uVar13 == uVar14) {
        *puVar12 = uVar13 | 1L << (uVar11 & 0x3f);
      }
      UNLOCK();
    } while (uVar13 != uVar14);
  }
  pSVar4 = (this->fields).subscribableVariable;
  pvVar3 = method->klass->rgctx_data[0xc].rgctxDataDummy;
  if ((*(byte *)((longlong)pvVar3 + 0x135) & 1) == 0) {
    *(undefined **)((longlong)apuStack_1 + lVar2) = &UNK_?;
    pvVar3 = (void *)FUN_?(pvVar3);
  }
  *(undefined **)((longlong)apuStack_1 + lVar2) = &UNK_?;
  uVar15 = FUN_?(pvVar3);
  pIVar16 = method->klass->rgctx_data;
  pvVar3 = pIVar16[0xb].rgctxDataDummy;
  pIVar9 = (pIVar16[0xd].method)->methodPointer;
  *(undefined **)((longlong)apuStack_1 + lVar2) = &UNK_?;
  (*pIVar9)(uVar15,this,pvVar3);
  if (pSVar4 != (SubscribableVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0)
  {
    pIVar9 = (method->klass->rgctx_data[0xe].method)->methodPointer;
    *(undefined **)((longlong)apuStack_1 + lVar2) = &UNK_?;
    (*pIVar9)(pSVar4,uVar15);
    return;
  }
  *(undefined **)((longlong)apuStack_1 + lVar2) = &UNK_?;
  FUN_?();
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* Void 
   add_OnChange(SpawnRoleVariable`1[T]+SubDelegate[Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType])
    */

void Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[Unity::IL2CPP::Metadata::
     __Il2CppFullySharedGenericType]::
     SpawnRoleVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__add_OnChange
               (SpawnRoleVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *this,
               SpawnRoleVariable_1_T_SubDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
               *value,MethodInfo *method)

{
  ppSVar1 = &(this->fields).OnChange;
  a = (this->fields).OnChange;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pvVar3 = method->klass->rgctx_data[6].rgctxDataDummy;
    if ((*(byte *)((longlong)pvVar3 + 0x135) & 1) == 0) {
      pvVar3 = (void *)FUN_?();
    }
    if (pDVar2 == (Delegate *)0x0) {
      pSVar4 = (SpawnRoleVariable_1_T_SubDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                *)0x0;
    }
    else {
      pSVar4 = (SpawnRoleVariable_1_T_SubDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                *)FUN_?(pDVar2,pvVar3);
      if (pSVar4 == (SpawnRoleVariable_1_T_SubDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                     *)0x0) {
        FUN_?(pDVar2,pvVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    LOCK();
    pSVar6 = *ppSVar1;
    bVar7 = a == pSVar6;
    if (bVar7) {
      *ppSVar1 = pSVar4;
      pSVar6 = a;
    }
    UNLOCK();
    pSVar4 = a;
    if (!bVar7) {
      pSVar4 = pSVar6;
    }
    if (iRam_? != 0) {
      uVar8 = (uint)((ulonglong)ppSVar1 >> 0xc);
      uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
      do {
        uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
        puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
        LOCK();
        bVar7 = uVar10 == *puVar11;
        if (bVar7) {
          *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
    bVar7 = pSVar4 != a;
    a = pSVar4;
  } while (bVar7);
  return;
}


/* __Il2CppFullySharedGenericType get_Value() */

_Il2CppFullySharedGenericType *
Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
SpawnRoleVariableTypes::SpawnRoleVariable`1[Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]
::SpawnRoleVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__get_Value
          (SpawnRoleVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *this,
          MethodInfo *method)

{
  uVar1 = *(undefined4 *)
           (*(longlong *)(*(longlong *)(*(longlong *)(in_R8 + 0x20) + 0xc0) + 0x48) + 0xfc);
  apuStack_2[0] = &UNK_?;
  lVar3 = FUN_?();
  pSVar4 = (this->fields).subscribableVariable;
  lVar3 = -lVar3;
  puVar5 = &stack0xffffffffffffffe8 + lVar3;
  if (pSVar4 != (SubscribableVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) {
    lVar6 = *(longlong *)(in_R8 + 0x20);
    *(undefined1 **)((longlong)alStack_7 + lVar3) = puVar5;
    puVar8 = *(undefined8 **)(*(longlong *)(lVar6 + 0xc0) + 0x40);
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


/* Boolean op_Equality(__Il2CppFullySharedGenericType,
   SpawnRoleVariable`1[Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType]) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[Unity::IL2CPP::Metadata::
     __Il2CppFullySharedGenericType]::
     SpawnRoleVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__op_Equality
               (_Il2CppFullySharedGenericType *b,
               SpawnRoleVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *a,
               MethodInfo *method)

{
  pIVar1 = method->klass;
  p_StackX_8 = (_Il2CppFullySharedGenericType__Class *)b;
  if ((pIVar1->field_0x135 & 1) == 0) {
    apuStack_2[0] = &UNK_?;
    pIVar1 = (Il2CppClass *)FUN_?(pIVar1);
  }
  if (((pIVar1->rgctx_data[9].klass)->field_0x135 & 1) == 0) {
    apuStack_2[0] = &UNK_?;
    FUN_?(pIVar1->rgctx_data[9].klass);
  }
  apuStack_2[0] = &UNK_?;
  lVar3 = FUN_?();
  lVar3 = -lVar3;
  pIVar1 = method->klass;
  if ((pIVar1->field_0x135 & 1) == 0) {
    *(undefined **)((longlong)apuStack_2 + lVar3) = &UNK_?;
    pIVar1 = (Il2CppClass *)FUN_?(pIVar1);
  }
  uVar4 = (ulonglong)(pIVar1->rgctx_data[9].klass)->actualSize;
  uVar5 = uVar4 + 0xf;
  if (uVar5 <= uVar4) {
    uVar5 = 0xffffffffffffff0;
  }
  uVar5 = uVar5 & 0xfffffffffffffff0;
  *(undefined **)((longlong)apuStack_2 + lVar3) = &UNK_?;
  FUN_?();
  lVar6 = -uVar5;
  pMVar7 = (MonitorData *)(&stack0xffffffffffffffd8 + lVar6 + lVar3);
  if ((a != (SpawnRoleVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) &&
     (pSVar8 = (a->fields).subscribableVariable,
     pSVar8 != (SubscribableVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0)) {
    pIVar1 = method->klass;
    if ((pIVar1->field_0x135 & 1) == 0) {
      *(undefined **)((longlong)apuStack_2 + lVar6 + lVar3) = &UNK_?;
      pIVar1 = (Il2CppClass *)FUN_?(pIVar1);
    }
    pMVar9 = pIVar1->rgctx_data[8].method;
    pIVar1 = method->klass;
    if ((pIVar1->field_0x135 & 1) == 0) {
      *(undefined **)((longlong)apuStack_2 + lVar6 + lVar3) = &UNK_?;
      pIVar1 = (Il2CppClass *)FUN_?(pIVar1);
    }
    pIVar10 = pIVar1->rgctx_data;
    *(MonitorData **)((longlong)alStack_11 + lVar6 + lVar3) = pMVar7;
    pIVar12 = pMVar9->invoker_method;
    pIVar13 = (pIVar10[8].method)->methodPointer;
    *(undefined **)((longlong)apuStack_2 + lVar6 + lVar3) = &UNK_?;
    pMStackX_10 = pMVar7;
    (*pIVar12)(pIVar13,pMVar9,pSVar8,&pMStackX_10,*(void **)((longlong)alStack_11 + lVar6 + lVar3));
    pIVar1 = method->klass;
    if ((pIVar1->field_0x135 & 1) == 0) {
      *(undefined **)((longlong)apuStack_2 + lVar6 + lVar3) = &UNK_?;
      pIVar1 = (Il2CppClass *)FUN_?(pIVar1);
    }
    pvVar14 = pIVar1->rgctx_data[9].rgctxDataDummy;
    *(undefined **)((longlong)apuStack_2 + lVar6 + lVar3) = &UNK_?;
    uVar15 = FUN_?(pvVar14,pMVar7);
    pIVar1 = method->klass;
    if ((pIVar1->field_0x135 & 1) == 0) {
      *(undefined **)((longlong)apuStack_2 + lVar6 + lVar3) = &UNK_?;
      pIVar1 = (Il2CppClass *)FUN_?(pIVar1);
    }
    pIVar16 = method->klass;
    p_Var18 = (_Il2CppFullySharedGenericType__Class *)&p_StackX_8;
    if (*(int *)&(pIVar1->rgctx_data[9].method)->return_type < 0) {
      p_Var18 = p_StackX_8;
    }
    if ((pIVar16->field_0x135 & 1) == 0) {
      *(undefined **)((longlong)apuStack_2 + lVar6 + lVar3) = &UNK_?;
      pIVar16 = (Il2CppClass *)FUN_?(pIVar16);
    }
    pvVar14 = pIVar16->rgctx_data[0x10].rgctxDataDummy;
    pIVar1 = method->klass;
    if ((pIVar1->field_0x135 & 1) == 0) {
      *(undefined **)((longlong)apuStack_2 + lVar6 + lVar3) = &UNK_?;
      pIVar1 = (Il2CppClass *)FUN_?(pIVar1);
    }
    pvVar17 = pIVar1->rgctx_data[9].rgctxDataDummy;
    if ((*(byte *)((longlong)pvVar17 + 0x135) & 1) == 0) {
      *(undefined **)((longlong)apuStack_2 + lVar6 + lVar3) = &UNK_?;
      pvVar17 = (void *)FUN_?(pvVar17);
    }
    *(MonitorData ***)((longlong)alStack_11 + lVar6 + lVar3 + 8) = &pMStackX_10;
    *(undefined8 **)((longlong)alStack_11 + lVar6 + lVar3) = &uStackX_18;
    *(undefined **)((longlong)apuStack_2 + lVar6 + lVar3) = &UNK_?;
    uStackX_18 = uVar15;
    FUN_?(pvVar17,pvVar14,&stack0xffffffffffffffd8 + lVar3,p_Var18);
    return (bool)pMStackX_10;
  }
  *(undefined **)((longlong)apuStack_2 + lVar6 + lVar3) = &UNK_?;
  FUN_?();
  pcVar18 = (code *)swi(3);
  bVar19 = (*pcVar18)();
  return bVar19;
}


/* Boolean op_Equality(SpawnRoleVariable`1[Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType],
   __Il2CppFullySharedGenericType) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[Unity::IL2CPP::Metadata::
     __Il2CppFullySharedGenericType]::
     SpawnRoleVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__op_Equality_1
               (SpawnRoleVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *a,
               _Il2CppFullySharedGenericType *b,MethodInfo *method)

{
  pIVar1 = method->klass;
  p_StackX_10 = (_Il2CppFullySharedGenericType__Class *)b;
  if ((pIVar1->field_0x135 & 1) == 0) {
    apuStack_2[0] = &UNK_?;
    pIVar1 = (Il2CppClass *)FUN_?(pIVar1);
  }
  if (((pIVar1->rgctx_data[9].klass)->field_0x135 & 1) == 0) {
    apuStack_2[0] = &UNK_?;
    FUN_?(pIVar1->rgctx_data[9].klass);
  }
  apuStack_2[0] = &UNK_?;
  lVar3 = FUN_?();
  lVar3 = -lVar3;
  pIVar1 = method->klass;
  if ((pIVar1->field_0x135 & 1) == 0) {
    *(undefined **)((longlong)apuStack_2 + lVar3) = &UNK_?;
    pIVar1 = (Il2CppClass *)FUN_?(pIVar1);
  }
  uVar4 = (ulonglong)(pIVar1->rgctx_data[9].klass)->actualSize;
  uVar5 = uVar4 + 0xf;
  if (uVar5 <= uVar4) {
    uVar5 = 0xffffffffffffff0;
  }
  uVar5 = uVar5 & 0xfffffffffffffff0;
  *(undefined **)((longlong)apuStack_2 + lVar3) = &UNK_?;
  FUN_?();
  lVar6 = -uVar5;
  puVar7 = &stack0xffffffffffffffd8 + lVar6 + lVar3;
  if ((a != (SpawnRoleVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) &&
     (pSVar8 = (a->fields).subscribableVariable,
     pSVar8 != (SubscribableVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0)) {
    pIVar1 = method->klass;
    if ((pIVar1->field_0x135 & 1) == 0) {
      *(undefined **)((longlong)apuStack_2 + lVar6 + lVar3) = &UNK_?;
      pIVar1 = (Il2CppClass *)FUN_?(pIVar1);
    }
    pMVar9 = pIVar1->rgctx_data[8].method;
    pIVar1 = method->klass;
    if ((pIVar1->field_0x135 & 1) == 0) {
      *(undefined **)((longlong)apuStack_2 + lVar6 + lVar3) = &UNK_?;
      pIVar1 = (Il2CppClass *)FUN_?(pIVar1);
    }
    pIVar10 = pIVar1->rgctx_data;
    *(undefined1 **)((longlong)alStack_11 + lVar6 + lVar3) = puVar7;
    pIVar12 = pMVar9->invoker_method;
    pIVar13 = (pIVar10[8].method)->methodPointer;
    *(undefined **)((longlong)apuStack_2 + lVar6 + lVar3) = &UNK_?;
    puStackX_8 = puVar7;
    (*pIVar12)(pIVar13,pMVar9,pSVar8,&puStackX_8,*(void **)((longlong)alStack_11 + lVar6 + lVar3));
    pIVar1 = method->klass;
    if ((pIVar1->field_0x135 & 1) == 0) {
      *(undefined **)((longlong)apuStack_2 + lVar6 + lVar3) = &UNK_?;
      pIVar1 = (Il2CppClass *)FUN_?(pIVar1);
    }
    pvVar14 = pIVar1->rgctx_data[9].rgctxDataDummy;
    *(undefined **)((longlong)apuStack_2 + lVar6 + lVar3) = &UNK_?;
    pMVar15 = (MonitorData *)FUN_?(pvVar14,puVar7);
    pIVar1 = method->klass;
    if ((pIVar1->field_0x135 & 1) == 0) {
      *(undefined **)((longlong)apuStack_2 + lVar6 + lVar3) = &UNK_?;
      pIVar1 = (Il2CppClass *)FUN_?(pIVar1);
    }
    pIVar16 = method->klass;
    p_Var18 = (_Il2CppFullySharedGenericType__Class *)&p_StackX_10;
    if (*(int *)&(pIVar1->rgctx_data[9].method)->return_type < 0) {
      p_Var18 = p_StackX_10;
    }
    if ((pIVar16->field_0x135 & 1) == 0) {
      *(undefined **)((longlong)apuStack_2 + lVar6 + lVar3) = &UNK_?;
      pIVar16 = (Il2CppClass *)FUN_?(pIVar16);
    }
    pvVar14 = pIVar16->rgctx_data[0x10].rgctxDataDummy;
    pIVar1 = method->klass;
    if ((pIVar1->field_0x135 & 1) == 0) {
      *(undefined **)((longlong)apuStack_2 + lVar6 + lVar3) = &UNK_?;
      pIVar1 = (Il2CppClass *)FUN_?(pIVar1);
    }
    pvVar17 = pIVar1->rgctx_data[9].rgctxDataDummy;
    if ((*(byte *)((longlong)pvVar17 + 0x135) & 1) == 0) {
      *(undefined **)((longlong)apuStack_2 + lVar6 + lVar3) = &UNK_?;
      pvVar17 = (void *)FUN_?(pvVar17);
    }
    *(undefined1 ***)((longlong)alStack_11 + lVar6 + lVar3 + 8) = &puStackX_8;
    *(MonitorData ***)((longlong)alStack_11 + lVar6 + lVar3) = &pMStackX_18;
    *(undefined **)((longlong)apuStack_2 + lVar6 + lVar3) = &UNK_?;
    pMStackX_18 = pMVar15;
    FUN_?(pvVar17,pvVar14,&stack0xffffffffffffffd8 + lVar3,p_Var18);
    return (bool)puStackX_8;
  }
  *(undefined **)((longlong)apuStack_2 + lVar6 + lVar3) = &UNK_?;
  FUN_?();
  pcVar18 = (code *)swi(3);
  bVar19 = (*pcVar18)();
  return bVar19;
}


/* Boolean op_Equality(SpawnRoleVariable`1[Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType],
   SpawnRoleVariable`1[Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType]) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[Unity::IL2CPP::Metadata::
     __Il2CppFullySharedGenericType]::
     SpawnRoleVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__op_Equality_2
               (SpawnRoleVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *a,
               SpawnRoleVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *b,
               MethodInfo *method)

{
  pIVar1 = method->klass;
  if ((pIVar1->field_0x135 & 1) == 0) {
    apuStack_2[0] = &UNK_?;
    pIVar1 = (Il2CppClass *)FUN_?(pIVar1);
  }
  pIVar3 = method->klass;
  uVar4 = (ulonglong)(pIVar1->rgctx_data[9].klass)->actualSize;
  if ((pIVar3->field_0x135 & 1) == 0) {
    apuStack_2[0] = &UNK_?;
    pIVar3 = (Il2CppClass *)FUN_?(pIVar3);
  }
  if (((pIVar3->rgctx_data[9].klass)->field_0x135 & 1) == 0) {
    apuStack_2[0] = &UNK_?;
    FUN_?(pIVar3->rgctx_data[9].klass);
  }
  uVar5 = 0xffffffffffffff0;
  apuStack_2[0] = &UNK_?;
  lVar6 = FUN_?();
  lVar6 = -lVar6;
  puStackX_20 = &stack0xffffffffffffffc8 + lVar6;
  uVar7 = uVar4 + 0xf;
  if (uVar4 + 0xf <= uVar4) {
    uVar7 = uVar5;
  }
  uVar7 = uVar7 & 0xfffffffffffffff0;
  *(undefined **)((longlong)apuStack_2 + lVar6) = &UNK_?;
  FUN_?();
  lVar8 = -uVar7;
  puVar9 = &stack0xffffffffffffffc8 + lVar8 + lVar6;
  uVar7 = uVar4 + 0xf;
  if (uVar4 + 0xf <= uVar4) {
    uVar7 = uVar5;
  }
  uVar7 = uVar7 & 0xfffffffffffffff0;
  *(undefined **)((longlong)apuStack_2 + lVar8 + lVar6) = &UNK_?;
  FUN_?();
  lVar10 = -uVar7;
  puVar11 = &stack0xffffffffffffffc8 + lVar10 + lVar8 + lVar6;
  uVar7 = uVar4 + 0xf;
  if (uVar4 + 0xf <= uVar4) {
    uVar7 = uVar5;
  }
  uVar7 = uVar7 & 0xfffffffffffffff0;
  *(undefined **)((longlong)apuStack_2 + lVar10 + lVar8 + lVar6) = &UNK_?;
  FUN_?();
  lVar12 = -uVar7;
  puStackX_18 = &stack0xffffffffffffffc8 + lVar12 + lVar10 + lVar8 + lVar6;
  *(undefined **)((longlong)apuStack_2 + lVar12 + lVar10 + lVar8 + lVar6) = &UNK_?;
  FUN_?(puStackX_18,0,uVar4);
  if ((a != (SpawnRoleVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) &&
     (pSVar13 = (a->fields).subscribableVariable,
     pSVar13 != (SubscribableVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0)) {
    pIVar1 = method->klass;
    if ((pIVar1->field_0x135 & 1) == 0) {
      *(undefined **)((longlong)apuStack_2 + lVar12 + lVar10 + lVar8 + lVar6) = &UNK_?;
      pIVar1 = (Il2CppClass *)FUN_?(pIVar1);
    }
    pMVar14 = pIVar1->rgctx_data[8].method;
    pIVar1 = method->klass;
    if ((pIVar1->field_0x135 & 1) == 0) {
      *(undefined **)((longlong)apuStack_2 + lVar12 + lVar10 + lVar8 + lVar6) = &UNK_?;
      pIVar1 = (Il2CppClass *)FUN_?(pIVar1);
    }
    pIVar15 = pIVar1->rgctx_data;
    *(undefined1 **)((longlong)alStack_16 + lVar12 + lVar10 + lVar8 + lVar6) = puVar9;
    pIVar17 = pMVar14->invoker_method;
    pIVar18 = (pIVar15[8].method)->methodPointer;
    *(undefined **)((longlong)apuStack_2 + lVar12 + lVar10 + lVar8 + lVar6) = &UNK_?;
    puStackX_8 = puVar9;
    (*pIVar17)(pIVar18,pMVar14,pSVar13,&puStackX_8,
              *(void **)((longlong)alStack_16 + lVar12 + lVar10 + lVar8 + lVar6));
    puVar19 = puStackX_18;
    *(undefined **)((longlong)apuStack_2 + lVar12 + lVar10 + lVar8 + lVar6) = &UNK_?;
    FUN_?(puStackX_18,puVar9,uVar4);
    if ((b != (SpawnRoleVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) &&
       (pSVar13 = (b->fields).subscribableVariable,
       pSVar13 != (SubscribableVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0))
    {
      pIVar1 = method->klass;
      if ((pIVar1->field_0x135 & 1) == 0) {
        *(undefined **)((longlong)apuStack_2 + lVar12 + lVar10 + lVar8 + lVar6) = &UNK_?;
        pIVar1 = (Il2CppClass *)FUN_?(pIVar1);
      }
      pMVar14 = pIVar1->rgctx_data[8].method;
      pIVar1 = method->klass;
      if ((pIVar1->field_0x135 & 1) == 0) {
        *(undefined **)((longlong)apuStack_2 + lVar12 + lVar10 + lVar8 + lVar6) = &UNK_?;
        pIVar1 = (Il2CppClass *)FUN_?(pIVar1);
      }
      pIVar15 = pIVar1->rgctx_data;
      *(undefined1 **)((longlong)alStack_16 + lVar12 + lVar10 + lVar8 + lVar6) = puVar11;
      pIVar17 = pMVar14->invoker_method;
      pIVar18 = (pIVar15[8].method)->methodPointer;
      *(undefined **)((longlong)apuStack_2 + lVar12 + lVar10 + lVar8 + lVar6) = &UNK_?;
      puStackX_8 = puVar11;
      (*pIVar17)(pIVar18,pMVar14,pSVar13,&puStackX_8,
                *(void **)((longlong)alStack_16 + lVar12 + lVar10 + lVar8 + lVar6));
      pIVar1 = method->klass;
      if ((pIVar1->field_0x135 & 1) == 0) {
        *(undefined **)((longlong)apuStack_2 + lVar12 + lVar10 + lVar8 + lVar6) = &UNK_?;
        pIVar1 = (Il2CppClass *)FUN_?(pIVar1);
      }
      pvVar20 = pIVar1->rgctx_data[9].rgctxDataDummy;
      *(undefined **)((longlong)apuStack_2 + lVar12 + lVar10 + lVar8 + lVar6) = &UNK_?;
      puVar9 = (undefined1 *)FUN_?(pvVar20,puVar11);
      pIVar1 = method->klass;
      if ((pIVar1->field_0x135 & 1) == 0) {
        *(undefined **)((longlong)apuStack_2 + lVar12 + lVar10 + lVar8 + lVar6) = &UNK_?;
        pIVar1 = (Il2CppClass *)FUN_?(pIVar1);
      }
      pvVar20 = pIVar1->rgctx_data[0x10].rgctxDataDummy;
      pIVar1 = method->klass;
      if ((pIVar1->field_0x135 & 1) == 0) {
        *(undefined **)((longlong)apuStack_2 + lVar12 + lVar10 + lVar8 + lVar6) = &UNK_?;
        pIVar1 = (Il2CppClass *)FUN_?(pIVar1);
      }
      pvVar21 = pIVar1->rgctx_data[9].rgctxDataDummy;
      if ((*(byte *)((longlong)pvVar21 + 0x135) & 1) == 0) {
        *(undefined **)((longlong)apuStack_2 + lVar12 + lVar10 + lVar8 + lVar6) = &UNK_?;
        pvVar21 = (void *)FUN_?(pvVar21);
      }
      *(undefined1 ***)((longlong)alStack_16 + lVar12 + lVar10 + lVar8 + lVar6 + 8) = &puStackX_8;
      *(undefined1 ***)((longlong)alStack_16 + lVar12 + lVar10 + lVar8 + lVar6) = &puStackX_18;
      *(undefined **)((longlong)apuStack_2 + lVar12 + lVar10 + lVar8 + lVar6) = &UNK_?;
      puStackX_18 = puVar9;
      FUN_?(pvVar21,pvVar20,puStackX_20,puVar19);
      return (bool)puStackX_8;
    }
  }
  *(undefined **)((longlong)apuStack_2 + lVar12 + lVar10 + lVar8 + lVar6) = &UNK_?;
  FUN_?();
  pcVar22 = (code *)swi(3);
  bVar23 = (*pcVar22)();
  return bVar23;
}


/* __Il2CppFullySharedGenericType
   op_Implicit(SpawnRoleVariable`1[Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType]) */

_Il2CppFullySharedGenericType *
Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
SpawnRoleVariableTypes::SpawnRoleVariable`1[Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]
::SpawnRoleVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__op_Implicit
          (SpawnRoleVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *s,
          MethodInfo *method)

{
  lVar1 = *(longlong *)(in_R8 + 0x20);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    apuStack_2[0] = &UNK_?;
    lVar1 = FUN_?(lVar1);
  }
  uVar3 = *(undefined4 *)(*(longlong *)(*(longlong *)(lVar1 + 0xc0) + 0x48) + 0xfc);
  apuStack_2[0] = &UNK_?;
  lVar1 = FUN_?();
  lVar1 = -lVar1;
  puVar4 = &stack0xffffffffffffffd8 + lVar1;
  if ((s != (SpawnRoleVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) &&
     (pSVar5 = (s->fields).subscribableVariable,
     pSVar5 != (SubscribableVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0)) {
    lVar6 = *(longlong *)(in_R8 + 0x20);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      *(undefined **)((longlong)apuStack_2 + lVar1) = &UNK_?;
      lVar6 = FUN_?(lVar6);
    }
    lVar6 = *(longlong *)(*(longlong *)(lVar6 + 0xc0) + 0x40);
    lVar7 = *(longlong *)(in_R8 + 0x20);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      *(undefined **)((longlong)apuStack_2 + lVar1) = &UNK_?;
      lVar7 = FUN_?(lVar7);
    }
    lVar7 = *(longlong *)(lVar7 + 0xc0);
    *(undefined1 **)((longlong)alStack_8 + lVar1) = puVar4;
    pcVar9 = *(code **)(lVar6 + 0x10);
    uVar10 = **(undefined8 **)(lVar7 + 0x40);
    *(undefined **)((longlong)apuStack_2 + lVar1) = &UNK_?;
    puStackX_8 = puVar4;
    (*pcVar9)(uVar10,lVar6,pSVar5,&puStackX_8);
    *(undefined **)((longlong)apuStack_2 + lVar1) = &UNK_?;
    p_Var9 = (_Il2CppFullySharedGenericType *)FUN_?(method,puVar4,uVar3);
    return p_Var9;
  }
  *(undefined **)((longlong)apuStack_2 + lVar1) = &UNK_?;
  FUN_?();
  pcVar9 = (code *)swi(3);
  p_Var9 = (_Il2CppFullySharedGenericType *)(*pcVar9)();
  return p_Var9;
}


/* Boolean op_Inequality(__Il2CppFullySharedGenericType,
   SpawnRoleVariable`1[Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType]) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[Unity::IL2CPP::Metadata::
     __Il2CppFullySharedGenericType]::
     SpawnRoleVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__op_Inequality
               (_Il2CppFullySharedGenericType *b,
               SpawnRoleVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *a,
               MethodInfo *method)

{
  pIVar1 = method->klass;
  p_StackX_8 = (_Il2CppFullySharedGenericType__Class *)b;
  if ((pIVar1->field_0x135 & 1) == 0) {
    apuStack_2[0] = &UNK_?;
    pIVar1 = (Il2CppClass *)FUN_?(pIVar1);
  }
  if (((pIVar1->rgctx_data[9].klass)->field_0x135 & 1) == 0) {
    apuStack_2[0] = &UNK_?;
    FUN_?(pIVar1->rgctx_data[9].klass);
  }
  apuStack_2[0] = &UNK_?;
  lVar3 = FUN_?();
  lVar3 = -lVar3;
  pIVar1 = method->klass;
  if ((pIVar1->field_0x135 & 1) == 0) {
    *(undefined **)((longlong)apuStack_2 + lVar3) = &UNK_?;
    pIVar1 = (Il2CppClass *)FUN_?(pIVar1);
  }
  uVar4 = (ulonglong)(pIVar1->rgctx_data[9].klass)->actualSize;
  uVar5 = uVar4 + 0xf;
  if (uVar5 <= uVar4) {
    uVar5 = 0xffffffffffffff0;
  }
  uVar5 = uVar5 & 0xfffffffffffffff0;
  *(undefined **)((longlong)apuStack_2 + lVar3) = &UNK_?;
  FUN_?();
  lVar6 = -uVar5;
  pMVar7 = (MonitorData *)(&stack0xffffffffffffffd8 + lVar6 + lVar3);
  if ((a != (SpawnRoleVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) &&
     (pSVar8 = (a->fields).subscribableVariable,
     pSVar8 != (SubscribableVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0)) {
    pIVar1 = method->klass;
    if ((pIVar1->field_0x135 & 1) == 0) {
      *(undefined **)((longlong)apuStack_2 + lVar6 + lVar3) = &UNK_?;
      pIVar1 = (Il2CppClass *)FUN_?(pIVar1);
    }
    pMVar9 = pIVar1->rgctx_data[8].method;
    pIVar1 = method->klass;
    if ((pIVar1->field_0x135 & 1) == 0) {
      *(undefined **)((longlong)apuStack_2 + lVar6 + lVar3) = &UNK_?;
      pIVar1 = (Il2CppClass *)FUN_?(pIVar1);
    }
    pIVar10 = pIVar1->rgctx_data;
    *(MonitorData **)((longlong)alStack_11 + lVar6 + lVar3) = pMVar7;
    pIVar12 = pMVar9->invoker_method;
    pIVar13 = (pIVar10[8].method)->methodPointer;
    *(undefined **)((longlong)apuStack_2 + lVar6 + lVar3) = &UNK_?;
    pMStackX_10 = pMVar7;
    (*pIVar12)(pIVar13,pMVar9,pSVar8,&pMStackX_10,*(void **)((longlong)alStack_11 + lVar6 + lVar3));
    pIVar1 = method->klass;
    if ((pIVar1->field_0x135 & 1) == 0) {
      *(undefined **)((longlong)apuStack_2 + lVar6 + lVar3) = &UNK_?;
      pIVar1 = (Il2CppClass *)FUN_?(pIVar1);
    }
    pvVar14 = pIVar1->rgctx_data[9].rgctxDataDummy;
    *(undefined **)((longlong)apuStack_2 + lVar6 + lVar3) = &UNK_?;
    uVar15 = FUN_?(pvVar14,pMVar7);
    pIVar1 = method->klass;
    if ((pIVar1->field_0x135 & 1) == 0) {
      *(undefined **)((longlong)apuStack_2 + lVar6 + lVar3) = &UNK_?;
      pIVar1 = (Il2CppClass *)FUN_?(pIVar1);
    }
    pIVar16 = method->klass;
    p_Var18 = (_Il2CppFullySharedGenericType__Class *)&p_StackX_8;
    if (*(int *)&(pIVar1->rgctx_data[9].method)->return_type < 0) {
      p_Var18 = p_StackX_8;
    }
    if ((pIVar16->field_0x135 & 1) == 0) {
      *(undefined **)((longlong)apuStack_2 + lVar6 + lVar3) = &UNK_?;
      pIVar16 = (Il2CppClass *)FUN_?(pIVar16);
    }
    pvVar14 = pIVar16->rgctx_data[0x10].rgctxDataDummy;
    pIVar1 = method->klass;
    if ((pIVar1->field_0x135 & 1) == 0) {
      *(undefined **)((longlong)apuStack_2 + lVar6 + lVar3) = &UNK_?;
      pIVar1 = (Il2CppClass *)FUN_?(pIVar1);
    }
    pvVar17 = pIVar1->rgctx_data[9].rgctxDataDummy;
    if ((*(byte *)((longlong)pvVar17 + 0x135) & 1) == 0) {
      *(undefined **)((longlong)apuStack_2 + lVar6 + lVar3) = &UNK_?;
      pvVar17 = (void *)FUN_?(pvVar17);
    }
    *(MonitorData ***)((longlong)alStack_11 + lVar6 + lVar3 + 8) = &pMStackX_10;
    *(undefined8 **)((longlong)alStack_11 + lVar6 + lVar3) = &uStackX_18;
    *(undefined **)((longlong)apuStack_2 + lVar6 + lVar3) = &UNK_?;
    uStackX_18 = uVar15;
    FUN_?(pvVar17,pvVar14,&stack0xffffffffffffffd8 + lVar3,p_Var18);
    return (char)pMStackX_10 == '\0';
  }
  *(undefined **)((longlong)apuStack_2 + lVar6 + lVar3) = &UNK_?;
  FUN_?();
  pcVar18 = (code *)swi(3);
  bVar19 = (*pcVar18)();
  return bVar19;
}


/* Boolean op_Inequality(SpawnRoleVariable`1[Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType],
   __Il2CppFullySharedGenericType) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[Unity::IL2CPP::Metadata::
     __Il2CppFullySharedGenericType]::
     SpawnRoleVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__op_Inequality_1
               (SpawnRoleVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *a,
               _Il2CppFullySharedGenericType *b,MethodInfo *method)

{
  pIVar1 = method->klass;
  p_StackX_10 = (_Il2CppFullySharedGenericType__Class *)b;
  if ((pIVar1->field_0x135 & 1) == 0) {
    apuStack_2[0] = &UNK_?;
    pIVar1 = (Il2CppClass *)FUN_?(pIVar1);
  }
  if (((pIVar1->rgctx_data[9].klass)->field_0x135 & 1) == 0) {
    apuStack_2[0] = &UNK_?;
    FUN_?(pIVar1->rgctx_data[9].klass);
  }
  apuStack_2[0] = &UNK_?;
  lVar3 = FUN_?();
  lVar3 = -lVar3;
  pIVar1 = method->klass;
  if ((pIVar1->field_0x135 & 1) == 0) {
    *(undefined **)((longlong)apuStack_2 + lVar3) = &UNK_?;
    pIVar1 = (Il2CppClass *)FUN_?(pIVar1);
  }
  uVar4 = (ulonglong)(pIVar1->rgctx_data[9].klass)->actualSize;
  uVar5 = uVar4 + 0xf;
  if (uVar5 <= uVar4) {
    uVar5 = 0xffffffffffffff0;
  }
  uVar5 = uVar5 & 0xfffffffffffffff0;
  *(undefined **)((longlong)apuStack_2 + lVar3) = &UNK_?;
  FUN_?();
  lVar6 = -uVar5;
  puVar7 = &stack0xffffffffffffffd8 + lVar6 + lVar3;
  if ((a != (SpawnRoleVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) &&
     (pSVar8 = (a->fields).subscribableVariable,
     pSVar8 != (SubscribableVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0)) {
    pIVar1 = method->klass;
    if ((pIVar1->field_0x135 & 1) == 0) {
      *(undefined **)((longlong)apuStack_2 + lVar6 + lVar3) = &UNK_?;
      pIVar1 = (Il2CppClass *)FUN_?(pIVar1);
    }
    pMVar9 = pIVar1->rgctx_data[8].method;
    pIVar1 = method->klass;
    if ((pIVar1->field_0x135 & 1) == 0) {
      *(undefined **)((longlong)apuStack_2 + lVar6 + lVar3) = &UNK_?;
      pIVar1 = (Il2CppClass *)FUN_?(pIVar1);
    }
    pIVar10 = pIVar1->rgctx_data;
    *(undefined1 **)((longlong)alStack_11 + lVar6 + lVar3) = puVar7;
    pIVar12 = pMVar9->invoker_method;
    pIVar13 = (pIVar10[8].method)->methodPointer;
    *(undefined **)((longlong)apuStack_2 + lVar6 + lVar3) = &UNK_?;
    puStackX_8 = puVar7;
    (*pIVar12)(pIVar13,pMVar9,pSVar8,&puStackX_8,*(void **)((longlong)alStack_11 + lVar6 + lVar3));
    pIVar1 = method->klass;
    if ((pIVar1->field_0x135 & 1) == 0) {
      *(undefined **)((longlong)apuStack_2 + lVar6 + lVar3) = &UNK_?;
      pIVar1 = (Il2CppClass *)FUN_?(pIVar1);
    }
    pvVar14 = pIVar1->rgctx_data[9].rgctxDataDummy;
    *(undefined **)((longlong)apuStack_2 + lVar6 + lVar3) = &UNK_?;
    pMVar15 = (MonitorData *)FUN_?(pvVar14,puVar7);
    pIVar1 = method->klass;
    if ((pIVar1->field_0x135 & 1) == 0) {
      *(undefined **)((longlong)apuStack_2 + lVar6 + lVar3) = &UNK_?;
      pIVar1 = (Il2CppClass *)FUN_?(pIVar1);
    }
    pIVar16 = method->klass;
    p_Var18 = (_Il2CppFullySharedGenericType__Class *)&p_StackX_10;
    if (*(int *)&(pIVar1->rgctx_data[9].method)->return_type < 0) {
      p_Var18 = p_StackX_10;
    }
    if ((pIVar16->field_0x135 & 1) == 0) {
      *(undefined **)((longlong)apuStack_2 + lVar6 + lVar3) = &UNK_?;
      pIVar16 = (Il2CppClass *)FUN_?(pIVar16);
    }
    pvVar14 = pIVar16->rgctx_data[0x10].rgctxDataDummy;
    pIVar1 = method->klass;
    if ((pIVar1->field_0x135 & 1) == 0) {
      *(undefined **)((longlong)apuStack_2 + lVar6 + lVar3) = &UNK_?;
      pIVar1 = (Il2CppClass *)FUN_?(pIVar1);
    }
    pvVar17 = pIVar1->rgctx_data[9].rgctxDataDummy;
    if ((*(byte *)((longlong)pvVar17 + 0x135) & 1) == 0) {
      *(undefined **)((longlong)apuStack_2 + lVar6 + lVar3) = &UNK_?;
      pvVar17 = (void *)FUN_?(pvVar17);
    }
    *(undefined1 ***)((longlong)alStack_11 + lVar6 + lVar3 + 8) = &puStackX_8;
    *(MonitorData ***)((longlong)alStack_11 + lVar6 + lVar3) = &pMStackX_18;
    *(undefined **)((longlong)apuStack_2 + lVar6 + lVar3) = &UNK_?;
    pMStackX_18 = pMVar15;
    FUN_?(pvVar17,pvVar14,&stack0xffffffffffffffd8 + lVar3,p_Var18);
    return (char)puStackX_8 == '\0';
  }
  *(undefined **)((longlong)apuStack_2 + lVar6 + lVar3) = &UNK_?;
  FUN_?();
  pcVar18 = (code *)swi(3);
  bVar19 = (*pcVar18)();
  return bVar19;
}


/* Boolean op_Inequality(SpawnRoleVariable`1[Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType],
   SpawnRoleVariable`1[Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType]) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[Unity::IL2CPP::Metadata::
     __Il2CppFullySharedGenericType]::
     SpawnRoleVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__op_Inequality_2
               (SpawnRoleVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *a,
               SpawnRoleVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *b,
               MethodInfo *method)

{
  pIVar1 = method->klass;
  if ((pIVar1->field_0x135 & 1) == 0) {
    pIVar1 = (Il2CppClass *)FUN_?(pIVar1);
  }
  pIVar2 = method->klass;
  pIVar3 = (pIVar1->rgctx_data[0x11].method)->methodPointer;
  if ((pIVar2->field_0x135 & 1) == 0) {
    pIVar2 = (Il2CppClass *)FUN_?(pIVar2);
  }
  cVar4 = (*pIVar3)(a,b,pIVar2->rgctx_data[0x11].rgctxDataDummy);
  return cVar4 == '\0';
}


/* Void 
   remove_OnChange(SpawnRoleVariable`1[T]+SubDelegate[Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType])
    */

void Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[Unity::IL2CPP::Metadata::
     __Il2CppFullySharedGenericType]::
     SpawnRoleVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__remove_OnChange
               (SpawnRoleVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *this,
               SpawnRoleVariable_1_T_SubDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
               *value,MethodInfo *method)

{
  ppSVar1 = &(this->fields).OnChange;
  source = (this->fields).OnChange;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pvVar3 = method->klass->rgctx_data[6].rgctxDataDummy;
    if ((*(byte *)((longlong)pvVar3 + 0x135) & 1) == 0) {
      pvVar3 = (void *)FUN_?();
    }
    if (pDVar2 == (Delegate *)0x0) {
      pSVar4 = (SpawnRoleVariable_1_T_SubDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                *)0x0;
    }
    else {
      pSVar4 = (SpawnRoleVariable_1_T_SubDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                *)FUN_?(pDVar2,pvVar3);
      if (pSVar4 == (SpawnRoleVariable_1_T_SubDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                     *)0x0) {
        FUN_?(pDVar2,pvVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    LOCK();
    pSVar6 = *ppSVar1;
    bVar7 = source == pSVar6;
    if (bVar7) {
      *ppSVar1 = pSVar4;
      pSVar6 = source;
    }
    UNLOCK();
    pSVar4 = source;
    if (!bVar7) {
      pSVar4 = pSVar6;
    }
    if (iRam_? != 0) {
      uVar8 = (uint)((ulonglong)ppSVar1 >> 0xc);
      uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
      do {
        uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
        puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
        LOCK();
        bVar7 = uVar10 == *puVar11;
        if (bVar7) {
          *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
    bVar7 = pSVar4 != source;
    source = pSVar4;
  } while (bVar7);
  return;
}

