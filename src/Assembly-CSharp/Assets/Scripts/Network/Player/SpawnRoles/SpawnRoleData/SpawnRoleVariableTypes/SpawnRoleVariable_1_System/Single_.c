
/* Boolean Equals(SpawnRoleVariable`1[System.Single]) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[System::Single]::
     SpawnRoleVariable_1_System_Single__Equals
               (SpawnRoleVariable_1_System_Single_ *this,SpawnRoleVariable_1_System_Single_ *other,
               MethodInfo *method)

{
  pSVar1 = (this->fields).subscribableVariable;
  if (((pSVar1 == (SubscribableVariable_1_System_Single_ *)0x0) ||
      (fVar2 = (pSVar1->fields)._.value, other == (SpawnRoleVariable_1_System_Single_ *)0x0)) ||
     (pSVar1 = (other->fields).subscribableVariable,
     pSVar1 == (SubscribableVariable_1_System_Single_ *)0x0)) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    bVar4 = (*pcVar3)();
    return bVar4;
  }
  afStackX_8[0] = (pSVar1->fields)._.value;
  plVar5 = (longlong *)FUN_?(method->klass->rgctx_data[9].rgctxDataDummy,afStackX_8);
  if (plVar5 != (longlong *)0x0) {
    plVar6 = (longlong *)0x0;
    if (*plVar5 == lRam_?) {
      plVar6 = plVar5;
    }
    if (plVar6 != (longlong *)0x0) {
      if (*(longlong *)(*plVar5 + 0x40) != *(longlong *)(lRam_? + 0x40)) {
        FUN_?(plVar5);
        pcVar3 = (code *)swi(3);
        bVar4 = (*pcVar3)();
        return bVar4;
      }
      if (*(float *)(plVar5 + 2) == fVar2) {
        return 1;
      }
      if (0x7f800000 < (uint)ABS(*(float *)(plVar5 + 2))) {
        return 0x7f800000 < (uint)ABS(fVar2);
      }
    }
  }
  return 0;
}


/* Boolean Equals(Object) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[System::Single]::
     SpawnRoleVariable_1_System_Single__Equals_1
               (SpawnRoleVariable_1_System_Single_ *this,Object *obj,MethodInfo *method)

{
  if (obj == (Object *)0x0) {
    return 0;
  }
  if (this == (SpawnRoleVariable_1_System_Single_ *)obj) {
    return 1;
  }
  lVar1 = FUN_?(&(obj->klass->_0).byval_arg);
  if (this != (SpawnRoleVariable_1_System_Single_ *)0x0) {
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
    if (pSVar8 != (SubscribableVariable_1_System_Single_ *)0x0) {
      fVar9 = (pSVar8->fields)._.value;
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
        if (*(float *)(plVar10 + 2) != fVar9) {
          if ((uint)ABS(*(float *)(plVar10 + 2)) < 0x7f800001) {
            return 0;
          }
          return 0x7f800000 < (uint)ABS(fVar9);
        }
        return 1;
      }
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  bVar7 = (*pcVar6)();
  return bVar7;
}


/* Void SubscribableVariableOnOnChange(Single) */

void Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[System::Single]::
     SpawnRoleVariable_1_System_Single__SubscribableVariableOnOnChange
               (SpawnRoleVariable_1_System_Single_ *this,float value,MethodInfo *method)

{
  if ((this->fields).OnChange != (SpawnRoleVariable_1_T_SubDelegate_System_Single_ *)0x0) {
    pSVar1 = (this->fields).OnChange;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pSVar1->fields)._._.invoke_impl)
              ((pSVar1->fields)._._.method_code,value,(pSVar1->fields)._._.method);
    return;
  }
  return;
}


/* SpawnRoleVariable`1[System.Single](Single) */

void Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[System::Single]::
     SpawnRoleVariable_1_System_Single___ctor
               (SpawnRoleVariable_1_System_Single_ *this,float value,MethodInfo *method)

