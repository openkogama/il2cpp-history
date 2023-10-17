
/* Boolean Equals(SpawnRoleVariable`1[UnityEngine.Quaternion]) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[UnityEngine::Quaternion]::
     SpawnRoleVariable_1_UnityEngine_Quaternion__Equals
               (SpawnRoleVariable_1_UnityEngine_Quaternion_ *this,
               SpawnRoleVariable_1_UnityEngine_Quaternion_ *other,MethodInfo *method)

{
  uStack_1 = 0;
  uStack_2 = 0;
  uStack_3 = 0;
  uStack_4 = 0;
  pSVar5 = (this->fields).subscribableVariable;
  if (pSVar5 != (SubscribableVariable_1_UnityEngine_Quaternion_ *)0x0) {
    puVar6 = (undefined4 *)
             (*(method->klass->rgctx_data[6].method)->virtualMethodPointer)
                       (auStack_7,pSVar5,method->klass->rgctx_data[6].rgctxDataDummy);
    uStack_1 = *puVar6;
    uStack_2 = puVar6[1];
    uStack_3 = puVar6[2];
    uStack_4 = puVar6[3];
    if ((other != (SpawnRoleVariable_1_UnityEngine_Quaternion_ *)0x0) &&
       (pSVar5 = (other->fields).subscribableVariable,
       pSVar5 != (SubscribableVariable_1_UnityEngine_Quaternion_ *)0x0)) {
      puVar6 = (undefined4 *)
               (*(method->klass->rgctx_data[6].method)->virtualMethodPointer)
                         (auStack_7,pSVar5,method->klass->rgctx_data[6].rgctxDataDummy);
      uStack_8 = *puVar6;
      uStack_9 = puVar6[1];
      uStack_10 = puVar6[2];
      uStack_11 = puVar6[3];
      pvVar12 = method->klass->rgctx_data[0xe].rgctxDataDummy;
      if ((*(byte *)((int)pvVar12 + 0xba) & 1) == 0) {
        pvVar12 = (void *)func_?(pvVar12);
      }
      uVar13 = func_?(pvVar12,&uStack_8);
      bVar14 = func_?(&uStack_1,uVar13,method->klass->rgctx_data[0xf].rgctxDataDummy);
      return bVar14;
    }
  }
  func_?();
  pcVar15 = (code *)swi(3);
  bVar14 = (*pcVar15)();
  return bVar14;
}


/* Boolean Equals(Object) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[UnityEngine::Quaternion]::
     SpawnRoleVariable_1_UnityEngine_Quaternion__Equals_1
               (SpawnRoleVariable_1_UnityEngine_Quaternion_ *this,Object *obj,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Type);
    cRam_? = '\x01';
  }
  if (obj == (Object *)0x0) {
    return 0;
  }
  if (this == (SpawnRoleVariable_1_UnityEngine_Quaternion_ *)obj) {
    return 1;
  }
  left._source = (CancellationTokenSource *)
                 mscorlib.dll::System::Object::Object_GetType(obj,(MethodInfo *)0x0);
  if (this != (SpawnRoleVariable_1_UnityEngine_Quaternion_ *)0x0) {
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


/* Void SubscribableVariableOnOnChange(Quaternion) */

void Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[UnityEngine::Quaternion]::
     SpawnRoleVariable_1_UnityEngine_Quaternion__SubscribableVariableOnOnChange
               (SpawnRoleVariable_1_UnityEngine_Quaternion_ *this,Quaternion value,
               MethodInfo *method)

{
  if ((this->fields).OnChange != (SpawnRoleVariable_1_T_SubDelegate_UnityEngine_Quaternion_ *)0x0) {
    (*(method->klass->rgctx_data[0xd].method)->virtualMethodPointer)
              ((this->fields).OnChange,value.x,value.y,value.z,value.w,
               method->klass->rgctx_data[0xd].rgctxDataDummy);
  }
  return;
}


/* SpawnRoleVariable`1[UnityEngine.Quaternion](Quaternion) */

void Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[UnityEngine::Quaternion]::
     SpawnRoleVariable_1_UnityEngine_Quaternion___ctor
               (SpawnRoleVariable_1_UnityEngine_Quaternion_ *this,Quaternion value,
               MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  pvVar1 = method->klass->rgctx_data[7].rgctxDataDummy;
  if ((*(byte *)((int)pvVar1 + 0xba) & 1) == 0) {
    pvVar1 = (void *)func_?(pvVar1);
  }
  pSVar2 = (SubscribableVariable_1_UnityEngine_Quaternion_ *)func_?(pvVar1);
  if (pSVar2 != (SubscribableVariable_1_UnityEngine_Quaternion_ *)0x0) {
    (*(method->klass->rgctx_data[8].method)->virtualMethodPointer)
              (pSVar2,value.x,value.y,value.z,value.w,method->klass->rgctx_data[8].rgctxDataDummy);
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
      if (pSVar2 != (SubscribableVariable_1_UnityEngine_Quaternion_ *)0x0) {
        (*(method->klass->rgctx_data[0xc].method)->virtualMethodPointer)
                  (pSVar2,iVar3,method->klass->rgctx_data[0xc].rgctxDataDummy);
        return;
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
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
    pfVar2 = (float *)(*(method->klass->rgctx_data[6].method)->virtualMethodPointer)
                                (auStack_3,pSVar1,method->klass->rgctx_data[6].rgctxDataDummy);
    fVar4 = pfVar2[1];
    fVar5 = pfVar2[2];
    fVar6 = pfVar2[3];
    __return_storage_ptr__->x = *pfVar2;
    __return_storage_ptr__->y = fVar4;
    __return_storage_ptr__->z = fVar5;
    __return_storage_ptr__->w = fVar6;
    return __return_storage_ptr__;
  }
  func_?();
  pcVar7 = (code *)swi(3);
  pQVar8 = (Quaternion *)(*pcVar7)();
  return pQVar8;
}


/* Boolean op_Equality(Quaternion, SpawnRoleVariable`1[UnityEngine.Quaternion]) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[UnityEngine::Quaternion]::
     SpawnRoleVariable_1_UnityEngine_Quaternion__op_Equality
               (Quaternion b,SpawnRoleVariable_1_UnityEngine_Quaternion_ *a,MethodInfo *method)

{
  if (a != (SpawnRoleVariable_1_UnityEngine_Quaternion_ *)0x0) {
    pSVar1 = (a->fields).subscribableVariable;
    if (pSVar1 != (SubscribableVariable_1_UnityEngine_Quaternion_ *)0x0) {
      pIVar2 = method->klass;
      if (pIVar2->initialized_and_no_error == 0) {
        pIVar2 = (Il2CppClass *)func_?(pIVar2);
      }
      pIVar3 = (pIVar2->rgctx_data[6].method)->virtualMethodPointer;
      pIVar2 = method->klass;
      if (pIVar2->initialized_and_no_error == 0) {
        pIVar2 = (Il2CppClass *)func_?(pIVar2);
      }
      puVar4 = (undefined4 *)(*pIVar3)(auStack_5,pSVar1,pIVar2->rgctx_data[6].rgctxDataDummy);
      uStack_6 = *puVar4;
      uStack_7 = puVar4[1];
      uStack_8 = puVar4[2];
      uStack_9 = puVar4[3];
      pIVar2 = method->klass;
      if (pIVar2->initialized_and_no_error == 0) {
        pIVar2 = (Il2CppClass *)func_?(pIVar2);
      }
      pvVar10 = pIVar2->rgctx_data[0xe].rgctxDataDummy;
      if ((*(byte *)((int)pvVar10 + 0xba) & 1) == 0) {
        pvVar10 = (void *)func_?(pvVar10);
      }
      uVar11 = func_?(pvVar10,&uStack_6);
      pIVar2 = method->klass;
      if (pIVar2->initialized_and_no_error == 0) {
        pIVar2 = (Il2CppClass *)func_?(pIVar2);
      }
      bVar12 = func_?(&b,uVar11,pIVar2->rgctx_data[0xf].rgctxDataDummy);
      return bVar12;
    }
  }
  func_?();
  pcVar13 = (code *)swi(3);
  bVar12 = (*pcVar13)();
  return bVar12;
}


/* Boolean op_Equality(SpawnRoleVariable`1[UnityEngine.Quaternion], Quaternion) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[UnityEngine::Quaternion]::
     SpawnRoleVariable_1_UnityEngine_Quaternion__op_Equality_1
               (SpawnRoleVariable_1_UnityEngine_Quaternion_ *a,Quaternion b,MethodInfo *method)

{
  if (a != (SpawnRoleVariable_1_UnityEngine_Quaternion_ *)0x0) {
    pSVar1 = (a->fields).subscribableVariable;
    if (pSVar1 != (SubscribableVariable_1_UnityEngine_Quaternion_ *)0x0) {
      pIVar2 = method->klass;
      if (pIVar2->initialized_and_no_error == 0) {
        pIVar2 = (Il2CppClass *)func_?(pIVar2);
      }
      pIVar3 = (pIVar2->rgctx_data[6].method)->virtualMethodPointer;
      pIVar2 = method->klass;
      if (pIVar2->initialized_and_no_error == 0) {
        pIVar2 = (Il2CppClass *)func_?(pIVar2);
      }
      puVar4 = (undefined4 *)(*pIVar3)(auStack_5,pSVar1,pIVar2->rgctx_data[6].rgctxDataDummy);
      uStack_6 = *puVar4;
      uStack_7 = puVar4[1];
      uStack_8 = puVar4[2];
      uStack_9 = puVar4[3];
      pIVar2 = method->klass;
      if (pIVar2->initialized_and_no_error == 0) {
        pIVar2 = (Il2CppClass *)func_?(pIVar2);
      }
      pvVar10 = pIVar2->rgctx_data[0xe].rgctxDataDummy;
      if ((*(byte *)((int)pvVar10 + 0xba) & 1) == 0) {
        pvVar10 = (void *)func_?(pvVar10);
      }
      uVar11 = func_?(pvVar10,&uStack_6);
      pIVar2 = method->klass;
      if (pIVar2->initialized_and_no_error == 0) {
        pIVar2 = (Il2CppClass *)func_?(pIVar2);
      }
      bVar12 = func_?(&b,uVar11,pIVar2->rgctx_data[0xf].rgctxDataDummy);
      return bVar12;
    }
  }
  func_?();
  pcVar13 = (code *)swi(3);
  bVar12 = (*pcVar13)();
  return bVar12;
}


/* Boolean op_Equality(SpawnRoleVariable`1[UnityEngine.Quaternion],
   SpawnRoleVariable`1[UnityEngine.Quaternion]) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[UnityEngine::Quaternion]::
     SpawnRoleVariable_1_UnityEngine_Quaternion__op_Equality_2
               (SpawnRoleVariable_1_UnityEngine_Quaternion_ *a,
               SpawnRoleVariable_1_UnityEngine_Quaternion_ *b,MethodInfo *method)

{
  uStack_1 = 0;
  uStack_2 = 0;
  uStack_3 = 0;
  uStack_4 = 0;
  if (a != (SpawnRoleVariable_1_UnityEngine_Quaternion_ *)0x0) {
    pSVar5 = (a->fields).subscribableVariable;
    if (pSVar5 != (SubscribableVariable_1_UnityEngine_Quaternion_ *)0x0) {
      pIVar6 = method->klass;
      if (pIVar6->initialized_and_no_error == 0) {
        pIVar6 = (Il2CppClass *)func_?(pIVar6);
      }
      pIVar7 = (pIVar6->rgctx_data[6].method)->virtualMethodPointer;
      pIVar6 = method->klass;
      if (pIVar6->initialized_and_no_error == 0) {
        pIVar6 = (Il2CppClass *)func_?(pIVar6);
      }
      puVar8 = (undefined4 *)(*pIVar7)(aIStack_9,pSVar5,pIVar6->rgctx_data[6].rgctxDataDummy);
      uStack_1 = *puVar8;
      uStack_2 = puVar8[1];
      uStack_3 = puVar8[2];
      uStack_4 = puVar8[3];
      if ((b != (SpawnRoleVariable_1_UnityEngine_Quaternion_ *)0x0) &&
         (pSVar5 = (b->fields).subscribableVariable,
         pSVar5 != (SubscribableVariable_1_UnityEngine_Quaternion_ *)0x0)) {
        pIVar6 = method->klass;
        if (pIVar6->initialized_and_no_error == 0) {
          pIVar6 = (Il2CppClass *)func_?(pIVar6);
        }
        pIVar7 = (pIVar6->rgctx_data[6].method)->virtualMethodPointer;
        pIVar6 = method->klass;
        if (pIVar6->initialized_and_no_error == 0) {
          pIVar6 = (Il2CppClass *)func_?(pIVar6);
        }
        puVar8 = (undefined4 *)(*pIVar7)(aIStack_9,pSVar5,pIVar6->rgctx_data[6].rgctxDataDummy);
        uStack_10 = *puVar8;
        uStack_11 = puVar8[1];
        uStack_12 = puVar8[2];
        uStack_13 = puVar8[3];
        pIVar6 = method->klass;
        if (pIVar6->initialized_and_no_error == 0) {
          pIVar6 = (Il2CppClass *)func_?(pIVar6);
        }
        pvVar14 = pIVar6->rgctx_data[0xe].rgctxDataDummy;
        if ((*(byte *)((int)pvVar14 + 0xba) & 1) == 0) {
          pvVar14 = (void *)func_?(pvVar14);
        }
        uVar15 = func_?(pvVar14,&uStack_10);
        aIStack_9[0] = (Il2CppRGCTXData)method->klass;
        if (ZPULL(*(undefined1 *)((int)aIStack_9[0].rgctxDataDummy + 0xba),0,1) == 0) {
          aIStack_9[0].rgctxDataDummy = (void *)func_?();
        }
        aIStack_9[0] = (aIStack_9[0].klass)->rgctx_data[0xf];
        bVar16 = func_?(&uStack_1,uVar15);
        return bVar16;
      }
    }
  }
  func_?();
  pcVar17 = (code *)swi(3);
  bVar16 = (*pcVar17)();
  return bVar16;
}


/* Quaternion op_Implicit(SpawnRoleVariable`1[UnityEngine.Quaternion]) */

Quaternion *
Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
SpawnRoleVariableTypes::SpawnRoleVariable`1[UnityEngine::Quaternion]::
SpawnRoleVariable_1_UnityEngine_Quaternion__op_Implicit
          (Quaternion *__return_storage_ptr__,SpawnRoleVariable_1_UnityEngine_Quaternion_ *s,
          MethodInfo *method)

{
  if (s != (SpawnRoleVariable_1_UnityEngine_Quaternion_ *)0x0) {
    pSVar1 = (s->fields).subscribableVariable;
    if (pSVar1 != (SubscribableVariable_1_UnityEngine_Quaternion_ *)0x0) {
      pIVar2 = method->klass;
      if (pIVar2->initialized_and_no_error == 0) {
        pIVar2 = (Il2CppClass *)func_?(pIVar2);
      }
      pIVar3 = (pIVar2->rgctx_data[6].method)->virtualMethodPointer;
      pIVar2 = method->klass;
      if (pIVar2->initialized_and_no_error == 0) {
        pIVar2 = (Il2CppClass *)func_?(pIVar2);
      }
      pfVar4 = (float *)(*pIVar3)(auStack_5,pSVar1,pIVar2->rgctx_data[6].rgctxDataDummy);
      fVar6 = pfVar4[1];
      fVar7 = pfVar4[2];
      fVar8 = pfVar4[3];
      __return_storage_ptr__->x = *pfVar4;
      __return_storage_ptr__->y = fVar6;
      __return_storage_ptr__->z = fVar7;
      __return_storage_ptr__->w = fVar8;
      return __return_storage_ptr__;
    }
  }
  func_?();
  pcVar9 = (code *)swi(3);
  pQVar10 = (Quaternion *)(*pcVar9)();
  return pQVar10;
}


/* Boolean op_Inequality(Quaternion, SpawnRoleVariable`1[UnityEngine.Quaternion]) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[UnityEngine::Quaternion]::
     SpawnRoleVariable_1_UnityEngine_Quaternion__op_Inequality
               (Quaternion b,SpawnRoleVariable_1_UnityEngine_Quaternion_ *a,MethodInfo *method)

