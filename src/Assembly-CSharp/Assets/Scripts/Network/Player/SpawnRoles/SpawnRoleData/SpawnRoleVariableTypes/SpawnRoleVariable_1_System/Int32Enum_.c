
/* Boolean Equals(SpawnRoleVariable`1[System.Int32Enum]) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[System::Int32Enum]::
     SpawnRoleVariable_1_System_Int32Enum__Equals
               (SpawnRoleVariable_1_System_Int32Enum_ *this,
               SpawnRoleVariable_1_System_Int32Enum_ *other,MethodInfo *method)

{
  pSVar1 = (this->fields).subscribableVariable;
  if (((pSVar1 != (SubscribableVariable_1_System_Int32Enum_ *)0x0) &&
      (iVar2 = (pSVar1->fields)._.value, other != (SpawnRoleVariable_1_System_Int32Enum_ *)0x0)) &&
     (pSVar1 = (other->fields).subscribableVariable,
     pSVar1 != (SubscribableVariable_1_System_Int32Enum_ *)0x0)) {
    aiStackX_8[0] = (pSVar1->fields)._.value;
    o2 = (Object *)FUN_?(method->klass->rgctx_data[9].rgctxDataDummy,aiStackX_8);
    OStack_3.klass = method->klass->rgctx_data[9].rgctxDataDummy;
    if ((((OStack_3.klass)->_1).field_0x6d & 1) == 0) {
      OStack_3.klass = (Object__Class *)FUN_?(OStack_3.klass);
    }
    OStack_3.monitor = (MonitorData *)0xffffffffffffffff;
    iStack_4 = iVar2;
    bVar5 = mscorlib.dll::System::ValueType::ValueType_DefaultEquals
                      (&OStack_3,o2,(MethodInfo *)0x0);
    return bVar5;
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  bVar5 = (*pcVar6)();
  return bVar5;
}


/* Boolean Equals(Object) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[System::Int32Enum]::
     SpawnRoleVariable_1_System_Int32Enum__Equals_1
               (SpawnRoleVariable_1_System_Int32Enum_ *this,Object *obj,MethodInfo *method)

{
  if (obj == (Object *)0x0) {
    return 0;
  }
  if (this == (SpawnRoleVariable_1_System_Int32Enum_ *)obj) {
    return 1;
  }
  lVar1 = FUN_?(&(obj->klass->_0).byval_arg);
  if (this != (SpawnRoleVariable_1_System_Int32Enum_ *)0x0) {
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
    if (pSVar8 != (SubscribableVariable_1_System_Int32Enum_ *)0x0) {
      iVar9 = (pSVar8->fields)._.value;
      if (obj[1].klass != (Object__Class *)0x0) {
        auStackX_10[0] = *(undefined4 *)&((obj[1].klass)->_0).name;
        o2 = (Object *)FUN_?(pMVar5->klass->rgctx_data[9].rgctxDataDummy,auStackX_10);
        OStack_10.klass = pMVar5->klass->rgctx_data[9].rgctxDataDummy;
        if ((((OStack_10.klass)->_1).field_0x6d & 1) == 0) {
          OStack_10.klass = (Object__Class *)FUN_?(OStack_10.klass);
        }
        OStack_10.monitor = (MonitorData *)0xffffffffffffffff;
        iStack_11 = iVar9;
        bVar7 = mscorlib.dll::System::ValueType::ValueType_DefaultEquals
                          (&OStack_10,o2,(MethodInfo *)0x0);
        return bVar7;
      }
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  bVar7 = (*pcVar6)();
  return bVar7;
}


/* SpawnRoleVariable`1[System.Int32Enum](Int32Enum) */

void Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[System::Int32Enum]::
     SpawnRoleVariable_1_System_Int32Enum___ctor
               (SpawnRoleVariable_1_System_Int32Enum_ *this,Int32Enum__Enum value,MethodInfo *method
               )

