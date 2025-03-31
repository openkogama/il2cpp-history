
/* Boolean Equals(SpawnRoleVariable`1[System.Boolean]) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[System::Boolean]::
     SpawnRoleVariable_1_System_Boolean__Equals
               (SpawnRoleVariable_1_System_Boolean_ *this,SpawnRoleVariable_1_System_Boolean_ *other
               ,MethodInfo *method)

{
  uStack_1 = in_ECX;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    cRam_? = '\x01';
  }
  pMVar2 = method;
  pSVar3 = (this->fields).subscribableVariable;
  if (pSVar3 != (SubscribableVariable_1_System_Boolean_ *)0x0) {
    uStack_1 = CONCAT13((pSVar3->fields)._.value,(undefined3)uStack_1);
    if ((other != (SpawnRoleVariable_1_System_Boolean_ *)0x0) &&
       (pSVar3 = (other->fields).subscribableVariable,
       pSVar3 != (SubscribableVariable_1_System_Boolean_ *)0x0)) {
      this = (SpawnRoleVariable_1_System_Boolean_ *)CONCAT13((pSVar3->fields)._.value,this._0_3_);
      obj = (Object *)func_?(method->klass->rgctx_data[9].rgctxDataDummy,(int)&this + 3);
      if ((TypeInfo__System__Boolean->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__System__Boolean);
      }
      bVar4 = mscorlib.dll::System::Boolean::Boolean_Equals
                        ((Boolean *)((int)&uStack_1 + 3),obj,pMVar2->klass->rgctx_data[0x10].method)
      ;
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
     SpawnRoleVariableTypes::SpawnRoleVariable`1[System::Boolean]::
     SpawnRoleVariable_1_System_Boolean__Equals_1
               (SpawnRoleVariable_1_System_Boolean_ *this,Object *obj,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Type);
    cRam_? = '\x01';
  }
  if (obj == (Object *)0x0) {
    return 0;
  }
  if (this == (SpawnRoleVariable_1_System_Boolean_ *)obj) {
    return 1;
  }
  left = (XNamespace *)mscorlib.dll::System::Object::Object_GetType(obj,(MethodInfo *)0x0);
  if (this != (SpawnRoleVariable_1_System_Boolean_ *)0x0) {
    right = (XNamespace *)
            mscorlib.dll::System::Object::Object_GetType((Object *)this,(MethodInfo *)0x0);
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Type);
    }
    bVar1 = System.Xml.Linq.dll::System::Xml::Linq::XNamespace::XNamespace_op_Inequality
                      (left,right,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      return 0;
    }
    pMVar2 = method->klass->rgctx_data[1].method;
    pIVar3 = method->klass->rgctx_data->klass;
    if (((uint)pIVar3->vtable[0].methodPtr & 0x100) == 0) {
      pIVar3 = (Il2CppClass *)func_?();
    }
    if (((obj->klass->_1).naturalAligment < pIVar3->naturalAligment) ||
       ((obj->klass->_1).typeHierarchy[pIVar3->naturalAligment - 1] != pIVar3))
    goto code_?;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if (((this->fields).subscribableVariable != (SubscribableVariable_1_System_Boolean_ *)0x0) &&
       (obj[1].klass != (Object__Class *)0x0)) {
      obj_00 = (Object *)func_?();
      if ((TypeInfo__System__Boolean->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      bVar1 = mscorlib.dll::System::Boolean::Boolean_Equals
                        ((Boolean *)&stack0xfffffffb,obj_00,pMVar2->klass->rgctx_data[0x10].method);
      return bVar1;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  bVar1 = (*pcVar4)();
  return bVar1;
}


/* Int32 GetHashCode() */

