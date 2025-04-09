
/* Boolean Equals(SpawnRoleVariable`1[System.Int32Enum]) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[System::Int32Enum]::
     SpawnRoleVariable_1_System_Int32Enum__Equals
               (SpawnRoleVariable_1_System_Int32Enum_ *this,
               SpawnRoleVariable_1_System_Int32Enum_ *other,MethodInfo *method)

{
  pMVar1 = method;
  pSVar2 = (this->fields).subscribableVariable;
  if (pSVar2 != (SubscribableVariable_1_System_Int32Enum_ *)0x0) {
    iVar3 = (pSVar2->fields)._.value;
    if ((other != (SpawnRoleVariable_1_System_Int32Enum_ *)0x0) &&
       (pSVar2 = (other->fields).subscribableVariable,
       pSVar2 != (SubscribableVariable_1_System_Int32Enum_ *)0x0)) {
      this = (SpawnRoleVariable_1_System_Int32Enum_ *)(pSVar2->fields)._.value;
      obj = (Object *)func_?(method->klass->rgctx_data[9].rgctxDataDummy,&this);
      VStack_4.klass = (ValueType__Class *)pMVar1->klass->rgctx_data[9].klass;
      if (((uint)((Il2CppClass *)VStack_4.klass)->vtable[0].methodPtr & 0x100) == 0) {
        VStack_4.klass = (ValueType__Class *)func_?(VStack_4.klass);
      }
      VStack_4.monitor = (MonitorData *)0xffffffff;
      iStack_5 = iVar3;
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
     SpawnRoleVariableTypes::SpawnRoleVariable`1[System::Int32Enum]::
     SpawnRoleVariable_1_System_Int32Enum__Equals_1
               (SpawnRoleVariable_1_System_Int32Enum_ *this,Object *obj,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Type);
    cRam_? = '\x01';
  }
  if (obj == (Object *)0x0) {
    return 0;
  }
  if (this == (SpawnRoleVariable_1_System_Int32Enum_ *)obj) {
    return 1;
  }
  left = (XNamespace *)mscorlib.dll::System::Object::Object_GetType(obj,(MethodInfo *)0x0);
  if (this != (SpawnRoleVariable_1_System_Int32Enum_ *)0x0) {
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
    pIVar2 = method->klass->rgctx_data;
    pMVar3 = pIVar2[1].method;
    pIVar4 = pIVar2->klass;
    if (((uint)pIVar4->vtable[0].methodPtr & 0x100) == 0) {
      pIVar4 = (Il2CppClass *)func_?();
    }
    if (((obj->klass->_1).naturalAligment < pIVar4->naturalAligment) ||
       ((obj->klass->_1).typeHierarchy[pIVar4->naturalAligment - 1] != pIVar4))
    goto code_?;
    pSVar5 = (this->fields).subscribableVariable;
    if ((pSVar5 != (SubscribableVariable_1_System_Int32Enum_ *)0x0) &&
       (obj_00 = (Object *)(pSVar5->fields)._.value, obj[1].klass != (Object__Class *)0x0)) {
      func_?();
      if (((uint)(pMVar3->klass->rgctx_data[9].klass)->vtable[0].methodPtr & 0x100) == 0) {
        func_?();
      }
      bVar1 = mscorlib.dll::System::ValueType::ValueType_Equals
                        ((ValueType *)0xffffffff,obj_00,(MethodInfo *)0x0);
      return bVar1;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  bVar1 = (*pcVar6)();
  return bVar1;
}


/* Int32 GetHashCode() */

int32_t Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
        SpawnRoleVariableTypes::SpawnRoleVariable`1[System::Int32Enum]::
        SpawnRoleVariable_1_System_Int32Enum__GetHashCode
                  (SpawnRoleVariable_1_System_Int32Enum_ *this,MethodInfo *method)

{
  bVar1 = SubscribableVariableBase`1[System::Int32Enum]::
          SubscribableVariableBase_1_System_Int32Enum__op_Inequality_2
                    ((SubscribableVariableBase_1_System_Int32Enum_ *)
                     (this->fields).subscribableVariable,
                     (SubscribableVariableBase_1_System_Int32Enum_ *)0x0,
                     method->klass->rgctx_data[3].method);
  if (bVar1 == 0) {
    return 0;
  }
  pSVar2 = (this->fields).subscribableVariable;
  if (pSVar2 != (SubscribableVariable_1_System_Int32Enum_ *)0x0) {
    iVar3 = (*(code *)(pSVar2->klass->vtable).GetHashCode.method)(pSVar2);
    return iVar3;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  iVar3 = (*pcVar4)();
  return iVar3;
}


