
/* Boolean Equals(SpawnRoleVariable`1[UnityEngine.Vector3]) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[UnityEngine::Vector3]::
     SpawnRoleVariable_1_UnityEngine_Vector3__Equals
               (SpawnRoleVariable_1_UnityEngine_Vector3_ *this,
               SpawnRoleVariable_1_UnityEngine_Vector3_ *other,MethodInfo *method)

{
  pSVar1 = (this->fields).subscribableVariable;
  if (pSVar1 != (SubscribableVariable_1_UnityEngine_Vector3_ *)0x0) {
    puVar2 = (undefined8 *)
             (*(method->klass->rgctx_data[6].method)->virtualMethodPointer)
                       (auStack_3,pSVar1,method->klass->rgctx_data[6].rgctxDataDummy);
    uStack_4 = *puVar2;
    uStack_5 = *(undefined4 *)(puVar2 + 1);
    if ((other != (SpawnRoleVariable_1_UnityEngine_Vector3_ *)0x0) &&
       (pSVar1 = (other->fields).subscribableVariable,
       pSVar1 != (SubscribableVariable_1_UnityEngine_Vector3_ *)0x0)) {
      puVar2 = (undefined8 *)
               (*(method->klass->rgctx_data[6].method)->virtualMethodPointer)
                         (auStack_3,pSVar1,method->klass->rgctx_data[6].rgctxDataDummy);
      uStack_6 = *puVar2;
      uStack_7 = *(undefined4 *)(puVar2 + 1);
      pvVar8 = method->klass->rgctx_data[0xe].rgctxDataDummy;
      if ((*(byte *)((int)pvVar8 + 0xba) & 1) == 0) {
        pvVar8 = (void *)func_?(pvVar8);
      }
      uVar9 = func_?(pvVar8,&uStack_6);
      bVar10 = func_?(&uStack_4,uVar9,method->klass->rgctx_data[0xf].rgctxDataDummy);
      return bVar10;
    }
  }
  func_?();
  pcVar11 = (code *)swi(3);
  bVar10 = (*pcVar11)();
  return bVar10;
}


/* Boolean Equals(Object) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[UnityEngine::Vector3]::
     SpawnRoleVariable_1_UnityEngine_Vector3__Equals_1
               (SpawnRoleVariable_1_UnityEngine_Vector3_ *this,Object *obj,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Type);
    cRam_? = '\x01';
  }
  if (obj == (Object *)0x0) {
    return 0;
  }
  if (this == (SpawnRoleVariable_1_UnityEngine_Vector3_ *)obj) {
    return 1;
  }
  left._source = (CancellationTokenSource *)
                 mscorlib.dll::System::Object::Object_GetType(obj,(MethodInfo *)0x0);
  if (this != (SpawnRoleVariable_1_UnityEngine_Vector3_ *)0x0) {
    right._source =
         (CancellationTokenSource *)
         mscorlib.dll::System::Object::Object_GetType((Object *)this,(MethodInfo *)0x0);
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Type);
    }
    bVar1 = mscorlib.dll::System::Threading::CancellationToken::CancellationToken_op_Inequality
                      (left,right,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      return 0;
    }
    pIVar2 = (method->klass->rgctx_data[1].method)->virtualMethodPointer;
    pIVar3 = method->klass->rgctx_data->klass;
    if (pIVar3->initialized_and_no_error == 0) {
      pIVar3 = (Il2CppClass *)func_?();
    }
    if ((pIVar3->typeHierarchyDepth <= (obj->klass->_1).typeHierarchyDepth) &&
       ((obj->klass->_1).typeHierarchy[pIVar3->typeHierarchyDepth - 1] == pIVar3)) {
      bVar1 = (*pIVar2)(this);
      return bVar1;
    }
    func_?();
  }
  func_?();
  pcVar4 = (code *)swi(3);
  bVar1 = (*pcVar4)();
  return bVar1;
}


/* Int32 GetHashCode() */