{
  pIVar1 = method->klass->rgctx_data;
  pvVar2 = pIVar1[2].rgctxDataDummy;
  if ((*(byte *)((longlong)pvVar2 + 0x135) & 1) == 0) {
    pvVar2 = (void *)FUN_?(pvVar2,pIVar1,method,in_R9,
                                    CONCAT44(unaff_XMM6_Db,unaff_XMM6_Da),
                                    CONCAT44(unaff_XMM6_Dd,unaff_XMM6_Dc));
  }
  pSVar3 = (SubscribableVariable_1_System_Single_ *)FUN_?(pvVar2);
  bVar4 = iRam_? != 0;
  (pSVar3->fields)._.value = value;
  (this->fields).subscribableVariable = pSVar3;
  if (bVar4) {
    uVar5 = (uint)((ulonglong)&this->fields >> 0xc);
    uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
    do {
      uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
      puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
      LOCK();
      bVar4 = uVar7 == *puVar8;
      if (bVar4) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar4);
  }
  pSVar3 = (this->fields).subscribableVariable;
  pvVar2 = method->klass->rgctx_data[0xc].rgctxDataDummy;
  if ((*(byte *)((longlong)pvVar2 + 0x135) & 1) == 0) {
    pvVar2 = (void *)FUN_?(pvVar2);
  }
  b = (Delegate *)FUN_?(pvVar2);
  FUN_?(b,this,method->klass->rgctx_data[0xb].rgctxDataDummy);
  if (pSVar3 == (SubscribableVariable_1_System_Single_ *)0x0) {
    FUN_?();
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pMVar10 = method->klass->rgctx_data[0xe].method;
  ppAVar11 = &(pSVar3->fields)._.OnChange;
  a = (pSVar3->fields)._.OnChange;
  do {
    pDVar12 = mscorlib.dll::System::Delegate::Delegate_Combine((Delegate *)a,b,(MethodInfo *)0x0);
    pvVar2 = pMVar10->klass->rgctx_data[7].rgctxDataDummy;
    if ((*(byte *)((longlong)pvVar2 + 0x135) & 1) == 0) {
      pvVar2 = (void *)FUN_?();
    }
    if (pDVar12 == (Delegate *)0x0) {
      pAVar13 = (Action_1_Single_ *)0x0;
    }
    else {
      pAVar13 = (Action_1_Single_ *)FUN_?(pDVar12,pvVar2);
      if (pAVar13 == (Action_1_Single_ *)0x0) {
        FUN_?(pDVar12,pvVar2);
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    LOCK();
    pAVar14 = *ppAVar11;
    bVar4 = a == pAVar14;
    if (bVar4) {
      *ppAVar11 = pAVar13;
      pAVar14 = a;
    }
    UNLOCK();
    pAVar13 = a;
    if (!bVar4) {
      pAVar13 = pAVar14;
    }
    if (iRam_? != 0) {
      uVar5 = (uint)((ulonglong)ppAVar11 >> 0xc);
      uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
      do {
        uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
        puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
        LOCK();
        bVar4 = uVar7 == *puVar8;
        if (bVar4) {
          *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
        }
        UNLOCK();
      } while (!bVar4);
    }
    bVar4 = pAVar13 != a;
    a = pAVar13;
  } while (bVar4);
  return;
}


/* Single get_Value() */

float Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
      SpawnRoleVariableTypes::SpawnRoleVariable`1[System::Single]::
      SpawnRoleVariable_1_System_Single__get_Value
                (SpawnRoleVariable_1_System_Single_ *this,MethodInfo *method)

{
  pSVar1 = (this->fields).subscribableVariable;
  if (pSVar1 != (SubscribableVariable_1_System_Single_ *)0x0) {
    return (pSVar1->fields)._.value;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  fVar3 = (float)(*pcVar2)();
  return fVar3;
}


/* Boolean op_Equality(Single, SpawnRoleVariable`1[System.Single]) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[System::Single]::
     SpawnRoleVariable_1_System_Single__op_Equality
               (float b,SpawnRoleVariable_1_System_Single_ *a,MethodInfo *method)

{
  if ((a == (SpawnRoleVariable_1_System_Single_ *)0x0) ||
     (pSVar1 = (a->fields).subscribableVariable,
     pSVar1 == (SubscribableVariable_1_System_Single_ *)0x0)) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    bVar3 = (*pcVar2)();
    return bVar3;
  }
  if ((method->klass->field_0x135 & 1) == 0) {
    FUN_?();
  }
  pIVar4 = method->klass;
  afStackX_10[0] = (pSVar1->fields)._.value;
  if ((pIVar4->field_0x135 & 1) == 0) {
    pIVar4 = (Il2CppClass *)FUN_?(pIVar4);
  }
  plVar5 = (longlong *)FUN_?(pIVar4->rgctx_data[9].rgctxDataDummy,afStackX_10);
  if ((method->klass->field_0x135 & 1) == 0) {
    FUN_?();
  }
  if (plVar5 != (longlong *)0x0) {
    plVar6 = (longlong *)0x0;
    if (*plVar5 == lRam_?) {
      plVar6 = plVar5;
    }
    if (plVar6 != (longlong *)0x0) {
      if (*(longlong *)(*plVar5 + 0x40) != *(longlong *)(lRam_? + 0x40)) {
        FUN_?(plVar5);
        pcVar2 = (code *)swi(3);
        bVar3 = (*pcVar2)();
        return bVar3;
      }
      if (*(float *)(plVar5 + 2) == b) {
        return 1;
      }
      if (0x7f800000 < (uint)ABS(*(float *)(plVar5 + 2))) {
        return 0x7f800000 < (uint)ABS(b);
      }
    }
  }
  return 0;
}


/* Boolean op_Equality(SpawnRoleVariable`1[System.Single], Single) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[System::Single]::
     SpawnRoleVariable_1_System_Single__op_Equality_1
               (SpawnRoleVariable_1_System_Single_ *a,float b,MethodInfo *method)

{
  if ((a == (SpawnRoleVariable_1_System_Single_ *)0x0) ||
     (pSVar1 = (a->fields).subscribableVariable,
     pSVar1 == (SubscribableVariable_1_System_Single_ *)0x0)) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    bVar3 = (*pcVar2)();
    return bVar3;
  }
  if ((method->klass->field_0x135 & 1) == 0) {
    FUN_?();
  }
  pIVar4 = method->klass;
  afStackX_8[0] = (pSVar1->fields)._.value;
  if ((pIVar4->field_0x135 & 1) == 0) {
    pIVar4 = (Il2CppClass *)FUN_?(pIVar4);
  }
  plVar5 = (longlong *)FUN_?(pIVar4->rgctx_data[9].rgctxDataDummy,afStackX_8);
  if ((method->klass->field_0x135 & 1) == 0) {
    FUN_?();
  }
  if (plVar5 != (longlong *)0x0) {
    plVar6 = (longlong *)0x0;
    if (*plVar5 == lRam_?) {
      plVar6 = plVar5;
    }
    if (plVar6 != (longlong *)0x0) {
      if (*(longlong *)(*plVar5 + 0x40) != *(longlong *)(lRam_? + 0x40)) {
        FUN_?(plVar5);
        pcVar2 = (code *)swi(3);
        bVar3 = (*pcVar2)();
        return bVar3;
      }
      if (*(float *)(plVar5 + 2) == b) {
        return 1;
      }
      if (0x7f800000 < (uint)ABS(*(float *)(plVar5 + 2))) {
        return 0x7f800000 < (uint)ABS(b);
      }
    }
  }
  return 0;
}


/* Boolean op_Equality(SpawnRoleVariable`1[System.Single], SpawnRoleVariable`1[System.Single]) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[System::Single]::
     SpawnRoleVariable_1_System_Single__op_Equality_2
               (SpawnRoleVariable_1_System_Single_ *a,SpawnRoleVariable_1_System_Single_ *b,
               MethodInfo *method)

{
  if ((a != (SpawnRoleVariable_1_System_Single_ *)0x0) &&
     (pSVar1 = (a->fields).subscribableVariable,
     pSVar1 != (SubscribableVariable_1_System_Single_ *)0x0)) {
    if ((method->klass->field_0x135 & 1) == 0) {
      FUN_?();
    }
    fVar2 = (pSVar1->fields)._.value;
    if ((b != (SpawnRoleVariable_1_System_Single_ *)0x0) &&
       (pSVar1 = (b->fields).subscribableVariable,
       pSVar1 != (SubscribableVariable_1_System_Single_ *)0x0)) {
      if ((method->klass->field_0x135 & 1) == 0) {
        FUN_?();
      }
      pIVar3 = method->klass;
      afStackX_8[0] = (pSVar1->fields)._.value;
      if ((pIVar3->field_0x135 & 1) == 0) {
        pIVar3 = (Il2CppClass *)FUN_?(pIVar3);
      }
      plVar4 = (longlong *)FUN_?(pIVar3->rgctx_data[9].rgctxDataDummy,afStackX_8);
      if ((method->klass->field_0x135 & 1) == 0) {
        FUN_?();
      }
      if (plVar4 != (longlong *)0x0) {
        plVar5 = (longlong *)0x0;
        if (*plVar4 == lRam_?) {
          plVar5 = plVar4;
        }
        if (plVar5 != (longlong *)0x0) {
          if (*(longlong *)(*plVar4 + 0x40) != *(longlong *)(lRam_? + 0x40)) {
            FUN_?(plVar4);
            pcVar6 = (code *)swi(3);
            bVar7 = (*pcVar6)();
            return bVar7;
          }
          if (*(float *)(plVar4 + 2) == fVar2) {
            return 1;
          }
          if (0x7f800000 < (uint)ABS(*(float *)(plVar4 + 2))) {
            return 0x7f800000 < (uint)ABS(fVar2);
          }
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


/* Single op_Implicit(SpawnRoleVariable`1[System.Single]) */

float Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
      SpawnRoleVariableTypes::SpawnRoleVariable`1[System::Single]::
      SpawnRoleVariable_1_System_Single__op_Implicit
                (SpawnRoleVariable_1_System_Single_ *s,MethodInfo *method)

{
  if ((s != (SpawnRoleVariable_1_System_Single_ *)0x0) &&
     (pSVar1 = (s->fields).subscribableVariable,
     pSVar1 != (SubscribableVariable_1_System_Single_ *)0x0)) {
    if ((method->klass->field_0x135 & 1) == 0) {
      FUN_?();
    }
    return (pSVar1->fields)._.value;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  fVar3 = (float)(*pcVar2)();
  return fVar3;
}


/* Boolean op_Inequality(Single, SpawnRoleVariable`1[System.Single]) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[System::Single]::
     SpawnRoleVariable_1_System_Single__op_Inequality
               (float b,SpawnRoleVariable_1_System_Single_ *a,MethodInfo *method)

