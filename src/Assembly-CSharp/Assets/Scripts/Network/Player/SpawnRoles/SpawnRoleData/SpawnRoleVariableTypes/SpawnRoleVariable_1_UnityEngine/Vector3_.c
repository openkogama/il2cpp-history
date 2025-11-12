
/* Boolean Equals(SpawnRoleVariable`1[UnityEngine.Vector3]) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[UnityEngine::Vector3]::
     SpawnRoleVariable_1_UnityEngine_Vector3__Equals
               (SpawnRoleVariable_1_UnityEngine_Vector3_ *this,
               SpawnRoleVariable_1_UnityEngine_Vector3_ *other,MethodInfo *method)

{
  pSVar1 = (this->fields).subscribableVariable;
  if (pSVar1 != (SubscribableVariable_1_UnityEngine_Vector3_ *)0x0) {
    uStack_2._0_4_ = (pSVar1->fields)._.value.x;
    uStack_2._4_4_ = (pSVar1->fields)._.value.y;
    fVar3 = (pSVar1->fields)._.value.z;
    if ((other != (SpawnRoleVariable_1_UnityEngine_Vector3_ *)0x0) &&
       (pSVar1 = (other->fields).subscribableVariable,
       pSVar1 != (SubscribableVariable_1_UnityEngine_Vector3_ *)0x0)) {
      uStack_4._0_4_ = (pSVar1->fields)._.value.x;
      uStack_4._4_4_ = (pSVar1->fields)._.value.y;
      fStack_5 = (pSVar1->fields)._.value.z;
      plVar6 = (longlong *)FUN_?(method->klass->rgctx_data[9].rgctxDataDummy,&uStack_4);
      if (cRam_? == '\0') {
        FUN_?();
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (plVar6 != (longlong *)0x0) {
        plVar7 = (longlong *)0x0;
        if ((Vector3__Class *)*plVar6 == TypeInfo__UnityEngine__Vector3) {
          plVar7 = plVar6;
        }
        if (plVar7 != (longlong *)0x0) {
          if (*(Il2CppClass **)(*plVar6 + 0x40) !=
              (TypeInfo__UnityEngine__Vector3->_0).element_class) {
            FUN_?(plVar6);
            pcVar8 = (code *)swi(3);
            bVar9 = (*pcVar8)();
            return bVar9;
          }
          if ((float)uStack_2 == (float)plVar6[2]) {
            uStack_4._4_4_ = (float)((ulonglong)plVar6[2] >> 0x20);
            if ((uStack_2._4_4_ == uStack_4._4_4_) && (fVar3 == *(float *)(plVar6 + 3))) {
              return 1;
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
     SpawnRoleVariableTypes::SpawnRoleVariable`1[UnityEngine::Vector3]::
     SpawnRoleVariable_1_UnityEngine_Vector3__Equals_1
               (SpawnRoleVariable_1_UnityEngine_Vector3_ *this,Object *obj,MethodInfo *method)

{
  if (obj == (Object *)0x0) {
    return 0;
  }
  if (this == (SpawnRoleVariable_1_UnityEngine_Vector3_ *)obj) {
    return 1;
  }
  lVar1 = FUN_?(&(obj->klass->_0).byval_arg);
  if (this != (SpawnRoleVariable_1_UnityEngine_Vector3_ *)0x0) {
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
    if (pSVar8 != (SubscribableVariable_1_UnityEngine_Vector3_ *)0x0) {
      uStack_9._0_4_ = (pSVar8->fields)._.value.x;
      uStack_9._4_4_ = (pSVar8->fields)._.value.y;
      fVar10 = (pSVar8->fields)._.value.z;
      pOVar11 = obj[1].klass;
      if (pOVar11 != (Object__Class *)0x0) {
        uStack_12 = (pOVar11->_0).name;
        uStack_13 = *(undefined4 *)&(pOVar11->_0).namespaze;
        plVar14 = (longlong *)FUN_?(pMVar5->klass->rgctx_data[9].rgctxDataDummy,&uStack_12);
        if (cRam_? == '\0') {
          FUN_?();
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (plVar14 == (longlong *)0x0) {
          return 0;
        }
        plVar15 = (longlong *)0x0;
        if ((Vector3__Class *)*plVar14 == TypeInfo__UnityEngine__Vector3) {
          plVar15 = plVar14;
        }
        if (plVar15 == (longlong *)0x0) {
          return 0;
        }
        if (*(Il2CppClass **)(*plVar14 + 0x40) != (TypeInfo__UnityEngine__Vector3->_0).element_class
           ) {
          FUN_?(plVar14);
          pcVar6 = (code *)swi(3);
          bVar7 = (*pcVar6)();
          return bVar7;
        }
        if ((float)uStack_9 != (float)plVar14[2]) {
          return 0;
        }
        uStack_12._4_4_ = (float)((ulonglong)plVar14[2] >> 0x20);
        if (uStack_9._4_4_ != uStack_12._4_4_) {
          return 0;
        }
        if (fVar10 != *(float *)(plVar14 + 3)) {
          return 0;
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


/* Int32 GetHashCode() */

