
/* Boolean Equals(SpawnRoleVariable`1[System.ByteEnum]) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[System::ByteEnum]::
     SpawnRoleVariable_1_System_ByteEnum__Equals
               (SpawnRoleVariable_1_System_ByteEnum_ *this,
               SpawnRoleVariable_1_System_ByteEnum_ *other,MethodInfo *method)

{
  pMVar1 = method;
  pSVar2 = (this->fields).subscribableVariable;
  if (pSVar2 != (SubscribableVariable_1_System_ByteEnum_ *)0x0) {
    uVar3 = (pSVar2->fields)._.value;
    if ((other != (SpawnRoleVariable_1_System_ByteEnum_ *)0x0) &&
       (pSVar2 = (other->fields).subscribableVariable,
       pSVar2 != (SubscribableVariable_1_System_ByteEnum_ *)0x0)) {
      this = (SpawnRoleVariable_1_System_ByteEnum_ *)CONCAT13((pSVar2->fields)._.value,this._0_3_);
      obj = (Object *)func_?(method->klass->rgctx_data[9].rgctxDataDummy,(int)&this + 3);
      VStack_4.klass = (ValueType__Class *)pMVar1->klass->rgctx_data[9].klass;
      if (((uint)((Il2CppClass *)VStack_4.klass)->vtable[0].methodPtr & 0x100) == 0) {
        VStack_4.klass = (ValueType__Class *)func_?(VStack_4.klass);
      }
      VStack_4.monitor = (MonitorData *)0xffffffff;
      uStack_5 = uVar3;
      bVar6 = mscorlib.dll::System::ValueType::ValueType_Equals(&VStack_4,obj,(MethodInfo *)0x0);
      return bVar6;
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  bVar6 = (*pcVar7)();
  return bVar6;
}


/* Boolean Equals(Object) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[System::ByteEnum]::
     SpawnRoleVariable_1_System_ByteEnum__Equals_1
               (SpawnRoleVariable_1_System_ByteEnum_ *this,Object *obj,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Type);
    cRam_? = '\x01';
  }
  if (obj == (Object *)0x0) {
    return 0;
  }
  if (this == (SpawnRoleVariable_1_System_ByteEnum_ *)obj) {
    return 1;
  }
  left = (XNamespace *)mscorlib.dll::System::Object::Object_GetType(obj,(MethodInfo *)0x0);
  if (this != (SpawnRoleVariable_1_System_ByteEnum_ *)0x0) {
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
    pIVar2 = (Il2CppClass *)method->klass->rgctx_data[1].method;
    pIVar3 = method->klass->rgctx_data->klass;
    if (((uint)pIVar3->vtable[0].methodPtr & 0x100) == 0) {
      pIVar2 = pIVar3;
      pIVar3 = (Il2CppClass *)func_?();
    }
    if (((obj->klass->_1).naturalAligment < pIVar3->naturalAligment) ||
       ((obj->klass->_1).typeHierarchy[pIVar3->naturalAligment - 1] != pIVar3))
    goto code_?;
    pSVar4 = (this->fields).subscribableVariable;
    if ((pSVar4 != (SubscribableVariable_1_System_ByteEnum_ *)0x0) &&
       (uVar5 = (pSVar4->fields)._.value, obj[1].klass != (Object__Class *)0x0)) {
      uVar6 = func_?();
      if ((*(byte *)(*(int *)(*(int *)((pIVar2->byval_arg).data.__klassIndex + 0x60) + 0x24) + 0xbd)
          & 1) == 0) {
        func_?();
      }
      bVar1 = mscorlib.dll::System::ValueType::ValueType_Equals
                        ((ValueType *)0xffffffff,(Object *)CONCAT31((int3)((uint)uVar6 >> 8),uVar5),
                         (MethodInfo *)0x0);
      return bVar1;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  bVar1 = (*pcVar7)();
  return bVar1;
}


/* Int32 GetHashCode() */

