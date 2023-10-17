
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
    uVar3 = (*(method->klass->rgctx_data[6].method)->virtualMethodPointer)
                      (pSVar2,method->klass->rgctx_data[6].rgctxDataDummy);
    if ((other != (SpawnRoleVariable_1_System_ByteEnum_ *)0x0) &&
       (pSVar2 = (other->fields).subscribableVariable,
       pSVar2 != (SubscribableVariable_1_System_ByteEnum_ *)0x0)) {
      uVar4 = (*(pMVar1->klass->rgctx_data[6].method)->virtualMethodPointer)
                        (pSVar2,pMVar1->klass->rgctx_data[6].rgctxDataDummy);
      this = (SpawnRoleVariable_1_System_ByteEnum_ *)CONCAT13(uVar4,this._0_3_);
      pvVar5 = pMVar1->klass->rgctx_data[0xe].rgctxDataDummy;
      if ((*(byte *)((int)pvVar5 + 0xba) & 1) == 0) {
        pvVar5 = (void *)func_?(pvVar5);
      }
      obj = (Object *)func_?(pvVar5,(int)&this + 3);
      VStack_6.klass = pMVar1->klass->rgctx_data[0xe].rgctxDataDummy;
      if (((VStack_6.klass)->_1).initialized_and_no_error == 0) {
        VStack_6.klass = (ValueType__Class *)func_?(VStack_6.klass);
      }
      VStack_6.monitor = (MonitorData *)0xffffffff;
      uStack_7 = uVar3;
      bVar8 = mscorlib.dll::System::ValueType::ValueType_Equals(&VStack_6,obj,(MethodInfo *)0x0);
      return bVar8;
    }
  }
  func_?();
  pcVar9 = (code *)swi(3);
  bVar8 = (*pcVar9)();
  return bVar8;
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
  left._source = (CancellationTokenSource *)
                 mscorlib.dll::System::Object::Object_GetType(obj,(MethodInfo *)0x0);
  if (this != (SpawnRoleVariable_1_System_ByteEnum_ *)0x0) {
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
      a = (SpawnRoleVariable_1_System_ByteEnum_ *)CONCAT13(uVar5,a._0_3_);
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
      pVVar7 = pIVar3->rgctx_data[0xe].rgctxDataDummy;
      if ((pVVar7->_1).initialized_and_no_error == 0) {
        pVVar7 = (ValueType__Class *)func_?(pVVar7);
      }
      uStack_8 = (undefined1)b;
      VStack_9.monitor = (MonitorData *)0xffffffff;
      VStack_9.klass = pVVar7;
      bVar10 = mscorlib.dll::System::ValueType::ValueType_Equals(&VStack_9,obj,(MethodInfo *)0x0);
      return bVar10;
    }
  }
  func_?();
  pcVar11 = (code *)swi(3);
  bVar10 = (*pcVar11)();
  return bVar10;
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
      a = (SpawnRoleVariable_1_System_ByteEnum_ *)CONCAT13(uVar5,a._0_3_);
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
      pVVar7 = pIVar3->rgctx_data[0xe].rgctxDataDummy;
      if ((pVVar7->_1).initialized_and_no_error == 0) {
        pVVar7 = (ValueType__Class *)func_?(pVVar7);
      }
      uStack_8 = (undefined1)b;
      VStack_9.monitor = (MonitorData *)0xffffffff;
      VStack_9.klass = pVVar7;
      bVar10 = mscorlib.dll::System::ValueType::ValueType_Equals(&VStack_9,obj,(MethodInfo *)0x0);
      return bVar10;
    }
  }
  func_?();
  pcVar11 = (code *)swi(3);
  bVar10 = (*pcVar11)();
  return bVar10;
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
      if ((b != (SpawnRoleVariable_1_System_ByteEnum_ *)0x0) &&
         (pSVar2 = (b->fields).subscribableVariable,
         pSVar2 != (SubscribableVariable_1_System_ByteEnum_ *)0x0)) {
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
        a = (SpawnRoleVariable_1_System_ByteEnum_ *)CONCAT13(uVar5,a._0_3_);
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
          pIVar3 = (Il2CppClass *)func_?();
        }
        if ((*(byte *)((int)pIVar3->rgctx_data[0xe].rgctxDataDummy + 0xba) & 1) == 0) {
          func_?();
        }
        bVar7 = mscorlib.dll::System::ValueType::ValueType_Equals
                          ((ValueType *)&stack0xffffffec,obj,(MethodInfo *)0x0);
        return bVar7;
      }
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  bVar7 = (*pcVar8)();
  return bVar7;
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
      a = (SpawnRoleVariable_1_System_ByteEnum_ *)CONCAT13(uVar5,a._0_3_);
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
      pVVar7 = pIVar3->rgctx_data[0xe].rgctxDataDummy;
      if ((pVVar7->_1).initialized_and_no_error == 0) {
        pVVar7 = (ValueType__Class *)func_?(pVVar7);
      }
      uStack_8 = (undefined1)b;
      VStack_9.monitor = (MonitorData *)0xffffffff;
      VStack_9.klass = pVVar7;
      bVar10 = mscorlib.dll::System::ValueType::ValueType_Equals(&VStack_9,obj,(MethodInfo *)0x0);
      return bVar10 == 0;
    }
  }
  func_?();
  pcVar11 = (code *)swi(3);
  bVar10 = (*pcVar11)();
  return bVar10;
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
      a = (SpawnRoleVariable_1_System_ByteEnum_ *)CONCAT13(uVar5,a._0_3_);
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
      pVVar7 = pIVar3->rgctx_data[0xe].rgctxDataDummy;
      if ((pVVar7->_1).initialized_and_no_error == 0) {
        pVVar7 = (ValueType__Class *)func_?(pVVar7);
      }
      uStack_8 = (undefined1)b;
      VStack_9.monitor = (MonitorData *)0xffffffff;
      VStack_9.klass = pVVar7;
      bVar10 = mscorlib.dll::System::ValueType::ValueType_Equals(&VStack_9,obj,(MethodInfo *)0x0);
      return bVar10 == 0;
    }
  }
  func_?();
  pcVar11 = (code *)swi(3);
  bVar10 = (*pcVar11)();
  return bVar10;
}