int32_t Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
        SpawnRoleVariableTypes::SpawnRoleVariable`1[UnityEngine::Vector3]::
        SpawnRoleVariable_1_UnityEngine_Vector3__GetHashCode
                  (SpawnRoleVariable_1_UnityEngine_Vector3_ *this,MethodInfo *method)

{
  func_?(method->klass->rgctx_data,3);
  FUN_?();
  pcVar1 = (code *)swi(3);
  iVar2 = (*pcVar1)();
  return iVar2;
}


/* Void SubscribableVariableOnOnChange(Vector3) */

void Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[UnityEngine::Vector3]::
     SpawnRoleVariable_1_UnityEngine_Vector3__SubscribableVariableOnOnChange
               (SpawnRoleVariable_1_UnityEngine_Vector3_ *this,Vector3 *value,MethodInfo *method)

{
  if ((this->fields).OnChange != (SpawnRoleVariable_1_T_SubDelegate_UnityEngine_Vector3_ *)0x0) {
    pSVar1 = (this->fields).OnChange;
    fStack_2 = value->z;
    uStack_3._0_4_ = value->x;
    uStack_3._4_4_ = value->y;
    (*(pSVar1->fields)._._.invoke_impl)
              ((pSVar1->fields)._._.method_code,&uStack_3,(pSVar1->fields)._._.method);
  }
  return;
}


/* SpawnRoleVariable`1[UnityEngine.Vector3](Vector3) */

void Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[UnityEngine::Vector3]::
     SpawnRoleVariable_1_UnityEngine_Vector3___ctor
               (SpawnRoleVariable_1_UnityEngine_Vector3_ *this,Vector3 *value,MethodInfo *method)

