
/* Boolean Equals(SpawnRoleVariable`1[UnityEngine.Quaternion]) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[UnityEngine::Quaternion]::
     SpawnRoleVariable_1_UnityEngine_Quaternion__Equals
               (SpawnRoleVariable_1_UnityEngine_Quaternion_ *this,
               SpawnRoleVariable_1_UnityEngine_Quaternion_ *other,MethodInfo *method)

{
  pSVar1 = (this->fields).subscribableVariable;
  if (pSVar1 != (SubscribableVariable_1_UnityEngine_Quaternion_ *)0x0) {
    fVar2 = (pSVar1->fields)._.value.x;
    fVar3 = (pSVar1->fields)._.value.y;
    fVar4 = (pSVar1->fields)._.value.z;
    fVar5 = (pSVar1->fields)._.value.w;
    if ((other != (SpawnRoleVariable_1_UnityEngine_Quaternion_ *)0x0) &&
       ((other->fields).subscribableVariable !=
        (SubscribableVariable_1_UnityEngine_Quaternion_ *)0x0)) {
      plVar6 = (longlong *)FUN_?(method->klass->rgctx_data[9].rgctxDataDummy);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Quaternion);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (plVar6 != (longlong *)0x0) {
        plVar7 = (longlong *)0x0;
        if ((Quaternion__Class *)*plVar6 == TypeInfo__UnityEngine__Quaternion) {
          plVar7 = plVar6;
        }
        if (plVar7 != (longlong *)0x0) {
          if (*(Il2CppClass **)(*plVar6 + 0x40) !=
              (TypeInfo__UnityEngine__Quaternion->_0).element_class) {
            FUN_?(plVar6,TypeInfo__UnityEngine__Quaternion);
            pcVar8 = (code *)swi(3);
            bVar9 = (*pcVar8)();
            return bVar9;
          }
          if ((((*(float *)(plVar6 + 2) == fVar2) ||
               ((0x7f800000 < (uint)ABS(*(float *)(plVar6 + 2)) && (0x7f800000 < (uint)ABS(fVar2))))
               ) && ((*(float *)((longlong)plVar6 + 0x14) == fVar3 ||
                     ((0x7f800000 < (uint)ABS(*(float *)((longlong)plVar6 + 0x14)) &&
                      (0x7f800000 < (uint)ABS(fVar3))))))) &&
             ((*(float *)(plVar6 + 3) == fVar4 ||
              ((0x7f800000 < (uint)ABS(*(float *)(plVar6 + 3)) && (0x7f800000 < (uint)ABS(fVar4)))))
             )) {
            if (*(float *)((longlong)plVar6 + 0x1c) == fVar5) {
              return 1;
            }
            if (0x7f800000 < (uint)ABS(*(float *)((longlong)plVar6 + 0x1c))) {
              return 0x7f800000 < (uint)ABS(fVar5);
            }
          }
        }
      }
      return 0;
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  bVar9 = (*pcVar8)();
  return bVar9;
}


/* Boolean Equals(Object) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[UnityEngine::Quaternion]::
     SpawnRoleVariable_1_UnityEngine_Quaternion__Equals_1
               (SpawnRoleVariable_1_UnityEngine_Quaternion_ *this,Object *obj,MethodInfo *method)

{
  if (obj != (Object *)0x0) {
    if (this == (SpawnRoleVariable_1_UnityEngine_Quaternion_ *)obj) {
      return 1;
    }
    lVar1 = FUN_?(&(obj->klass->_0).byval_arg);
    if (this == (SpawnRoleVariable_1_UnityEngine_Quaternion_ *)0x0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      bVar3 = (*pcVar2)();
      return bVar3;
    }
    lVar4 = FUN_?(&(this->klass->_0).byval_arg);
    if (*(int *)(lRam_? + 0xe4) == 0) {
      FUN_?();
    }
    if (lVar1 == lVar4) {
      pIVar5 = method->klass->rgctx_data;
      pIVar6 = pIVar5->klass;
      method_00 = pIVar5[1].method;
      if ((pIVar6->field_0x135 & 1) == 0) {
        pIVar6 = (Il2CppClass *)FUN_?(pIVar6);
      }
      if ((pIVar6->naturalAligment <= (obj->klass->_1).naturalAligment) &&
         ((obj->klass->_1).typeHierarchy[(ulonglong)pIVar6->naturalAligment - 1] == pIVar6)) {
        bVar3 = SpawnRoleVariable_1_UnityEngine_Quaternion__Equals
                          (this,(SpawnRoleVariable_1_UnityEngine_Quaternion_ *)obj,method_00);
        return bVar3;
      }
      FUN_?(obj,pIVar6);
      pcVar2 = (code *)swi(3);
      bVar3 = (*pcVar2)();
      return bVar3;
    }
  }
  return 0;
}


/* Void SubscribableVariableOnOnChange(Quaternion) */

void Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[UnityEngine::Quaternion]::
     SpawnRoleVariable_1_UnityEngine_Quaternion__SubscribableVariableOnOnChange
               (SpawnRoleVariable_1_UnityEngine_Quaternion_ *this,Quaternion *value,
               MethodInfo *method)

{
  if ((this->fields).OnChange != (SpawnRoleVariable_1_T_SubDelegate_UnityEngine_Quaternion_ *)0x0) {
    pSVar1 = (this->fields).OnChange;
    fStack_2 = value->x;
    fStack_3 = value->y;
    fStack_4 = value->z;
    fStack_5 = value->w;
    (*(pSVar1->fields)._._.invoke_impl)
              ((pSVar1->fields)._._.method_code,&fStack_2,(pSVar1->fields)._._.method);
  }
  return;
}


/* SpawnRoleVariable`1[UnityEngine.Quaternion](Quaternion) */

void Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[UnityEngine::Quaternion]::
     SpawnRoleVariable_1_UnityEngine_Quaternion___ctor
               (SpawnRoleVariable_1_UnityEngine_Quaternion_ *this,Quaternion *value,
               MethodInfo *method)

{
  pvVar1 = method->klass->rgctx_data[2].rgctxDataDummy;
  if ((*(byte *)((longlong)pvVar1 + 0x135) & 1) == 0) {
    pvVar1 = (void *)FUN_?(pvVar1);
  }
  pSVar2 = (SubscribableVariable_1_UnityEngine_Quaternion_ *)FUN_?(pvVar1);
  bVar3 = iRam_? != 0;
  fVar4 = value->y;
  fVar5 = value->z;
  fVar6 = value->w;
  (pSVar2->fields)._.value.x = value->x;
  (pSVar2->fields)._.value.y = fVar4;
  (pSVar2->fields)._.value.z = fVar5;
  (pSVar2->fields)._.value.w = fVar6;
  (this->fields).subscribableVariable = pSVar2;
  if (bVar3) {
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
  pSVar2 = (this->fields).subscribableVariable;
  pvVar1 = method->klass->rgctx_data[0xc].rgctxDataDummy;
  if ((*(byte *)((longlong)pvVar1 + 0x135) & 1) == 0) {
    pvVar1 = (void *)FUN_?(pvVar1);
  }
  b = (Delegate *)FUN_?(pvVar1);
  FUN_?(b,this,method->klass->rgctx_data[0xb].rgctxDataDummy);
  if (pSVar2 == (SubscribableVariable_1_UnityEngine_Quaternion_ *)0x0) {
    FUN_?();
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  pMVar12 = method->klass->rgctx_data[0xe].method;
  ppAVar13 = &(pSVar2->fields)._.OnChange;
  a = (pSVar2->fields)._.OnChange;
  do {
    pDVar14 = mscorlib.dll::System::Delegate::Delegate_Combine((Delegate *)a,b,(MethodInfo *)0x0);
    pvVar1 = pMVar12->klass->rgctx_data[7].rgctxDataDummy;
    if ((*(byte *)((longlong)pvVar1 + 0x135) & 1) == 0) {
      pvVar1 = (void *)FUN_?();
    }
    if (pDVar14 == (Delegate *)0x0) {
      pAVar15 = (Action_1_UnityEngine_Quaternion_ *)0x0;
    }
    else {
      pAVar15 = (Action_1_UnityEngine_Quaternion_ *)FUN_?(pDVar14,pvVar1);
      if (pAVar15 == (Action_1_UnityEngine_Quaternion_ *)0x0) {
        FUN_?(pDVar14,pvVar1);
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
    }
    LOCK();
    pAVar16 = *ppAVar13;
    bVar3 = a == pAVar16;
    if (bVar3) {
      *ppAVar13 = pAVar15;
      pAVar16 = a;
    }
    UNLOCK();
    pAVar15 = a;
    if (!bVar3) {
      pAVar15 = pAVar16;
    }
    if (iRam_? != 0) {
      uVar7 = (uint)((ulonglong)ppAVar13 >> 0xc);
      uVar10 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
      do {
        uVar9 = *(ulonglong *)(uVar10 * 8 + 0xADDR);
        puVar8 = (ulonglong *)(uVar10 * 8 + 0xADDR);
        LOCK();
        bVar3 = uVar9 == *puVar8;
        if (bVar3) {
          *puVar8 = uVar9 | 1L << (uVar7 & 0x3f);
        }
        UNLOCK();
      } while (!bVar3);
    }
    bVar3 = pAVar15 != a;
    a = pAVar15;
  } while (bVar3);
  return;
}


/* Quaternion get_Value() */

Quaternion *
Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
SpawnRoleVariableTypes::SpawnRoleVariable`1[UnityEngine::Quaternion]::
SpawnRoleVariable_1_UnityEngine_Quaternion__get_Value
          (Quaternion *__return_storage_ptr__,SpawnRoleVariable_1_UnityEngine_Quaternion_ *this,
          MethodInfo *method)

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


/* Boolean op_Equality(Quaternion, SpawnRoleVariable`1[UnityEngine.Quaternion]) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[UnityEngine::Quaternion]::
     SpawnRoleVariable_1_UnityEngine_Quaternion__op_Equality
               (Quaternion *b,SpawnRoleVariable_1_UnityEngine_Quaternion_ *a,MethodInfo *method)

{
  if ((a == (SpawnRoleVariable_1_UnityEngine_Quaternion_ *)0x0) ||
     (pSVar1 = (a->fields).subscribableVariable,
     pSVar1 == (SubscribableVariable_1_UnityEngine_Quaternion_ *)0x0)) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    bVar3 = (*pcVar2)();
    return bVar3;
  }
  method_00 = method;
  if ((method->klass->field_0x135 & 1) == 0) {
    FUN_?();
  }
  pIVar4 = method->klass;
  QStack_5.x = (pSVar1->fields)._.value.x;
  QStack_5.y = (pSVar1->fields)._.value.y;
  QStack_5.z = (pSVar1->fields)._.value.z;
  QStack_5.w = (pSVar1->fields)._.value.w;
  if ((pIVar4->field_0x135 & 1) == 0) {
    pIVar4 = (Il2CppClass *)FUN_?(pIVar4);
  }
  plVar6 = (longlong *)FUN_?(pIVar4->rgctx_data[9].rgctxDataDummy,&QStack_5);
  if ((method->klass->field_0x135 & 1) == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Quaternion);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (plVar6 != (longlong *)0x0) {
    plVar7 = (longlong *)0x0;
    if ((Quaternion__Class *)*plVar6 == TypeInfo__UnityEngine__Quaternion) {
      plVar7 = plVar6;
    }
    if (plVar7 != (longlong *)0x0) {
      if (*(Il2CppClass **)(*plVar6 + 0x40) == (TypeInfo__UnityEngine__Quaternion->_0).element_class
         ) {
        QStack_5._0_8_ = plVar6[2];
        QStack_5._8_8_ = plVar6[3];
        bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Equals_1
                          (b,&QStack_5,method_00);
        return bVar3;
      }
      FUN_?(plVar6);
      pcVar2 = (code *)swi(3);
      bVar3 = (*pcVar2)();
      return bVar3;
    }
  }
  return 0;
}


/* Boolean op_Equality(SpawnRoleVariable`1[UnityEngine.Quaternion], Quaternion) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[UnityEngine::Quaternion]::
     SpawnRoleVariable_1_UnityEngine_Quaternion__op_Equality_1
               (SpawnRoleVariable_1_UnityEngine_Quaternion_ *a,Quaternion *b,MethodInfo *method)

{
  if ((a == (SpawnRoleVariable_1_UnityEngine_Quaternion_ *)0x0) ||
     (pSVar1 = (a->fields).subscribableVariable,
     pSVar1 == (SubscribableVariable_1_UnityEngine_Quaternion_ *)0x0)) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    bVar3 = (*pcVar2)();
    return bVar3;
  }
  method_00 = method;
  if ((method->klass->field_0x135 & 1) == 0) {
    FUN_?();
  }
  pIVar4 = method->klass;
  QStack_5.x = (pSVar1->fields)._.value.x;
  QStack_5.y = (pSVar1->fields)._.value.y;
  QStack_5.z = (pSVar1->fields)._.value.z;
  QStack_5.w = (pSVar1->fields)._.value.w;
  if ((pIVar4->field_0x135 & 1) == 0) {
    pIVar4 = (Il2CppClass *)FUN_?(pIVar4);
  }
  plVar6 = (longlong *)FUN_?(pIVar4->rgctx_data[9].rgctxDataDummy,&QStack_5);
  if ((method->klass->field_0x135 & 1) == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Quaternion);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (plVar6 != (longlong *)0x0) {
    plVar7 = (longlong *)0x0;
    if ((Quaternion__Class *)*plVar6 == TypeInfo__UnityEngine__Quaternion) {
      plVar7 = plVar6;
    }
    if (plVar7 != (longlong *)0x0) {
      if (*(Il2CppClass **)(*plVar6 + 0x40) == (TypeInfo__UnityEngine__Quaternion->_0).element_class
         ) {
        QStack_5._0_8_ = plVar6[2];
        QStack_5._8_8_ = plVar6[3];
        bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Equals_1
                          (b,&QStack_5,method_00);
        return bVar3;
      }
      FUN_?(plVar6);
      pcVar2 = (code *)swi(3);
      bVar3 = (*pcVar2)();
      return bVar3;
    }
  }
  return 0;
}


/* Boolean op_Equality(SpawnRoleVariable`1[UnityEngine.Quaternion],
   SpawnRoleVariable`1[UnityEngine.Quaternion]) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[UnityEngine::Quaternion]::
     SpawnRoleVariable_1_UnityEngine_Quaternion__op_Equality_2
               (SpawnRoleVariable_1_UnityEngine_Quaternion_ *a,
               SpawnRoleVariable_1_UnityEngine_Quaternion_ *b,MethodInfo *method)

{
  if ((a == (SpawnRoleVariable_1_UnityEngine_Quaternion_ *)0x0) ||
     (pSVar1 = (a->fields).subscribableVariable,
     pSVar1 == (SubscribableVariable_1_UnityEngine_Quaternion_ *)0x0)) {
code_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    bVar3 = (*pcVar2)();
    return bVar3;
  }
  if ((method->klass->field_0x135 & 1) == 0) {
    FUN_?();
  }
  fVar4 = (pSVar1->fields)._.value.x;
  fVar5 = (pSVar1->fields)._.value.y;
  fVar6 = (pSVar1->fields)._.value.z;
  fVar7 = (pSVar1->fields)._.value.w;
  if ((b == (SpawnRoleVariable_1_UnityEngine_Quaternion_ *)0x0) ||
     ((b->fields).subscribableVariable == (SubscribableVariable_1_UnityEngine_Quaternion_ *)0x0))
  goto code_?;
  if ((method->klass->field_0x135 & 1) == 0) {
    FUN_?();
  }
  pIVar8 = method->klass;
  if ((pIVar8->field_0x135 & 1) == 0) {
    pIVar8 = (Il2CppClass *)FUN_?(pIVar8);
  }
  plVar9 = (longlong *)FUN_?(pIVar8->rgctx_data[9].rgctxDataDummy);
  if ((method->klass->field_0x135 & 1) == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Quaternion);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (plVar9 != (longlong *)0x0) {
    plVar10 = (longlong *)0x0;
    plVar11 = (longlong *)0x0;
    plVar12 = plVar10;
    if ((Quaternion__Class *)*plVar9 == TypeInfo__UnityEngine__Quaternion) {
      plVar12 = plVar9;
    }
    if (plVar12 != (longlong *)0x0) {
      if (*(Il2CppClass **)(*plVar9 + 0x40) != (TypeInfo__UnityEngine__Quaternion->_0).element_class
         ) {
        FUN_?(plVar9,TypeInfo__UnityEngine__Quaternion);
        pcVar2 = (code *)swi(3);
        bVar3 = (*pcVar2)();
        return bVar3;
      }
      if ((((*(float *)(plVar9 + 2) == fVar4) ||
           ((0x7f800000 < (uint)ABS(*(float *)(plVar9 + 2)) && (0x7f800000 < (uint)ABS(fVar4))))) &&
          ((*(float *)((longlong)plVar9 + 0x14) == fVar5 ||
           ((0x7f800000 < (uint)ABS(*(float *)((longlong)plVar9 + 0x14)) &&
            (plVar10 = plVar11, 0x7f800000 < (uint)ABS(fVar5))))))) &&
         ((*(float *)(plVar9 + 3) == fVar6 ||
          ((plVar10 = plVar11, 0x7f800000 < (uint)ABS(*(float *)(plVar9 + 3)) &&
           (0x7f800000 < (uint)ABS(fVar6))))))) {
        if (*(float *)((longlong)plVar9 + 0x1c) == fVar7) {
          plVar10 = (longlong *)0x1;
        }
        else {
          plVar10 = plVar11;
          if (0x7f800000 < (uint)ABS(*(float *)((longlong)plVar9 + 0x1c))) {
            plVar10 = (longlong *)(ulonglong)(0x7f800000 < (uint)ABS(fVar7));
          }
        }
      }
      goto code_?;
    }
  }
  plVar10 = (longlong *)0x0;
code_?:
  return (bool)plVar10;
}


/* Quaternion op_Implicit(SpawnRoleVariable`1[UnityEngine.Quaternion]) */

Quaternion *
Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
SpawnRoleVariableTypes::SpawnRoleVariable`1[UnityEngine::Quaternion]::
SpawnRoleVariable_1_UnityEngine_Quaternion__op_Implicit
          (Quaternion *__return_storage_ptr__,SpawnRoleVariable_1_UnityEngine_Quaternion_ *s,
          MethodInfo *method)

{
  if ((s != (SpawnRoleVariable_1_UnityEngine_Quaternion_ *)0x0) &&
     (pSVar1 = (s->fields).subscribableVariable,
     pSVar1 != (SubscribableVariable_1_UnityEngine_Quaternion_ *)0x0)) {
    if ((method->klass->field_0x135 & 1) == 0) {
      FUN_?();
    }
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


/* Boolean op_Inequality(Quaternion, SpawnRoleVariable`1[UnityEngine.Quaternion]) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[UnityEngine::Quaternion]::
     SpawnRoleVariable_1_UnityEngine_Quaternion__op_Inequality
               (Quaternion *b,SpawnRoleVariable_1_UnityEngine_Quaternion_ *a,MethodInfo *method)