int32_t Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
        SpawnRoleVariableTypes::SpawnRoleVariable`1[System::ByteEnum]::
        SpawnRoleVariable_1_System_ByteEnum__GetHashCode
                  (SpawnRoleVariable_1_System_ByteEnum_ *this,MethodInfo *method)

{
  bVar1 = SubscribableVariableBase`1[System::ByteEnum]::
          SubscribableVariableBase_1_System_ByteEnum__op_Inequality_2
                    ((SubscribableVariableBase_1_System_ByteEnum_ *)
                     (this->fields).subscribableVariable,
                     (SubscribableVariableBase_1_System_ByteEnum_ *)0x0,
                     method->klass->rgctx_data[3].method);
  if (bVar1 == 0) {
    return 0;
  }
  pSVar2 = (this->fields).subscribableVariable;
  if (pSVar2 != (SubscribableVariable_1_System_ByteEnum_ *)0x0) {
    iVar3 = (*(code *)(pSVar2->klass->vtable).GetHashCode.method)(pSVar2);
    return iVar3;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  iVar3 = (*pcVar4)();
  return iVar3;
}


/* SpawnRoleVariable`1[System.ByteEnum](ByteEnum) */

void Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[System::ByteEnum]::
     SpawnRoleVariable_1_System_ByteEnum___ctor
               (SpawnRoleVariable_1_System_ByteEnum_ *this,ByteEnum__Enum value,MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  pIVar1 = method->klass->rgctx_data[2].klass;
  if (((uint)pIVar1->vtable[0].methodPtr & 0x100) == 0) {
    pIVar1 = (Il2CppClass *)func_?(pIVar1);
  }
  this_01 = (SubscribableVariable_1_System_ByteEnum_ *)func_?(pIVar1);
  SubscribableVariable`1[System::ByteEnum]::SubscribableVariable_1_System_ByteEnum___ctor
            (this_01,value,method->klass->rgctx_data[10].method);
  (this->fields).subscribableVariable = this_01;
  func_?(&this->fields,this_01);
  this_00 = (SubscribableVariableBase_1_System_Single_ *)(this->fields).subscribableVariable;
  if (((uint)(method->klass->rgctx_data[0xc].klass)->vtable[0].methodPtr & 0x100) == 0) {
    func_?();
  }
  this_02 = (UnityAction_1_System_Int32Enum_ *)func_?();
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
  UnityAction_1_System_Int32Enum___ctor
            (this_02,(Object *)this,method->klass->rgctx_data[0xb].rgctxDataDummy,
             method->klass->rgctx_data[0xd].method);
  if (this_00 != (SubscribableVariableBase_1_System_Single_ *)0x0) {
    SubscribableVariableBase`1[System::Single]::
    SubscribableVariableBase_1_System_Single__add_OnChange
              (this_00,(Action_1_Single_ *)this_02,method->klass->rgctx_data[0xe].method);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* ByteEnum get_Value() */

ByteEnum__Enum
Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
SpawnRoleVariableTypes::SpawnRoleVariable`1[System::ByteEnum]::
SpawnRoleVariable_1_System_ByteEnum__get_Value
          (SpawnRoleVariable_1_System_ByteEnum_ *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pSVar2 = (this->fields).subscribableVariable;
  if (pSVar2 != (SubscribableVariable_1_System_ByteEnum_ *)0x0) {
    return CONCAT31((int3)((uint)pSVar2 >> 8),(pSVar2->fields)._.value);
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  BVar6 = (*pcVar5)();
  return BVar6;
}


/* Boolean op_Equality(ByteEnum, SpawnRoleVariable`1[System.ByteEnum]) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[System::ByteEnum]::
     SpawnRoleVariable_1_System_ByteEnum__op_Equality
               (ByteEnum__Enum b,SpawnRoleVariable_1_System_ByteEnum_ *a,MethodInfo *method)