int32_t Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
        SpawnRoleVariableTypes::SpawnRoleVariable`1[System::Boolean]::
        SpawnRoleVariable_1_System_Boolean__GetHashCode
                  (SpawnRoleVariable_1_System_Boolean_ *this,MethodInfo *method)

{
  bVar1 = SubscribableVariableBase`1[System::Boolean]::
          SubscribableVariableBase_1_System_Boolean__op_Inequality_2
                    ((SubscribableVariableBase_1_System_Boolean_ *)
                     (this->fields).subscribableVariable,
                     (SubscribableVariableBase_1_System_Boolean_ *)0x0,
                     method->klass->rgctx_data[3].method);
  if (bVar1 == 0) {
    return 0;
  }
  pSVar2 = (this->fields).subscribableVariable;
  if (pSVar2 != (SubscribableVariable_1_System_Boolean_ *)0x0) {
    iVar3 = (*(code *)(pSVar2->klass->vtable).GetHashCode.method)(pSVar2);
    return iVar3;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  iVar3 = (*pcVar4)();
  return iVar3;
}


/* Boolean op_Equality(Boolean, SpawnRoleVariable`1[System.Boolean]) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[System::Boolean]::
     SpawnRoleVariable_1_System_Boolean__op_Equality
               (bool b,SpawnRoleVariable_1_System_Boolean_ *a,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    cRam_? = '\x01';
  }
  pMVar1 = method;
  if (a != (SpawnRoleVariable_1_System_Boolean_ *)0x0) {
    pSVar2 = (a->fields).subscribableVariable;
    if (pSVar2 != (SubscribableVariable_1_System_Boolean_ *)0x0) {
      if (((uint)method->klass->vtable[0].methodPtr & 0x100) == 0) {
        func_?(method->klass);
      }
      a = (SpawnRoleVariable_1_System_Boolean_ *)CONCAT13((pSVar2->fields)._.value,a._0_3_);
      pIVar3 = pMVar1->klass;
      if (((uint)pIVar3->vtable[0].methodPtr & 0x100) == 0) {
        pIVar3 = (Il2CppClass *)func_?(pIVar3);
      }
      obj = (Object *)func_?(pIVar3->rgctx_data[9].rgctxDataDummy,(int)&a + 3);
      if ((TypeInfo__System__Boolean->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__System__Boolean);
      }
      pIVar3 = pMVar1->klass;
      if (((uint)pIVar3->vtable[0].methodPtr & 0x100) == 0) {
        pIVar3 = (Il2CppClass *)func_?(pIVar3);
      }
      bVar4 = mscorlib.dll::System::Boolean::Boolean_Equals
                        ((Boolean *)&b,obj,pIVar3->rgctx_data[0x10].method);
      return bVar4;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  bVar4 = (*pcVar5)();
  return bVar4;
}


/* Boolean op_Equality(SpawnRoleVariable`1[System.Boolean], Boolean) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[System::Boolean]::
     SpawnRoleVariable_1_System_Boolean__op_Equality_1
               (SpawnRoleVariable_1_System_Boolean_ *a,bool b,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    cRam_? = '\x01';
  }
  pMVar1 = method;
  if (a != (SpawnRoleVariable_1_System_Boolean_ *)0x0) {
    pSVar2 = (a->fields).subscribableVariable;
    if (pSVar2 != (SubscribableVariable_1_System_Boolean_ *)0x0) {
      if (((uint)method->klass->vtable[0].methodPtr & 0x100) == 0) {
        func_?(method->klass);
      }
      a = (SpawnRoleVariable_1_System_Boolean_ *)CONCAT13((pSVar2->fields)._.value,a._0_3_);
      pIVar3 = pMVar1->klass;
      if (((uint)pIVar3->vtable[0].methodPtr & 0x100) == 0) {
        pIVar3 = (Il2CppClass *)func_?(pIVar3);
      }
      obj = (Object *)func_?(pIVar3->rgctx_data[9].rgctxDataDummy,(int)&a + 3);
      if ((TypeInfo__System__Boolean->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__System__Boolean);
      }
      pIVar3 = pMVar1->klass;
      if (((uint)pIVar3->vtable[0].methodPtr & 0x100) == 0) {
        pIVar3 = (Il2CppClass *)func_?(pIVar3);
      }
      bVar4 = mscorlib.dll::System::Boolean::Boolean_Equals
                        ((Boolean *)&b,obj,pIVar3->rgctx_data[0x10].method);
      return bVar4;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  bVar4 = (*pcVar5)();
  return bVar4;
}


/* Boolean op_Equality(SpawnRoleVariable`1[System.Boolean], SpawnRoleVariable`1[System.Boolean]) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[System::Boolean]::
     SpawnRoleVariable_1_System_Boolean__op_Equality_2
               (SpawnRoleVariable_1_System_Boolean_ *a,SpawnRoleVariable_1_System_Boolean_ *b,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    cRam_? = '\x01';
  }
  pMVar1 = method;
  if (a != (SpawnRoleVariable_1_System_Boolean_ *)0x0) {
    pSVar2 = (a->fields).subscribableVariable;
    if (pSVar2 != (SubscribableVariable_1_System_Boolean_ *)0x0) {
      if (((uint)method->klass->vtable[0].methodPtr & 0x100) == 0) {
        func_?(method->klass);
      }
      if ((b != (SpawnRoleVariable_1_System_Boolean_ *)0x0) &&
         (pSVar3 = (b->fields).subscribableVariable,
         pSVar3 != (SubscribableVariable_1_System_Boolean_ *)0x0)) {
        if (((uint)pMVar1->klass->vtable[0].methodPtr & 0x100) == 0) {
          func_?(pMVar1->klass,CONCAT13((pSVar2->fields)._.value,(int3)in_ECX));
        }
        a = (SpawnRoleVariable_1_System_Boolean_ *)CONCAT13((pSVar3->fields)._.value,a._0_3_);
        pIVar4 = pMVar1->klass;
        if (((uint)pIVar4->vtable[0].methodPtr & 0x100) == 0) {
          pIVar4 = (Il2CppClass *)func_?(pIVar4);
        }
        obj = (Object *)func_?(pIVar4->rgctx_data[9].rgctxDataDummy,(int)&a + 3);
        if ((TypeInfo__System__Boolean->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__System__Boolean);
        }
        pIVar4 = pMVar1->klass;
        if (((uint)pIVar4->vtable[0].methodPtr & 0x100) == 0) {
          pIVar4 = (Il2CppClass *)func_?(pIVar4);
        }
        bVar5 = mscorlib.dll::System::Boolean::Boolean_Equals
                          ((Boolean *)&stack0xfffffffb,obj,pIVar4->rgctx_data[0x10].method);
        return bVar5;
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  bVar5 = (*pcVar6)();
  return bVar5;
}


/* Boolean op_Inequality(Boolean, SpawnRoleVariable`1[System.Boolean]) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[System::Boolean]::
     SpawnRoleVariable_1_System_Boolean__op_Inequality
               (bool b,SpawnRoleVariable_1_System_Boolean_ *a,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    cRam_? = '\x01';
  }
  pMVar1 = method;
  if (a != (SpawnRoleVariable_1_System_Boolean_ *)0x0) {
    pSVar2 = (a->fields).subscribableVariable;
    if (pSVar2 != (SubscribableVariable_1_System_Boolean_ *)0x0) {
      if (((uint)method->klass->vtable[0].methodPtr & 0x100) == 0) {
        func_?(method->klass);
      }
      a = (SpawnRoleVariable_1_System_Boolean_ *)CONCAT13((pSVar2->fields)._.value,a._0_3_);
      pIVar3 = pMVar1->klass;
      if (((uint)pIVar3->vtable[0].methodPtr & 0x100) == 0) {
        pIVar3 = (Il2CppClass *)func_?(pIVar3);
      }
      obj = (Object *)func_?(pIVar3->rgctx_data[9].rgctxDataDummy,(int)&a + 3);
      if ((TypeInfo__System__Boolean->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__System__Boolean);
      }
      pIVar3 = pMVar1->klass;
      if (((uint)pIVar3->vtable[0].methodPtr & 0x100) == 0) {
        pIVar3 = (Il2CppClass *)func_?(pIVar3);
      }
      bVar4 = mscorlib.dll::System::Boolean::Boolean_Equals
                        ((Boolean *)&b,obj,pIVar3->rgctx_data[0x10].method);
      return bVar4 ^ 1;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  bVar4 = (*pcVar5)();
  return bVar4;
}


/* Boolean op_Inequality(SpawnRoleVariable`1[System.Boolean], Boolean) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[System::Boolean]::
     SpawnRoleVariable_1_System_Boolean__op_Inequality_1
               (SpawnRoleVariable_1_System_Boolean_ *a,bool b,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    cRam_? = '\x01';
  }
  pMVar1 = method;
  if (a != (SpawnRoleVariable_1_System_Boolean_ *)0x0) {
    pSVar2 = (a->fields).subscribableVariable;
    if (pSVar2 != (SubscribableVariable_1_System_Boolean_ *)0x0) {
      if (((uint)method->klass->vtable[0].methodPtr & 0x100) == 0) {
        func_?(method->klass);
      }
      a = (SpawnRoleVariable_1_System_Boolean_ *)CONCAT13((pSVar2->fields)._.value,a._0_3_);
      pIVar3 = pMVar1->klass;
      if (((uint)pIVar3->vtable[0].methodPtr & 0x100) == 0) {
        pIVar3 = (Il2CppClass *)func_?(pIVar3);
      }
      obj = (Object *)func_?(pIVar3->rgctx_data[9].rgctxDataDummy,(int)&a + 3);
      if ((TypeInfo__System__Boolean->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__System__Boolean);
      }
      pIVar3 = pMVar1->klass;
      if (((uint)pIVar3->vtable[0].methodPtr & 0x100) == 0) {
        pIVar3 = (Il2CppClass *)func_?(pIVar3);
      }
      bVar4 = mscorlib.dll::System::Boolean::Boolean_Equals
                        ((Boolean *)&b,obj,pIVar3->rgctx_data[0x10].method);
      return bVar4 ^ 1;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  bVar4 = (*pcVar5)();
  return bVar4;
}


/* Boolean op_Inequality(SpawnRoleVariable`1[System.Boolean], SpawnRoleVariable`1[System.Boolean])
    */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[System::Boolean]::
     SpawnRoleVariable_1_System_Boolean__op_Inequality_2
               (SpawnRoleVariable_1_System_Boolean_ *a,SpawnRoleVariable_1_System_Boolean_ *b,
               MethodInfo *method)