/* SpawnRoleVariable`1[System.Int32Enum](Int32Enum) */

void Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[System::Int32Enum]::
     SpawnRoleVariable_1_System_Int32Enum___ctor
               (SpawnRoleVariable_1_System_Int32Enum_ *this,Int32Enum__Enum value,MethodInfo *method
               )

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  pIVar1 = method->klass->rgctx_data[2].klass;
  if (((uint)pIVar1->vtable[0].methodPtr & 0x100) == 0) {
    pIVar1 = (Il2CppClass *)func_?(pIVar1);
  }
  this_01 = (SubscribableVariable_1_System_Int32Enum_ *)func_?(pIVar1);
  SubscribableVariable`1[System::Int32Enum]::SubscribableVariable_1_System_Int32Enum___ctor
            (this_01,value,method->klass->rgctx_data[10].method);
  pSVar2 = &this->fields;
  pSVar2->subscribableVariable = this_01;
  func_?(pSVar2,this_01);
  this_00 = (SubscribableVariableBase_1_System_Single_ *)pSVar2->subscribableVariable;
  if (((uint)(method->klass->rgctx_data[0xc].klass)->vtable[0].methodPtr & 0x100) == 0) {
    func_?();
  }
  this_02 = (UnityAction_1_System_Int32Enum_ *)func_?();
  pIVar3 = method->klass->rgctx_data;
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
  UnityAction_1_System_Int32Enum___ctor
            (this_02,(Object *)this,pIVar3[0xb].rgctxDataDummy,pIVar3[0xd].method);
  if (this_00 != (SubscribableVariableBase_1_System_Single_ *)0x0) {
    SubscribableVariableBase`1[System::Single]::
    SubscribableVariableBase_1_System_Single__add_OnChange
              (this_00,(Action_1_Single_ *)this_02,method->klass->rgctx_data[0xe].method);
    return;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Boolean op_Equality(Int32Enum, SpawnRoleVariable`1[System.Int32Enum]) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[System::Int32Enum]::
     SpawnRoleVariable_1_System_Int32Enum__op_Equality
               (Int32Enum__Enum b,SpawnRoleVariable_1_System_Int32Enum_ *a,MethodInfo *method)

{
  pMVar1 = method;
  if (a != (SpawnRoleVariable_1_System_Int32Enum_ *)0x0) {
    pSVar2 = (a->fields).subscribableVariable;
    if (pSVar2 != (SubscribableVariable_1_System_Int32Enum_ *)0x0) {
      if (((uint)method->klass->vtable[0].methodPtr & 0x100) == 0) {
        func_?(method->klass);
      }
      a = (SpawnRoleVariable_1_System_Int32Enum_ *)(pSVar2->fields)._.value;
      pIVar3 = pMVar1->klass;
      if (((uint)pIVar3->vtable[0].methodPtr & 0x100) == 0) {
        pIVar3 = (Il2CppClass *)func_?(pIVar3);
      }
      obj = (Object *)func_?(pIVar3->rgctx_data[9].rgctxDataDummy,&a);
      pIVar3 = pMVar1->klass;
      if (((uint)pIVar3->vtable[0].methodPtr & 0x100) == 0) {
        pIVar3 = (Il2CppClass *)func_?(pIVar3);
      }
      pIVar3 = pIVar3->rgctx_data[9].klass;
      if (((uint)pIVar3->vtable[0].methodPtr & 0x100) == 0) {
        pIVar3 = (Il2CppClass *)func_?(pIVar3);
      }
      IStack_4 = b;
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


/* Boolean op_Equality(SpawnRoleVariable`1[System.Int32Enum], Int32Enum) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[System::Int32Enum]::
     SpawnRoleVariable_1_System_Int32Enum__op_Equality_1
               (SpawnRoleVariable_1_System_Int32Enum_ *a,Int32Enum__Enum b,MethodInfo *method)

