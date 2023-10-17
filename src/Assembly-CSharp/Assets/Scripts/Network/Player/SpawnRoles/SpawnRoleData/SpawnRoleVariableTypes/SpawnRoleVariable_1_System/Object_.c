
/* Boolean Equals(SpawnRoleVariable`1[System.Object]) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[System::Object]::
     SpawnRoleVariable_1_System_Object__Equals
               (SpawnRoleVariable_1_System_Object_ *this,SpawnRoleVariable_1_System_Object_ *other,
               MethodInfo *method)

{
  pSVar1 = (this->fields).subscribableVariable;
  if (pSVar1 != (SubscribableVariable_1_System_Object_ *)0x0) {
    piVar2 = (int *)(*(method->klass->rgctx_data[6].method)->virtualMethodPointer)
                              (pSVar1,method->klass->rgctx_data[6].rgctxDataDummy);
    if ((other != (SpawnRoleVariable_1_System_Object_ *)0x0) &&
       (pSVar1 = (other->fields).subscribableVariable,
       pSVar1 != (SubscribableVariable_1_System_Object_ *)0x0)) {
      uVar3 = (*(method->klass->rgctx_data[6].method)->virtualMethodPointer)
                        (pSVar1,method->klass->rgctx_data[6].rgctxDataDummy);
      if (piVar2 != (int *)0x0) {
        bVar4 = (**(code **)(*piVar2 + 0xbc))(piVar2,uVar3,*(undefined4 *)(*piVar2 + 0xc0));
        return bVar4;
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  bVar4 = (*pcVar5)();
  return bVar4;
}


/* Boolean Equals(Object) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[System::Object]::
     SpawnRoleVariable_1_System_Object__Equals_1
               (SpawnRoleVariable_1_System_Object_ *this,Object *obj,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Type);
    cRam_? = '\x01';
  }
  if (obj == (Object *)0x0) {
    return 0;
  }
  if (this == (SpawnRoleVariable_1_System_Object_ *)obj) {
    return 1;
  }
  left._source = (CancellationTokenSource *)
                 mscorlib.dll::System::Object::Object_GetType(obj,(MethodInfo *)0x0);
  if (this != (SpawnRoleVariable_1_System_Object_ *)0x0) {
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


/* Void SubscribableVariableOnOnChange(Object) */

void Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[System::Object]::
     SpawnRoleVariable_1_System_Object__SubscribableVariableOnOnChange
               (SpawnRoleVariable_1_System_Object_ *this,Object *value,MethodInfo *method)

{
  if ((this->fields).OnChange != (SpawnRoleVariable_1_T_SubDelegate_System_Object_ *)0x0) {
    (*(method->klass->rgctx_data[0xd].method)->virtualMethodPointer)
              ((this->fields).OnChange,value,method->klass->rgctx_data[0xd].rgctxDataDummy);
  }
  return;
}


/* SpawnRoleVariable`1[System.Object](Object) */

void Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[System::Object]::
     SpawnRoleVariable_1_System_Object___ctor
               (SpawnRoleVariable_1_System_Object_ *this,Object *value,MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  pvVar1 = method->klass->rgctx_data[7].rgctxDataDummy;
  if ((*(byte *)((int)pvVar1 + 0xba) & 1) == 0) {
    pvVar1 = (void *)func_?(pvVar1);
  }
  pSVar2 = (SubscribableVariable_1_System_Object_ *)func_?(pvVar1);
  if (pSVar2 != (SubscribableVariable_1_System_Object_ *)0x0) {
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
      if (pSVar2 != (SubscribableVariable_1_System_Object_ *)0x0) {
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


/* Object get_Value() */

Object * Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
         SpawnRoleVariableTypes::SpawnRoleVariable`1[System::Object]::
         SpawnRoleVariable_1_System_Object__get_Value
                   (SpawnRoleVariable_1_System_Object_ *this,MethodInfo *method)

{
  pSVar1 = (this->fields).subscribableVariable;
  if (pSVar1 != (SubscribableVariable_1_System_Object_ *)0x0) {
    pOVar2 = (Object *)
             (*(method->klass->rgctx_data[6].method)->virtualMethodPointer)
                       (pSVar1,method->klass->rgctx_data[6].rgctxDataDummy);
    return pOVar2;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  pOVar2 = (Object *)(*pcVar3)();
  return pOVar2;
}


/* Boolean op_Equality(Object, SpawnRoleVariable`1[System.Object]) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[System::Object]::
     SpawnRoleVariable_1_System_Object__op_Equality
               (Object *b,SpawnRoleVariable_1_System_Object_ *a,MethodInfo *method)

{
  if (a != (SpawnRoleVariable_1_System_Object_ *)0x0) {
    pSVar1 = (a->fields).subscribableVariable;
    if (pSVar1 != (SubscribableVariable_1_System_Object_ *)0x0) {
      pIVar2 = method->klass;
      if (pIVar2->initialized_and_no_error == 0) {
        pIVar2 = (Il2CppClass *)func_?(pIVar2);
      }
      pIVar3 = (pIVar2->rgctx_data[6].method)->virtualMethodPointer;
      pIVar2 = method->klass;
      if (pIVar2->initialized_and_no_error == 0) {
        pIVar2 = (Il2CppClass *)func_?(pIVar2);
      }
      uVar4 = (*pIVar3)(pSVar1,pIVar2->rgctx_data[6].rgctxDataDummy);
      if (b != (Object *)0x0) {
        bVar5 = (*(b->klass->vtable).Equals.methodPtr)(b,uVar4,(b->klass->vtable).Equals.method);
        return bVar5;
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  bVar5 = (*pcVar6)();
  return bVar5;
}


/* Boolean op_Equality(SpawnRoleVariable`1[System.Object], Object) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[System::Object]::
     SpawnRoleVariable_1_System_Object__op_Equality_1
               (SpawnRoleVariable_1_System_Object_ *a,Object *b,MethodInfo *method)

{
  if (a != (SpawnRoleVariable_1_System_Object_ *)0x0) {
    pSVar1 = (a->fields).subscribableVariable;
    if (pSVar1 != (SubscribableVariable_1_System_Object_ *)0x0) {
      pIVar2 = method->klass;
      if (pIVar2->initialized_and_no_error == 0) {
        pIVar2 = (Il2CppClass *)func_?(pIVar2);
      }
      pIVar3 = (pIVar2->rgctx_data[6].method)->virtualMethodPointer;
      pIVar2 = method->klass;
      if (pIVar2->initialized_and_no_error == 0) {
        pIVar2 = (Il2CppClass *)func_?(pIVar2);
      }
      uVar4 = (*pIVar3)(pSVar1,pIVar2->rgctx_data[6].rgctxDataDummy);
      if (b != (Object *)0x0) {
        bVar5 = (*(b->klass->vtable).Equals.methodPtr)(b,uVar4,(b->klass->vtable).Equals.method);
        return bVar5;
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  bVar5 = (*pcVar6)();
  return bVar5;
}


/* Boolean op_Equality(SpawnRoleVariable`1[System.Object], SpawnRoleVariable`1[System.Object]) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[System::Object]::
     SpawnRoleVariable_1_System_Object__op_Equality_2
               (SpawnRoleVariable_1_System_Object_ *a,SpawnRoleVariable_1_System_Object_ *b,
               MethodInfo *method)

{
  if (a != (SpawnRoleVariable_1_System_Object_ *)0x0) {
    pSVar1 = (a->fields).subscribableVariable;
    if (pSVar1 != (SubscribableVariable_1_System_Object_ *)0x0) {
      pIVar2 = method->klass;
      if (pIVar2->initialized_and_no_error == 0) {
        pIVar2 = (Il2CppClass *)func_?(pIVar2);
      }
      pIVar3 = (pIVar2->rgctx_data[6].method)->virtualMethodPointer;
      pIVar2 = method->klass;
      if (pIVar2->initialized_and_no_error == 0) {
        pIVar2 = (Il2CppClass *)func_?(pIVar2);
      }
      piVar4 = (int *)(*pIVar3)(pSVar1,pIVar2->rgctx_data[6].rgctxDataDummy);
      if ((b != (SpawnRoleVariable_1_System_Object_ *)0x0) &&
         (pSVar1 = (b->fields).subscribableVariable,
         pSVar1 != (SubscribableVariable_1_System_Object_ *)0x0)) {
        pIVar2 = method->klass;
        if (pIVar2->initialized_and_no_error == 0) {
          pIVar2 = (Il2CppClass *)func_?(pIVar2);
        }
        pIVar3 = (pIVar2->rgctx_data[6].method)->virtualMethodPointer;
        pIVar2 = method->klass;
        if (pIVar2->initialized_and_no_error == 0) {
          pIVar2 = (Il2CppClass *)func_?(pIVar2);
        }
        uVar5 = (*pIVar3)(pSVar1,pIVar2->rgctx_data[6].rgctxDataDummy);
        if (piVar4 != (int *)0x0) {
          bVar6 = (**(code **)(*piVar4 + 0xbc))(piVar4,uVar5,*(undefined4 *)(*piVar4 + 0xc0));
          return bVar6;
        }
      }
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  bVar6 = (*pcVar7)();
  return bVar6;
}


/* Object op_Implicit(SpawnRoleVariable`1[System.Object]) */

Object * Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
         SpawnRoleVariableTypes::SpawnRoleVariable`1[System::Object]::
         SpawnRoleVariable_1_System_Object__op_Implicit
                   (SpawnRoleVariable_1_System_Object_ *s,MethodInfo *method)

{
  if (s != (SpawnRoleVariable_1_System_Object_ *)0x0) {
    pSVar1 = (s->fields).subscribableVariable;
    if (pSVar1 != (SubscribableVariable_1_System_Object_ *)0x0) {
      pIVar2 = method->klass;
      if (pIVar2->initialized_and_no_error == 0) {
        pIVar2 = (Il2CppClass *)func_?(pIVar2);
      }
      pIVar3 = (pIVar2->rgctx_data[6].method)->virtualMethodPointer;
      pIVar2 = method->klass;
      if (pIVar2->initialized_and_no_error == 0) {
        pIVar2 = (Il2CppClass *)func_?(pIVar2);
      }
      pOVar4 = (Object *)(*pIVar3)(pSVar1,pIVar2->rgctx_data[6].rgctxDataDummy);
      return pOVar4;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  pOVar4 = (Object *)(*pcVar5)();
  return pOVar4;
}


/* Boolean op_Inequality(Object, SpawnRoleVariable`1[System.Object]) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[System::Object]::
     SpawnRoleVariable_1_System_Object__op_Inequality
               (Object *b,SpawnRoleVariable_1_System_Object_ *a,MethodInfo *method)

{
  if (a != (SpawnRoleVariable_1_System_Object_ *)0x0) {
    pSVar1 = (a->fields).subscribableVariable;
    if (pSVar1 != (SubscribableVariable_1_System_Object_ *)0x0) {
      pIVar2 = method->klass;
      if (pIVar2->initialized_and_no_error == 0) {
        pIVar2 = (Il2CppClass *)func_?(pIVar2);
      }
      pIVar3 = (pIVar2->rgctx_data[6].method)->virtualMethodPointer;
      pIVar2 = method->klass;
      if (pIVar2->initialized_and_no_error == 0) {
        pIVar2 = (Il2CppClass *)func_?(pIVar2);
      }
      uVar4 = (*pIVar3)(pSVar1,pIVar2->rgctx_data[6].rgctxDataDummy);
      if (b != (Object *)0x0) {
        cVar5 = (*(b->klass->vtable).Equals.methodPtr)(b,uVar4,(b->klass->vtable).Equals.method);
        return cVar5 == '\0';
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  bVar7 = (*pcVar6)();
  return bVar7;
}


/* Boolean op_Inequality(SpawnRoleVariable`1[System.Object], Object) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[System::Object]::
     SpawnRoleVariable_1_System_Object__op_Inequality_1
               (SpawnRoleVariable_1_System_Object_ *a,Object *b,MethodInfo *method)

{
  if (a != (SpawnRoleVariable_1_System_Object_ *)0x0) {
    pSVar1 = (a->fields).subscribableVariable;
    if (pSVar1 != (SubscribableVariable_1_System_Object_ *)0x0) {
      pIVar2 = method->klass;
      if (pIVar2->initialized_and_no_error == 0) {
        pIVar2 = (Il2CppClass *)func_?(pIVar2);
      }
      pIVar3 = (pIVar2->rgctx_data[6].method)->virtualMethodPointer;
      pIVar2 = method->klass;
      if (pIVar2->initialized_and_no_error == 0) {
        pIVar2 = (Il2CppClass *)func_?(pIVar2);
      }
      uVar4 = (*pIVar3)(pSVar1,pIVar2->rgctx_data[6].rgctxDataDummy);
      if (b != (Object *)0x0) {
        cVar5 = (*(b->klass->vtable).Equals.methodPtr)(b,uVar4,(b->klass->vtable).Equals.method);
        return cVar5 == '\0';
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  bVar7 = (*pcVar6)();
  return bVar7;
}