{
  if ((a == (SpawnRoleVariable_1_UnityEngine_Quaternion_ *)0x0) ||
     (pSVar1 = (a->fields).subscribableVariable,
     pSVar1 == (SubscribableVariable_1_UnityEngine_Quaternion_ *)0x0)) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    bVar3 = (*pcVar2)();
    return bVar3;
  }
  method_00 = method;
  if ((method->klass->field_0x135 & 1) == 0) {
    FUN_?();
  }
  pIVar4 = method->klass;
  QStack_5.x = (pSVar1->fields)._.value.x;
  QStack_5.y = (pSVar1->fields)._.value.y;
  QStack_5.z = (pSVar1->fields)._.value.z;
  QStack_5.w = (pSVar1->fields)._.value.w;
  if ((pIVar4->field_0x135 & 1) == 0) {
    pIVar4 = (Il2CppClass *)FUN_?(pIVar4);
  }
  plVar6 = (longlong *)FUN_?(pIVar4->rgctx_data[9].rgctxDataDummy,&QStack_5);
  if ((method->klass->field_0x135 & 1) == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Quaternion);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (plVar6 != (longlong *)0x0) {
    plVar7 = (longlong *)0x0;
    if ((Quaternion__Class *)*plVar6 == TypeInfo__UnityEngine__Quaternion) {
      plVar7 = plVar6;
    }
    if (plVar7 != (longlong *)0x0) {
      if (*(Il2CppClass **)(*plVar6 + 0x40) == (TypeInfo__UnityEngine__Quaternion->_0).element_class
         ) {
        QStack_5._0_8_ = plVar6[2];
        QStack_5._8_8_ = plVar6[3];
        bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Equals_1
                          (b,&QStack_5,method_00);
        return bVar3 ^ 1;
      }
      FUN_?(plVar6);
      pcVar2 = (code *)swi(3);
      bVar3 = (*pcVar2)();
      return bVar3;
    }
  }
  return 1;
}


