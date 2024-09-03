
/* Boolean Equals(SpawnRoleVariable`1[System.Int32]) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[System::Int32]::
     SpawnRoleVariable_1_System_Int32__Equals
               (SpawnRoleVariable_1_System_Int32_ *this,SpawnRoleVariable_1_System_Int32_ *other,
               MethodInfo *method)

{
  pMVar1 = method;
  pSVar2 = (this->fields).subscribableVariable;
  IStack_3.m_value = in_ECX;
  if (pSVar2 != (SubscribableVariable_1_System_Int32_ *)0x0) {
    IStack_3.m_value = (pSVar2->fields)._.value;
    if ((other != (SpawnRoleVariable_1_System_Int32_ *)0x0) &&
       (pSVar2 = (other->fields).subscribableVariable,
       pSVar2 != (SubscribableVariable_1_System_Int32_ *)0x0)) {
      this = (SpawnRoleVariable_1_System_Int32_ *)(pSVar2->fields)._.value;
      obj = (Object *)func_?(method->klass->rgctx_data[9].rgctxDataDummy,&this);
      bVar4 = mscorlib.dll::System::Int32::Int32_Equals
                        (&IStack_3,obj,pMVar1->klass->rgctx_data[0x10].method);
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
     SpawnRoleVariableTypes::SpawnRoleVariable`1[System::Int32]::
     SpawnRoleVariable_1_System_Int32__Equals_1
               (SpawnRoleVariable_1_System_Int32_ *this,Object *obj,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Type);
    cRam_? = '\x01';
  }
  if (obj == (Object *)0x0) {
    return 0;
  }
  if (this == (SpawnRoleVariable_1_System_Int32_ *)obj) {
    return 1;
  }
  left = (XNamespace *)mscorlib.dll::System::Object::Object_GetType(obj,(MethodInfo *)0x0);
  if (this != (SpawnRoleVariable_1_System_Int32_ *)0x0) {
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
    pMVar2 = method->klass->rgctx_data[1].method;
    pIVar3 = method->klass->rgctx_data->klass;
    if (((uint)pIVar3->vtable[0].methodPtr & 0x100) == 0) {
      pIVar3 = (Il2CppClass *)func_?();
    }
    if (((obj->klass->_1).naturalAligment < pIVar3->naturalAligment) ||
       ((obj->klass->_1).typeHierarchy[pIVar3->naturalAligment - 1] != pIVar3))
    goto code_?;
    if (((this->fields).subscribableVariable != (SubscribableVariable_1_System_Int32_ *)0x0) &&
       (obj[1].klass != (Object__Class *)0x0)) {
      obj_00 = (Object *)func_?();
      bVar1 = mscorlib.dll::System::Int32::Int32_Equals
                        ((Int32 *)&stack0xfffffff4,obj_00,pMVar2->klass->rgctx_data[0x10].method);
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


/* Boolean op_Equality(Int32, SpawnRoleVariable`1[System.Int32]) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[System::Int32]::
     SpawnRoleVariable_1_System_Int32__op_Equality
               (int32_t b,SpawnRoleVariable_1_System_Int32_ *a,MethodInfo *method)

{
  pMVar1 = method;
  if (a != (SpawnRoleVariable_1_System_Int32_ *)0x0) {
    pSVar2 = (a->fields).subscribableVariable;
    if (pSVar2 != (SubscribableVariable_1_System_Int32_ *)0x0) {
      if (((uint)method->klass->vtable[0].methodPtr & 0x100) == 0) {
        func_?(method->klass);
      }
      a = (SpawnRoleVariable_1_System_Int32_ *)(pSVar2->fields)._.value;
      pIVar3 = pMVar1->klass;
      if (((uint)pIVar3->vtable[0].methodPtr & 0x100) == 0) {
        pIVar3 = (Il2CppClass *)func_?(pIVar3);
      }
      obj = (Object *)func_?(pIVar3->rgctx_data[9].rgctxDataDummy,&a);
      pIVar3 = pMVar1->klass;
      if (((uint)pIVar3->vtable[0].methodPtr & 0x100) == 0) {
        pIVar3 = (Il2CppClass *)func_?(pIVar3);
      }
      bVar4 = mscorlib.dll::System::Int32::Int32_Equals
                        ((Int32 *)&b,obj,pIVar3->rgctx_data[0x10].method);
      return bVar4;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  bVar4 = (*pcVar5)();
  return bVar4;
}


/* Boolean op_Equality(SpawnRoleVariable`1[System.Int32], Int32) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[System::Int32]::
     SpawnRoleVariable_1_System_Int32__op_Equality_1
               (SpawnRoleVariable_1_System_Int32_ *a,int32_t b,MethodInfo *method)

{
  pMVar1 = method;
  if (a != (SpawnRoleVariable_1_System_Int32_ *)0x0) {
    pSVar2 = (a->fields).subscribableVariable;
    if (pSVar2 != (SubscribableVariable_1_System_Int32_ *)0x0) {
      if (((uint)method->klass->vtable[0].methodPtr & 0x100) == 0) {
        func_?(method->klass);
      }
      a = (SpawnRoleVariable_1_System_Int32_ *)(pSVar2->fields)._.value;
      pIVar3 = pMVar1->klass;
      if (((uint)pIVar3->vtable[0].methodPtr & 0x100) == 0) {
        pIVar3 = (Il2CppClass *)func_?(pIVar3);
      }
      obj = (Object *)func_?(pIVar3->rgctx_data[9].rgctxDataDummy,&a);
      pIVar3 = pMVar1->klass;
      if (((uint)pIVar3->vtable[0].methodPtr & 0x100) == 0) {
        pIVar3 = (Il2CppClass *)func_?(pIVar3);
      }
      bVar4 = mscorlib.dll::System::Int32::Int32_Equals
                        ((Int32 *)&b,obj,pIVar3->rgctx_data[0x10].method);
      return bVar4;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  bVar4 = (*pcVar5)();
  return bVar4;
}


/* Boolean op_Equality(SpawnRoleVariable`1[System.Int32], SpawnRoleVariable`1[System.Int32]) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[System::Int32]::
     SpawnRoleVariable_1_System_Int32__op_Equality_2
               (SpawnRoleVariable_1_System_Int32_ *a,SpawnRoleVariable_1_System_Int32_ *b,
               MethodInfo *method)

{
  pMVar1 = method;
  IStack_2.m_value = in_ECX;
  if (a != (SpawnRoleVariable_1_System_Int32_ *)0x0) {
    pSVar3 = (a->fields).subscribableVariable;
    if (pSVar3 != (SubscribableVariable_1_System_Int32_ *)0x0) {
      if (((uint)method->klass->vtable[0].methodPtr & 0x100) == 0) {
        func_?(method->klass);
      }
      IStack_2.m_value = (pSVar3->fields)._.value;
      if ((b != (SpawnRoleVariable_1_System_Int32_ *)0x0) &&
         (pSVar3 = (b->fields).subscribableVariable,
         pSVar3 != (SubscribableVariable_1_System_Int32_ *)0x0)) {
        if (((uint)pMVar1->klass->vtable[0].methodPtr & 0x100) == 0) {
          func_?(pMVar1->klass);
        }
        a = (SpawnRoleVariable_1_System_Int32_ *)(pSVar3->fields)._.value;
        pIVar4 = pMVar1->klass;
        if (((uint)pIVar4->vtable[0].methodPtr & 0x100) == 0) {
          pIVar4 = (Il2CppClass *)func_?(pIVar4);
        }
        obj = (Object *)func_?(pIVar4->rgctx_data[9].rgctxDataDummy,&a);
        pIVar4 = pMVar1->klass;
        if (((uint)pIVar4->vtable[0].methodPtr & 0x100) == 0) {
          pIVar4 = (Il2CppClass *)func_?(pIVar4);
        }
        bVar5 = mscorlib.dll::System::Int32::Int32_Equals
                          (&IStack_2,obj,pIVar4->rgctx_data[0x10].method);
        return bVar5;
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  bVar5 = (*pcVar6)();
  return bVar5;
}


/* Boolean op_Inequality(Int32, SpawnRoleVariable`1[System.Int32]) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[System::Int32]::
     SpawnRoleVariable_1_System_Int32__op_Inequality
               (int32_t b,SpawnRoleVariable_1_System_Int32_ *a,MethodInfo *method)

{
  pMVar1 = method;
  if (a != (SpawnRoleVariable_1_System_Int32_ *)0x0) {
    pSVar2 = (a->fields).subscribableVariable;
    if (pSVar2 != (SubscribableVariable_1_System_Int32_ *)0x0) {
      if (((uint)method->klass->vtable[0].methodPtr & 0x100) == 0) {
        func_?(method->klass);
      }
      a = (SpawnRoleVariable_1_System_Int32_ *)(pSVar2->fields)._.value;
      pIVar3 = pMVar1->klass;
      if (((uint)pIVar3->vtable[0].methodPtr & 0x100) == 0) {
        pIVar3 = (Il2CppClass *)func_?(pIVar3);
      }
      obj = (Object *)func_?(pIVar3->rgctx_data[9].rgctxDataDummy,&a);
      pIVar3 = pMVar1->klass;
      if (((uint)pIVar3->vtable[0].methodPtr & 0x100) == 0) {
        pIVar3 = (Il2CppClass *)func_?(pIVar3);
      }
      bVar4 = mscorlib.dll::System::Int32::Int32_Equals
                        ((Int32 *)&b,obj,pIVar3->rgctx_data[0x10].method);
      return bVar4 ^ 1;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  bVar4 = (*pcVar5)();
  return bVar4;
}


/* Boolean op_Inequality(SpawnRoleVariable`1[System.Int32], Int32) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[System::Int32]::
     SpawnRoleVariable_1_System_Int32__op_Inequality_1
               (SpawnRoleVariable_1_System_Int32_ *a,int32_t b,MethodInfo *method)

{
  pMVar1 = method;
  if (a != (SpawnRoleVariable_1_System_Int32_ *)0x0) {
    pSVar2 = (a->fields).subscribableVariable;
    if (pSVar2 != (SubscribableVariable_1_System_Int32_ *)0x0) {
      if (((uint)method->klass->vtable[0].methodPtr & 0x100) == 0) {
        func_?(method->klass);
      }
      a = (SpawnRoleVariable_1_System_Int32_ *)(pSVar2->fields)._.value;
      pIVar3 = pMVar1->klass;
      if (((uint)pIVar3->vtable[0].methodPtr & 0x100) == 0) {
        pIVar3 = (Il2CppClass *)func_?(pIVar3);
      }
      obj = (Object *)func_?(pIVar3->rgctx_data[9].rgctxDataDummy,&a);
      pIVar3 = pMVar1->klass;
      if (((uint)pIVar3->vtable[0].methodPtr & 0x100) == 0) {
        pIVar3 = (Il2CppClass *)func_?(pIVar3);
      }
      bVar4 = mscorlib.dll::System::Int32::Int32_Equals
                        ((Int32 *)&b,obj,pIVar3->rgctx_data[0x10].method);
      return bVar4 ^ 1;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  bVar4 = (*pcVar5)();
  return bVar4;
}


/* Boolean op_Inequality(SpawnRoleVariable`1[System.Int32], SpawnRoleVariable`1[System.Int32]) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[System::Int32]::
     SpawnRoleVariable_1_System_Int32__op_Inequality_2
               (SpawnRoleVariable_1_System_Int32_ *a,SpawnRoleVariable_1_System_Int32_ *b,
               MethodInfo *method)

{
  pIVar1 = method->klass;
  if (((uint)pIVar1->vtable[0].methodPtr & 0x100) == 0) {
    pIVar1 = (Il2CppClass *)func_?(pIVar1);
  }
  pMVar2 = pIVar1->rgctx_data[0x11].method;
  if ((a != (SpawnRoleVariable_1_System_Int32_ *)0x0) &&
     (pSVar3 = (a->fields).subscribableVariable,
     pSVar3 != (SubscribableVariable_1_System_Int32_ *)0x0)) {
    if (((uint)pMVar2->klass->vtable[0].methodPtr & 0x100) == 0) {
      func_?(pMVar2->klass);
    }
    a = (SpawnRoleVariable_1_System_Int32_ *)(pSVar3->fields)._.value;
    if ((b != (SpawnRoleVariable_1_System_Int32_ *)0x0) &&
       (pSVar3 = (b->fields).subscribableVariable,
       pSVar3 != (SubscribableVariable_1_System_Int32_ *)0x0)) {
      if (((uint)pMVar2->klass->vtable[0].methodPtr & 0x100) == 0) {
        func_?(pMVar2->klass);
      }
      method = (MethodInfo *)(pSVar3->fields)._.value;
      pIVar1 = pMVar2->klass;
      if (((uint)pIVar1->vtable[0].methodPtr & 0x100) == 0) {
        pIVar1 = (Il2CppClass *)func_?(pIVar1);
      }
      obj = (Object *)func_?(pIVar1->rgctx_data[9].rgctxDataDummy,&method);
      pIVar1 = pMVar2->klass;
      if (((uint)pIVar1->vtable[0].methodPtr & 0x100) == 0) {
        pIVar1 = (Il2CppClass *)func_?(pIVar1);
      }
      bVar4 = mscorlib.dll::System::Int32::Int32_Equals
                        ((Int32 *)&a,obj,pIVar1->rgctx_data[0x10].method);
      return bVar4 ^ 1;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  bVar4 = (*pcVar5)();
  return bVar4;
}