int32_t Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
        SpawnRoleVariableTypes::SpawnRoleVariable`1[UnityEngine::Vector3]::
        SpawnRoleVariable_1_UnityEngine_Vector3__GetHashCode
                  (SpawnRoleVariable_1_UnityEngine_Vector3_ *this,MethodInfo *method)

{
  cVar1 = (*(method->klass->rgctx_data[2].method)->virtualMethodPointer)
                    ((this->fields).subscribableVariable,0,
                     method->klass->rgctx_data[2].rgctxDataDummy);
  if (cVar1 == '\0') {
    return 0;
  }
  pSVar2 = (this->fields).subscribableVariable;
  if (pSVar2 != (SubscribableVariable_1_UnityEngine_Vector3_ *)0x0) {
    iVar3 = (*(pSVar2->klass->vtable).GetHashCode.methodPtr)
                      (pSVar2,(pSVar2->klass->vtable).GetHashCode.method);
    return iVar3;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  iVar3 = (*pcVar4)();
  return iVar3;
}


/* Void SubscribableVariableOnOnChange(Vector3) */

void Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[UnityEngine::Vector3]::
     SpawnRoleVariable_1_UnityEngine_Vector3__SubscribableVariableOnOnChange
               (SpawnRoleVariable_1_UnityEngine_Vector3_ *this,Vector3 value,MethodInfo *method)

{
  if ((this->fields).OnChange != (SpawnRoleVariable_1_T_SubDelegate_UnityEngine_Vector3_ *)0x0) {
    (*(method->klass->rgctx_data[0xd].method)->virtualMethodPointer)
              ((this->fields).OnChange,value._0_8_,value.z,
               method->klass->rgctx_data[0xd].rgctxDataDummy);
  }
  return;
}


/* SpawnRoleVariable`1[UnityEngine.Vector3](Vector3) */

void Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[UnityEngine::Vector3]::
     SpawnRoleVariable_1_UnityEngine_Vector3___ctor
               (SpawnRoleVariable_1_UnityEngine_Vector3_ *this,Vector3 value,MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  pvVar1 = method->klass->rgctx_data[7].rgctxDataDummy;
  if ((*(byte *)((int)pvVar1 + 0xba) & 1) == 0) {
    pvVar1 = (void *)func_?(pvVar1);
  }
  pSVar2 = (SubscribableVariable_1_UnityEngine_Vector3_ *)func_?(pvVar1);
  if (pSVar2 != (SubscribableVariable_1_UnityEngine_Vector3_ *)0x0) {
    (*(method->klass->rgctx_data[8].method)->virtualMethodPointer)
              (pSVar2,value._0_8_,value.z,method->klass->rgctx_data[8].rgctxDataDummy);
    (this->fields).subscribableVariable = pSVar2;
    func_?(&this->fields,pSVar2);
    pSVar2 = (this->fields).subscribableVariable;
    pvVar1 = method->klass->rgctx_data[10].rgctxDataDummy;
    if ((*(byte *)((int)pvVar1 + 0xba) & 1) == 0) {
      pvVar1 = (void *)func_?(pvVar1);
    }
    iVar3 = func_?(pvVar1);
    if (iVar3 != 0) {
      (*(method->klass->rgctx_data[0xb].method)->virtualMethodPointer)
                (iVar3,this,method->klass->rgctx_data[9].rgctxDataDummy,
                 method->klass->rgctx_data[0xb].rgctxDataDummy);
      if (pSVar2 != (SubscribableVariable_1_UnityEngine_Vector3_ *)0x0) {
        (*(method->klass->rgctx_data[0xc].method)->virtualMethodPointer)();
        return;
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void add_OnChange(SpawnRoleVariable`1[T]+SubDelegate[UnityEngine.Vector3]) */

void Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[UnityEngine::Vector3]::
     SpawnRoleVariable_1_UnityEngine_Vector3__add_OnChange
               (SpawnRoleVariable_1_UnityEngine_Vector3_ *this,
               SpawnRoleVariable_1_T_SubDelegate_UnityEngine_Vector3_ *value,MethodInfo *method)

{
  a = (this->fields).OnChange;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pvVar2 = method->klass->rgctx_data[4].rgctxDataDummy;
    if ((*(byte *)((int)pvVar2 + 0xba) & 1) == 0) {
      pvVar2 = (void *)func_?(pvVar2);
    }
    if (pDVar1 == (Delegate *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = func_?(pDVar1,pvVar2);
      if (iVar3 == 0) {
        func_?(pDVar1,pvVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pSVar5 = (SpawnRoleVariable_1_T_SubDelegate_UnityEngine_Vector3_ *)
             func_?(&(this->fields).OnChange,iVar3,a);
    bVar6 = pSVar5 != a;
    a = pSVar5;
  } while (bVar6);
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
    puVar2 = (undefined8 *)
             (*(method->klass->rgctx_data[6].method)->virtualMethodPointer)
                       (auStack_3,pSVar1,method->klass->rgctx_data[6].rgctxDataDummy);
    uVar4 = *puVar2;
    fVar5 = *(float *)(puVar2 + 1);
    __return_storage_ptr__->x = (float)(int)uVar4;
    __return_storage_ptr__->y = (float)(int)((ulonglong)uVar4 >> 0x20);
    __return_storage_ptr__->z = fVar5;
    return __return_storage_ptr__;
  }
  func_?();
  pcVar6 = (code *)swi(3);
  pVVar7 = (Vector3 *)(*pcVar6)();
  return pVVar7;
}


/* Boolean op_Equality(Vector3, SpawnRoleVariable`1[UnityEngine.Vector3]) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[UnityEngine::Vector3]::
     SpawnRoleVariable_1_UnityEngine_Vector3__op_Equality
               (Vector3 b,SpawnRoleVariable_1_UnityEngine_Vector3_ *a,MethodInfo *method)

{
  if (a != (SpawnRoleVariable_1_UnityEngine_Vector3_ *)0x0) {
    pSVar1 = (a->fields).subscribableVariable;
    if (pSVar1 != (SubscribableVariable_1_UnityEngine_Vector3_ *)0x0) {
      pIVar2 = method->klass;
      if (pIVar2->initialized_and_no_error == 0) {
        pIVar2 = (Il2CppClass *)func_?(pIVar2);
      }
      pIVar3 = (pIVar2->rgctx_data[6].method)->virtualMethodPointer;
      pIVar2 = method->klass;
      if (pIVar2->initialized_and_no_error == 0) {
        pIVar2 = (Il2CppClass *)func_?(pIVar2);
      }
      puVar4 = (undefined8 *)(*pIVar3)(auStack_5,pSVar1,pIVar2->rgctx_data[6].rgctxDataDummy);
      uStack_6 = *puVar4;
      uStack_7 = *(undefined4 *)(puVar4 + 1);
      pIVar2 = method->klass;
      if (pIVar2->initialized_and_no_error == 0) {
        pIVar2 = (Il2CppClass *)func_?(pIVar2);
      }
      pvVar8 = pIVar2->rgctx_data[0xe].rgctxDataDummy;
      if ((*(byte *)((int)pvVar8 + 0xba) & 1) == 0) {
        pvVar8 = (void *)func_?(pvVar8);
      }
      uVar9 = func_?(pvVar8,&uStack_6);
      pIVar2 = method->klass;
      if (pIVar2->initialized_and_no_error == 0) {
        pIVar2 = (Il2CppClass *)func_?(pIVar2);
      }
      bVar10 = func_?(&b,uVar9,pIVar2->rgctx_data[0xf].rgctxDataDummy);
      return bVar10;
    }
  }
  func_?();
  pcVar11 = (code *)swi(3);
  bVar10 = (*pcVar11)();
  return bVar10;
}


/* Boolean op_Equality(SpawnRoleVariable`1[UnityEngine.Vector3], Vector3) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[UnityEngine::Vector3]::
     SpawnRoleVariable_1_UnityEngine_Vector3__op_Equality_1
               (SpawnRoleVariable_1_UnityEngine_Vector3_ *a,Vector3 b,MethodInfo *method)

{
  if (a != (SpawnRoleVariable_1_UnityEngine_Vector3_ *)0x0) {
    pSVar1 = (a->fields).subscribableVariable;
    if (pSVar1 != (SubscribableVariable_1_UnityEngine_Vector3_ *)0x0) {
      pIVar2 = method->klass;
      if (pIVar2->initialized_and_no_error == 0) {
        pIVar2 = (Il2CppClass *)func_?(pIVar2);
      }
      pIVar3 = (pIVar2->rgctx_data[6].method)->virtualMethodPointer;
      pIVar2 = method->klass;
      if (pIVar2->initialized_and_no_error == 0) {
        pIVar2 = (Il2CppClass *)func_?(pIVar2);
      }
      puVar4 = (undefined8 *)(*pIVar3)(auStack_5,pSVar1,pIVar2->rgctx_data[6].rgctxDataDummy);
      uStack_6 = *puVar4;
      uStack_7 = *(undefined4 *)(puVar4 + 1);
      pIVar2 = method->klass;
      if (pIVar2->initialized_and_no_error == 0) {
        pIVar2 = (Il2CppClass *)func_?(pIVar2);
      }
      pvVar8 = pIVar2->rgctx_data[0xe].rgctxDataDummy;
      if ((*(byte *)((int)pvVar8 + 0xba) & 1) == 0) {
        pvVar8 = (void *)func_?(pvVar8);
      }
      uVar9 = func_?(pvVar8,&uStack_6);
      pIVar2 = method->klass;
      if (pIVar2->initialized_and_no_error == 0) {
        pIVar2 = (Il2CppClass *)func_?(pIVar2);
      }
      bVar10 = func_?(&b,uVar9,pIVar2->rgctx_data[0xf].rgctxDataDummy);
      return bVar10;
    }
  }
  func_?();
  pcVar11 = (code *)swi(3);
  bVar10 = (*pcVar11)();
  return bVar10;
}


/* Boolean op_Equality(SpawnRoleVariable`1[UnityEngine.Vector3],
   SpawnRoleVariable`1[UnityEngine.Vector3]) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[UnityEngine::Vector3]::
     SpawnRoleVariable_1_UnityEngine_Vector3__op_Equality_2
               (SpawnRoleVariable_1_UnityEngine_Vector3_ *a,
               SpawnRoleVariable_1_UnityEngine_Vector3_ *b,MethodInfo *method)

{
  if (a != (SpawnRoleVariable_1_UnityEngine_Vector3_ *)0x0) {
    pSVar1 = (a->fields).subscribableVariable;
    if (pSVar1 != (SubscribableVariable_1_UnityEngine_Vector3_ *)0x0) {
      pIVar2 = method->klass;
      if (pIVar2->initialized_and_no_error == 0) {
        pIVar2 = (Il2CppClass *)func_?(pIVar2);
      }
      pIVar3 = (pIVar2->rgctx_data[6].method)->virtualMethodPointer;
      pIVar2 = method->klass;
      if (pIVar2->initialized_and_no_error == 0) {
        pIVar2 = (Il2CppClass *)func_?(pIVar2);
      }
      puVar4 = (undefined8 *)(*pIVar3)(aIStack_5,pSVar1,pIVar2->rgctx_data[6].rgctxDataDummy);
      uStack_6 = *puVar4;
      uStack_7 = *(undefined4 *)(puVar4 + 1);
      if ((b != (SpawnRoleVariable_1_UnityEngine_Vector3_ *)0x0) &&
         (pSVar1 = (b->fields).subscribableVariable,
         pSVar1 != (SubscribableVariable_1_UnityEngine_Vector3_ *)0x0)) {
        pIVar2 = method->klass;
        if (pIVar2->initialized_and_no_error == 0) {
          pIVar2 = (Il2CppClass *)func_?(pIVar2);
        }
        pIVar3 = (pIVar2->rgctx_data[6].method)->virtualMethodPointer;
        pIVar2 = method->klass;
        if (pIVar2->initialized_and_no_error == 0) {
          pIVar2 = (Il2CppClass *)func_?(pIVar2);
        }
        puVar4 = (undefined8 *)(*pIVar3)(aIStack_5,pSVar1,pIVar2->rgctx_data[6].rgctxDataDummy);
        uStack_8 = *puVar4;
        uStack_9 = *(undefined4 *)(puVar4 + 1);
        pIVar2 = method->klass;
        if (pIVar2->initialized_and_no_error == 0) {
          pIVar2 = (Il2CppClass *)func_?(pIVar2);
        }
        pvVar10 = pIVar2->rgctx_data[0xe].rgctxDataDummy;
        if ((*(byte *)((int)pvVar10 + 0xba) & 1) == 0) {
          pvVar10 = (void *)func_?(pvVar10);
        }
        uVar11 = func_?(pvVar10,&uStack_8);
        aIStack_5[0] = (Il2CppRGCTXData)method->klass;
        if (ZPULL(*(undefined1 *)((int)aIStack_5[0].rgctxDataDummy + 0xba),0,1) == 0) {
          aIStack_5[0].rgctxDataDummy = (void *)func_?();
        }
        aIStack_5[0] = (aIStack_5[0].klass)->rgctx_data[0xf];
        bVar12 = func_?(&uStack_6,uVar11);
        return bVar12;
      }
    }
  }
  func_?();
  pcVar13 = (code *)swi(3);
  bVar12 = (*pcVar13)();
  return bVar12;
}


/* Vector3 op_Implicit(SpawnRoleVariable`1[UnityEngine.Vector3]) */

Vector3 * Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
          SpawnRoleVariableTypes::SpawnRoleVariable`1[UnityEngine::Vector3]::
          SpawnRoleVariable_1_UnityEngine_Vector3__op_Implicit
                    (Vector3 *__return_storage_ptr__,SpawnRoleVariable_1_UnityEngine_Vector3_ *s,
                    MethodInfo *method)

{
  if (s != (SpawnRoleVariable_1_UnityEngine_Vector3_ *)0x0) {
    pSVar1 = (s->fields).subscribableVariable;
    if (pSVar1 != (SubscribableVariable_1_UnityEngine_Vector3_ *)0x0) {
      pIVar2 = method->klass;
      if (pIVar2->initialized_and_no_error == 0) {
        pIVar2 = (Il2CppClass *)func_?(pIVar2);
      }
      pIVar3 = (pIVar2->rgctx_data[6].method)->virtualMethodPointer;
      pIVar2 = method->klass;
      if (pIVar2->initialized_and_no_error == 0) {
        pIVar2 = (Il2CppClass *)func_?(pIVar2);
      }
      puVar4 = (undefined8 *)(*pIVar3)(auStack_5,pSVar1,pIVar2->rgctx_data[6].rgctxDataDummy);
      uVar6 = *puVar4;
      fVar7 = *(float *)(puVar4 + 1);
      __return_storage_ptr__->x = (float)(int)uVar6;
      __return_storage_ptr__->y = (float)(int)((ulonglong)uVar6 >> 0x20);
      __return_storage_ptr__->z = fVar7;
      return __return_storage_ptr__;
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  pVVar9 = (Vector3 *)(*pcVar8)();
  return pVVar9;
}


/* Boolean op_Inequality(Vector3, SpawnRoleVariable`1[UnityEngine.Vector3]) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[UnityEngine::Vector3]::
     SpawnRoleVariable_1_UnityEngine_Vector3__op_Inequality
               (Vector3 b,SpawnRoleVariable_1_UnityEngine_Vector3_ *a,MethodInfo *method)

{
  if (a != (SpawnRoleVariable_1_UnityEngine_Vector3_ *)0x0) {
    pSVar1 = (a->fields).subscribableVariable;
    if (pSVar1 != (SubscribableVariable_1_UnityEngine_Vector3_ *)0x0) {
      pIVar2 = method->klass;
      if (pIVar2->initialized_and_no_error == 0) {
        pIVar2 = (Il2CppClass *)func_?(pIVar2);
      }
      pIVar3 = (pIVar2->rgctx_data[6].method)->virtualMethodPointer;
      pIVar2 = method->klass;
      if (pIVar2->initialized_and_no_error == 0) {
        pIVar2 = (Il2CppClass *)func_?(pIVar2);
      }
      puVar4 = (undefined8 *)(*pIVar3)(auStack_5,pSVar1,pIVar2->rgctx_data[6].rgctxDataDummy);
      uStack_6 = *puVar4;
      uStack_7 = *(undefined4 *)(puVar4 + 1);
      pIVar2 = method->klass;
      if (pIVar2->initialized_and_no_error == 0) {
        pIVar2 = (Il2CppClass *)func_?(pIVar2);
      }
      pvVar8 = pIVar2->rgctx_data[0xe].rgctxDataDummy;
      if ((*(byte *)((int)pvVar8 + 0xba) & 1) == 0) {
        pvVar8 = (void *)func_?(pvVar8);
      }
      uVar9 = func_?(pvVar8,&uStack_6);
      pIVar2 = method->klass;
      if (pIVar2->initialized_and_no_error == 0) {
        pIVar2 = (Il2CppClass *)func_?(pIVar2);
      }
      cVar10 = func_?(&b,uVar9,pIVar2->rgctx_data[0xf].rgctxDataDummy);
      return cVar10 == '\0';
    }
  }
  func_?();
  pcVar11 = (code *)swi(3);
  bVar12 = (*pcVar11)();
  return bVar12;
}


/* Boolean op_Inequality(SpawnRoleVariable`1[UnityEngine.Vector3], Vector3) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[UnityEngine::Vector3]::
     SpawnRoleVariable_1_UnityEngine_Vector3__op_Inequality_1
               (SpawnRoleVariable_1_UnityEngine_Vector3_ *a,Vector3 b,MethodInfo *method)

{
  if (a != (SpawnRoleVariable_1_UnityEngine_Vector3_ *)0x0) {
    pSVar1 = (a->fields).subscribableVariable;
    if (pSVar1 != (SubscribableVariable_1_UnityEngine_Vector3_ *)0x0) {
      pIVar2 = method->klass;
      if (pIVar2->initialized_and_no_error == 0) {
        pIVar2 = (Il2CppClass *)func_?(pIVar2);
      }
      pIVar3 = (pIVar2->rgctx_data[6].method)->virtualMethodPointer;
      pIVar2 = method->klass;
      if (pIVar2->initialized_and_no_error == 0) {
        pIVar2 = (Il2CppClass *)func_?(pIVar2);
      }
      puVar4 = (undefined8 *)(*pIVar3)(auStack_5,pSVar1,pIVar2->rgctx_data[6].rgctxDataDummy);
      uStack_6 = *puVar4;
      uStack_7 = *(undefined4 *)(puVar4 + 1);
      pIVar2 = method->klass;
      if (pIVar2->initialized_and_no_error == 0) {
        pIVar2 = (Il2CppClass *)func_?(pIVar2);
      }
      pvVar8 = pIVar2->rgctx_data[0xe].rgctxDataDummy;
      if ((*(byte *)((int)pvVar8 + 0xba) & 1) == 0) {
        pvVar8 = (void *)func_?(pvVar8);
      }
      uVar9 = func_?(pvVar8,&uStack_6);
      pIVar2 = method->klass;
      if (pIVar2->initialized_and_no_error == 0) {
        pIVar2 = (Il2CppClass *)func_?(pIVar2);
      }
      cVar10 = func_?(&b,uVar9,pIVar2->rgctx_data[0xf].rgctxDataDummy);
      return cVar10 == '\0';
    }
  }
  func_?();
  pcVar11 = (code *)swi(3);
  bVar12 = (*pcVar11)();
  return bVar12;
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
  if (pIVar1->initialized_and_no_error == 0) {
    pIVar1 = (Il2CppClass *)func_?(pIVar1);
  }
  pIVar2 = (pIVar1->rgctx_data[0x10].method)->virtualMethodPointer;
  pIVar1 = method->klass;
  if (pIVar1->initialized_and_no_error == 0) {
    pIVar1 = (Il2CppClass *)func_?(pIVar1);
  }
  cVar3 = (*pIVar2)(a,b,pIVar1->rgctx_data[0x10].rgctxDataDummy);
  return cVar3 == '\0';
}


/* Void remove_OnChange(SpawnRoleVariable`1[T]+SubDelegate[UnityEngine.Vector3]) */

void Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[UnityEngine::Vector3]::
     SpawnRoleVariable_1_UnityEngine_Vector3__remove_OnChange
               (SpawnRoleVariable_1_UnityEngine_Vector3_ *this,
               SpawnRoleVariable_1_T_SubDelegate_UnityEngine_Vector3_ *value,MethodInfo *method)

{
  source = (this->fields).OnChange;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pvVar2 = method->klass->rgctx_data[4].rgctxDataDummy;
    if ((*(byte *)((int)pvVar2 + 0xba) & 1) == 0) {
      pvVar2 = (void *)func_?(pvVar2);
    }
    if (pDVar1 == (Delegate *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = func_?(pDVar1,pvVar2);
      if (iVar3 == 0) {
        func_?(pDVar1,pvVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pSVar5 = (SpawnRoleVariable_1_T_SubDelegate_UnityEngine_Vector3_ *)
             func_?(&(this->fields).OnChange,iVar3,source);
    bVar6 = pSVar5 != source;
    source = pSVar5;
  } while (bVar6);
  return;
}