/* Boolean op_Inequality(SpawnRoleVariable`1[UnityEngine.Quaternion], Quaternion) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[UnityEngine::Quaternion]::
     SpawnRoleVariable_1_UnityEngine_Quaternion__op_Inequality_1
               (SpawnRoleVariable_1_UnityEngine_Quaternion_ *a,Quaternion *b,MethodInfo *method)

{
  if ((a == (SpawnRoleVariable_1_UnityEngine_Quaternion_ *)0x0) ||
     (pSVar1 = (a->fields).subscribableVariable,
     pSVar1 == (SubscribableVariable_1_UnityEngine_Quaternion_ *)0x0)) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    bVar3 = (*pcVar2)();
    return bVar3;
  }
  method_00 = method;
  if ((method->klass->field_0x135 & 1) == 0) {
    FUN_?();
  }
  pIVar4 = method->klass;
  QStack_5.x = (pSVar1->fields)._.value.x;
  QStack_5.y = (pSVar1->fields)._.value.y;
  QStack_5.z = (pSVar1->fields)._.value.z;
  QStack_5.w = (pSVar1->fields)._.value.w;
  if ((pIVar4->field_0x135 & 1) == 0) {
    pIVar4 = (Il2CppClass *)FUN_?(pIVar4);
  }
  plVar6 = (longlong *)FUN_?(pIVar4->rgctx_data[9].rgctxDataDummy,&QStack_5);
  if ((method->klass->field_0x135 & 1) == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Quaternion);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (plVar6 != (longlong *)0x0) {
    plVar7 = (longlong *)0x0;
    if ((Quaternion__Class *)*plVar6 == TypeInfo__UnityEngine__Quaternion) {
      plVar7 = plVar6;
    }
    if (plVar7 != (longlong *)0x0) {
      if (*(Il2CppClass **)(*plVar6 + 0x40) == (TypeInfo__UnityEngine__Quaternion->_0).element_class
         ) {
        QStack_5._0_8_ = plVar6[2];
        QStack_5._8_8_ = plVar6[3];
        bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Equals_1
                          (b,&QStack_5,method_00);
        return bVar3 ^ 1;
      }
      FUN_?(plVar6);
      pcVar2 = (code *)swi(3);
      bVar3 = (*pcVar2)();
      return bVar3;
    }
  }
  return 1;
}


/* Boolean op_Inequality(SpawnRoleVariable`1[UnityEngine.Quaternion],
   SpawnRoleVariable`1[UnityEngine.Quaternion]) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[UnityEngine::Quaternion]::
     SpawnRoleVariable_1_UnityEngine_Quaternion__op_Inequality_2
               (SpawnRoleVariable_1_UnityEngine_Quaternion_ *a,
               SpawnRoleVariable_1_UnityEngine_Quaternion_ *b,MethodInfo *method)

{
  pIVar1 = method->klass;
  if ((pIVar1->field_0x135 & 1) == 0) {
    pIVar1 = (Il2CppClass *)FUN_?(pIVar1);
  }
  bVar2 = SpawnRoleVariable_1_UnityEngine_Quaternion__op_Equality_2
                    (a,b,pIVar1->rgctx_data[0x11].method);
  return bVar2 ^ 1;
}

