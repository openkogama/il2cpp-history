
/* Boolean Equals(SpawnRoleVariable`1[System.Boolean]) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[System::Boolean]::
     SpawnRoleVariable_1_System_Boolean__Equals
               (SpawnRoleVariable_1_System_Boolean_ *this,SpawnRoleVariable_1_System_Boolean_ *other
               ,MethodInfo *method)

{
  pMVar1 = method;
  pSVar2 = (this->fields).subscribableVariable;
  if (pSVar2 != (SubscribableVariable_1_System_Boolean_ *)0x0) {
    uVar3 = (*(method->klass->rgctx_data[6].method)->virtualMethodPointer)
                      (pSVar2,method->klass->rgctx_data[6].rgctxDataDummy);
    if ((other != (SpawnRoleVariable_1_System_Boolean_ *)0x0) &&
       (pSVar2 = (other->fields).subscribableVariable,
       pSVar2 != (SubscribableVariable_1_System_Boolean_ *)0x0)) {
      uVar3 = (*(pMVar1->klass->rgctx_data[6].method)->virtualMethodPointer)
                        (pSVar2,pMVar1->klass->rgctx_data[6].rgctxDataDummy,
                         CONCAT13(uVar3,(int3)extraout_var));
      this = (SpawnRoleVariable_1_System_Boolean_ *)CONCAT13(uVar3,this._0_3_);
      pvVar4 = pMVar1->klass->rgctx_data[0xe].rgctxDataDummy;
      if ((*(byte *)((int)pvVar4 + 0xba) & 1) == 0) {
        pvVar4 = (void *)func_?(pvVar4);
      }
      obj = (Object *)func_?(pvVar4,(int)&this + 3);
      bVar5 = mscorlib.dll::System::Boolean::Boolean_Equals
                        ((Boolean *)&stack0xfffffffb,obj,pMVar1->klass->rgctx_data[0xf].method);
      return bVar5;
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  bVar5 = (*pcVar6)();
  return bVar5;
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
  left._source = (CancellationTokenSource *)
                 mscorlib.dll::System::Object::Object_GetType(obj,(MethodInfo *)0x0);
  if (this != (SpawnRoleVariable_1_System_Boolean_ *)0x0) {
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


/* Boolean op_Equality(Boolean, SpawnRoleVariable`1[System.Boolean]) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[System::Boolean]::
     SpawnRoleVariable_1_System_Boolean__op_Equality
               (bool b,SpawnRoleVariable_1_System_Boolean_ *a,MethodInfo *method)

{
  pMVar1 = method;
  if (a != (SpawnRoleVariable_1_System_Boolean_ *)0x0) {
    pSVar2 = (a->fields).subscribableVariable;
    if (pSVar2 != (SubscribableVariable_1_System_Boolean_ *)0x0) {
      pIVar3 = method->klass;
      if (pIVar3->initialized_and_no_error == 0) {
        pIVar3 = (Il2CppClass *)func_?(pIVar3);
      }
      pIVar4 = (pIVar3->rgctx_data[6].method)->virtualMethodPointer;
      pIVar3 = pMVar1->klass;
      if (pIVar3->initialized_and_no_error == 0) {
        pIVar3 = (Il2CppClass *)func_?(pIVar3);
      }
      uVar5 = (*pIVar4)(pSVar2,pIVar3->rgctx_data[6].rgctxDataDummy);
      a = (SpawnRoleVariable_1_System_Boolean_ *)CONCAT13(uVar5,a._0_3_);
      pIVar3 = pMVar1->klass;
      if (pIVar3->initialized_and_no_error == 0) {
        pIVar3 = (Il2CppClass *)func_?(pIVar3);
      }
      pvVar6 = pIVar3->rgctx_data[0xe].rgctxDataDummy;
      if ((*(byte *)((int)pvVar6 + 0xba) & 1) == 0) {
        pvVar6 = (void *)func_?(pvVar6);
      }
      obj = (Object *)func_?(pvVar6,(int)&a + 3);
      pIVar3 = pMVar1->klass;
      if (pIVar3->initialized_and_no_error == 0) {
        pIVar3 = (Il2CppClass *)func_?(pIVar3);
      }
      bVar7 = mscorlib.dll::System::Boolean::Boolean_Equals
                        ((Boolean *)&b,obj,pIVar3->rgctx_data[0xf].method);
      return bVar7;
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  bVar7 = (*pcVar8)();
  return bVar7;
}


/* Boolean op_Equality(SpawnRoleVariable`1[System.Boolean], Boolean) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[System::Boolean]::
     SpawnRoleVariable_1_System_Boolean__op_Equality_1
               (SpawnRoleVariable_1_System_Boolean_ *a,bool b,MethodInfo *method)

{
  pMVar1 = method;
  if (a != (SpawnRoleVariable_1_System_Boolean_ *)0x0) {
    pSVar2 = (a->fields).subscribableVariable;
    if (pSVar2 != (SubscribableVariable_1_System_Boolean_ *)0x0) {
      pIVar3 = method->klass;
      if (pIVar3->initialized_and_no_error == 0) {
        pIVar3 = (Il2CppClass *)func_?(pIVar3);
      }
      pIVar4 = (pIVar3->rgctx_data[6].method)->virtualMethodPointer;
      pIVar3 = pMVar1->klass;
      if (pIVar3->initialized_and_no_error == 0) {
        pIVar3 = (Il2CppClass *)func_?(pIVar3);
      }
      uVar5 = (*pIVar4)(pSVar2,pIVar3->rgctx_data[6].rgctxDataDummy);
      a = (SpawnRoleVariable_1_System_Boolean_ *)CONCAT13(uVar5,a._0_3_);
      pIVar3 = pMVar1->klass;
      if (pIVar3->initialized_and_no_error == 0) {
        pIVar3 = (Il2CppClass *)func_?(pIVar3);
      }
      pvVar6 = pIVar3->rgctx_data[0xe].rgctxDataDummy;
      if ((*(byte *)((int)pvVar6 + 0xba) & 1) == 0) {
        pvVar6 = (void *)func_?(pvVar6);
      }
      obj = (Object *)func_?(pvVar6,(int)&a + 3);
      pIVar3 = pMVar1->klass;
      if (pIVar3->initialized_and_no_error == 0) {
        pIVar3 = (Il2CppClass *)func_?(pIVar3);
      }
      bVar7 = mscorlib.dll::System::Boolean::Boolean_Equals
                        ((Boolean *)&b,obj,pIVar3->rgctx_data[0xf].method);
      return bVar7;
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  bVar7 = (*pcVar8)();
  return bVar7;
}


/* Boolean op_Equality(SpawnRoleVariable`1[System.Boolean], SpawnRoleVariable`1[System.Boolean]) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[System::Boolean]::
     SpawnRoleVariable_1_System_Boolean__op_Equality_2
               (SpawnRoleVariable_1_System_Boolean_ *a,SpawnRoleVariable_1_System_Boolean_ *b,
               MethodInfo *method)

{
  pMVar1 = method;
  if (a != (SpawnRoleVariable_1_System_Boolean_ *)0x0) {
    pSVar2 = (a->fields).subscribableVariable;
    if (pSVar2 != (SubscribableVariable_1_System_Boolean_ *)0x0) {
      pIVar3 = method->klass;
      if (pIVar3->initialized_and_no_error == 0) {
        pIVar3 = (Il2CppClass *)func_?(pIVar3);
      }
      pIVar4 = (pIVar3->rgctx_data[6].method)->virtualMethodPointer;
      pIVar3 = pMVar1->klass;
      if (pIVar3->initialized_and_no_error == 0) {
        pIVar3 = (Il2CppClass *)func_?(pIVar3);
      }
      (*pIVar4)(pSVar2,pIVar3->rgctx_data[6].rgctxDataDummy);
      if ((b != (SpawnRoleVariable_1_System_Boolean_ *)0x0) &&
         (pSVar2 = (b->fields).subscribableVariable,
         pSVar2 != (SubscribableVariable_1_System_Boolean_ *)0x0)) {
        pIVar3 = pMVar1->klass;
        if (pIVar3->initialized_and_no_error == 0) {
          pIVar3 = (Il2CppClass *)func_?(pIVar3);
        }
        pIVar4 = (pIVar3->rgctx_data[6].method)->virtualMethodPointer;
        pIVar3 = pMVar1->klass;
        if (pIVar3->initialized_and_no_error == 0) {
          pIVar3 = (Il2CppClass *)func_?(pIVar3);
        }
        uVar5 = (*pIVar4)(pSVar2,pIVar3->rgctx_data[6].rgctxDataDummy);
        a = (SpawnRoleVariable_1_System_Boolean_ *)CONCAT13(uVar5,a._0_3_);
        pIVar3 = pMVar1->klass;
        if (pIVar3->initialized_and_no_error == 0) {
          pIVar3 = (Il2CppClass *)func_?(pIVar3);
        }
        pvVar6 = pIVar3->rgctx_data[0xe].rgctxDataDummy;
        if ((*(byte *)((int)pvVar6 + 0xba) & 1) == 0) {
          pvVar6 = (void *)func_?(pvVar6);
        }
        obj = (Object *)func_?(pvVar6,(int)&a + 3);
        pIVar3 = pMVar1->klass;
        if (pIVar3->initialized_and_no_error == 0) {
          pIVar3 = (Il2CppClass *)func_?(pIVar3);
        }
        bVar7 = mscorlib.dll::System::Boolean::Boolean_Equals
                          ((Boolean *)&stack0xfffffffb,obj,pIVar3->rgctx_data[0xf].method);
        return bVar7;
      }
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  bVar7 = (*pcVar8)();
  return bVar7;
}


/* Boolean op_Inequality(Boolean, SpawnRoleVariable`1[System.Boolean]) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[System::Boolean]::
     SpawnRoleVariable_1_System_Boolean__op_Inequality
               (bool b,SpawnRoleVariable_1_System_Boolean_ *a,MethodInfo *method)

{
  pMVar1 = method;
  if (a != (SpawnRoleVariable_1_System_Boolean_ *)0x0) {
    pSVar2 = (a->fields).subscribableVariable;
    if (pSVar2 != (SubscribableVariable_1_System_Boolean_ *)0x0) {
      pIVar3 = method->klass;
      if (pIVar3->initialized_and_no_error == 0) {
        pIVar3 = (Il2CppClass *)func_?(pIVar3);
      }
      pIVar4 = (pIVar3->rgctx_data[6].method)->virtualMethodPointer;
      pIVar3 = pMVar1->klass;
      if (pIVar3->initialized_and_no_error == 0) {
        pIVar3 = (Il2CppClass *)func_?(pIVar3);
      }
      uVar5 = (*pIVar4)(pSVar2,pIVar3->rgctx_data[6].rgctxDataDummy);
      a = (SpawnRoleVariable_1_System_Boolean_ *)CONCAT13(uVar5,a._0_3_);
      pIVar3 = pMVar1->klass;
      if (pIVar3->initialized_and_no_error == 0) {
        pIVar3 = (Il2CppClass *)func_?(pIVar3);
      }
      pvVar6 = pIVar3->rgctx_data[0xe].rgctxDataDummy;
      if ((*(byte *)((int)pvVar6 + 0xba) & 1) == 0) {
        pvVar6 = (void *)func_?(pvVar6);
      }
      obj = (Object *)func_?(pvVar6,(int)&a + 3);
      pIVar3 = pMVar1->klass;
      if (pIVar3->initialized_and_no_error == 0) {
        pIVar3 = (Il2CppClass *)func_?(pIVar3);
      }
      bVar7 = mscorlib.dll::System::Boolean::Boolean_Equals
                        ((Boolean *)&b,obj,pIVar3->rgctx_data[0xf].method);
      return bVar7 == 0;
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  bVar7 = (*pcVar8)();
  return bVar7;
}


/* Boolean op_Inequality(SpawnRoleVariable`1[System.Boolean], Boolean) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[System::Boolean]::
     SpawnRoleVariable_1_System_Boolean__op_Inequality_1
               (SpawnRoleVariable_1_System_Boolean_ *a,bool b,MethodInfo *method)

{
  pMVar1 = method;
  if (a != (SpawnRoleVariable_1_System_Boolean_ *)0x0) {
    pSVar2 = (a->fields).subscribableVariable;
    if (pSVar2 != (SubscribableVariable_1_System_Boolean_ *)0x0) {
      pIVar3 = method->klass;
      if (pIVar3->initialized_and_no_error == 0) {
        pIVar3 = (Il2CppClass *)func_?(pIVar3);
      }
      pIVar4 = (pIVar3->rgctx_data[6].method)->virtualMethodPointer;
      pIVar3 = pMVar1->klass;
      if (pIVar3->initialized_and_no_error == 0) {
        pIVar3 = (Il2CppClass *)func_?(pIVar3);
      }
      uVar5 = (*pIVar4)(pSVar2,pIVar3->rgctx_data[6].rgctxDataDummy);
      a = (SpawnRoleVariable_1_System_Boolean_ *)CONCAT13(uVar5,a._0_3_);
      pIVar3 = pMVar1->klass;
      if (pIVar3->initialized_and_no_error == 0) {
        pIVar3 = (Il2CppClass *)func_?(pIVar3);
      }
      pvVar6 = pIVar3->rgctx_data[0xe].rgctxDataDummy;
      if ((*(byte *)((int)pvVar6 + 0xba) & 1) == 0) {
        pvVar6 = (void *)func_?(pvVar6);
      }
      obj = (Object *)func_?(pvVar6,(int)&a + 3);
      pIVar3 = pMVar1->klass;
      if (pIVar3->initialized_and_no_error == 0) {
        pIVar3 = (Il2CppClass *)func_?(pIVar3);
      }
      bVar7 = mscorlib.dll::System::Boolean::Boolean_Equals
                        ((Boolean *)&b,obj,pIVar3->rgctx_data[0xf].method);
      return bVar7 == 0;
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  bVar7 = (*pcVar8)();
  return bVar7;
}