{
  pIVar1 = method->klass;
  uStack_2 = in_ECX;
  if (((uint)pIVar1->vtable[0].methodPtr & 0x100) == 0) {
    pIVar1 = (Il2CppClass *)func_?(pIVar1);
  }
  pMVar3 = pIVar1->rgctx_data[0x11].method;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    cRam_? = '\x01';
  }
  if ((a != (SpawnRoleVariable_1_System_Boolean_ *)0x0) &&
     (pSVar4 = (a->fields).subscribableVariable,
     pSVar4 != (SubscribableVariable_1_System_Boolean_ *)0x0)) {
    if (((uint)pMVar3->klass->vtable[0].methodPtr & 0x100) == 0) {
      func_?(pMVar3->klass);
    }
    uStack_2 = CONCAT13((pSVar4->fields)._.value,(undefined3)uStack_2);
    if ((b != (SpawnRoleVariable_1_System_Boolean_ *)0x0) &&
       (pSVar4 = (b->fields).subscribableVariable,
       pSVar4 != (SubscribableVariable_1_System_Boolean_ *)0x0)) {
      if (((uint)pMVar3->klass->vtable[0].methodPtr & 0x100) == 0) {
        func_?(pMVar3->klass);
      }
      method = (MethodInfo *)CONCAT13((pSVar4->fields)._.value,method._0_3_);
      pIVar1 = pMVar3->klass;
      if (((uint)pIVar1->vtable[0].methodPtr & 0x100) == 0) {
        pIVar1 = (Il2CppClass *)func_?(pIVar1);
      }
      obj = (Object *)func_?(pIVar1->rgctx_data[9].rgctxDataDummy,(int)&method + 3);
      if ((TypeInfo__System__Boolean->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__System__Boolean);
      }
      pIVar1 = pMVar3->klass;
      if (((uint)pIVar1->vtable[0].methodPtr & 0x100) == 0) {
        pIVar1 = (Il2CppClass *)func_?(pIVar1);
      }
      bVar5 = mscorlib.dll::System::Boolean::Boolean_Equals
                        ((Boolean *)((int)&uStack_2 + 3),obj,pIVar1->rgctx_data[0x10].method);
      return bVar5 ^ 1;
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  bVar5 = (*pcVar6)();
  return bVar5;
}

