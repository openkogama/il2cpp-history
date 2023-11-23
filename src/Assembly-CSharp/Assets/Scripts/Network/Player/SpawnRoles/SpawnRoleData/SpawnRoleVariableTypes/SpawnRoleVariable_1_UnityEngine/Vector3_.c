
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
    fStack_3 = (pSVar1->fields)._.value.z;
    if ((other != (SpawnRoleVariable_1_UnityEngine_Vector3_ *)0x0) &&
       (pSVar1 = (other->fields).subscribableVariable,
       pSVar1 != (SubscribableVariable_1_UnityEngine_Vector3_ *)0x0)) {
      uStack_4._0_4_ = (pSVar1->fields)._.value.x;
      uStack_4._4_4_ = (pSVar1->fields)._.value.y;
      fStack_5 = (pSVar1->fields)._.value.z;
      uVar6 = func_?(method->klass->rgctx_data[9].rgctxDataDummy,&uStack_4);
      bVar7 = func_?(&uStack_2,uVar6,method->klass->rgctx_data[0x10].rgctxDataDummy);
      return bVar7;
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  bVar7 = (*pcVar8)();
  return bVar7;
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
  left = (XNamespace *)mscorlib.dll::System::Object::Object_GetType(obj,(MethodInfo *)0x0);
  if (this != (SpawnRoleVariable_1_UnityEngine_Vector3_ *)0x0) {
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
      _pIStack_10 = CONCAT44(uStack_3,pIVar2);
      pIVar2 = (Il2CppClass *)func_?();
    }
    if (((obj->klass->_1).naturalAligment < pIVar2->naturalAligment) ||
       ((obj->klass->_1).typeHierarchy[pIVar2->naturalAligment - 1] != pIVar2))
    goto code_?;
    if (((this->fields).subscribableVariable != (SubscribableVariable_1_UnityEngine_Vector3_ *)0x0)
       && (pOVar4 = obj[1].klass, pOVar4 != (Object__Class *)0x0)) {
      uVar5 = (pOVar4->_0).namespaze;
      _Stack_8 = (pOVar4->_0).byval_arg.data;
      _pIStack_10 = CONCAT44(uVar5,&pIStack_6);
      func_?();
      bVar1 = func_?(&stack0xffffffe4);
      return bVar1;
    }
  }
  _pIStack_10 = CONCAT44(uStack_3,&UNK_?);
  pIVar2 = (Il2CppClass *)func_?();
code_?:
  _pIStack_10 = CONCAT44(uStack_3,pIVar2);
  func_?();
  pcVar7 = (code *)swi(3);
  bVar1 = (*pcVar7)();
  return bVar1;
}


/* Int32 GetHashCode() */

int32_t Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
        SpawnRoleVariableTypes::SpawnRoleVariable`1[UnityEngine::Vector3]::
        SpawnRoleVariable_1_UnityEngine_Vector3__GetHashCode
                  (SpawnRoleVariable_1_UnityEngine_Vector3_ *this,MethodInfo *method)

{
  bVar1 = SubscribableVariableBase`1[UnityEngine::Vector3]::
          SubscribableVariableBase_1_UnityEngine_Vector3__op_Inequality_2
                    ((SubscribableVariableBase_1_UnityEngine_Vector3_ *)
                     (this->fields).subscribableVariable,
                     (SubscribableVariableBase_1_UnityEngine_Vector3_ *)0x0,
                     method->klass->rgctx_data[3].method);
  if (bVar1 == 0) {
    return 0;
  }
  pSVar2 = (this->fields).subscribableVariable;
  if (pSVar2 != (SubscribableVariable_1_UnityEngine_Vector3_ *)0x0) {
    iVar3 = (*(code *)(pSVar2->klass->vtable).GetHashCode.method)(pSVar2);
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
    pSVar1 = (this->fields).OnChange;
    (*(pSVar1->fields)._._.invoke_impl)
              ((pSVar1->fields)._._.method_code,value._0_8_,value.z,(pSVar1->fields)._._.method);
  }
  return;
}


/* SpawnRoleVariable`1[UnityEngine.Vector3](Vector3) */

void Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[UnityEngine::Vector3]::
     SpawnRoleVariable_1_UnityEngine_Vector3___ctor
               (SpawnRoleVariable_1_UnityEngine_Vector3_ *this,Vector3 value,MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  pIVar1 = method->klass->rgctx_data[2].klass;
  if (((uint)pIVar1->vtable[0].methodPtr & 0x100) == 0) {
    pIVar1 = (Il2CppClass *)func_?(pIVar1);
  }
  this_00 = (SubscribableVariable_1_UnityEngine_Vector3_ *)func_?(pIVar1);
  SubscribableVariable`1[UnityEngine::Vector3]::SubscribableVariable_1_UnityEngine_Vector3___ctor
            (this_00,value,method->klass->rgctx_data[10].method);
  (this->fields).subscribableVariable = this_00;
  func_?(&this->fields,this_00);
  if (((uint)(method->klass->rgctx_data[0xc].klass)->vtable[0].methodPtr & 0x100) == 0) {
    func_?();
  }
  this_01 = (SpawnRoleVariable_1_T_SubDelegate_UnityEngine_Vector3_ *)func_?();
  method_00 = method->klass->rgctx_data[0xd].method;
  SpawnRoleVariable`1[T]+SubDelegate[UnityEngine::Vector3]::
  SpawnRoleVariable_1_T_SubDelegate_UnityEngine_Vector3___ctor
            (this_01,(Object *)this,method->klass->rgctx_data[0xb].rgctxDataDummy,method_00);
  if (method_00 != (MethodInfo *)0x0) {
    SubscribableVariableBase`1[UnityEngine::Vector3]::
    SubscribableVariableBase_1_UnityEngine_Vector3__add_OnChange
              ((SubscribableVariableBase_1_UnityEngine_Vector3_ *)method_00,
               (Action_1_UnityEngine_Vector3_ *)this_01,method->klass->rgctx_data[0xe].method);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Vector3 get_Value() */

Vector3 * Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
          SpawnRoleVariableTypes::SpawnRoleVariable`1[UnityEngine::Vector3]::
          SpawnRoleVariable_1_UnityEngine_Vector3__get_Value
                    (Vector3 *__return_storage_ptr__,SpawnRoleVariable_1_UnityEngine_Vector3_ *this,
                    MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pSVar2 = (this->fields).subscribableVariable;
  if (pSVar2 != (SubscribableVariable_1_UnityEngine_Vector3_ *)0x0) {
    fVar3 = (pSVar2->fields)._.value.y;
    fVar4 = (pSVar2->fields)._.value.z;
    __return_storage_ptr__->x = (pSVar2->fields)._.value.x;
    __return_storage_ptr__->y = fVar3;
    __return_storage_ptr__->z = fVar4;
    return __return_storage_ptr__;
  }
  uVar5 = func_?(auStack_6);
  func_?(uVar5);
  pcVar7 = (code *)swi(3);
  pVVar8 = (Vector3 *)(*pcVar7)();
  return pVVar8;
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
      if (((uint)method->klass->vtable[0].methodPtr & 0x100) == 0) {
        func_?(method->klass);
      }
      uStack_2._0_4_ = (pSVar1->fields)._.value.x;
      uStack_2._4_4_ = (pSVar1->fields)._.value.y;
      fStack_3 = (pSVar1->fields)._.value.z;
      pIVar4 = method->klass;
      if (((uint)pIVar4->vtable[0].methodPtr & 0x100) == 0) {
        pIVar4 = (Il2CppClass *)func_?(pIVar4);
      }
      uVar5 = func_?(pIVar4->rgctx_data[9].rgctxDataDummy,&uStack_2);
      pIVar4 = method->klass;
      if (((uint)pIVar4->vtable[0].methodPtr & 0x100) == 0) {
        pIVar4 = (Il2CppClass *)func_?(pIVar4);
      }
      bVar6 = func_?(&b,uVar5,pIVar4->rgctx_data[0x10].rgctxDataDummy);
      return bVar6;
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  bVar6 = (*pcVar7)();
  return bVar6;
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
      if (((uint)method->klass->vtable[0].methodPtr & 0x100) == 0) {
        func_?(method->klass);
      }
      uStack_2._0_4_ = (pSVar1->fields)._.value.x;
      uStack_2._4_4_ = (pSVar1->fields)._.value.y;
      fStack_3 = (pSVar1->fields)._.value.z;
      pIVar4 = method->klass;
      if (((uint)pIVar4->vtable[0].methodPtr & 0x100) == 0) {
        pIVar4 = (Il2CppClass *)func_?(pIVar4);
      }
      uVar5 = func_?(pIVar4->rgctx_data[9].rgctxDataDummy,&uStack_2);
      pIVar4 = method->klass;
      if (((uint)pIVar4->vtable[0].methodPtr & 0x100) == 0) {
        pIVar4 = (Il2CppClass *)func_?(pIVar4);
      }
      bVar6 = func_?(&b,uVar5,pIVar4->rgctx_data[0x10].rgctxDataDummy);
      return bVar6;
    }
  }
  func_?();
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
  if (a != (SpawnRoleVariable_1_UnityEngine_Vector3_ *)0x0) {
    pSVar1 = (a->fields).subscribableVariable;
    if (pSVar1 != (SubscribableVariable_1_UnityEngine_Vector3_ *)0x0) {
      if (((uint)method->klass->vtable[0].methodPtr & 0x100) == 0) {
        func_?(method->klass);
      }
      uStack_2._0_4_ = (pSVar1->fields)._.value.x;
      uStack_2._4_4_ = (pSVar1->fields)._.value.y;
      fStack_3 = (pSVar1->fields)._.value.z;
      if ((b != (SpawnRoleVariable_1_UnityEngine_Vector3_ *)0x0) &&
         (pSVar1 = (b->fields).subscribableVariable,
         pSVar1 != (SubscribableVariable_1_UnityEngine_Vector3_ *)0x0)) {
        if (((uint)method->klass->vtable[0].methodPtr & 0x100) == 0) {
          func_?(method->klass);
        }
        uStack_4._0_4_ = (pSVar1->fields)._.value.x;
        uStack_4._4_4_ = (pSVar1->fields)._.value.y;
        fStack_5 = (pSVar1->fields)._.value.z;
        pIVar6 = method->klass;
        if (((uint)pIVar6->vtable[0].methodPtr & 0x100) == 0) {
          pIVar6 = (Il2CppClass *)func_?(pIVar6);
        }
        uVar7 = func_?(pIVar6->rgctx_data[9].rgctxDataDummy,&uStack_4);
        pIVar6 = method->klass;
        if (((uint)pIVar6->vtable[0].methodPtr & 0x100) == 0) {
          pIVar6 = (Il2CppClass *)func_?(pIVar6);
        }
        bVar8 = func_?(&uStack_2,uVar7,pIVar6->rgctx_data[0x10].rgctxDataDummy);
        return bVar8;
      }
    }
  }
  func_?();
  pcVar9 = (code *)swi(3);
  bVar8 = (*pcVar9)();
  return bVar8;
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
      if (((uint)method->klass->vtable[0].methodPtr & 0x100) == 0) {
        func_?(method->klass);
      }
      fVar2 = (pSVar1->fields)._.value.y;
      fVar3 = (pSVar1->fields)._.value.z;
      __return_storage_ptr__->x = (pSVar1->fields)._.value.x;
      __return_storage_ptr__->y = fVar2;
      __return_storage_ptr__->z = fVar3;
      return __return_storage_ptr__;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  pVVar5 = (Vector3 *)(*pcVar4)();
  return pVVar5;
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
      if (((uint)method->klass->vtable[0].methodPtr & 0x100) == 0) {
        func_?(method->klass);
      }
      uStack_2._0_4_ = (pSVar1->fields)._.value.x;
      uStack_2._4_4_ = (pSVar1->fields)._.value.y;
      fStack_3 = (pSVar1->fields)._.value.z;
      pIVar4 = method->klass;
      if (((uint)pIVar4->vtable[0].methodPtr & 0x100) == 0) {
        pIVar4 = (Il2CppClass *)func_?(pIVar4);
      }
      uVar5 = func_?(pIVar4->rgctx_data[9].rgctxDataDummy,&uStack_2);
      pIVar4 = method->klass;
      if (((uint)pIVar4->vtable[0].methodPtr & 0x100) == 0) {
        pIVar4 = (Il2CppClass *)func_?(pIVar4);
      }
      bVar6 = func_?(&b,uVar5,pIVar4->rgctx_data[0x10].rgctxDataDummy);
      return bVar6 ^ 1;
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  bVar8 = (*pcVar7)();
  return bVar8;
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
      if (((uint)method->klass->vtable[0].methodPtr & 0x100) == 0) {
        func_?(method->klass);
      }
      uStack_2._0_4_ = (pSVar1->fields)._.value.x;
      uStack_2._4_4_ = (pSVar1->fields)._.value.y;
      fStack_3 = (pSVar1->fields)._.value.z;
      pIVar4 = method->klass;
      if (((uint)pIVar4->vtable[0].methodPtr & 0x100) == 0) {
        pIVar4 = (Il2CppClass *)func_?(pIVar4);
      }
      uVar5 = func_?(pIVar4->rgctx_data[9].rgctxDataDummy,&uStack_2);
      pIVar4 = method->klass;
      if (((uint)pIVar4->vtable[0].methodPtr & 0x100) == 0) {
        pIVar4 = (Il2CppClass *)func_?(pIVar4);
      }
      bVar6 = func_?(&b,uVar5,pIVar4->rgctx_data[0x10].rgctxDataDummy);
      return bVar6 ^ 1;
    }
  }
  func_?();
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
  if (((uint)pIVar1->vtable[0].methodPtr & 0x100) == 0) {
    pIVar1 = (Il2CppClass *)func_?(pIVar1);
  }
  pMVar2 = pIVar1->rgctx_data[0x11].method;
  if ((a != (SpawnRoleVariable_1_UnityEngine_Vector3_ *)0x0) &&
     (pSVar3 = (a->fields).subscribableVariable,
     pSVar3 != (SubscribableVariable_1_UnityEngine_Vector3_ *)0x0)) {
    if (((uint)pMVar2->klass->vtable[0].methodPtr & 0x100) == 0) {
      func_?(pMVar2->klass);
    }
    uStack_4._0_4_ = (pSVar3->fields)._.value.x;
    uStack_4._4_4_ = (pSVar3->fields)._.value.y;
    fStack_5 = (pSVar3->fields)._.value.z;
    if ((b != (SpawnRoleVariable_1_UnityEngine_Vector3_ *)0x0) &&
       (pSVar3 = (b->fields).subscribableVariable,
       pSVar3 != (SubscribableVariable_1_UnityEngine_Vector3_ *)0x0)) {
      if (((uint)pMVar2->klass->vtable[0].methodPtr & 0x100) == 0) {
        func_?(pMVar2->klass);
      }
      uStack_6._0_4_ = (pSVar3->fields)._.value.x;
      uStack_6._4_4_ = (pSVar3->fields)._.value.y;
      fStack_7 = (pSVar3->fields)._.value.z;
      pIVar1 = pMVar2->klass;
      if (((uint)pIVar1->vtable[0].methodPtr & 0x100) == 0) {
        pIVar1 = (Il2CppClass *)func_?(pIVar1);
      }
      uVar8 = func_?(pIVar1->rgctx_data[9].rgctxDataDummy,&uStack_6);
      pIVar1 = pMVar2->klass;
      if (((uint)pIVar1->vtable[0].methodPtr & 0x100) == 0) {
        pIVar1 = (Il2CppClass *)func_?(pIVar1);
      }
      bVar9 = func_?(&uStack_4,uVar8,pIVar1->rgctx_data[0x10].rgctxDataDummy);
      return bVar9 ^ 1;
    }
  }
  func_?();
  pcVar10 = (code *)swi(3);
  bVar11 = (*pcVar10)();
  return bVar11;
}

