
/* Boolean Equals(SpawnRoleVariable`1[System.Int32]) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[System::Int32]::
     SpawnRoleVariable_1_System_Int32__Equals
               (SpawnRoleVariable_1_System_Int32_ *this,SpawnRoleVariable_1_System_Int32_ *other,
               MethodInfo *method)

{
  pSVar1 = (this->fields).subscribableVariable;
  if (((pSVar1 == (SubscribableVariable_1_System_Int32_ *)0x0) ||
      (iVar2 = (pSVar1->fields)._.value, other == (SpawnRoleVariable_1_System_Int32_ *)0x0)) ||
     (pSVar1 = (other->fields).subscribableVariable,
     pSVar1 == (SubscribableVariable_1_System_Int32_ *)0x0)) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    bVar4 = (*pcVar3)();
    return bVar4;
  }
  aiStackX_8[0] = (pSVar1->fields)._.value;
  plVar5 = (longlong *)FUN_?(method->klass->rgctx_data[9].rgctxDataDummy,aiStackX_8);
  if (plVar5 != (longlong *)0x0) {
    plVar6 = (longlong *)0x0;
    if (*plVar5 == lRam_?) {
      plVar6 = plVar5;
    }
    if (plVar6 != (longlong *)0x0) {
      if (*(longlong *)(*plVar5 + 0x40) == *(longlong *)(lRam_? + 0x40)) {
        return iVar2 == (int)plVar5[2];
      }
      FUN_?(plVar5);
      pcVar3 = (code *)swi(3);
      bVar4 = (*pcVar3)();
      return bVar4;
    }
  }
  return 0;
}


/* Boolean Equals(Object) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[System::Int32]::
     SpawnRoleVariable_1_System_Int32__Equals_1
               (SpawnRoleVariable_1_System_Int32_ *this,Object *obj,MethodInfo *method)

{
  if (obj == (Object *)0x0) {
    return 0;
  }
  if (this == (SpawnRoleVariable_1_System_Int32_ *)obj) {
    return 1;
  }
  lVar1 = FUN_?(&(obj->klass->_0).byval_arg);
  if (this != (SpawnRoleVariable_1_System_Int32_ *)0x0) {
    lVar2 = FUN_?(&(this->klass->_0).byval_arg);
    if (*(int *)(lRam_? + 0xe4) == 0) {
      FUN_?();
    }
    if (lVar1 != lVar2) {
      return 0;
    }
    pIVar3 = method->klass->rgctx_data;
    pIVar4 = pIVar3->klass;
    pMVar5 = pIVar3[1].method;
    if ((pIVar4->field_0x135 & 1) == 0) {
      pIVar4 = (Il2CppClass *)FUN_?(pIVar4);
    }
    if (((obj->klass->_1).naturalAligment < pIVar4->naturalAligment) ||
       ((obj->klass->_1).typeHierarchy[(ulonglong)pIVar4->naturalAligment - 1] != pIVar4)) {
      FUN_?(obj,pIVar4);
      pcVar6 = (code *)swi(3);
      bVar7 = (*pcVar6)();
      return bVar7;
    }
    pSVar8 = (this->fields).subscribableVariable;
    if (pSVar8 != (SubscribableVariable_1_System_Int32_ *)0x0) {
      iVar9 = (pSVar8->fields)._.value;
      if (obj[1].klass != (Object__Class *)0x0) {
        auStackX_10[0] = *(undefined4 *)&((obj[1].klass)->_0).name;
        plVar10 = (longlong *)FUN_?(pMVar5->klass->rgctx_data[9].rgctxDataDummy,auStackX_10)
        ;
        if (plVar10 == (longlong *)0x0) {
          return 0;
        }
        plVar11 = (longlong *)0x0;
        if (*plVar10 == lRam_?) {
          plVar11 = plVar10;
        }
        if (plVar11 == (longlong *)0x0) {
          return 0;
        }
        if (*(longlong *)(*plVar10 + 0x40) != *(longlong *)(lRam_? + 0x40)) {
          FUN_?(plVar10);
          pcVar6 = (code *)swi(3);
          bVar7 = (*pcVar6)();
          return bVar7;
        }
        return iVar9 == (int)plVar10[2];
      }
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  bVar7 = (*pcVar6)();
  return bVar7;
}


/* SpawnRoleVariable`1[System.Int32](Int32) */

void Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[System::Int32]::
     SpawnRoleVariable_1_System_Int32___ctor
               (SpawnRoleVariable_1_System_Int32_ *this,int32_t value,MethodInfo *method)