{
  pMVar1 = method;
  if (a != (SpawnRoleVariable_1_System_ByteEnum_ *)0x0) {
    pSVar2 = (a->fields).subscribableVariable;
    if (pSVar2 != (SubscribableVariable_1_System_ByteEnum_ *)0x0) {
      if (((uint)method->klass->vtable[0].methodPtr & 0x100) == 0) {
        func_?(method->klass);
      }
      a = (SpawnRoleVariable_1_System_ByteEnum_ *)CONCAT13((pSVar2->fields)._.value,a._0_3_);
      pIVar3 = pMVar1->klass;
      if (((uint)pIVar3->vtable[0].methodPtr & 0x100) == 0) {
        pIVar3 = (Il2CppClass *)func_?(pIVar3);
      }
      obj = (Object *)func_?(pIVar3->rgctx_data[9].rgctxDataDummy,(int)&a + 3);
      pIVar3 = pMVar1->klass;
      if (((uint)pIVar3->vtable[0].methodPtr & 0x100) == 0) {
        pIVar3 = (Il2CppClass *)func_?(pIVar3);
      }
      pIVar3 = pIVar3->rgctx_data[9].klass;
      if (((uint)pIVar3->vtable[0].methodPtr & 0x100) == 0) {
        pIVar3 = (Il2CppClass *)func_?(pIVar3);
      }
      uStack_4 = (undefined1)b;
      VStack_5.monitor = (MonitorData *)0xffffffff;
      VStack_5.klass = (ValueType__Class *)pIVar3;
      bVar6 = mscorlib.dll::System::ValueType::ValueType_Equals(&VStack_5,obj,(MethodInfo *)0x0);
      return bVar6;
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  bVar6 = (*pcVar7)();
  return bVar6;
}


/* Boolean op_Equality(SpawnRoleVariable`1[System.ByteEnum], ByteEnum) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[System::ByteEnum]::
     SpawnRoleVariable_1_System_ByteEnum__op_Equality_1
               (SpawnRoleVariable_1_System_ByteEnum_ *a,ByteEnum__Enum b,MethodInfo *method)

{
  pMVar1 = method;
  if (a != (SpawnRoleVariable_1_System_ByteEnum_ *)0x0) {
    pSVar2 = (a->fields).subscribableVariable;
    if (pSVar2 != (SubscribableVariable_1_System_ByteEnum_ *)0x0) {
      if (((uint)method->klass->vtable[0].methodPtr & 0x100) == 0) {
        func_?(method->klass);
      }
      a = (SpawnRoleVariable_1_System_ByteEnum_ *)CONCAT13((pSVar2->fields)._.value,a._0_3_);
      pIVar3 = pMVar1->klass;
      if (((uint)pIVar3->vtable[0].methodPtr & 0x100) == 0) {
        pIVar3 = (Il2CppClass *)func_?(pIVar3);
      }
      obj = (Object *)func_?(pIVar3->rgctx_data[9].rgctxDataDummy,(int)&a + 3);
      pIVar3 = pMVar1->klass;
      if (((uint)pIVar3->vtable[0].methodPtr & 0x100) == 0) {
        pIVar3 = (Il2CppClass *)func_?(pIVar3);
      }
      pIVar3 = pIVar3->rgctx_data[9].klass;
      if (((uint)pIVar3->vtable[0].methodPtr & 0x100) == 0) {
        pIVar3 = (Il2CppClass *)func_?(pIVar3);
      }
      uStack_4 = (undefined1)b;
      VStack_5.monitor = (MonitorData *)0xffffffff;
      VStack_5.klass = (ValueType__Class *)pIVar3;
      bVar6 = mscorlib.dll::System::ValueType::ValueType_Equals(&VStack_5,obj,(MethodInfo *)0x0);
      return bVar6;
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  bVar6 = (*pcVar7)();
  return bVar6;
}


/* Boolean op_Equality(SpawnRoleVariable`1[System.ByteEnum], SpawnRoleVariable`1[System.ByteEnum])
    */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[System::ByteEnum]::
     SpawnRoleVariable_1_System_ByteEnum__op_Equality_2
               (SpawnRoleVariable_1_System_ByteEnum_ *a,SpawnRoleVariable_1_System_ByteEnum_ *b,
               MethodInfo *method)

{
  pMVar1 = method;
  if (a != (SpawnRoleVariable_1_System_ByteEnum_ *)0x0) {
    pSVar2 = (a->fields).subscribableVariable;
    if (pSVar2 != (SubscribableVariable_1_System_ByteEnum_ *)0x0) {
      if (((uint)method->klass->vtable[0].methodPtr & 0x100) == 0) {
        func_?(method->klass);
      }
      uVar3 = (pSVar2->fields)._.value;
      if ((b != (SpawnRoleVariable_1_System_ByteEnum_ *)0x0) &&
         (pSVar2 = (b->fields).subscribableVariable,
         pSVar2 != (SubscribableVariable_1_System_ByteEnum_ *)0x0)) {
        if (((uint)pMVar1->klass->vtable[0].methodPtr & 0x100) == 0) {
          func_?(pMVar1->klass);
        }
        a = (SpawnRoleVariable_1_System_ByteEnum_ *)CONCAT13((pSVar2->fields)._.value,a._0_3_);
        pIVar4 = pMVar1->klass;
        if (((uint)pIVar4->vtable[0].methodPtr & 0x100) == 0) {
          pIVar4 = (Il2CppClass *)func_?(pIVar4);
        }
        obj = (Object *)func_?(pIVar4->rgctx_data[9].rgctxDataDummy,(int)&a + 3);
        pIVar4 = pMVar1->klass;
        if (((uint)pIVar4->vtable[0].methodPtr & 0x100) == 0) {
          pIVar4 = (Il2CppClass *)func_?(pIVar4);
        }
        pIVar4 = pIVar4->rgctx_data[9].klass;
        if (((uint)pIVar4->vtable[0].methodPtr & 0x100) == 0) {
          pIVar4 = (Il2CppClass *)func_?(pIVar4);
        }
        VStack_5.monitor = (MonitorData *)0xffffffff;
        VStack_5.klass = (ValueType__Class *)pIVar4;
        uStack_6 = uVar3;
        bVar7 = mscorlib.dll::System::ValueType::ValueType_Equals(&VStack_5,obj,(MethodInfo *)0x0);
        return bVar7;
      }
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  bVar7 = (*pcVar8)();
  return bVar7;
}


/* ByteEnum op_Implicit(SpawnRoleVariable`1[System.ByteEnum]) */

ByteEnum__Enum
Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
SpawnRoleVariableTypes::SpawnRoleVariable`1[System::ByteEnum]::
SpawnRoleVariable_1_System_ByteEnum__op_Implicit
          (SpawnRoleVariable_1_System_ByteEnum_ *s,MethodInfo *method)

{
  if (s != (SpawnRoleVariable_1_System_ByteEnum_ *)0x0) {
    pSVar1 = (s->fields).subscribableVariable;
    if (pSVar1 != (SubscribableVariable_1_System_ByteEnum_ *)0x0) {
      pIVar2 = method->klass;
      if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
        pIVar2 = (Il2CppClass *)func_?(pIVar2);
      }
      return CONCAT31((int3)((uint)pIVar2 >> 8),(pSVar1->fields)._.value);
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  BVar4 = (*pcVar3)();
  return BVar4;
}


/* Boolean op_Inequality(ByteEnum, SpawnRoleVariable`1[System.ByteEnum]) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[System::ByteEnum]::
     SpawnRoleVariable_1_System_ByteEnum__op_Inequality
               (ByteEnum__Enum b,SpawnRoleVariable_1_System_ByteEnum_ *a,MethodInfo *method)

{
  pMVar1 = method;
  if (a != (SpawnRoleVariable_1_System_ByteEnum_ *)0x0) {
    pSVar2 = (a->fields).subscribableVariable;
    if (pSVar2 != (SubscribableVariable_1_System_ByteEnum_ *)0x0) {
      if (((uint)method->klass->vtable[0].methodPtr & 0x100) == 0) {
        func_?(method->klass);
      }
      a = (SpawnRoleVariable_1_System_ByteEnum_ *)CONCAT13((pSVar2->fields)._.value,a._0_3_);
      pIVar3 = pMVar1->klass;
      if (((uint)pIVar3->vtable[0].methodPtr & 0x100) == 0) {
        pIVar3 = (Il2CppClass *)func_?(pIVar3);
      }
      obj = (Object *)func_?(pIVar3->rgctx_data[9].rgctxDataDummy,(int)&a + 3);
      pIVar3 = pMVar1->klass;
      if (((uint)pIVar3->vtable[0].methodPtr & 0x100) == 0) {
        pIVar3 = (Il2CppClass *)func_?(pIVar3);
      }
      pIVar3 = pIVar3->rgctx_data[9].klass;
      if (((uint)pIVar3->vtable[0].methodPtr & 0x100) == 0) {
        pIVar3 = (Il2CppClass *)func_?(pIVar3);
      }
      uStack_4 = (undefined1)b;
      VStack_5.monitor = (MonitorData *)0xffffffff;
      VStack_5.klass = (ValueType__Class *)pIVar3;
      bVar6 = mscorlib.dll::System::ValueType::ValueType_Equals(&VStack_5,obj,(MethodInfo *)0x0);
      return bVar6 ^ 1;
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  bVar6 = (*pcVar7)();
  return bVar6;
}


/* Boolean op_Inequality(SpawnRoleVariable`1[System.ByteEnum], ByteEnum) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[System::ByteEnum]::
     SpawnRoleVariable_1_System_ByteEnum__op_Inequality_1
               (SpawnRoleVariable_1_System_ByteEnum_ *a,ByteEnum__Enum b,MethodInfo *method)

{
  pMVar1 = method;
  if (a != (SpawnRoleVariable_1_System_ByteEnum_ *)0x0) {
    pSVar2 = (a->fields).subscribableVariable;
    if (pSVar2 != (SubscribableVariable_1_System_ByteEnum_ *)0x0) {
      if (((uint)method->klass->vtable[0].methodPtr & 0x100) == 0) {
        func_?(method->klass);
      }
      a = (SpawnRoleVariable_1_System_ByteEnum_ *)CONCAT13((pSVar2->fields)._.value,a._0_3_);
      pIVar3 = pMVar1->klass;
      if (((uint)pIVar3->vtable[0].methodPtr & 0x100) == 0) {
        pIVar3 = (Il2CppClass *)func_?(pIVar3);
      }
      obj = (Object *)func_?(pIVar3->rgctx_data[9].rgctxDataDummy,(int)&a + 3);
      pIVar3 = pMVar1->klass;
      if (((uint)pIVar3->vtable[0].methodPtr & 0x100) == 0) {
        pIVar3 = (Il2CppClass *)func_?(pIVar3);
      }
      pIVar3 = pIVar3->rgctx_data[9].klass;
      if (((uint)pIVar3->vtable[0].methodPtr & 0x100) == 0) {
        pIVar3 = (Il2CppClass *)func_?(pIVar3);
      }
      uStack_4 = (undefined1)b;
      VStack_5.monitor = (MonitorData *)0xffffffff;
      VStack_5.klass = (ValueType__Class *)pIVar3;
      bVar6 = mscorlib.dll::System::ValueType::ValueType_Equals(&VStack_5,obj,(MethodInfo *)0x0);
      return bVar6 ^ 1;
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  bVar6 = (*pcVar7)();
  return bVar6;
}


/* Boolean op_Inequality(SpawnRoleVariable`1[System.ByteEnum], SpawnRoleVariable`1[System.ByteEnum])
    */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[System::ByteEnum]::
     SpawnRoleVariable_1_System_ByteEnum__op_Inequality_2
               (SpawnRoleVariable_1_System_ByteEnum_ *a,SpawnRoleVariable_1_System_ByteEnum_ *b,
               MethodInfo *method)

{
  pIVar1 = method->klass;
  if (((uint)pIVar1->vtable[0].methodPtr & 0x100) == 0) {
    pIVar1 = (Il2CppClass *)func_?(pIVar1);
  }
  pMVar2 = pIVar1->rgctx_data[0x11].method;
  if ((a != (SpawnRoleVariable_1_System_ByteEnum_ *)0x0) &&
     (pSVar3 = (a->fields).subscribableVariable,
     pSVar3 != (SubscribableVariable_1_System_ByteEnum_ *)0x0)) {
    if (((uint)pMVar2->klass->vtable[0].methodPtr & 0x100) == 0) {
      func_?(pMVar2->klass);
    }
    uVar4 = (pSVar3->fields)._.value;
    if ((b != (SpawnRoleVariable_1_System_ByteEnum_ *)0x0) &&
       (pSVar3 = (b->fields).subscribableVariable,
       pSVar3 != (SubscribableVariable_1_System_ByteEnum_ *)0x0)) {
      if (((uint)pMVar2->klass->vtable[0].methodPtr & 0x100) == 0) {
        func_?(pMVar2->klass);
      }
      method = (MethodInfo *)CONCAT13((pSVar3->fields)._.value,method._0_3_);
      pIVar1 = pMVar2->klass;
      if (((uint)pIVar1->vtable[0].methodPtr & 0x100) == 0) {
        pIVar1 = (Il2CppClass *)func_?(pIVar1);
      }
      obj = (Object *)func_?(pIVar1->rgctx_data[9].rgctxDataDummy,(int)&method + 3);
      pIVar1 = pMVar2->klass;
      if (((uint)pIVar1->vtable[0].methodPtr & 0x100) == 0) {
        pIVar1 = (Il2CppClass *)func_?(pIVar1);
      }
      pIVar1 = pIVar1->rgctx_data[9].klass;
      if (((uint)pIVar1->vtable[0].methodPtr & 0x100) == 0) {
        pIVar1 = (Il2CppClass *)func_?(pIVar1);
      }
      VStack_5.monitor = (MonitorData *)0xffffffff;
      VStack_5.klass = (ValueType__Class *)pIVar1;
      uStack_6 = uVar4;
      bVar7 = mscorlib.dll::System::ValueType::ValueType_Equals(&VStack_5,obj,(MethodInfo *)0x0);
      return bVar7 ^ 1;
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  bVar7 = (*pcVar8)();
  return bVar7;
}

