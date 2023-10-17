
/* Boolean Equals(SpawnRoleVariable`1[System.Single]) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[System::Single]::
     SpawnRoleVariable_1_System_Single__Equals
               (SpawnRoleVariable_1_System_Single_ *this,SpawnRoleVariable_1_System_Single_ *other,
               MethodInfo *method)

{
  pSVar1 = (this->fields).subscribableVariable;
  if (pSVar1 != (SubscribableVariable_1_System_Single_ *)0x0) {
    fVar2 = (float10)(*(method->klass->rgctx_data[6].method)->virtualMethodPointer)
                               (pSVar1,method->klass->rgctx_data[6].rgctxDataDummy);
    SStack_3.m_value = (float)fVar2;
    if ((other != (SpawnRoleVariable_1_System_Single_ *)0x0) &&
       (pSVar1 = (other->fields).subscribableVariable,
       pSVar1 != (SubscribableVariable_1_System_Single_ *)0x0)) {
      fVar2 = (float10)(*(method->klass->rgctx_data[6].method)->virtualMethodPointer)
                                 (pSVar1,method->klass->rgctx_data[6].rgctxDataDummy);
      fStack_4 = (float)fVar2;
      pvVar5 = method->klass->rgctx_data[0xe].rgctxDataDummy;
      if ((*(byte *)((int)pvVar5 + 0xba) & 1) == 0) {
        pvVar5 = (void *)func_?(pvVar5);
      }
      obj = (Object *)func_?(pvVar5,&fStack_4);
      bVar6 = mscorlib.dll::System::Single::Single_Equals
                        (&SStack_3,obj,method->klass->rgctx_data[0xf].method);
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
  left._source = (CancellationTokenSource *)
                 mscorlib.dll::System::Object::Object_GetType(obj,(MethodInfo *)0x0);
  if (this != (SpawnRoleVariable_1_System_Single_ *)0x0) {
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


/* Void SubscribableVariableOnOnChange(Single) */

void Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[System::Single]::
     SpawnRoleVariable_1_System_Single__SubscribableVariableOnOnChange
               (SpawnRoleVariable_1_System_Single_ *this,float value,MethodInfo *method)

{
  if ((this->fields).OnChange != (SpawnRoleVariable_1_T_SubDelegate_System_Single_ *)0x0) {
    (*(method->klass->rgctx_data[0xd].method)->virtualMethodPointer)
              ((this->fields).OnChange,value,method->klass->rgctx_data[0xd].rgctxDataDummy);
  }
  return;
}


/* SpawnRoleVariable`1[System.Single](Single) */

void Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[System::Single]::
     SpawnRoleVariable_1_System_Single___ctor
               (SpawnRoleVariable_1_System_Single_ *this,float value,MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  pvVar1 = method->klass->rgctx_data[7].rgctxDataDummy;
  if ((*(byte *)((int)pvVar1 + 0xba) & 1) == 0) {
    pvVar1 = (void *)func_?(pvVar1);
  }
  pSVar2 = (SubscribableVariable_1_System_Single_ *)func_?(pvVar1);
  if (pSVar2 != (SubscribableVariable_1_System_Single_ *)0x0) {
    (*(method->klass->rgctx_data[8].method)->virtualMethodPointer)
              (pSVar2,value,method->klass->rgctx_data[8].rgctxDataDummy);
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
      if (pSVar2 != (SubscribableVariable_1_System_Single_ *)0x0) {
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


/* Single get_Value() */

float Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
      SpawnRoleVariableTypes::SpawnRoleVariable`1[System::Single]::
      SpawnRoleVariable_1_System_Single__get_Value
                (SpawnRoleVariable_1_System_Single_ *this,MethodInfo *method)

{
  IStack_1.rgctxDataDummy = &stack0xfffffffc;
  pSStack_2 = (this->fields).subscribableVariable;
  if (pSStack_2 != (SubscribableVariable_1_System_Single_ *)0x0) {
    IStack_1 = method->klass->rgctx_data[6];
    fVar3 = (float10)(*(method->klass->rgctx_data[6].method)->virtualMethodPointer)();
    return (float)fVar3;
  }
  uVar4 = func_?(&puStack_5);
  func_?(uVar4);
  pcVar6 = (code *)swi(3);
  fVar3 = (float10)(*pcVar6)();
  return (float)fVar3;
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
      pIVar3 = method->klass;
      if (pIVar3->initialized_and_no_error == 0) {
        pIVar3 = (Il2CppClass *)func_?(pIVar3);
      }
      a = (SpawnRoleVariable_1_System_Single_ *)(pIVar3->rgctx_data[6].method)->virtualMethodPointer
      ;
      pIVar3 = pMVar1->klass;
      if (pIVar3->initialized_and_no_error == 0) {
        pIVar3 = (Il2CppClass *)func_?(pIVar3);
      }
      fVar4 = (float10)(*(code *)a)(pSVar2,pIVar3->rgctx_data[6].rgctxDataDummy);
      pIVar3 = pMVar1->klass;
      fStack_5 = (float)fVar4;
      if (pIVar3->initialized_and_no_error == 0) {
        pIVar3 = (Il2CppClass *)func_?(pIVar3);
      }
      pvVar6 = pIVar3->rgctx_data[0xe].rgctxDataDummy;
      if ((*(byte *)((int)pvVar6 + 0xba) & 1) == 0) {
        pvVar6 = (void *)func_?(pvVar6);
      }
      obj = (Object *)func_?(pvVar6,&fStack_5);
      pIVar3 = pMVar1->klass;
      if (pIVar3->initialized_and_no_error == 0) {
        pIVar3 = (Il2CppClass *)func_?(pIVar3);
      }
      bVar7 = mscorlib.dll::System::Single::Single_Equals
                        ((Single *)&b,obj,pIVar3->rgctx_data[0xf].method);
      return bVar7;
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  bVar7 = (*pcVar8)();
  return bVar7;
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
      pIVar3 = method->klass;
      if (pIVar3->initialized_and_no_error == 0) {
        pIVar3 = (Il2CppClass *)func_?(pIVar3);
      }
      pIVar4 = (pIVar3->rgctx_data[6].method)->virtualMethodPointer;
      pIVar3 = pMVar1->klass;
      if (pIVar3->initialized_and_no_error == 0) {
        pIVar3 = (Il2CppClass *)func_?(pIVar3);
      }
      fVar5 = (float10)(*pIVar4)(pSVar2,pIVar3->rgctx_data[6].rgctxDataDummy);
      pIVar3 = pMVar1->klass;
      fStack_6 = (float)fVar5;
      if (pIVar3->initialized_and_no_error == 0) {
        pIVar3 = (Il2CppClass *)func_?(pIVar3);
      }
      pvVar7 = pIVar3->rgctx_data[0xe].rgctxDataDummy;
      if ((*(byte *)((int)pvVar7 + 0xba) & 1) == 0) {
        pvVar7 = (void *)func_?(pvVar7);
      }
      obj = (Object *)func_?(pvVar7,&fStack_6);
      pIVar3 = pMVar1->klass;
      if (pIVar3->initialized_and_no_error == 0) {
        pIVar3 = (Il2CppClass *)func_?(pIVar3);
      }
      bVar8 = mscorlib.dll::System::Single::Single_Equals
                        ((Single *)&b,obj,pIVar3->rgctx_data[0xf].method);
      return bVar8;
    }
  }
  func_?();
  pcVar9 = (code *)swi(3);
  bVar8 = (*pcVar9)();
  return bVar8;
}


/* Boolean op_Equality(SpawnRoleVariable`1[System.Single], SpawnRoleVariable`1[System.Single]) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[System::Single]::
     SpawnRoleVariable_1_System_Single__op_Equality_2
               (SpawnRoleVariable_1_System_Single_ *a,SpawnRoleVariable_1_System_Single_ *b,
               MethodInfo *method)

{
  if (a != (SpawnRoleVariable_1_System_Single_ *)0x0) {
    pSVar1 = (a->fields).subscribableVariable;
    if (pSVar1 != (SubscribableVariable_1_System_Single_ *)0x0) {
      pIVar2 = method->klass;
      if (pIVar2->initialized_and_no_error == 0) {
        pIVar2 = (Il2CppClass *)func_?(pIVar2);
      }
      pIVar3 = (pIVar2->rgctx_data[6].method)->virtualMethodPointer;
      pIVar2 = method->klass;
      if (pIVar2->initialized_and_no_error == 0) {
        pIVar2 = (Il2CppClass *)func_?(pIVar2);
      }
      fVar4 = (float10)(*pIVar3)(pSVar1,pIVar2->rgctx_data[6].rgctxDataDummy);
      SStack_5.m_value = (float)fVar4;
      if ((b != (SpawnRoleVariable_1_System_Single_ *)0x0) &&
         (pSVar1 = (b->fields).subscribableVariable,
         pSVar1 != (SubscribableVariable_1_System_Single_ *)0x0)) {
        pIVar2 = method->klass;
        if (pIVar2->initialized_and_no_error == 0) {
          pIVar2 = (Il2CppClass *)func_?(pIVar2);
        }
        pIVar3 = (pIVar2->rgctx_data[6].method)->virtualMethodPointer;
        pIVar2 = method->klass;
        if (pIVar2->initialized_and_no_error == 0) {
          pIVar2 = (Il2CppClass *)func_?(pIVar2);
        }
        fVar4 = (float10)(*pIVar3)(pSVar1,pIVar2->rgctx_data[6].rgctxDataDummy);
        pIVar2 = method->klass;
        fStack_6 = (float)fVar4;
        if (pIVar2->initialized_and_no_error == 0) {
          pIVar2 = (Il2CppClass *)func_?(pIVar2);
        }
        pvVar7 = pIVar2->rgctx_data[0xe].rgctxDataDummy;
        if ((*(byte *)((int)pvVar7 + 0xba) & 1) == 0) {
          pvVar7 = (void *)func_?(pvVar7);
        }
        obj = (Object *)func_?(pvVar7,&fStack_6);
        pIVar2 = method->klass;
        if (pIVar2->initialized_and_no_error == 0) {
          pIVar2 = (Il2CppClass *)func_?(pIVar2);
        }
        bVar8 = mscorlib.dll::System::Single::Single_Equals
                          (&SStack_5,obj,pIVar2->rgctx_data[0xf].method);
        return bVar8;
      }
    }
  }
  func_?();
  pcVar9 = (code *)swi(3);
  bVar8 = (*pcVar9)();
  return bVar8;
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
      pIVar2 = method->klass;
      if (pIVar2->initialized_and_no_error == 0) {
        pIVar2 = (Il2CppClass *)func_?(pIVar2);
      }
      pIVar3 = (pIVar2->rgctx_data[6].method)->virtualMethodPointer;
      pIVar2 = method->klass;
      if (pIVar2->initialized_and_no_error == 0) {
        pIVar2 = (Il2CppClass *)func_?(pIVar2);
      }
      fVar4 = (float10)(*pIVar3)(pSVar1,pIVar2->rgctx_data[6].rgctxDataDummy);
      return (float)fVar4;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  fVar4 = (float10)(*pcVar5)();
  return (float)fVar4;
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
      pIVar3 = method->klass;
      if (pIVar3->initialized_and_no_error == 0) {
        pIVar3 = (Il2CppClass *)func_?(pIVar3);
      }
      a = (SpawnRoleVariable_1_System_Single_ *)(pIVar3->rgctx_data[6].method)->virtualMethodPointer
      ;
      pIVar3 = pMVar1->klass;
      if (pIVar3->initialized_and_no_error == 0) {
        pIVar3 = (Il2CppClass *)func_?(pIVar3);
      }
      fVar4 = (float10)(*(code *)a)(pSVar2,pIVar3->rgctx_data[6].rgctxDataDummy);
      pIVar3 = pMVar1->klass;
      fStack_5 = (float)fVar4;
      if (pIVar3->initialized_and_no_error == 0) {
        pIVar3 = (Il2CppClass *)func_?(pIVar3);
      }
      pvVar6 = pIVar3->rgctx_data[0xe].rgctxDataDummy;
      if ((*(byte *)((int)pvVar6 + 0xba) & 1) == 0) {
        pvVar6 = (void *)func_?(pvVar6);
      }
      obj = (Object *)func_?(pvVar6,&fStack_5);
      pIVar3 = pMVar1->klass;
      if (pIVar3->initialized_and_no_error == 0) {
        pIVar3 = (Il2CppClass *)func_?(pIVar3);
      }
      bVar7 = mscorlib.dll::System::Single::Single_Equals
                        ((Single *)&b,obj,pIVar3->rgctx_data[0xf].method);
      return bVar7 == 0;
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  bVar7 = (*pcVar8)();
  return bVar7;
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
      pIVar3 = method->klass;
      if (pIVar3->initialized_and_no_error == 0) {
        pIVar3 = (Il2CppClass *)func_?(pIVar3);
      }
      pIVar4 = (pIVar3->rgctx_data[6].method)->virtualMethodPointer;
      pIVar3 = pMVar1->klass;
      if (pIVar3->initialized_and_no_error == 0) {
        pIVar3 = (Il2CppClass *)func_?(pIVar3);
      }
      fVar5 = (float10)(*pIVar4)(pSVar2,pIVar3->rgctx_data[6].rgctxDataDummy);
      pIVar3 = pMVar1->klass;
      fStack_6 = (float)fVar5;
      if (pIVar3->initialized_and_no_error == 0) {
        pIVar3 = (Il2CppClass *)func_?(pIVar3);
      }
      pvVar7 = pIVar3->rgctx_data[0xe].rgctxDataDummy;
      if ((*(byte *)((int)pvVar7 + 0xba) & 1) == 0) {
        pvVar7 = (void *)func_?(pvVar7);
      }
      obj = (Object *)func_?(pvVar7,&fStack_6);
      pIVar3 = pMVar1->klass;
      if (pIVar3->initialized_and_no_error == 0) {
        pIVar3 = (Il2CppClass *)func_?(pIVar3);
      }
      bVar8 = mscorlib.dll::System::Single::Single_Equals
                        ((Single *)&b,obj,pIVar3->rgctx_data[0xf].method);
      return bVar8 == 0;
    }
  }
  func_?();
  pcVar9 = (code *)swi(3);
  bVar8 = (*pcVar9)();
  return bVar8;
}