{
  pvVar1 = method->klass->rgctx_data[2].rgctxDataDummy;
  if ((*(byte *)((longlong)pvVar1 + 0x135) & 1) == 0) {
    pvVar1 = (void *)FUN_?(pvVar1);
  }
  pSVar2 = (SubscribableVariable_1_UnityEngine_Vector3_ *)FUN_?(pvVar1);
  bVar3 = iRam_? != 0;
  fVar4 = value->y;
  fVar5 = value->z;
  (pSVar2->fields)._.value.x = value->x;
  (pSVar2->fields)._.value.y = fVar4;
  (pSVar2->fields)._.value.z = fVar5;
  (this->fields).subscribableVariable = pSVar2;
  if (bVar3) {
    uVar6 = (uint)((ulonglong)&this->fields >> 0xc);
    puVar7 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar8 = *puVar7;
      LOCK();
      uVar9 = *puVar7;
      if (uVar8 == uVar9) {
        *puVar7 = uVar8 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (uVar8 != uVar9);
  }
  pSVar2 = (this->fields).subscribableVariable;
  pvVar1 = method->klass->rgctx_data[0xc].rgctxDataDummy;
  if ((*(byte *)((longlong)pvVar1 + 0x135) & 1) == 0) {
    pvVar1 = (void *)FUN_?(pvVar1);
  }
  b = (Delegate *)FUN_?(pvVar1);
  FUN_?(b,this,method->klass->rgctx_data[0xb].rgctxDataDummy);
  if (pSVar2 == (SubscribableVariable_1_UnityEngine_Vector3_ *)0x0) {
    FUN_?();
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pMVar11 = method->klass->rgctx_data[0xe].method;
  ppAVar12 = &(pSVar2->fields)._.OnChange;
  a = (pSVar2->fields)._.OnChange;
  do {
    pDVar13 = mscorlib.dll::System::Delegate::Delegate_Combine((Delegate *)a,b,(MethodInfo *)0x0);
    pvVar1 = pMVar11->klass->rgctx_data[7].rgctxDataDummy;
    if ((*(byte *)((longlong)pvVar1 + 0x135) & 1) == 0) {
      pvVar1 = (void *)FUN_?();
    }
    if (pDVar13 == (Delegate *)0x0) {
      pAVar14 = (Action_1_UnityEngine_Vector3_ *)0x0;
    }
    else {
      pAVar14 = (Action_1_UnityEngine_Vector3_ *)FUN_?(pDVar13,pvVar1);
      if (pAVar14 == (Action_1_UnityEngine_Vector3_ *)0x0) {
        FUN_?(pDVar13,pvVar1);
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
    LOCK();
    pAVar15 = *ppAVar12;
    bVar3 = a == pAVar15;
    if (bVar3) {
      *ppAVar12 = pAVar14;
      pAVar15 = a;
    }
    UNLOCK();
    pAVar14 = a;
    if (!bVar3) {
      pAVar14 = pAVar15;
    }
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)ppAVar12 >> 0xc);
      uVar9 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
      do {
        uVar8 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
        puVar7 = (ulonglong *)(uVar9 * 8 + 0xADDR);
        LOCK();
        bVar3 = uVar8 == *puVar7;
        if (bVar3) {
          *puVar7 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar3);
    }
    bVar3 = pAVar14 != a;
    a = pAVar14;
  } while (bVar3);
  return;
}


/* Vector3 get_Value() */

Vector3 * Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
          SpawnRoleVariableTypes::SpawnRoleVariable`1[UnityEngine::Vector3]::
          SpawnRoleVariable_1_UnityEngine_Vector3__get_Value
                    (Vector3 *__return_storage_ptr__,SpawnRoleVariable_1_UnityEngine_Vector3_ *this,
                    MethodInfo *method)

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


/* Boolean op_Equality(Vector3, SpawnRoleVariable`1[UnityEngine.Vector3]) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[UnityEngine::Vector3]::
     SpawnRoleVariable_1_UnityEngine_Vector3__op_Equality
               (Vector3 *b,SpawnRoleVariable_1_UnityEngine_Vector3_ *a,MethodInfo *method)

{
  if ((a != (SpawnRoleVariable_1_UnityEngine_Vector3_ *)0x0) &&
     (pSVar1 = (a->fields).subscribableVariable,
     pSVar1 != (SubscribableVariable_1_UnityEngine_Vector3_ *)0x0)) {
    if ((method->klass->field_0x135 & 1) == 0) {
      FUN_?();
    }
    fStack_2 = (pSVar1->fields)._.value.z;
    uStack_3._0_4_ = (pSVar1->fields)._.value.x;
    uStack_3._4_4_ = (pSVar1->fields)._.value.y;
    pIVar4 = method->klass;
    if ((pIVar4->field_0x135 & 1) == 0) {
      pIVar4 = (Il2CppClass *)FUN_?(pIVar4);
    }
    uVar5 = FUN_?(pIVar4->rgctx_data[9].rgctxDataDummy,&uStack_3);
    if ((method->klass->field_0x135 & 1) == 0) {
      FUN_?();
    }
    bVar6 = FUN_?(b,uVar5);
    return bVar6;
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  bVar6 = (*pcVar7)();
  return bVar6;
}


/* Boolean op_Equality(SpawnRoleVariable`1[UnityEngine.Vector3], Vector3) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[UnityEngine::Vector3]::
     SpawnRoleVariable_1_UnityEngine_Vector3__op_Equality_1
               (SpawnRoleVariable_1_UnityEngine_Vector3_ *a,Vector3 *b,MethodInfo *method)

{
  if ((a != (SpawnRoleVariable_1_UnityEngine_Vector3_ *)0x0) &&
     (pSVar1 = (a->fields).subscribableVariable,
     pSVar1 != (SubscribableVariable_1_UnityEngine_Vector3_ *)0x0)) {
    if ((method->klass->field_0x135 & 1) == 0) {
      FUN_?();
    }
    fStack_2 = (pSVar1->fields)._.value.z;
    uStack_3._0_4_ = (pSVar1->fields)._.value.x;
    uStack_3._4_4_ = (pSVar1->fields)._.value.y;
    pIVar4 = method->klass;
    if ((pIVar4->field_0x135 & 1) == 0) {
      pIVar4 = (Il2CppClass *)FUN_?(pIVar4);
    }
    uVar5 = FUN_?(pIVar4->rgctx_data[9].rgctxDataDummy,&uStack_3);
    if ((method->klass->field_0x135 & 1) == 0) {
      FUN_?();
    }
    bVar6 = FUN_?(b,uVar5);
    return bVar6;
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  bVar6 = (*pcVar7)();
  return bVar6;
}


/* Boolean op_Equality(SpawnRoleVariable`1[UnityEngine.Vector3],
   SpawnRoleVariable`1[UnityEngine.Vector3]) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[UnityEngine::Vector3]::
     SpawnRoleVariable_1_UnityEngine_Vector3__op_Equality_2
               (SpawnRoleVariable_1_UnityEngine_Vector3_ *a,
               SpawnRoleVariable_1_UnityEngine_Vector3_ *b,MethodInfo *method)

{
  if ((a != (SpawnRoleVariable_1_UnityEngine_Vector3_ *)0x0) &&
     (pSVar1 = (a->fields).subscribableVariable,
     pSVar1 != (SubscribableVariable_1_UnityEngine_Vector3_ *)0x0)) {
    if ((method->klass->field_0x135 & 1) == 0) {
      FUN_?();
    }
    uStack_2._0_4_ = (pSVar1->fields)._.value.x;
    uStack_2._4_4_ = (pSVar1->fields)._.value.y;
    fVar3 = (pSVar1->fields)._.value.z;
    if ((b != (SpawnRoleVariable_1_UnityEngine_Vector3_ *)0x0) &&
       (pSVar1 = (b->fields).subscribableVariable,
       pSVar1 != (SubscribableVariable_1_UnityEngine_Vector3_ *)0x0)) {
      if ((method->klass->field_0x135 & 1) == 0) {
        FUN_?();
      }
      fStack_4 = (pSVar1->fields)._.value.z;
      uStack_5._0_4_ = (pSVar1->fields)._.value.x;
      uStack_5._4_4_ = (pSVar1->fields)._.value.y;
      pIVar6 = method->klass;
      if ((pIVar6->field_0x135 & 1) == 0) {
        pIVar6 = (Il2CppClass *)FUN_?(pIVar6);
      }
      plVar7 = (longlong *)FUN_?(pIVar6->rgctx_data[9].rgctxDataDummy,&uStack_5);
      if ((method->klass->field_0x135 & 1) == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (plVar7 != (longlong *)0x0) {
        plVar8 = (longlong *)0x0;
        if ((Vector3__Class *)*plVar7 == TypeInfo__UnityEngine__Vector3) {
          plVar8 = plVar7;
        }
        if (plVar8 != (longlong *)0x0) {
          if (*(Il2CppClass **)(*plVar7 + 0x40) !=
              (TypeInfo__UnityEngine__Vector3->_0).element_class) {
            FUN_?(plVar7);
            pcVar9 = (code *)swi(3);
            bVar10 = (*pcVar9)();
            return bVar10;
          }
          if ((float)uStack_2 == (float)plVar7[2]) {
            uStack_5._4_4_ = (float)((ulonglong)plVar7[2] >> 0x20);
            if ((uStack_2._4_4_ == uStack_5._4_4_) && (fVar3 == *(float *)(plVar7 + 3))) {
              return 1;
            }
          }
        }
      }
      return 0;
    }
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  bVar10 = (*pcVar9)();
  return bVar10;
}


/* Vector3 op_Implicit(SpawnRoleVariable`1[UnityEngine.Vector3]) */

Vector3 * Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
          SpawnRoleVariableTypes::SpawnRoleVariable`1[UnityEngine::Vector3]::
          SpawnRoleVariable_1_UnityEngine_Vector3__op_Implicit
                    (Vector3 *__return_storage_ptr__,SpawnRoleVariable_1_UnityEngine_Vector3_ *s,
                    MethodInfo *method)

{
  if ((s != (SpawnRoleVariable_1_UnityEngine_Vector3_ *)0x0) &&
     (pSVar1 = (s->fields).subscribableVariable,
     pSVar1 != (SubscribableVariable_1_UnityEngine_Vector3_ *)0x0)) {
    if ((method->klass->field_0x135 & 1) == 0) {
      FUN_?();
    }
    fVar2 = (pSVar1->fields)._.value.z;
    fVar3 = (pSVar1->fields)._.value.y;
    __return_storage_ptr__->x = (pSVar1->fields)._.value.x;
    __return_storage_ptr__->y = fVar3;
    __return_storage_ptr__->z = fVar2;
    return __return_storage_ptr__;
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  pVVar5 = (Vector3 *)(*pcVar4)();
  return pVVar5;
}


/* Boolean op_Inequality(Vector3, SpawnRoleVariable`1[UnityEngine.Vector3]) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[UnityEngine::Vector3]::
     SpawnRoleVariable_1_UnityEngine_Vector3__op_Inequality
               (Vector3 *b,SpawnRoleVariable_1_UnityEngine_Vector3_ *a,MethodInfo *method)

{
  if ((a != (SpawnRoleVariable_1_UnityEngine_Vector3_ *)0x0) &&
     (pSVar1 = (a->fields).subscribableVariable,
     pSVar1 != (SubscribableVariable_1_UnityEngine_Vector3_ *)0x0)) {
    if ((method->klass->field_0x135 & 1) == 0) {
      FUN_?();
    }
    fStack_2 = (pSVar1->fields)._.value.z;
    uStack_3._0_4_ = (pSVar1->fields)._.value.x;
    uStack_3._4_4_ = (pSVar1->fields)._.value.y;
    pIVar4 = method->klass;
    if ((pIVar4->field_0x135 & 1) == 0) {
      pIVar4 = (Il2CppClass *)FUN_?(pIVar4);
    }
    uVar5 = FUN_?(pIVar4->rgctx_data[9].rgctxDataDummy,&uStack_3);
    if ((method->klass->field_0x135 & 1) == 0) {
      FUN_?();
    }
    bVar6 = FUN_?(b,uVar5);
    return bVar6 ^ 1;
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  bVar8 = (*pcVar7)();
  return bVar8;
}


/* Boolean op_Inequality(SpawnRoleVariable`1[UnityEngine.Vector3], Vector3) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[UnityEngine::Vector3]::
     SpawnRoleVariable_1_UnityEngine_Vector3__op_Inequality_1
               (SpawnRoleVariable_1_UnityEngine_Vector3_ *a,Vector3 *b,MethodInfo *method)

{
  if ((a != (SpawnRoleVariable_1_UnityEngine_Vector3_ *)0x0) &&
     (pSVar1 = (a->fields).subscribableVariable,
     pSVar1 != (SubscribableVariable_1_UnityEngine_Vector3_ *)0x0)) {
    if ((method->klass->field_0x135 & 1) == 0) {
      FUN_?();
    }
    fStack_2 = (pSVar1->fields)._.value.z;
    uStack_3._0_4_ = (pSVar1->fields)._.value.x;
    uStack_3._4_4_ = (pSVar1->fields)._.value.y;
    pIVar4 = method->klass;
    if ((pIVar4->field_0x135 & 1) == 0) {
      pIVar4 = (Il2CppClass *)FUN_?(pIVar4);
    }
    uVar5 = FUN_?(pIVar4->rgctx_data[9].rgctxDataDummy,&uStack_3);
    if ((method->klass->field_0x135 & 1) == 0) {
      FUN_?();
    }
    bVar6 = FUN_?(b,uVar5);
    return bVar6 ^ 1;
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  bVar8 = (*pcVar7)();
  return bVar8;
}


/* Boolean op_Inequality(SpawnRoleVariable`1[UnityEngine.Vector3],
   SpawnRoleVariable`1[UnityEngine.Vector3]) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[UnityEngine::Vector3]::
     SpawnRoleVariable_1_UnityEngine_Vector3__op_Inequality_2
               (SpawnRoleVariable_1_UnityEngine_Vector3_ *a,
               SpawnRoleVariable_1_UnityEngine_Vector3_ *b,MethodInfo *method)

{
  pIVar1 = method->klass;
  if ((pIVar1->field_0x135 & 1) == 0) {
    pIVar1 = (Il2CppClass *)FUN_?(pIVar1);
  }
  if ((a == (SpawnRoleVariable_1_UnityEngine_Vector3_ *)0x0) ||
     (pSVar2 = (a->fields).subscribableVariable,
     pSVar2 == (SubscribableVariable_1_UnityEngine_Vector3_ *)0x0)) {
code_?:
    FUN_?();
    pcVar3 = (code *)swi(3);
    bVar4 = (*pcVar3)();
    return bVar4;
  }
  pMVar5 = pIVar1->rgctx_data[0x11].method;
  if ((pMVar5->klass->field_0x135 & 1) == 0) {
    FUN_?();
  }
  uVar6 = (pSVar2->fields)._.value.x;
  uVar7 = (pSVar2->fields)._.value.y;
  fVar8 = (pSVar2->fields)._.value.z;
  if ((b == (SpawnRoleVariable_1_UnityEngine_Vector3_ *)0x0) ||
     ((b->fields).subscribableVariable == (SubscribableVariable_1_UnityEngine_Vector3_ *)0x0))
  goto code_?;
  if ((pMVar5->klass->field_0x135 & 1) == 0) {
    FUN_?();
  }
  pIVar1 = pMVar5->klass;
  if ((pIVar1->field_0x135 & 1) == 0) {
    pIVar1 = (Il2CppClass *)FUN_?(pIVar1);
  }
  plVar9 = (longlong *)FUN_?(pIVar1->rgctx_data[9].rgctxDataDummy);
  if ((pMVar5->klass->field_0x135 & 1) == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (plVar9 != (longlong *)0x0) {
    plVar10 = (longlong *)0x0;
    plVar11 = plVar10;
    if ((Vector3__Class *)*plVar9 == TypeInfo__UnityEngine__Vector3) {
      plVar11 = plVar9;
    }
    if (plVar11 != (longlong *)0x0) {
      if (*(Il2CppClass **)(*plVar9 + 0x40) != (TypeInfo__UnityEngine__Vector3->_0).element_class) {
        FUN_?(plVar9,TypeInfo__UnityEngine__Vector3);
        pcVar3 = (code *)swi(3);
        bVar4 = (*pcVar3)();
        return bVar4;
      }
      if ((float)uVar6 == (float)plVar9[2]) {
        fStack_12 = (float)((ulonglong)plVar9[2] >> 0x20);
        if (((float)uVar7 == fStack_12) && (fVar8 == *(float *)(plVar9 + 3)))
        goto code_?;
      }
    }
  }
  plVar10 = (longlong *)0x1;
code_?:
  return (bool)plVar10;
}

