
/* Boolean Equals(SpawnRoleVariable`1[System.Single]) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[System::Single]::
     SpawnRoleVariable_1_System_Single__Equals
               (SpawnRoleVariable_1_System_Single_ *this,SpawnRoleVariable_1_System_Single_ *other,
               MethodInfo *method)

{
  pMVar1 = method;
  pSVar2 = (this->fields).subscribableVariable;
  SStack_3.m_value = in_ECX;
  if (pSVar2 != (SubscribableVariable_1_System_Single_ *)0x0) {
    SStack_3.m_value = (pSVar2->fields)._.value;
    if ((other != (SpawnRoleVariable_1_System_Single_ *)0x0) &&
       (pSVar2 = (other->fields).subscribableVariable,
       pSVar2 != (SubscribableVariable_1_System_Single_ *)0x0)) {
      this = (SpawnRoleVariable_1_System_Single_ *)(pSVar2->fields)._.value;
      obj = (Object *)func_?(method->klass->rgctx_data[9].rgctxDataDummy,&this);
      bVar4 = mscorlib.dll::System::Single::Single_Equals
                        (&SStack_3,obj,pMVar1->klass->rgctx_data[0x10].method);
      return bVar4;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  bVar4 = (*pcVar5)();
  return bVar4;
}


/* Boolean Equals(Object) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[System::Single]::
     SpawnRoleVariable_1_System_Single__Equals_1
               (SpawnRoleVariable_1_System_Single_ *this,Object *obj,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Type);
    cRam_? = '\x01';
  }
  if (obj == (Object *)0x0) {
    return 0;
  }
  if (this == (SpawnRoleVariable_1_System_Single_ *)obj) {
    return 1;
  }
  left = (XNamespace *)mscorlib.dll::System::Object::Object_GetType(obj,(MethodInfo *)0x0);
  if (this != (SpawnRoleVariable_1_System_Single_ *)0x0) {
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
    if (((this->fields).subscribableVariable != (SubscribableVariable_1_System_Single_ *)0x0) &&
       (obj[1].klass != (Object__Class *)0x0)) {
      obj_00 = (Object *)func_?();
      bVar1 = mscorlib.dll::System::Single::Single_Equals
                        ((Single *)&stack0xfffffff8,obj_00,pMVar3->klass->rgctx_data[0x10].method);
      return bVar1;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  bVar1 = (*pcVar5)();
  return bVar1;
}


/* Int32 GetHashCode() */

int32_t Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
        SpawnRoleVariableTypes::SpawnRoleVariable`1[System::Single]::
        SpawnRoleVariable_1_System_Single__GetHashCode
                  (SpawnRoleVariable_1_System_Single_ *this,MethodInfo *method)

{
  bVar1 = SubscribableVariableBase`1[System::Single]::
          SubscribableVariableBase_1_System_Single__op_Inequality_2
                    ((SubscribableVariableBase_1_System_Single_ *)
                     (this->fields).subscribableVariable,
                     (SubscribableVariableBase_1_System_Single_ *)0x0,
                     method->klass->rgctx_data[3].method);
  if (bVar1 == 0) {
    return 0;
  }
  pSVar2 = (this->fields).subscribableVariable;
  if (pSVar2 != (SubscribableVariable_1_System_Single_ *)0x0) {
    iVar3 = (*(code *)(pSVar2->klass->vtable).GetHashCode.method)(pSVar2);
    return iVar3;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  iVar3 = (*pcVar4)();
  return iVar3;
}


/* Void SubscribableVariableOnOnChange(Single) */

void Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[System::Single]::
     SpawnRoleVariable_1_System_Single__SubscribableVariableOnOnChange
               (SpawnRoleVariable_1_System_Single_ *this,float value,MethodInfo *method)

{
  pSVar1 = (this->fields).OnChange;
  if (pSVar1 != (SpawnRoleVariable_1_T_SubDelegate_System_Single_ *)0x0) {
    (*(pSVar1->fields)._._.invoke_impl)
              ((pSVar1->fields)._._.method_code,value,(pSVar1->fields)._._.method);
  }
  return;
}


/* SpawnRoleVariable`1[System.Single](Single) */

void Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[System::Single]::
     SpawnRoleVariable_1_System_Single___ctor
               (SpawnRoleVariable_1_System_Single_ *this,float value,MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  pIVar1 = method->klass->rgctx_data[2].klass;
  if (((uint)pIVar1->vtable[0].methodPtr & 0x100) == 0) {
    pIVar1 = (Il2CppClass *)func_?(pIVar1);
  }
  this_01 = (SubscribableVariable_1_System_Single_ *)func_?(pIVar1);
  SubscribableVariable`1[System::Single]::SubscribableVariable_1_System_Single___ctor
            (this_01,value,method->klass->rgctx_data[10].method);
  pSVar2 = &this->fields;
  pSVar2->subscribableVariable = this_01;
  func_?(pSVar2,this_01);
  this_00 = (SubscribableVariableBase_1_System_Single_ *)pSVar2->subscribableVariable;
  if (((uint)(method->klass->rgctx_data[0xc].klass)->vtable[0].methodPtr & 0x100) == 0) {
    func_?();
  }
  this_02 = (UnityAction_1_System_Single_ *)func_?();
  pIVar3 = method->klass->rgctx_data;
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Single]::
  UnityAction_1_System_Single___ctor
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


/* Single get_Value() */

float Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
      SpawnRoleVariableTypes::SpawnRoleVariable`1[System::Single]::
      SpawnRoleVariable_1_System_Single__get_Value
                (SpawnRoleVariable_1_System_Single_ *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pSVar2 = (this->fields).subscribableVariable;
  if (pSVar2 != (SubscribableVariable_1_System_Single_ *)0x0) {
    return (pSVar2->fields)._.value;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  fVar6 = (float10)(*pcVar5)();
  return (float)fVar6;
}


/* Boolean op_Equality(Single, SpawnRoleVariable`1[System.Single]) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[System::Single]::
     SpawnRoleVariable_1_System_Single__op_Equality
               (float b,SpawnRoleVariable_1_System_Single_ *a,MethodInfo *method)

{
  pMVar1 = method;
  if (a != (SpawnRoleVariable_1_System_Single_ *)0x0) {
    pSVar2 = (a->fields).subscribableVariable;
    if (pSVar2 != (SubscribableVariable_1_System_Single_ *)0x0) {
      if (((uint)method->klass->vtable[0].methodPtr & 0x100) == 0) {
        func_?(method->klass);
      }
      pIVar3 = pMVar1->klass;
      a = (SpawnRoleVariable_1_System_Single_ *)(pSVar2->fields)._.value;
      if (((uint)pIVar3->vtable[0].methodPtr & 0x100) == 0) {
        pIVar3 = (Il2CppClass *)func_?(pIVar3);
      }
      obj = (Object *)func_?(pIVar3->rgctx_data[9].rgctxDataDummy,&a);
      pIVar3 = pMVar1->klass;
      if (((uint)pIVar3->vtable[0].methodPtr & 0x100) == 0) {
        pIVar3 = (Il2CppClass *)func_?(pIVar3);
      }
      bVar4 = mscorlib.dll::System::Single::Single_Equals
                        ((Single *)&b,obj,pIVar3->rgctx_data[0x10].method);
      return bVar4;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  bVar4 = (*pcVar5)();
  return bVar4;
}


/* Boolean op_Equality(SpawnRoleVariable`1[System.Single], Single) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[System::Single]::
     SpawnRoleVariable_1_System_Single__op_Equality_1
               (SpawnRoleVariable_1_System_Single_ *a,float b,MethodInfo *method)

{
  pMVar1 = method;
  if (a != (SpawnRoleVariable_1_System_Single_ *)0x0) {
    pSVar2 = (a->fields).subscribableVariable;
    if (pSVar2 != (SubscribableVariable_1_System_Single_ *)0x0) {
      if (((uint)method->klass->vtable[0].methodPtr & 0x100) == 0) {
        func_?(method->klass);
      }
      pIVar3 = pMVar1->klass;
      a = (SpawnRoleVariable_1_System_Single_ *)(pSVar2->fields)._.value;
      if (((uint)pIVar3->vtable[0].methodPtr & 0x100) == 0) {
        pIVar3 = (Il2CppClass *)func_?(pIVar3);
      }
      obj = (Object *)func_?(pIVar3->rgctx_data[9].rgctxDataDummy,&a);
      pIVar3 = pMVar1->klass;
      if (((uint)pIVar3->vtable[0].methodPtr & 0x100) == 0) {
        pIVar3 = (Il2CppClass *)func_?(pIVar3);
      }
      bVar4 = mscorlib.dll::System::Single::Single_Equals
                        ((Single *)&b,obj,pIVar3->rgctx_data[0x10].method);
      return bVar4;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  bVar4 = (*pcVar5)();
  return bVar4;
}


/* Boolean op_Equality(SpawnRoleVariable`1[System.Single], SpawnRoleVariable`1[System.Single]) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[System::Single]::
     SpawnRoleVariable_1_System_Single__op_Equality_2
               (SpawnRoleVariable_1_System_Single_ *a,SpawnRoleVariable_1_System_Single_ *b,
               MethodInfo *method)

{
  pMVar1 = method;
  SStack_2.m_value = in_ECX;
  if (a != (SpawnRoleVariable_1_System_Single_ *)0x0) {
    pSVar3 = (a->fields).subscribableVariable;
    if (pSVar3 != (SubscribableVariable_1_System_Single_ *)0x0) {
      if (((uint)method->klass->vtable[0].methodPtr & 0x100) == 0) {
        func_?(method->klass);
      }
      SStack_2.m_value = (pSVar3->fields)._.value;
      if ((b != (SpawnRoleVariable_1_System_Single_ *)0x0) &&
         (pSVar3 = (b->fields).subscribableVariable,
         pSVar3 != (SubscribableVariable_1_System_Single_ *)0x0)) {
        if (((uint)pMVar1->klass->vtable[0].methodPtr & 0x100) == 0) {
          func_?(pMVar1->klass);
        }
        pIVar4 = pMVar1->klass;
        a = (SpawnRoleVariable_1_System_Single_ *)(pSVar3->fields)._.value;
        if (((uint)pIVar4->vtable[0].methodPtr & 0x100) == 0) {
          pIVar4 = (Il2CppClass *)func_?(pIVar4);
        }
        obj = (Object *)func_?(pIVar4->rgctx_data[9].rgctxDataDummy,&a);
        pIVar4 = pMVar1->klass;
        if (((uint)pIVar4->vtable[0].methodPtr & 0x100) == 0) {
          pIVar4 = (Il2CppClass *)func_?(pIVar4);
        }
        bVar5 = mscorlib.dll::System::Single::Single_Equals
                          (&SStack_2,obj,pIVar4->rgctx_data[0x10].method);
        return bVar5;
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  bVar5 = (*pcVar6)();
  return bVar5;
}


/* Single op_Implicit(SpawnRoleVariable`1[System.Single]) */

float Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
      SpawnRoleVariableTypes::SpawnRoleVariable`1[System::Single]::
      SpawnRoleVariable_1_System_Single__op_Implicit
                (SpawnRoleVariable_1_System_Single_ *s,MethodInfo *method)

{
  if (s != (SpawnRoleVariable_1_System_Single_ *)0x0) {
    pSVar1 = (s->fields).subscribableVariable;
    if (pSVar1 != (SubscribableVariable_1_System_Single_ *)0x0) {
      if (((uint)method->klass->vtable[0].methodPtr & 0x100) == 0) {
        func_?(method->klass);
      }
      return (pSVar1->fields)._.value;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  fVar3 = (float10)(*pcVar2)();
  return (float)fVar3;
}


/* Boolean op_Inequality(Single, SpawnRoleVariable`1[System.Single]) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[System::Single]::
     SpawnRoleVariable_1_System_Single__op_Inequality
               (float b,SpawnRoleVariable_1_System_Single_ *a,MethodInfo *method)

{
  pMVar1 = method;
  if (a != (SpawnRoleVariable_1_System_Single_ *)0x0) {
    pSVar2 = (a->fields).subscribableVariable;
    if (pSVar2 != (SubscribableVariable_1_System_Single_ *)0x0) {
      if (((uint)method->klass->vtable[0].methodPtr & 0x100) == 0) {
        func_?(method->klass);
      }
      pIVar3 = pMVar1->klass;
      a = (SpawnRoleVariable_1_System_Single_ *)(pSVar2->fields)._.value;
      if (((uint)pIVar3->vtable[0].methodPtr & 0x100) == 0) {
        pIVar3 = (Il2CppClass *)func_?(pIVar3);
      }
      obj = (Object *)func_?(pIVar3->rgctx_data[9].rgctxDataDummy,&a);
      pIVar3 = pMVar1->klass;
      if (((uint)pIVar3->vtable[0].methodPtr & 0x100) == 0) {
        pIVar3 = (Il2CppClass *)func_?(pIVar3);
      }
      bVar4 = mscorlib.dll::System::Single::Single_Equals
                        ((Single *)&b,obj,pIVar3->rgctx_data[0x10].method);
      return bVar4 == 0;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  bVar4 = (*pcVar5)();
  return bVar4;
}


/* Boolean op_Inequality(SpawnRoleVariable`1[System.Single], Single) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[System::Single]::
     SpawnRoleVariable_1_System_Single__op_Inequality_1
               (SpawnRoleVariable_1_System_Single_ *a,float b,MethodInfo *method)

{
  pMVar1 = method;
  if (a != (SpawnRoleVariable_1_System_Single_ *)0x0) {
    pSVar2 = (a->fields).subscribableVariable;
    if (pSVar2 != (SubscribableVariable_1_System_Single_ *)0x0) {
      if (((uint)method->klass->vtable[0].methodPtr & 0x100) == 0) {
        func_?(method->klass);
      }
      pIVar3 = pMVar1->klass;
      a = (SpawnRoleVariable_1_System_Single_ *)(pSVar2->fields)._.value;
      if (((uint)pIVar3->vtable[0].methodPtr & 0x100) == 0) {
        pIVar3 = (Il2CppClass *)func_?(pIVar3);
      }
      obj = (Object *)func_?(pIVar3->rgctx_data[9].rgctxDataDummy,&a);
      pIVar3 = pMVar1->klass;
      if (((uint)pIVar3->vtable[0].methodPtr & 0x100) == 0) {
        pIVar3 = (Il2CppClass *)func_?(pIVar3);
      }
      bVar4 = mscorlib.dll::System::Single::Single_Equals
                        ((Single *)&b,obj,pIVar3->rgctx_data[0x10].method);
      return bVar4 == 0;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  bVar4 = (*pcVar5)();
  return bVar4;
}


/* Boolean op_Inequality(SpawnRoleVariable`1[System.Single], SpawnRoleVariable`1[System.Single]) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[System::Single]::
     SpawnRoleVariable_1_System_Single__op_Inequality_2
               (SpawnRoleVariable_1_System_Single_ *a,SpawnRoleVariable_1_System_Single_ *b,
               MethodInfo *method)

{
  pIVar1 = method->klass;
  if (((uint)pIVar1->vtable[0].methodPtr & 0x100) == 0) {
    pIVar1 = (Il2CppClass *)func_?(pIVar1);
  }
  pMVar2 = pIVar1->rgctx_data[0x11].method;
  if ((a != (SpawnRoleVariable_1_System_Single_ *)0x0) &&
     (pSVar3 = (a->fields).subscribableVariable,
     pSVar3 != (SubscribableVariable_1_System_Single_ *)0x0)) {
    if (((uint)pMVar2->klass->vtable[0].methodPtr & 0x100) == 0) {
      func_?(pMVar2->klass);
    }
    a = (SpawnRoleVariable_1_System_Single_ *)(pSVar3->fields)._.value;
    if ((b != (SpawnRoleVariable_1_System_Single_ *)0x0) &&
       (pSVar3 = (b->fields).subscribableVariable,
       pSVar3 != (SubscribableVariable_1_System_Single_ *)0x0)) {
      if (((uint)pMVar2->klass->vtable[0].methodPtr & 0x100) == 0) {
        func_?(pMVar2->klass);
      }
      pIVar1 = pMVar2->klass;
      method = (MethodInfo *)(pSVar3->fields)._.value;
      if (((uint)pIVar1->vtable[0].methodPtr & 0x100) == 0) {
        pIVar1 = (Il2CppClass *)func_?(pIVar1);
      }
      obj = (Object *)func_?(pIVar1->rgctx_data[9].rgctxDataDummy,&method);
      pIVar1 = pMVar2->klass;
      if (((uint)pIVar1->vtable[0].methodPtr & 0x100) == 0) {
        pIVar1 = (Il2CppClass *)func_?(pIVar1);
      }
      bVar4 = mscorlib.dll::System::Single::Single_Equals
                        ((Single *)&a,obj,pIVar1->rgctx_data[0x10].method);
      return bVar4 == 0;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  bVar4 = (*pcVar5)();
  return bVar4;
}