{
  if (a != (SpawnRoleVariable_1_UnityEngine_Quaternion_ *)0x0) {
    pSVar1 = (a->fields).subscribableVariable;
    if (pSVar1 != (SubscribableVariable_1_UnityEngine_Quaternion_ *)0x0) {
      pIVar2 = method->klass;
      if (pIVar2->initialized_and_no_error == 0) {
        pIVar2 = (Il2CppClass *)func_?(pIVar2);
      }
      pIVar3 = (pIVar2->rgctx_data[6].method)->virtualMethodPointer;
      pIVar2 = method->klass;
      if (pIVar2->initialized_and_no_error == 0) {
        pIVar2 = (Il2CppClass *)func_?(pIVar2);
      }
      puVar4 = (undefined4 *)(*pIVar3)(auStack_5,pSVar1,pIVar2->rgctx_data[6].rgctxDataDummy);
      uStack_6 = *puVar4;
      uStack_7 = puVar4[1];
      uStack_8 = puVar4[2];
      uStack_9 = puVar4[3];
      pIVar2 = method->klass;
      if (pIVar2->initialized_and_no_error == 0) {
        pIVar2 = (Il2CppClass *)func_?(pIVar2);
      }
      pvVar10 = pIVar2->rgctx_data[0xe].rgctxDataDummy;
      if ((*(byte *)((int)pvVar10 + 0xba) & 1) == 0) {
        pvVar10 = (void *)func_?(pvVar10);
      }
      uVar11 = func_?(pvVar10,&uStack_6);
      pIVar2 = method->klass;
      if (pIVar2->initialized_and_no_error == 0) {
        pIVar2 = (Il2CppClass *)func_?(pIVar2);
      }
      cVar12 = func_?(&b,uVar11,pIVar2->rgctx_data[0xf].rgctxDataDummy);
      return cVar12 == '\0';
    }
  }
  func_?();
  pcVar13 = (code *)swi(3);
  bVar14 = (*pcVar13)();
  return bVar14;
}


