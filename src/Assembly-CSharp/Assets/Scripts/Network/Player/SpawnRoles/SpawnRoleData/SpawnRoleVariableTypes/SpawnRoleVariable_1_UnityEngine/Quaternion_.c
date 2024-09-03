
/* Boolean Equals(SpawnRoleVariable`1[UnityEngine.Quaternion]) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[UnityEngine::Quaternion]::
     SpawnRoleVariable_1_UnityEngine_Quaternion__Equals
               (SpawnRoleVariable_1_UnityEngine_Quaternion_ *this,
               SpawnRoleVariable_1_UnityEngine_Quaternion_ *other,MethodInfo *method)

{
  fStack_1 = 0.0;
  fStack_2 = 0.0;
  fStack_3 = 0.0;
  fStack_4 = 0.0;
  pSVar5 = (this->fields).subscribableVariable;
  if (pSVar5 != (SubscribableVariable_1_UnityEngine_Quaternion_ *)0x0) {
    fStack_1 = (pSVar5->fields)._.value.x;
    fStack_2 = (pSVar5->fields)._.value.y;
    fStack_3 = (pSVar5->fields)._.value.z;
    fStack_4 = (pSVar5->fields)._.value.w;
    if ((other != (SpawnRoleVariable_1_UnityEngine_Quaternion_ *)0x0) &&
       (pSVar5 = (other->fields).subscribableVariable,
       pSVar5 != (SubscribableVariable_1_UnityEngine_Quaternion_ *)0x0)) {
      fStack_6 = (pSVar5->fields)._.value.x;
      fStack_7 = (pSVar5->fields)._.value.y;
      fStack_8 = (pSVar5->fields)._.value.z;
      fStack_9 = (pSVar5->fields)._.value.w;
      uVar10 = func_?(method->klass->rgctx_data[9].rgctxDataDummy,&fStack_6);
      bVar11 = func_?(&fStack_1,uVar10,method->klass->rgctx_data[0x10].rgctxDataDummy);
      return bVar11;
    }
  }
  func_?();
  pcVar12 = (code *)swi(3);
  bVar11 = (*pcVar12)();
  return bVar11;
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
  left = (XNamespace *)mscorlib.dll::System::Object::Object_GetType(obj,(MethodInfo *)0x0);
  if (this != (SpawnRoleVariable_1_UnityEngine_Quaternion_ *)0x0) {
    right = (XNamespace *)
            mscorlib.dll::System::Object::Object_GetType((Object *)this,(MethodInfo *)0x0);
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    bVar1 = System.Xml.Linq.dll::System::Xml::Linq::XNamespace::XNamespace_op_Inequality
                      (left,right,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      return 0;
    }
    pIVar2 = method->klass->rgctx_data->klass;
    if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
      pIVar2 = (Il2CppClass *)func_?();
    }
    if (((obj->klass->_1).naturalAligment < pIVar2->naturalAligment) ||
       ((obj->klass->_1).typeHierarchy[pIVar2->naturalAligment - 1] != pIVar2))
    goto code_?;
    pSVar3 = (this->fields).subscribableVariable;
    fStack_4 = 0.0;
    fStack_5 = 0.0;
    fStack_6 = 0.0;
    fStack_7 = 0.0;
    if (pSVar3 != (SubscribableVariable_1_UnityEngine_Quaternion_ *)0x0) {
      fStack_4 = (pSVar3->fields)._.value.x;
      fStack_5 = (pSVar3->fields)._.value.y;
      fStack_6 = (pSVar3->fields)._.value.z;
      fStack_7 = (pSVar3->fields)._.value.w;
      if (obj[1].klass != (Object__Class *)0x0) {
        func_?();
        bVar1 = func_?(&fStack_4);
        return bVar1;
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  bVar1 = (*pcVar8)();
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
    pSVar1 = (this->fields).OnChange;
    (*(pSVar1->fields)._._.invoke_impl)
              ((pSVar1->fields)._._.method_code,value.x,value.y,value.z,value.w,
               (pSVar1->fields)._._.method);
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
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  pMVar1 = method->klass->rgctx_data[2].method;
  if ((pMVar1[3].slot & 0x100) == 0) {
    pMVar1 = (MethodInfo *)func_?(pMVar1);
  }
  pSVar2 = (SubscribableVariable_1_UnityEngine_Quaternion_ *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)pSVar2,ExceptionArgument__Enum_obj,pMVar1);
  (pSVar2->fields)._.value.x = value.x;
  (pSVar2->fields)._.value.y = value.y;
  (pSVar2->fields)._.value.z = value.z;
  (pSVar2->fields)._.value.w = value.w;
  (this->fields).subscribableVariable = pSVar2;
  func_?(&this->fields,pSVar2);
  pSVar2 = (this->fields).subscribableVariable;
  pIVar3 = method->klass->rgctx_data[0xc].klass;
  if (((uint)pIVar3->vtable[0].methodPtr & 0x100) == 0) {
    pIVar3 = (Il2CppClass *)func_?(pIVar3);
  }
  this_00 = (UnityAction_1_UnityEngine_Color_ *)func_?(pIVar3);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[UnityEngine::Color]::
  UnityAction_1_UnityEngine_Color___ctor
            (this_00,(Object *)this,method->klass->rgctx_data[0xb].rgctxDataDummy,
             method->klass->rgctx_data[0xd].method);
  if (pSVar2 != (SubscribableVariable_1_UnityEngine_Quaternion_ *)0x0) {
    a = (pSVar2->fields)._.OnChange;
    pMVar1 = method->klass->rgctx_data[0xe].method;
    while( true ) {
      pDVar4 = mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)a,(Delegate *)this_00,(MethodInfo *)0x0);
      pAVar5 = a;
      if (((uint)(pMVar1->klass->rgctx_data[7].klass)->vtable[0].methodPtr & 0x100) == 0) {
        func_?();
        pAVar5 = a;
      }
      if ((pDVar4 != (Delegate *)0x0) && (iVar6 = func_?(), iVar6 == 0)) break;
      a = (Action_1_UnityEngine_Quaternion_ *)func_?();
      if (a == pAVar5) {
        return;
      }
    }
    func_?();
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
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
  puStack_1 = &stack0xfffffffc;
  pSVar2 = (this->fields).subscribableVariable;
  if (pSVar2 != (SubscribableVariable_1_UnityEngine_Quaternion_ *)0x0) {
    fVar3 = (pSVar2->fields)._.value.y;
    fVar4 = (pSVar2->fields)._.value.z;
    fVar5 = (pSVar2->fields)._.value.w;
    __return_storage_ptr__->x = (pSVar2->fields)._.value.x;
    __return_storage_ptr__->y = fVar3;
    __return_storage_ptr__->z = fVar4;
    __return_storage_ptr__->w = fVar5;
    return __return_storage_ptr__;
  }
  uVar6 = func_?(auStack_7);
  func_?(uVar6);
  pcVar8 = (code *)swi(3);
  pQVar9 = (Quaternion *)(*pcVar8)();
  return pQVar9;
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
      if (((uint)method->klass->vtable[0].methodPtr & 0x100) == 0) {
        func_?(method->klass);
      }
      fStack_2 = (pSVar1->fields)._.value.x;
      fStack_3 = (pSVar1->fields)._.value.y;
      fStack_4 = (pSVar1->fields)._.value.z;
      fStack_5 = (pSVar1->fields)._.value.w;
      pIVar6 = method->klass;
      if (((uint)pIVar6->vtable[0].methodPtr & 0x100) == 0) {
        pIVar6 = (Il2CppClass *)func_?(pIVar6);
      }
      uVar7 = func_?(pIVar6->rgctx_data[9].rgctxDataDummy,&fStack_2);
      pIVar6 = method->klass;
      if (((uint)pIVar6->vtable[0].methodPtr & 0x100) == 0) {
        pIVar6 = (Il2CppClass *)func_?(pIVar6);
      }
      bVar8 = func_?(&b,uVar7,pIVar6->rgctx_data[0x10].rgctxDataDummy);
      return bVar8;
    }
  }
  func_?();
  pcVar9 = (code *)swi(3);
  bVar8 = (*pcVar9)();
  return bVar8;
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
      if (((uint)method->klass->vtable[0].methodPtr & 0x100) == 0) {
        func_?(method->klass);
      }
      fStack_2 = (pSVar1->fields)._.value.x;
      fStack_3 = (pSVar1->fields)._.value.y;
      fStack_4 = (pSVar1->fields)._.value.z;
      fStack_5 = (pSVar1->fields)._.value.w;
      pIVar6 = method->klass;
      if (((uint)pIVar6->vtable[0].methodPtr & 0x100) == 0) {
        pIVar6 = (Il2CppClass *)func_?(pIVar6);
      }
      uVar7 = func_?(pIVar6->rgctx_data[9].rgctxDataDummy,&fStack_2);
      pIVar6 = method->klass;
      if (((uint)pIVar6->vtable[0].methodPtr & 0x100) == 0) {
        pIVar6 = (Il2CppClass *)func_?(pIVar6);
      }
      bVar8 = func_?(&b,uVar7,pIVar6->rgctx_data[0x10].rgctxDataDummy);
      return bVar8;
    }
  }
  func_?();
  pcVar9 = (code *)swi(3);
  bVar8 = (*pcVar9)();
  return bVar8;
}


/* Boolean op_Equality(SpawnRoleVariable`1[UnityEngine.Quaternion],
   SpawnRoleVariable`1[UnityEngine.Quaternion]) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[UnityEngine::Quaternion]::
     SpawnRoleVariable_1_UnityEngine_Quaternion__op_Equality_2
               (SpawnRoleVariable_1_UnityEngine_Quaternion_ *a,
               SpawnRoleVariable_1_UnityEngine_Quaternion_ *b,MethodInfo *method)

{
  fStack_1 = 0.0;
  fStack_2 = 0.0;
  fStack_3 = 0.0;
  fStack_4 = 0.0;
  if (a != (SpawnRoleVariable_1_UnityEngine_Quaternion_ *)0x0) {
    pSVar5 = (a->fields).subscribableVariable;
    if (pSVar5 != (SubscribableVariable_1_UnityEngine_Quaternion_ *)0x0) {
      if (((uint)method->klass->vtable[0].methodPtr & 0x100) == 0) {
        func_?(method->klass);
      }
      fStack_1 = (pSVar5->fields)._.value.x;
      fStack_2 = (pSVar5->fields)._.value.y;
      fStack_3 = (pSVar5->fields)._.value.z;
      fStack_4 = (pSVar5->fields)._.value.w;
      if ((b != (SpawnRoleVariable_1_UnityEngine_Quaternion_ *)0x0) &&
         (pSVar5 = (b->fields).subscribableVariable,
         pSVar5 != (SubscribableVariable_1_UnityEngine_Quaternion_ *)0x0)) {
        if (((uint)method->klass->vtable[0].methodPtr & 0x100) == 0) {
          func_?(method->klass);
        }
        fStack_6 = (pSVar5->fields)._.value.x;
        fStack_7 = (pSVar5->fields)._.value.y;
        fStack_8 = (pSVar5->fields)._.value.z;
        fStack_9 = (pSVar5->fields)._.value.w;
        pIVar10 = method->klass;
        if (((uint)pIVar10->vtable[0].methodPtr & 0x100) == 0) {
          pIVar10 = (Il2CppClass *)func_?(pIVar10);
        }
        uVar11 = func_?(pIVar10->rgctx_data[9].rgctxDataDummy,&fStack_6);
        pIVar10 = method->klass;
        if (((uint)pIVar10->vtable[0].methodPtr & 0x100) == 0) {
          pIVar10 = (Il2CppClass *)func_?(pIVar10);
        }
        bVar12 = func_?(&fStack_1,uVar11,pIVar10->rgctx_data[0x10].rgctxDataDummy);
        return bVar12;
      }
    }
  }
  func_?();
  pcVar13 = (code *)swi(3);
  bVar12 = (*pcVar13)();
  return bVar12;
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
      if (((uint)method->klass->vtable[0].methodPtr & 0x100) == 0) {
        func_?(method->klass);
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
  }
  func_?();
  pcVar5 = (code *)swi(3);
  pQVar6 = (Quaternion *)(*pcVar5)();
  return pQVar6;
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
      if (((uint)method->klass->vtable[0].methodPtr & 0x100) == 0) {
        func_?(method->klass);
      }
      fStack_2 = (pSVar1->fields)._.value.x;
      fStack_3 = (pSVar1->fields)._.value.y;
      fStack_4 = (pSVar1->fields)._.value.z;
      fStack_5 = (pSVar1->fields)._.value.w;
      pIVar6 = method->klass;
      if (((uint)pIVar6->vtable[0].methodPtr & 0x100) == 0) {
        pIVar6 = (Il2CppClass *)func_?(pIVar6);
      }
      uVar7 = func_?(pIVar6->rgctx_data[9].rgctxDataDummy,&fStack_2);
      pIVar6 = method->klass;
      if (((uint)pIVar6->vtable[0].methodPtr & 0x100) == 0) {
        pIVar6 = (Il2CppClass *)func_?(pIVar6);
      }
      bVar8 = func_?(&b,uVar7,pIVar6->rgctx_data[0x10].rgctxDataDummy);
      return bVar8 ^ 1;
    }
  }
  func_?();
  pcVar9 = (code *)swi(3);
  bVar10 = (*pcVar9)();
  return bVar10;
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
      if (((uint)method->klass->vtable[0].methodPtr & 0x100) == 0) {
        func_?(method->klass);
      }
      fStack_2 = (pSVar1->fields)._.value.x;
      fStack_3 = (pSVar1->fields)._.value.y;
      fStack_4 = (pSVar1->fields)._.value.z;
      fStack_5 = (pSVar1->fields)._.value.w;
      pIVar6 = method->klass;
      if (((uint)pIVar6->vtable[0].methodPtr & 0x100) == 0) {
        pIVar6 = (Il2CppClass *)func_?(pIVar6);
      }
      uVar7 = func_?(pIVar6->rgctx_data[9].rgctxDataDummy,&fStack_2);
      pIVar6 = method->klass;
      if (((uint)pIVar6->vtable[0].methodPtr & 0x100) == 0) {
        pIVar6 = (Il2CppClass *)func_?(pIVar6);
      }
      bVar8 = func_?(&b,uVar7,pIVar6->rgctx_data[0x10].rgctxDataDummy);
      return bVar8 ^ 1;
    }
  }
  func_?();
  pcVar9 = (code *)swi(3);
  bVar10 = (*pcVar9)();
  return bVar10;
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
  if (((uint)pIVar1->vtable[0].methodPtr & 0x100) == 0) {
    pIVar1 = (Il2CppClass *)func_?(pIVar1);
  }
  pMVar2 = pIVar1->rgctx_data[0x11].method;
  fStack_3 = 0.0;
  fStack_4 = 0.0;
  fStack_5 = 0.0;
  fStack_6 = 0.0;
  if ((a != (SpawnRoleVariable_1_UnityEngine_Quaternion_ *)0x0) &&
     (pSVar7 = (a->fields).subscribableVariable,
     pSVar7 != (SubscribableVariable_1_UnityEngine_Quaternion_ *)0x0)) {
    if (((uint)pMVar2->klass->vtable[0].methodPtr & 0x100) == 0) {
      func_?(pMVar2->klass);
    }
    fStack_3 = (pSVar7->fields)._.value.x;
    fStack_4 = (pSVar7->fields)._.value.y;
    fStack_5 = (pSVar7->fields)._.value.z;
    fStack_6 = (pSVar7->fields)._.value.w;
    if ((b != (SpawnRoleVariable_1_UnityEngine_Quaternion_ *)0x0) &&
       (pSVar7 = (b->fields).subscribableVariable,
       pSVar7 != (SubscribableVariable_1_UnityEngine_Quaternion_ *)0x0)) {
      if (((uint)pMVar2->klass->vtable[0].methodPtr & 0x100) == 0) {
        func_?(pMVar2->klass);
      }
      fStack_8 = (pSVar7->fields)._.value.x;
      fStack_9 = (pSVar7->fields)._.value.y;
      fStack_10 = (pSVar7->fields)._.value.z;
      fStack_11 = (pSVar7->fields)._.value.w;
      pIVar1 = pMVar2->klass;
      if (((uint)pIVar1->vtable[0].methodPtr & 0x100) == 0) {
        pIVar1 = (Il2CppClass *)func_?(pIVar1);
      }
      uVar12 = func_?(pIVar1->rgctx_data[9].rgctxDataDummy,&fStack_8);
      pIVar1 = pMVar2->klass;
      if (((uint)pIVar1->vtable[0].methodPtr & 0x100) == 0) {
        pIVar1 = (Il2CppClass *)func_?(pIVar1);
      }
      bVar13 = func_?(&fStack_3,uVar12,pIVar1->rgctx_data[0x10].rgctxDataDummy);
      return bVar13 ^ 1;
    }
  }
  func_?();
  pcVar14 = (code *)swi(3);
  bVar15 = (*pcVar14)();
  return bVar15;
}