{
  pvVar1 = method->klass->rgctx_data[2].rgctxDataDummy;
  if ((*(byte *)((longlong)pvVar1 + 0x135) & 1) == 0) {
    pvVar1 = (void *)FUN_?(pvVar1);
  }
  pSVar2 = (SubscribableVariable_1_System_Int32Enum_ *)FUN_?(pvVar1);
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
  this_00 = (UnityAction_1_System_Int32Enum_ *)FUN_?(pvVar1);
  pIVar8 = method->klass->rgctx_data;
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
  UnityAction_1_System_Int32Enum___ctor
            (this_00,(Object *)this,pIVar8[0xb].rgctxDataDummy,pIVar8[0xd].method);
  if (pSVar2 == (SubscribableVariable_1_System_Int32Enum_ *)0x0) {
    FUN_?();
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pMVar10 = method->klass->rgctx_data[0xe].method;
  ppAVar11 = &(pSVar2->fields)._.OnChange;
  a = (pSVar2->fields)._.OnChange;
  do {
    pDVar12 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)this_00,(MethodInfo *)0x0);
    pvVar1 = pMVar10->klass->rgctx_data[7].rgctxDataDummy;
    if ((*(byte *)((longlong)pvVar1 + 0x135) & 1) == 0) {
      pvVar1 = (void *)FUN_?();
    }
    if (pDVar12 == (Delegate *)0x0) {
      pAVar13 = (Action_1_Int32Enum_ *)0x0;
    }
    else {
      pAVar13 = (Action_1_Int32Enum_ *)FUN_?(pDVar12,pvVar1);
      if (pAVar13 == (Action_1_Int32Enum_ *)0x0) {
        FUN_?(pDVar12,pvVar1);
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    LOCK();
    pAVar14 = *ppAVar11;
    bVar3 = a == pAVar14;
    if (bVar3) {
      *ppAVar11 = pAVar13;
      pAVar14 = a;
    }
    UNLOCK();
    pAVar13 = a;
    if (!bVar3) {
      pAVar13 = pAVar14;
    }
    if (iRam_? != 0) {
      uVar4 = (uint)((ulonglong)ppAVar11 >> 0xc);
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
    bVar3 = pAVar13 != a;
    a = pAVar13;
  } while (bVar3);
  return;
}


/* Int32Enum get_Value() */

Int32Enum__Enum
Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
SpawnRoleVariableTypes::SpawnRoleVariable`1[System::Int32Enum]::
SpawnRoleVariable_1_System_Int32Enum__get_Value
          (SpawnRoleVariable_1_System_Int32Enum_ *this,MethodInfo *method)

{
  pSVar1 = (this->fields).subscribableVariable;
  if (pSVar1 != (SubscribableVariable_1_System_Int32Enum_ *)0x0) {
    return (pSVar1->fields)._.value;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  IVar3 = (*pcVar2)();
  return IVar3;
}


/* Boolean op_Equality(Int32Enum, SpawnRoleVariable`1[System.Int32Enum]) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[System::Int32Enum]::
     SpawnRoleVariable_1_System_Int32Enum__op_Equality
               (Int32Enum__Enum b,SpawnRoleVariable_1_System_Int32Enum_ *a,MethodInfo *method)

{
  if ((a != (SpawnRoleVariable_1_System_Int32Enum_ *)0x0) &&
     (pSVar1 = (a->fields).subscribableVariable,
     pSVar1 != (SubscribableVariable_1_System_Int32Enum_ *)0x0)) {
    if ((method->klass->field_0x135 & 1) == 0) {
      FUN_?();
    }
    aiStackX_10[0] = (pSVar1->fields)._.value;
    pIVar2 = method->klass;
    if ((pIVar2->field_0x135 & 1) == 0) {
      pIVar2 = (Il2CppClass *)FUN_?(pIVar2);
    }
    o2 = (Object *)FUN_?(pIVar2->rgctx_data[9].rgctxDataDummy,aiStackX_10);
    pIVar2 = method->klass;
    if ((pIVar2->field_0x135 & 1) == 0) {
      pIVar2 = (Il2CppClass *)FUN_?(pIVar2);
    }
    pOVar3 = pIVar2->rgctx_data[9].rgctxDataDummy;
    if (((pOVar3->_1).field_0x6d & 1) == 0) {
      pOVar3 = (Object__Class *)FUN_?(pOVar3);
    }
    OStack_4.monitor = (MonitorData *)0xffffffffffffffff;
    OStack_4.klass = pOVar3;
    IStack_5 = b;
    bVar6 = mscorlib.dll::System::ValueType::ValueType_DefaultEquals
                      (&OStack_4,o2,(MethodInfo *)0x0);
    return bVar6;
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  bVar6 = (*pcVar7)();
  return bVar6;
}


/* Boolean op_Equality(SpawnRoleVariable`1[System.Int32Enum], Int32Enum) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[System::Int32Enum]::
     SpawnRoleVariable_1_System_Int32Enum__op_Equality_1
               (SpawnRoleVariable_1_System_Int32Enum_ *a,Int32Enum__Enum b,MethodInfo *method)

{
  if ((a != (SpawnRoleVariable_1_System_Int32Enum_ *)0x0) &&
     (pSVar1 = (a->fields).subscribableVariable,
     pSVar1 != (SubscribableVariable_1_System_Int32Enum_ *)0x0)) {
    if ((method->klass->field_0x135 & 1) == 0) {
      FUN_?();
    }
    aiStackX_8[0] = (pSVar1->fields)._.value;
    pIVar2 = method->klass;
    if ((pIVar2->field_0x135 & 1) == 0) {
      pIVar2 = (Il2CppClass *)FUN_?(pIVar2);
    }
    o2 = (Object *)FUN_?(pIVar2->rgctx_data[9].rgctxDataDummy,aiStackX_8);
    pIVar2 = method->klass;
    if ((pIVar2->field_0x135 & 1) == 0) {
      pIVar2 = (Il2CppClass *)FUN_?(pIVar2);
    }
    pOVar3 = pIVar2->rgctx_data[9].rgctxDataDummy;
    if (((pOVar3->_1).field_0x6d & 1) == 0) {
      pOVar3 = (Object__Class *)FUN_?(pOVar3);
    }
    OStack_4.monitor = (MonitorData *)0xffffffffffffffff;
    OStack_4.klass = pOVar3;
    IStack_5 = b;
    bVar6 = mscorlib.dll::System::ValueType::ValueType_DefaultEquals
                      (&OStack_4,o2,(MethodInfo *)0x0);
    return bVar6;
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  bVar6 = (*pcVar7)();
  return bVar6;
}


/* Boolean op_Equality(SpawnRoleVariable`1[System.Int32Enum], SpawnRoleVariable`1[System.Int32Enum])
    */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[System::Int32Enum]::
     SpawnRoleVariable_1_System_Int32Enum__op_Equality_2
               (SpawnRoleVariable_1_System_Int32Enum_ *a,SpawnRoleVariable_1_System_Int32Enum_ *b,
               MethodInfo *method)

{
  if ((a != (SpawnRoleVariable_1_System_Int32Enum_ *)0x0) &&
     (pSVar1 = (a->fields).subscribableVariable,
     pSVar1 != (SubscribableVariable_1_System_Int32Enum_ *)0x0)) {
    if ((method->klass->field_0x135 & 1) == 0) {
      FUN_?();
    }
    iVar2 = (pSVar1->fields)._.value;
    if ((b != (SpawnRoleVariable_1_System_Int32Enum_ *)0x0) &&
       (pSVar1 = (b->fields).subscribableVariable,
       pSVar1 != (SubscribableVariable_1_System_Int32Enum_ *)0x0)) {
      if ((method->klass->field_0x135 & 1) == 0) {
        FUN_?();
      }
      aiStackX_8[0] = (pSVar1->fields)._.value;
      pIVar3 = method->klass;
      if ((pIVar3->field_0x135 & 1) == 0) {
        pIVar3 = (Il2CppClass *)FUN_?(pIVar3);
      }
      o2 = (Object *)FUN_?(pIVar3->rgctx_data[9].rgctxDataDummy,aiStackX_8);
      pIVar3 = method->klass;
      if ((pIVar3->field_0x135 & 1) == 0) {
        pIVar3 = (Il2CppClass *)FUN_?(pIVar3);
      }
      pOVar4 = pIVar3->rgctx_data[9].rgctxDataDummy;
      if (((pOVar4->_1).field_0x6d & 1) == 0) {
        pOVar4 = (Object__Class *)FUN_?(pOVar4);
      }
      OStack_5.monitor = (MonitorData *)0xffffffffffffffff;
      OStack_5.klass = pOVar4;
      iStack_6 = iVar2;
      bVar7 = mscorlib.dll::System::ValueType::ValueType_DefaultEquals
                        (&OStack_5,o2,(MethodInfo *)0x0);
      return bVar7;
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  bVar7 = (*pcVar8)();
  return bVar7;
}


/* Int32Enum op_Implicit(SpawnRoleVariable`1[System.Int32Enum]) */

Int32Enum__Enum
Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
SpawnRoleVariableTypes::SpawnRoleVariable`1[System::Int32Enum]::
SpawnRoleVariable_1_System_Int32Enum__op_Implicit
          (SpawnRoleVariable_1_System_Int32Enum_ *s,MethodInfo *method)

{
  if ((s != (SpawnRoleVariable_1_System_Int32Enum_ *)0x0) &&
     (pSVar1 = (s->fields).subscribableVariable,
     pSVar1 != (SubscribableVariable_1_System_Int32Enum_ *)0x0)) {
    if ((method->klass->field_0x135 & 1) == 0) {
      FUN_?();
    }
    return (pSVar1->fields)._.value;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  IVar3 = (*pcVar2)();
  return IVar3;
}


/* Boolean op_Inequality(Int32Enum, SpawnRoleVariable`1[System.Int32Enum]) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[System::Int32Enum]::
     SpawnRoleVariable_1_System_Int32Enum__op_Inequality
               (Int32Enum__Enum b,SpawnRoleVariable_1_System_Int32Enum_ *a,MethodInfo *method)

{
  if ((a != (SpawnRoleVariable_1_System_Int32Enum_ *)0x0) &&
     (pSVar1 = (a->fields).subscribableVariable,
     pSVar1 != (SubscribableVariable_1_System_Int32Enum_ *)0x0)) {
    if ((method->klass->field_0x135 & 1) == 0) {
      FUN_?();
    }
    aiStackX_10[0] = (pSVar1->fields)._.value;
    pIVar2 = method->klass;
    if ((pIVar2->field_0x135 & 1) == 0) {
      pIVar2 = (Il2CppClass *)FUN_?(pIVar2);
    }
    o2 = (Object *)FUN_?(pIVar2->rgctx_data[9].rgctxDataDummy,aiStackX_10);
    pIVar2 = method->klass;
    if ((pIVar2->field_0x135 & 1) == 0) {
      pIVar2 = (Il2CppClass *)FUN_?(pIVar2);
    }
    pOVar3 = pIVar2->rgctx_data[9].rgctxDataDummy;
    if (((pOVar3->_1).field_0x6d & 1) == 0) {
      pOVar3 = (Object__Class *)FUN_?(pOVar3);
    }
    OStack_4.monitor = (MonitorData *)0xffffffffffffffff;
    OStack_4.klass = pOVar3;
    IStack_5 = b;
    bVar6 = mscorlib.dll::System::ValueType::ValueType_DefaultEquals
                      (&OStack_4,o2,(MethodInfo *)0x0);
    return bVar6 ^ 1;
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  bVar6 = (*pcVar7)();
  return bVar6;
}


/* Boolean op_Inequality(SpawnRoleVariable`1[System.Int32Enum], Int32Enum) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[System::Int32Enum]::
     SpawnRoleVariable_1_System_Int32Enum__op_Inequality_1
               (SpawnRoleVariable_1_System_Int32Enum_ *a,Int32Enum__Enum b,MethodInfo *method)

{
  if ((a != (SpawnRoleVariable_1_System_Int32Enum_ *)0x0) &&
     (pSVar1 = (a->fields).subscribableVariable,
     pSVar1 != (SubscribableVariable_1_System_Int32Enum_ *)0x0)) {
    if ((method->klass->field_0x135 & 1) == 0) {
      FUN_?();
    }
    aiStackX_8[0] = (pSVar1->fields)._.value;
    pIVar2 = method->klass;
    if ((pIVar2->field_0x135 & 1) == 0) {
      pIVar2 = (Il2CppClass *)FUN_?(pIVar2);
    }
    o2 = (Object *)FUN_?(pIVar2->rgctx_data[9].rgctxDataDummy,aiStackX_8);
    pIVar2 = method->klass;
    if ((pIVar2->field_0x135 & 1) == 0) {
      pIVar2 = (Il2CppClass *)FUN_?(pIVar2);
    }
    pOVar3 = pIVar2->rgctx_data[9].rgctxDataDummy;
    if (((pOVar3->_1).field_0x6d & 1) == 0) {
      pOVar3 = (Object__Class *)FUN_?(pOVar3);
    }
    OStack_4.monitor = (MonitorData *)0xffffffffffffffff;
    OStack_4.klass = pOVar3;
    IStack_5 = b;
    bVar6 = mscorlib.dll::System::ValueType::ValueType_DefaultEquals
                      (&OStack_4,o2,(MethodInfo *)0x0);
    return bVar6 ^ 1;
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  bVar6 = (*pcVar7)();
  return bVar6;
}


/* Boolean op_Inequality(SpawnRoleVariable`1[System.Int32Enum],
   SpawnRoleVariable`1[System.Int32Enum]) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[System::Int32Enum]::
     SpawnRoleVariable_1_System_Int32Enum__op_Inequality_2
               (SpawnRoleVariable_1_System_Int32Enum_ *a,SpawnRoleVariable_1_System_Int32Enum_ *b,
               MethodInfo *method)

{
  pIVar1 = method->klass;
  if ((pIVar1->field_0x135 & 1) == 0) {
    pIVar1 = (Il2CppClass *)FUN_?(pIVar1);
  }
  pMVar2 = pIVar1->rgctx_data[0x11].method;
  if ((a != (SpawnRoleVariable_1_System_Int32Enum_ *)0x0) &&
     (pSVar3 = (a->fields).subscribableVariable,
     pSVar3 != (SubscribableVariable_1_System_Int32Enum_ *)0x0)) {
    if ((pMVar2->klass->field_0x135 & 1) == 0) {
      FUN_?();
    }
    iVar4 = (pSVar3->fields)._.value;
    if ((b != (SpawnRoleVariable_1_System_Int32Enum_ *)0x0) &&
       (pSVar3 = (b->fields).subscribableVariable,
       pSVar3 != (SubscribableVariable_1_System_Int32Enum_ *)0x0)) {
      if ((pMVar2->klass->field_0x135 & 1) == 0) {
        FUN_?();
      }
      aiStackX_8[0] = (pSVar3->fields)._.value;
      pIVar1 = pMVar2->klass;
      if ((pIVar1->field_0x135 & 1) == 0) {
        pIVar1 = (Il2CppClass *)FUN_?(pIVar1);
      }
      o2 = (Object *)FUN_?(pIVar1->rgctx_data[9].rgctxDataDummy,aiStackX_8);
      pIVar1 = pMVar2->klass;
      if ((pIVar1->field_0x135 & 1) == 0) {
        pIVar1 = (Il2CppClass *)FUN_?(pIVar1);
      }
      pOVar5 = pIVar1->rgctx_data[9].rgctxDataDummy;
      if (((pOVar5->_1).field_0x6d & 1) == 0) {
        pOVar5 = (Object__Class *)FUN_?(pOVar5);
      }
      OStack_6.monitor = (MonitorData *)0xffffffffffffffff;
      OStack_6.klass = pOVar5;
      iStack_7 = iVar4;
      bVar8 = mscorlib.dll::System::ValueType::ValueType_DefaultEquals
                        (&OStack_6,o2,(MethodInfo *)0x0);
      return bVar8 ^ 1;
    }
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  bVar8 = (*pcVar9)();
  return bVar8;
}