{
  pvVar1 = method->klass->rgctx_data[2].rgctxDataDummy;
  if ((*(byte *)((longlong)pvVar1 + 0x135) & 1) == 0) {
    pvVar1 = (void *)FUN_?(pvVar1);
  }
  pSVar2 = (SubscribableVariable_1_System_Int32_ *)FUN_?(pvVar1);
  bVar3 = iRam_? != 0;
  (pSVar2->fields)._.value = value;
  (this->fields).subscribableVariable = pSVar2;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)&this->fields >> 0xc);
    puVar5 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar6 = *puVar5;
      LOCK();
      uVar7 = *puVar5;
      if (uVar6 == uVar7) {
        *puVar5 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (uVar6 != uVar7);
  }
  pSVar2 = (this->fields).subscribableVariable;
  pvVar1 = method->klass->rgctx_data[0xc].rgctxDataDummy;
  if ((*(byte *)((longlong)pvVar1 + 0x135) & 1) == 0) {
    pvVar1 = (void *)FUN_?(pvVar1);
  }
  b = (Delegate *)FUN_?(pvVar1);
  FUN_?(b,this,method->klass->rgctx_data[0xb].rgctxDataDummy);
  if (pSVar2 == (SubscribableVariable_1_System_Int32_ *)0x0) {
    FUN_?();
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pMVar9 = method->klass->rgctx_data[0xe].method;
  ppAVar10 = &(pSVar2->fields)._.OnChange;
  a = (pSVar2->fields)._.OnChange;
  do {
    pDVar11 = mscorlib.dll::System::Delegate::Delegate_Combine((Delegate *)a,b,(MethodInfo *)0x0);
    pvVar1 = pMVar9->klass->rgctx_data[7].rgctxDataDummy;
    if ((*(byte *)((longlong)pvVar1 + 0x135) & 1) == 0) {
      pvVar1 = (void *)FUN_?();
    }
    if (pDVar11 == (Delegate *)0x0) {
      pAVar12 = (Action_1_Int32_ *)0x0;
    }
    else {
      pAVar12 = (Action_1_Int32_ *)FUN_?(pDVar11,pvVar1);
      if (pAVar12 == (Action_1_Int32_ *)0x0) {
        FUN_?(pDVar11,pvVar1);
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    LOCK();
    pAVar13 = *ppAVar10;
    bVar3 = a == pAVar13;
    if (bVar3) {
      *ppAVar10 = pAVar12;
      pAVar13 = a;
    }
    UNLOCK();
    pAVar12 = a;
    if (!bVar3) {
      pAVar12 = pAVar13;
    }
    if (iRam_? != 0) {
      uVar4 = (uint)((ulonglong)ppAVar10 >> 0xc);
      uVar7 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
      do {
        uVar6 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
        puVar5 = (ulonglong *)(uVar7 * 8 + 0xADDR);
        LOCK();
        bVar3 = uVar6 == *puVar5;
        if (bVar3) {
          *puVar5 = uVar6 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (!bVar3);
    }
    bVar3 = pAVar12 != a;
    a = pAVar12;
  } while (bVar3);
  return;
}


/* Boolean op_Equality(Int32, SpawnRoleVariable`1[System.Int32]) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[System::Int32]::
     SpawnRoleVariable_1_System_Int32__op_Equality
               (int32_t b,SpawnRoleVariable_1_System_Int32_ *a,MethodInfo *method)

{
  if ((a == (SpawnRoleVariable_1_System_Int32_ *)0x0) ||
     (pSVar1 = (a->fields).subscribableVariable,
     pSVar1 == (SubscribableVariable_1_System_Int32_ *)0x0)) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    bVar3 = (*pcVar2)();
    return bVar3;
  }
  if ((method->klass->field_0x135 & 1) == 0) {
    FUN_?();
  }
  aiStackX_10[0] = (pSVar1->fields)._.value;
  pIVar4 = method->klass;
  if ((pIVar4->field_0x135 & 1) == 0) {
    pIVar4 = (Il2CppClass *)FUN_?(pIVar4);
  }
  plVar5 = (longlong *)FUN_?(pIVar4->rgctx_data[9].rgctxDataDummy,aiStackX_10);
  if ((method->klass->field_0x135 & 1) == 0) {
    FUN_?();
  }
  if (plVar5 != (longlong *)0x0) {
    plVar6 = (longlong *)0x0;
    if (*plVar5 == lRam_?) {
      plVar6 = plVar5;
    }
    if (plVar6 != (longlong *)0x0) {
      if (*(longlong *)(*plVar5 + 0x40) == *(longlong *)(lRam_? + 0x40)) {
        return b == (int)plVar5[2];
      }
      FUN_?(plVar5);
      pcVar2 = (code *)swi(3);
      bVar3 = (*pcVar2)();
      return bVar3;
    }
  }
  return 0;
}


/* Boolean op_Equality(SpawnRoleVariable`1[System.Int32], Int32) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[System::Int32]::
     SpawnRoleVariable_1_System_Int32__op_Equality_1
               (SpawnRoleVariable_1_System_Int32_ *a,int32_t b,MethodInfo *method)

{
  if ((a == (SpawnRoleVariable_1_System_Int32_ *)0x0) ||
     (pSVar1 = (a->fields).subscribableVariable,
     pSVar1 == (SubscribableVariable_1_System_Int32_ *)0x0)) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    bVar3 = (*pcVar2)();
    return bVar3;
  }
  if ((method->klass->field_0x135 & 1) == 0) {
    FUN_?();
  }
  aiStackX_8[0] = (pSVar1->fields)._.value;
  pIVar4 = method->klass;
  if ((pIVar4->field_0x135 & 1) == 0) {
    pIVar4 = (Il2CppClass *)FUN_?(pIVar4);
  }
  plVar5 = (longlong *)FUN_?(pIVar4->rgctx_data[9].rgctxDataDummy,aiStackX_8);
  if ((method->klass->field_0x135 & 1) == 0) {
    FUN_?();
  }
  if (plVar5 != (longlong *)0x0) {
    plVar6 = (longlong *)0x0;
    if (*plVar5 == lRam_?) {
      plVar6 = plVar5;
    }
    if (plVar6 != (longlong *)0x0) {
      if (*(longlong *)(*plVar5 + 0x40) == *(longlong *)(lRam_? + 0x40)) {
        return b == (int)plVar5[2];
      }
      FUN_?(plVar5);
      pcVar2 = (code *)swi(3);
      bVar3 = (*pcVar2)();
      return bVar3;
    }
  }
  return 0;
}


/* Boolean op_Equality(SpawnRoleVariable`1[System.Int32], SpawnRoleVariable`1[System.Int32]) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[System::Int32]::
     SpawnRoleVariable_1_System_Int32__op_Equality_2
               (SpawnRoleVariable_1_System_Int32_ *a,SpawnRoleVariable_1_System_Int32_ *b,
               MethodInfo *method)

{
  if ((a != (SpawnRoleVariable_1_System_Int32_ *)0x0) &&
     (pSVar1 = (a->fields).subscribableVariable,
     pSVar1 != (SubscribableVariable_1_System_Int32_ *)0x0)) {
    if ((method->klass->field_0x135 & 1) == 0) {
      FUN_?();
    }
    iVar2 = (pSVar1->fields)._.value;
    if ((b != (SpawnRoleVariable_1_System_Int32_ *)0x0) &&
       (pSVar1 = (b->fields).subscribableVariable,
       pSVar1 != (SubscribableVariable_1_System_Int32_ *)0x0)) {
      if ((method->klass->field_0x135 & 1) == 0) {
        FUN_?();
      }
      aiStackX_8[0] = (pSVar1->fields)._.value;
      pIVar3 = method->klass;
      if ((pIVar3->field_0x135 & 1) == 0) {
        pIVar3 = (Il2CppClass *)FUN_?(pIVar3);
      }
      plVar4 = (longlong *)FUN_?(pIVar3->rgctx_data[9].rgctxDataDummy,aiStackX_8);
      if ((method->klass->field_0x135 & 1) == 0) {
        FUN_?();
      }
      if (plVar4 != (longlong *)0x0) {
        plVar5 = (longlong *)0x0;
        if (*plVar4 == lRam_?) {
          plVar5 = plVar4;
        }
        if (plVar5 != (longlong *)0x0) {
          if (*(longlong *)(*plVar4 + 0x40) == *(longlong *)(lRam_? + 0x40)) {
            return iVar2 == (int)plVar4[2];
          }
          FUN_?(plVar4);
          pcVar6 = (code *)swi(3);
          bVar7 = (*pcVar6)();
          return bVar7;
        }
      }
      return 0;
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  bVar7 = (*pcVar6)();
  return bVar7;
}


/* Boolean op_Inequality(Int32, SpawnRoleVariable`1[System.Int32]) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[System::Int32]::
     SpawnRoleVariable_1_System_Int32__op_Inequality
               (int32_t b,SpawnRoleVariable_1_System_Int32_ *a,MethodInfo *method)

{
  if ((a == (SpawnRoleVariable_1_System_Int32_ *)0x0) ||
     ((a->fields).subscribableVariable == (SubscribableVariable_1_System_Int32_ *)0x0)) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  if ((method->klass->field_0x135 & 1) == 0) {
    FUN_?();
  }
  pIVar3 = method->klass;
  if ((pIVar3->field_0x135 & 1) == 0) {
    pIVar3 = (Il2CppClass *)FUN_?(pIVar3);
  }
  plVar4 = (longlong *)FUN_?(pIVar3->rgctx_data[9].rgctxDataDummy);
  if ((method->klass->field_0x135 & 1) == 0) {
    FUN_?();
  }
  if (plVar4 != (longlong *)0x0) {
    plVar5 = (longlong *)0x0;
    if (*plVar4 == lRam_?) {
      plVar5 = plVar4;
    }
    if (plVar5 != (longlong *)0x0) {
      if (*(longlong *)(*plVar4 + 0x40) == *(longlong *)(lRam_? + 0x40)) {
        return b != (int)plVar4[2];
      }
      FUN_?(plVar4,lRam_?);
      pcVar1 = (code *)swi(3);
      bVar2 = (*pcVar1)();
      return bVar2;
    }
  }
  return 1;
}


/* Boolean op_Inequality(SpawnRoleVariable`1[System.Int32], Int32) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[System::Int32]::
     SpawnRoleVariable_1_System_Int32__op_Inequality_1
               (SpawnRoleVariable_1_System_Int32_ *a,int32_t b,MethodInfo *method)

{
  if ((a == (SpawnRoleVariable_1_System_Int32_ *)0x0) ||
     ((a->fields).subscribableVariable == (SubscribableVariable_1_System_Int32_ *)0x0)) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  if ((method->klass->field_0x135 & 1) == 0) {
    FUN_?();
  }
  pIVar3 = method->klass;
  if ((pIVar3->field_0x135 & 1) == 0) {
    pIVar3 = (Il2CppClass *)FUN_?(pIVar3);
  }
  plVar4 = (longlong *)FUN_?(pIVar3->rgctx_data[9].rgctxDataDummy);
  if ((method->klass->field_0x135 & 1) == 0) {
    FUN_?();
  }
  if (plVar4 != (longlong *)0x0) {
    plVar5 = (longlong *)0x0;
    if (*plVar4 == lRam_?) {
      plVar5 = plVar4;
    }
    if (plVar5 != (longlong *)0x0) {
      if (*(longlong *)(*plVar4 + 0x40) == *(longlong *)(lRam_? + 0x40)) {
        return b != (int)plVar4[2];
      }
      FUN_?(plVar4,lRam_?);
      pcVar1 = (code *)swi(3);
      bVar2 = (*pcVar1)();
      return bVar2;
    }
  }
  return 1;
}


/* Boolean op_Inequality(SpawnRoleVariable`1[System.Int32], SpawnRoleVariable`1[System.Int32]) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[System::Int32]::
     SpawnRoleVariable_1_System_Int32__op_Inequality_2
               (SpawnRoleVariable_1_System_Int32_ *a,SpawnRoleVariable_1_System_Int32_ *b,
               MethodInfo *method)

{
  pIVar1 = method->klass;
  if ((pIVar1->field_0x135 & 1) == 0) {
    pIVar1 = (Il2CppClass *)FUN_?(pIVar1);
  }
  pMVar2 = pIVar1->rgctx_data[0x11].method;
  if ((a != (SpawnRoleVariable_1_System_Int32_ *)0x0) &&
     (pSVar3 = (a->fields).subscribableVariable,
     pSVar3 != (SubscribableVariable_1_System_Int32_ *)0x0)) {
    if ((pMVar2->klass->field_0x135 & 1) == 0) {
      FUN_?();
    }
    iVar4 = (pSVar3->fields)._.value;
    if ((b != (SpawnRoleVariable_1_System_Int32_ *)0x0) &&
       ((b->fields).subscribableVariable != (SubscribableVariable_1_System_Int32_ *)0x0)) {
      if ((pMVar2->klass->field_0x135 & 1) == 0) {
        FUN_?();
      }
      pIVar1 = pMVar2->klass;
      if ((pIVar1->field_0x135 & 1) == 0) {
        pIVar1 = (Il2CppClass *)FUN_?(pIVar1);
      }
      plVar5 = (longlong *)FUN_?(pIVar1->rgctx_data[9].rgctxDataDummy);
      if ((pMVar2->klass->field_0x135 & 1) == 0) {
        FUN_?();
      }
      if (plVar5 != (longlong *)0x0) {
        plVar6 = (longlong *)0x0;
        if (*plVar5 == lRam_?) {
          plVar6 = plVar5;
        }
        if (plVar6 != (longlong *)0x0) {
          if (*(longlong *)(*plVar5 + 0x40) == *(longlong *)(lRam_? + 0x40)) {
            return iVar4 != (int)plVar5[2];
          }
          FUN_?(plVar5,lRam_?);
          pcVar7 = (code *)swi(3);
          bVar8 = (*pcVar7)();
          return bVar8;
        }
      }
      return 1;
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  bVar8 = (*pcVar7)();
  return bVar8;
}