{
  pMVar1 = method;
  if (a != (SpawnRoleVariable_1_System_Int32Enum_ *)0x0) {
    pSVar2 = (a->fields).subscribableVariable;
    if (pSVar2 != (SubscribableVariable_1_System_Int32Enum_ *)0x0) {
      if (((uint)method->klass->vtable[0].methodPtr & 0x100) == 0) {
        func_?(method->klass);
      }
      a = (SpawnRoleVariable_1_System_Int32Enum_ *)(pSVar2->fields)._.value;
      pIVar3 = pMVar1->klass;
      if (((uint)pIVar3->vtable[0].methodPtr & 0x100) == 0) {
        pIVar3 = (Il2CppClass *)func_?(pIVar3);
      }
      obj = (Object *)func_?(pIVar3->rgctx_data[9].rgctxDataDummy,&a);
      pIVar3 = pMVar1->klass;
      if (((uint)pIVar3->vtable[0].methodPtr & 0x100) == 0) {
        pIVar3 = (Il2CppClass *)func_?(pIVar3);
      }
      pIVar3 = pIVar3->rgctx_data[9].klass;
      if (((uint)pIVar3->vtable[0].methodPtr & 0x100) == 0) {
        pIVar3 = (Il2CppClass *)func_?(pIVar3);
      }
      IStack_4 = b;
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


/* Boolean op_Equality(SpawnRoleVariable`1[System.Int32Enum], SpawnRoleVariable`1[System.Int32Enum])
    */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[System::Int32Enum]::
     SpawnRoleVariable_1_System_Int32Enum__op_Equality_2
               (SpawnRoleVariable_1_System_Int32Enum_ *a,SpawnRoleVariable_1_System_Int32Enum_ *b,
               MethodInfo *method)

{
  pMVar1 = method;
  if (a != (SpawnRoleVariable_1_System_Int32Enum_ *)0x0) {
    pSVar2 = (a->fields).subscribableVariable;
    if (pSVar2 != (SubscribableVariable_1_System_Int32Enum_ *)0x0) {
      if (((uint)method->klass->vtable[0].methodPtr & 0x100) == 0) {
        func_?(method->klass);
      }
      iVar3 = (pSVar2->fields)._.value;
      if ((b != (SpawnRoleVariable_1_System_Int32Enum_ *)0x0) &&
         (pSVar2 = (b->fields).subscribableVariable,
         pSVar2 != (SubscribableVariable_1_System_Int32Enum_ *)0x0)) {
        if (((uint)pMVar1->klass->vtable[0].methodPtr & 0x100) == 0) {
          func_?(pMVar1->klass);
        }
        a = (SpawnRoleVariable_1_System_Int32Enum_ *)(pSVar2->fields)._.value;
        pIVar4 = pMVar1->klass;
        if (((uint)pIVar4->vtable[0].methodPtr & 0x100) == 0) {
          pIVar4 = (Il2CppClass *)func_?(pIVar4);
        }
        obj = (Object *)func_?(pIVar4->rgctx_data[9].rgctxDataDummy,&a);
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
        iStack_6 = iVar3;
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


/* Boolean op_Inequality(Int32Enum, SpawnRoleVariable`1[System.Int32Enum]) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[System::Int32Enum]::
     SpawnRoleVariable_1_System_Int32Enum__op_Inequality
               (Int32Enum__Enum b,SpawnRoleVariable_1_System_Int32Enum_ *a,MethodInfo *method)

{
  pMVar1 = method;
  if (a != (SpawnRoleVariable_1_System_Int32Enum_ *)0x0) {
    pSVar2 = (a->fields).subscribableVariable;
    if (pSVar2 != (SubscribableVariable_1_System_Int32Enum_ *)0x0) {
      if (((uint)method->klass->vtable[0].methodPtr & 0x100) == 0) {
        func_?(method->klass);
      }
      a = (SpawnRoleVariable_1_System_Int32Enum_ *)(pSVar2->fields)._.value;
      pIVar3 = pMVar1->klass;
      if (((uint)pIVar3->vtable[0].methodPtr & 0x100) == 0) {
        pIVar3 = (Il2CppClass *)func_?(pIVar3);
      }
      obj = (Object *)func_?(pIVar3->rgctx_data[9].rgctxDataDummy,&a);
      pIVar3 = pMVar1->klass;
      if (((uint)pIVar3->vtable[0].methodPtr & 0x100) == 0) {
        pIVar3 = (Il2CppClass *)func_?(pIVar3);
      }
      pIVar3 = pIVar3->rgctx_data[9].klass;
      if (((uint)pIVar3->vtable[0].methodPtr & 0x100) == 0) {
        pIVar3 = (Il2CppClass *)func_?(pIVar3);
      }
      IStack_4 = b;
      VStack_5.monitor = (MonitorData *)0xffffffff;
      VStack_5.klass = (ValueType__Class *)pIVar3;
      bVar6 = mscorlib.dll::System::ValueType::ValueType_Equals(&VStack_5,obj,(MethodInfo *)0x0);
      return bVar6 == 0;
    }
  }
  func_?();
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
  pMVar1 = method;
  if (a != (SpawnRoleVariable_1_System_Int32Enum_ *)0x0) {
    pSVar2 = (a->fields).subscribableVariable;
    if (pSVar2 != (SubscribableVariable_1_System_Int32Enum_ *)0x0) {
      if (((uint)method->klass->vtable[0].methodPtr & 0x100) == 0) {
        func_?(method->klass);
      }
      a = (SpawnRoleVariable_1_System_Int32Enum_ *)(pSVar2->fields)._.value;
      pIVar3 = pMVar1->klass;
      if (((uint)pIVar3->vtable[0].methodPtr & 0x100) == 0) {
        pIVar3 = (Il2CppClass *)func_?(pIVar3);
      }
      obj = (Object *)func_?(pIVar3->rgctx_data[9].rgctxDataDummy,&a);
      pIVar3 = pMVar1->klass;
      if (((uint)pIVar3->vtable[0].methodPtr & 0x100) == 0) {
        pIVar3 = (Il2CppClass *)func_?(pIVar3);
      }
      pIVar3 = pIVar3->rgctx_data[9].klass;
      if (((uint)pIVar3->vtable[0].methodPtr & 0x100) == 0) {
        pIVar3 = (Il2CppClass *)func_?(pIVar3);
      }
      IStack_4 = b;
      VStack_5.monitor = (MonitorData *)0xffffffff;
      VStack_5.klass = (ValueType__Class *)pIVar3;
      bVar6 = mscorlib.dll::System::ValueType::ValueType_Equals(&VStack_5,obj,(MethodInfo *)0x0);
      return bVar6 == 0;
    }
  }
  func_?();
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
  if (((uint)pIVar1->vtable[0].methodPtr & 0x100) == 0) {
    pIVar1 = (Il2CppClass *)func_?(pIVar1);
  }
  if (a != (SpawnRoleVariable_1_System_Int32Enum_ *)0x0) {
    pSVar2 = (a->fields).subscribableVariable;
    if (pSVar2 != (SubscribableVariable_1_System_Int32Enum_ *)0x0) {
      pMVar3 = pIVar1->rgctx_data[0x11].method;
      if (((uint)pMVar3->klass->vtable[0].methodPtr & 0x100) == 0) {
        func_?(pMVar3->klass);
      }
      iVar4 = (pSVar2->fields)._.value;
      if ((b != (SpawnRoleVariable_1_System_Int32Enum_ *)0x0) &&
         (pSVar2 = (b->fields).subscribableVariable,
         pSVar2 != (SubscribableVariable_1_System_Int32Enum_ *)0x0)) {
        if (((uint)pMVar3->klass->vtable[0].methodPtr & 0x100) == 0) {
          func_?(pMVar3->klass);
        }
        method = (MethodInfo *)(pSVar2->fields)._.value;
        pIVar1 = pMVar3->klass;
        if (((uint)pIVar1->vtable[0].methodPtr & 0x100) == 0) {
          pIVar1 = (Il2CppClass *)func_?(pIVar1);
        }
        obj = (Object *)func_?(pIVar1->rgctx_data[9].rgctxDataDummy,&method);
        pIVar1 = pMVar3->klass;
        if (((uint)pIVar1->vtable[0].methodPtr & 0x100) == 0) {
          pIVar1 = (Il2CppClass *)func_?(pIVar1);
        }
        pIVar1 = pIVar1->rgctx_data[9].klass;
        if (((uint)pIVar1->vtable[0].methodPtr & 0x100) == 0) {
          pIVar1 = (Il2CppClass *)func_?(pIVar1);
        }
        VStack_5.monitor = (MonitorData *)0xffffffff;
        VStack_5.klass = (ValueType__Class *)pIVar1;
        iStack_6 = iVar4;
        bVar7 = mscorlib.dll::System::ValueType::ValueType_Equals(&VStack_5,obj,(MethodInfo *)0x0);
        return bVar7 == 0;
      }
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  bVar7 = (*pcVar8)();
  return bVar7;
}