/* Boolean op_Inequality(SpawnRoleVariable`1[UnityEngine.Quaternion], Quaternion) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[UnityEngine::Quaternion]::
     SpawnRoleVariable_1_UnityEngine_Quaternion__op_Inequality_1
               (SpawnRoleVariable_1_UnityEngine_Quaternion_ *a,Quaternion b,MethodInfo *method)

{
  if (a != (SpawnRoleVariable_1_UnityEngine_Quaternion_ *)0x0) {
    pSVar1 = (a->fields).subscribableVariable;
    if (pSVar1 != (SubscribableVariable_1_UnityEngine_Quaternion_ *)0x0) {
      pIVar2 = method->klass;
      if (pIVar2->initialized_and_no_error == 0) {
        pIVar2 = (Il2CppClass *)func_?(pIVar2);
      }
      pIVar3 = (pIVar2->rgctx_data[6].method)->virtualMethodPointer;
      pIVar2 = method->klass;
      if (pIVar2->initialized_and_no_error == 0) {
        pIVar2 = (Il2CppClass *)func_?(pIVar2);
      }
      puVar4 = (undefined4 *)(*pIVar3)(auStack_5,pSVar1,pIVar2->rgctx_data[6].rgctxDataDummy);
      uStack_6 = *puVar4;
      uStack_7 = puVar4[1];
      uStack_8 = puVar4[2];
      uStack_9 = puVar4[3];
      pIVar2 = method->klass;
      if (pIVar2->initialized_and_no_error == 0) {
        pIVar2 = (Il2CppClass *)func_?(pIVar2);
      }
      pvVar10 = pIVar2->rgctx_data[0xe].rgctxDataDummy;
      if ((*(byte *)((int)pvVar10 + 0xba) & 1) == 0) {
        pvVar10 = (void *)func_?(pvVar10);
      }
      uVar11 = func_?(pvVar10,&uStack_6);
      pIVar2 = method->klass;
      if (pIVar2->initialized_and_no_error == 0) {
        pIVar2 = (Il2CppClass *)func_?(pIVar2);
      }
      cVar12 = func_?(&b,uVar11,pIVar2->rgctx_data[0xf].rgctxDataDummy);
      return cVar12 == '\0';
    }
  }
  func_?();
  pcVar13 = (code *)swi(3);
  bVar14 = (*pcVar13)();
  return bVar14;
}