{
  if ((a == (SpawnRoleVariable_1_System_Single_ *)0x0) ||
     ((a->fields).subscribableVariable == (SubscribableVariable_1_System_Single_ *)0x0)) {
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
    plVar6 = plVar5;
    if (*plVar4 == lRam_?) {
      plVar6 = plVar4;
    }
    if (plVar6 != (longlong *)0x0) {
      if (*(longlong *)(*plVar4 + 0x40) != *(longlong *)(lRam_? + 0x40)) {
        FUN_?(plVar4,lRam_?);
        pcVar1 = (code *)swi(3);
        bVar2 = (*pcVar1)();
        return bVar2;
      }
      if (*(float *)(plVar4 + 2) == b) goto code_?;
      if (0x7f800000 < (uint)ABS(*(float *)(plVar4 + 2))) {
        return (uint)ABS(b) < 0x7f800001;
      }
    }
  }
  plVar5 = (longlong *)0x1;
code_?:
  return (bool)plVar5;
}


/* Boolean op_Inequality(SpawnRoleVariable`1[System.Single], Single) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[System::Single]::
     SpawnRoleVariable_1_System_Single__op_Inequality_1
               (SpawnRoleVariable_1_System_Single_ *a,float b,MethodInfo *method)

{
  if ((a == (SpawnRoleVariable_1_System_Single_ *)0x0) ||
     ((a->fields).subscribableVariable == (SubscribableVariable_1_System_Single_ *)0x0)) {
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
    plVar6 = plVar5;
    if (*plVar4 == lRam_?) {
      plVar6 = plVar4;
    }
    if (plVar6 != (longlong *)0x0) {
      if (*(longlong *)(*plVar4 + 0x40) != *(longlong *)(lRam_? + 0x40)) {
        FUN_?(plVar4,lRam_?);
        pcVar1 = (code *)swi(3);
        bVar2 = (*pcVar1)();
        return bVar2;
      }
      if (*(float *)(plVar4 + 2) == b) goto code_?;
      if (0x7f800000 < (uint)ABS(*(float *)(plVar4 + 2))) {
        return (uint)ABS(b) < 0x7f800001;
      }
    }
  }
  plVar5 = (longlong *)0x1;
code_?:
  return (bool)plVar5;
}


/* Boolean op_Inequality(SpawnRoleVariable`1[System.Single], SpawnRoleVariable`1[System.Single]) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[System::Single]::
     SpawnRoleVariable_1_System_Single__op_Inequality_2
               (SpawnRoleVariable_1_System_Single_ *a,SpawnRoleVariable_1_System_Single_ *b,
               MethodInfo *method)

{
  pIVar1 = method->klass;
  if ((pIVar1->field_0x135 & 1) == 0) {
    pIVar1 = (Il2CppClass *)FUN_?(pIVar1);
  }
  pMVar2 = pIVar1->rgctx_data[0x11].method;
  if ((a == (SpawnRoleVariable_1_System_Single_ *)0x0) ||
     (pSVar3 = (a->fields).subscribableVariable,
     pSVar3 == (SubscribableVariable_1_System_Single_ *)0x0)) {
code_?:
    FUN_?();
    pcVar4 = (code *)swi(3);
    bVar5 = (*pcVar4)();
    return bVar5;
  }
  if ((pMVar2->klass->field_0x135 & 1) == 0) {
    FUN_?();
  }
  fVar6 = (pSVar3->fields)._.value;
  if ((b == (SpawnRoleVariable_1_System_Single_ *)0x0) ||
     ((b->fields).subscribableVariable == (SubscribableVariable_1_System_Single_ *)0x0))
  goto code_?;
  if ((pMVar2->klass->field_0x135 & 1) == 0) {
    FUN_?();
  }
  pIVar1 = pMVar2->klass;
  if ((pIVar1->field_0x135 & 1) == 0) {
    pIVar1 = (Il2CppClass *)FUN_?(pIVar1);
  }
  plVar7 = (longlong *)FUN_?(pIVar1->rgctx_data[9].rgctxDataDummy);
  if ((pMVar2->klass->field_0x135 & 1) == 0) {
    FUN_?();
  }
  if (plVar7 != (longlong *)0x0) {
    plVar8 = (longlong *)0x0;
    plVar9 = plVar8;
    if (*plVar7 == lRam_?) {
      plVar9 = plVar7;
    }
    if (plVar9 != (longlong *)0x0) {
      if (*(longlong *)(*plVar7 + 0x40) != *(longlong *)(lRam_? + 0x40)) {
        FUN_?(plVar7,lRam_?);
        pcVar4 = (code *)swi(3);
        bVar5 = (*pcVar4)();
        return bVar5;
      }
      if (*(float *)(plVar7 + 2) == fVar6) goto code_?;
      if (0x7f800000 < (uint)ABS(*(float *)(plVar7 + 2))) {
        plVar8 = (longlong *)(ulonglong)((uint)ABS(fVar6) < 0x7f800001);
        goto code_?;
      }
    }
  }
  plVar8 = (longlong *)0x1;
code_?:
  return (bool)plVar8;
}

