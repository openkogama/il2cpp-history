
/* Boolean Equals(SpawnRoleVariable`1[System.Object]) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[System::Object]::
     SpawnRoleVariable_1_System_Object__Equals
               (SpawnRoleVariable_1_System_Object_ *this,SpawnRoleVariable_1_System_Object_ *other,
               MethodInfo *method)

{
  pSVar1 = (this->fields).subscribableVariable;
  if (((pSVar1 != (SubscribableVariable_1_System_Object_ *)0x0) &&
      (other != (SpawnRoleVariable_1_System_Object_ *)0x0)) &&
     (pSVar2 = (other->fields).subscribableVariable,
     pSVar2 != (SubscribableVariable_1_System_Object_ *)0x0)) {
    pOVar3 = (pSVar1->fields)._.value;
    other = (SpawnRoleVariable_1_System_Object_ *)(pSVar2->fields)._.value;
    pSVar1 = (SubscribableVariable_1_System_Object_ *)0x0;
    if (pOVar3 != (Object *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      bVar4 = (*(pOVar3->klass->vtable).Equals.methodPtr)
                        (pOVar3,other,(pOVar3->klass->vtable).Equals.method);
      return bVar4;
    }
  }
  FUN_?(pSVar1,other);
  pcVar5 = (code *)swi(3);
  bVar4 = (*pcVar5)();
  return bVar4;
}


/* Boolean Equals(Object) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[System::Object]::
     SpawnRoleVariable_1_System_Object__Equals_1
               (SpawnRoleVariable_1_System_Object_ *this,Object *obj,MethodInfo *method)

{
  if (obj == (Object *)0x0) {
    return 0;
  }
  if (this == (SpawnRoleVariable_1_System_Object_ *)obj) {
    return 1;
  }
  lVar1 = FUN_?(&(obj->klass->_0).byval_arg);
  if (this != (SpawnRoleVariable_1_System_Object_ *)0x0) {
    lVar2 = FUN_?(&(this->klass->_0).byval_arg);
    if (*(int *)(lRam_? + 0xe4) == 0) {
      FUN_?();
    }
    if (lVar1 != lVar2) {
      return 0;
    }
    pIVar3 = method->klass->rgctx_data->klass;
    if ((pIVar3->field_0x135 & 1) == 0) {
      pIVar3 = (Il2CppClass *)FUN_?(pIVar3);
    }
    if (((obj->klass->_1).naturalAligment < pIVar3->naturalAligment) ||
       ((obj->klass->_1).typeHierarchy[(ulonglong)pIVar3->naturalAligment - 1] != pIVar3)) {
      FUN_?(obj,pIVar3);
      pcVar4 = (code *)swi(3);
      bVar5 = (*pcVar4)();
      return bVar5;
    }
    pSVar6 = (this->fields).subscribableVariable;
    if ((pSVar6 != (SubscribableVariable_1_System_Object_ *)0x0) &&
       (obj[1].klass != (Object__Class *)0x0)) {
      pOVar7 = (pSVar6->fields)._.value;
      if (pOVar7 != (Object *)0x0) {
        bVar5 = (*(pOVar7->klass->vtable).Equals.methodPtr)
                          (pOVar7,((obj[1].klass)->_0).name,(pOVar7->klass->vtable).Equals.method);
        return bVar5;
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
}


/* SpawnRoleVariable`1[System.Object](Object) */

void Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[System::Object]::
     SpawnRoleVariable_1_System_Object___ctor
               (SpawnRoleVariable_1_System_Object_ *this,Object *value,MethodInfo *method)

{
  pvVar1 = method->klass->rgctx_data[2].rgctxDataDummy;
  if ((*(byte *)((longlong)pvVar1 + 0x135) & 1) == 0) {
    pvVar1 = (void *)FUN_?(pvVar1);
  }
  pSVar2 = (SubscribableVariable_1_System_Object_ *)FUN_?(pvVar1);
  iVar3 = iRam_?;
  (pSVar2->fields)._.value = value;
  if (iVar3 != 0) {
    uVar4 = (uint)((ulonglong)&pSVar2->fields >> 0xc);
    lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
    do {
      uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
      puVar7 = (ulonglong *)(lVar5 + 0xADDR);
      LOCK();
      bVar8 = uVar6 == *puVar7;
      if (bVar8) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
      iVar3 = iRam_?;
    } while (!bVar8);
  }
  (this->fields).subscribableVariable = pSVar2;
  if (iVar3 != 0) {
    uVar4 = (uint)((ulonglong)&this->fields >> 0xc);
    lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
    do {
      uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
      puVar7 = (ulonglong *)(lVar5 + 0xADDR);
      LOCK();
      bVar8 = uVar6 == *puVar7;
      if (bVar8) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar8);
  }
  pSVar2 = (this->fields).subscribableVariable;
  pvVar1 = method->klass->rgctx_data[0xc].rgctxDataDummy;
  if ((*(byte *)((longlong)pvVar1 + 0x135) & 1) == 0) {
    pvVar1 = (void *)FUN_?(pvVar1);
  }
  this_00 = (UnityAction_1_System_Object_ *)FUN_?(pvVar1);
  pIVar9 = method->klass->rgctx_data;
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
  UnityAction_1_System_Object___ctor
            (this_00,(Object *)this,pIVar9[0xb].rgctxDataDummy,pIVar9[0xd].method);
  if (pSVar2 == (SubscribableVariable_1_System_Object_ *)0x0) {
    FUN_?();
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pMVar11 = method->klass->rgctx_data[0xe].method;
  ppAVar12 = &(pSVar2->fields)._.OnChange;
  a = (pSVar2->fields)._.OnChange;
  do {
    pDVar13 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)this_00,(MethodInfo *)0x0);
    pvVar1 = pMVar11->klass->rgctx_data[7].rgctxDataDummy;
    if ((*(byte *)((longlong)pvVar1 + 0x135) & 1) == 0) {
      pvVar1 = (void *)FUN_?();
    }
    if (pDVar13 == (Delegate *)0x0) {
      pAVar14 = (Action_1_Object_ *)0x0;
    }
    else {
      pAVar14 = (Action_1_Object_ *)FUN_?(pDVar13,pvVar1);
      if (pAVar14 == (Action_1_Object_ *)0x0) {
        FUN_?(pDVar13,pvVar1);
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
    LOCK();
    pAVar15 = *ppAVar12;
    bVar8 = a == pAVar15;
    if (bVar8) {
      *ppAVar12 = pAVar14;
      pAVar15 = a;
    }
    UNLOCK();
    pAVar14 = a;
    if (!bVar8) {
      pAVar14 = pAVar15;
    }
    if (iRam_? != 0) {
      uVar4 = (uint)((ulonglong)ppAVar12 >> 0xc);
      uVar6 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
      do {
        uVar16 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
        puVar7 = (ulonglong *)(uVar6 * 8 + 0xADDR);
        LOCK();
        bVar8 = uVar16 == *puVar7;
        if (bVar8) {
          *puVar7 = uVar16 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (!bVar8);
    }
    bVar8 = pAVar14 != a;
    a = pAVar14;
  } while (bVar8);
  return;
}


/* Boolean op_Equality(Object, SpawnRoleVariable`1[System.Object]) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[System::Object]::
     SpawnRoleVariable_1_System_Object__op_Equality
               (Object *b,SpawnRoleVariable_1_System_Object_ *a,MethodInfo *method)

{
  if ((a != (SpawnRoleVariable_1_System_Object_ *)0x0) &&
     (pSVar1 = (a->fields).subscribableVariable,
     pSVar1 != (SubscribableVariable_1_System_Object_ *)0x0)) {
    if ((method->klass->field_0x135 & 1) == 0) {
      FUN_?();
    }
    if (b != (Object *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      bVar2 = (*(b->klass->vtable).Equals.methodPtr)
                        (b,(pSVar1->fields)._.value,(b->klass->vtable).Equals.method);
      return bVar2;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  bVar2 = (*pcVar3)();
  return bVar2;
}


/* Boolean op_Equality(SpawnRoleVariable`1[System.Object], Object) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[System::Object]::
     SpawnRoleVariable_1_System_Object__op_Equality_1
               (SpawnRoleVariable_1_System_Object_ *a,Object *b,MethodInfo *method)

{
  if ((a != (SpawnRoleVariable_1_System_Object_ *)0x0) &&
     (pSVar1 = (a->fields).subscribableVariable,
     pSVar1 != (SubscribableVariable_1_System_Object_ *)0x0)) {
    if ((method->klass->field_0x135 & 1) == 0) {
      FUN_?();
    }
    if (b != (Object *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      bVar2 = (*(b->klass->vtable).Equals.methodPtr)
                        (b,(pSVar1->fields)._.value,(b->klass->vtable).Equals.method);
      return bVar2;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  bVar2 = (*pcVar3)();
  return bVar2;
}


/* Boolean op_Equality(SpawnRoleVariable`1[System.Object], SpawnRoleVariable`1[System.Object]) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[System::Object]::
     SpawnRoleVariable_1_System_Object__op_Equality_2
               (SpawnRoleVariable_1_System_Object_ *a,SpawnRoleVariable_1_System_Object_ *b,
               MethodInfo *method)

{
  if ((a != (SpawnRoleVariable_1_System_Object_ *)0x0) &&
     (pSVar1 = (a->fields).subscribableVariable,
     pSVar1 != (SubscribableVariable_1_System_Object_ *)0x0)) {
    if ((method->klass->field_0x135 & 1) == 0) {
      FUN_?();
    }
    pOVar2 = (pSVar1->fields)._.value;
    if ((b != (SpawnRoleVariable_1_System_Object_ *)0x0) &&
       (pSVar1 = (b->fields).subscribableVariable,
       pSVar1 != (SubscribableVariable_1_System_Object_ *)0x0)) {
      if ((method->klass->field_0x135 & 1) == 0) {
        FUN_?();
      }
      if (pOVar2 != (Object *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        bVar3 = (*(pOVar2->klass->vtable).Equals.methodPtr)
                          (pOVar2,(pSVar1->fields)._.value,(pOVar2->klass->vtable).Equals.method);
        return bVar3;
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  bVar3 = (*pcVar4)();
  return bVar3;
}


/* Object op_Implicit(SpawnRoleVariable`1[System.Object]) */

Object * Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
         SpawnRoleVariableTypes::SpawnRoleVariable`1[System::Object]::
         SpawnRoleVariable_1_System_Object__op_Implicit
                   (SpawnRoleVariable_1_System_Object_ *s,MethodInfo *method)

{
  if ((s != (SpawnRoleVariable_1_System_Object_ *)0x0) &&
     (pSVar1 = (s->fields).subscribableVariable,
     pSVar1 != (SubscribableVariable_1_System_Object_ *)0x0)) {
    if ((method->klass->field_0x135 & 1) == 0) {
      FUN_?();
    }
    return (pSVar1->fields)._.value;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pOVar3 = (Object *)(*pcVar2)();
  return pOVar3;
}


/* Boolean op_Inequality(Object, SpawnRoleVariable`1[System.Object]) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[System::Object]::
     SpawnRoleVariable_1_System_Object__op_Inequality
               (Object *b,SpawnRoleVariable_1_System_Object_ *a,MethodInfo *method)

{
  if ((a != (SpawnRoleVariable_1_System_Object_ *)0x0) &&
     (pSVar1 = (a->fields).subscribableVariable,
     pSVar1 != (SubscribableVariable_1_System_Object_ *)0x0)) {
    if ((method->klass->field_0x135 & 1) == 0) {
      FUN_?();
    }
    if (b != (Object *)0x0) {
      cVar2 = (*(b->klass->vtable).Equals.methodPtr)
                        (b,(pSVar1->fields)._.value,(b->klass->vtable).Equals.method);
      return cVar2 == '\0';
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}


/* Boolean op_Inequality(SpawnRoleVariable`1[System.Object], Object) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[System::Object]::
     SpawnRoleVariable_1_System_Object__op_Inequality_1
               (SpawnRoleVariable_1_System_Object_ *a,Object *b,MethodInfo *method)

{
  if ((a != (SpawnRoleVariable_1_System_Object_ *)0x0) &&
     (pSVar1 = (a->fields).subscribableVariable,
     pSVar1 != (SubscribableVariable_1_System_Object_ *)0x0)) {
    if ((method->klass->field_0x135 & 1) == 0) {
      FUN_?();
    }
    if (b != (Object *)0x0) {
      cVar2 = (*(b->klass->vtable).Equals.methodPtr)
                        (b,(pSVar1->fields)._.value,(b->klass->vtable).Equals.method);
      return cVar2 == '\0';
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}


/* Boolean op_Inequality(SpawnRoleVariable`1[System.Object], SpawnRoleVariable`1[System.Object]) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[System::Object]::
     SpawnRoleVariable_1_System_Object__op_Inequality_2
               (SpawnRoleVariable_1_System_Object_ *a,SpawnRoleVariable_1_System_Object_ *b,
               MethodInfo *method)

{
  pIVar1 = method->klass;
  if ((pIVar1->field_0x135 & 1) == 0) {
    pIVar1 = (Il2CppClass *)FUN_?(pIVar1);
  }
  if ((a != (SpawnRoleVariable_1_System_Object_ *)0x0) &&
     (pSVar2 = (a->fields).subscribableVariable,
     pSVar2 != (SubscribableVariable_1_System_Object_ *)0x0)) {
    pMVar3 = pIVar1->rgctx_data[0x11].method;
    if ((pMVar3->klass->field_0x135 & 1) == 0) {
      FUN_?();
    }
    pOVar4 = (pSVar2->fields)._.value;
    if ((b != (SpawnRoleVariable_1_System_Object_ *)0x0) &&
       (pSVar2 = (b->fields).subscribableVariable,
       pSVar2 != (SubscribableVariable_1_System_Object_ *)0x0)) {
      if ((pMVar3->klass->field_0x135 & 1) == 0) {
        FUN_?();
      }
      if (pOVar4 != (Object *)0x0) {
        cVar5 = (*(pOVar4->klass->vtable).Equals.methodPtr)
                          (pOVar4,(pSVar2->fields)._.value,(pOVar4->klass->vtable).Equals.method);
        return cVar5 == '\0';
      }
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  bVar7 = (*pcVar6)();
  return bVar7;
}

