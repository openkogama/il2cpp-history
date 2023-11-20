
/* Boolean Equals(SpawnRoleVariable`1[System.Object]) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[System::Object]::
     SpawnRoleVariable_1_System_Object__Equals
               (SpawnRoleVariable_1_System_Object_ *this,SpawnRoleVariable_1_System_Object_ *other,
               MethodInfo *method)

{
  pSVar1 = (this->fields).subscribableVariable;
  if (((pSVar1 != (SubscribableVariable_1_System_Object_ *)0x0) &&
      (other != (SpawnRoleVariable_1_System_Object_ *)0x0)) &&
     (pSVar2 = (other->fields).subscribableVariable,
     pSVar2 != (SubscribableVariable_1_System_Object_ *)0x0)) {
    pOVar3 = (pSVar1->fields)._.value;
    if (pOVar3 != (Object *)0x0) {
      bVar4 = (*(code *)(pOVar3->klass->vtable).Equals.method)
                        (pOVar3,(pSVar2->fields)._.value,(pOVar3->klass->vtable).Finalize.methodPtr)
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
  left = (XNamespace *)mscorlib.dll::System::Object::Object_GetType(obj,(MethodInfo *)0x0);
  if (this != (SpawnRoleVariable_1_System_Object_ *)0x0) {
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
    pIVar2 = method->klass->rgctx_data->klass;
    if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
      pIVar2 = (Il2CppClass *)func_?();
    }
    if (((obj->klass->_1).naturalAligment < pIVar2->naturalAligment) ||
       ((obj->klass->_1).typeHierarchy[pIVar2->naturalAligment - 1] != pIVar2)) {
      func_?();
    }
    else {
      pSVar3 = (this->fields).subscribableVariable;
      if (((pSVar3 != (SubscribableVariable_1_System_Object_ *)0x0) &&
          (obj[1].klass != (Object__Class *)0x0)) &&
         (pOVar4 = (pSVar3->fields)._.value, pOVar4 != (Object *)0x0)) {
        bVar1 = (*(code *)(pOVar4->klass->vtable).Equals.method)();
        return bVar1;
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  bVar1 = (*pcVar5)();
  return bVar1;
}


/* Int32 GetHashCode() */

int32_t Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
        SpawnRoleVariableTypes::SpawnRoleVariable`1[System::Object]::
        SpawnRoleVariable_1_System_Object__GetHashCode
                  (SpawnRoleVariable_1_System_Object_ *this,MethodInfo *method)

{
  bVar1 = SubscribableVariableBase`1[System::Object]::
          SubscribableVariableBase_1_System_Object__op_Inequality_2
                    ((SubscribableVariableBase_1_System_Object_ *)
                     (this->fields).subscribableVariable,
                     (SubscribableVariableBase_1_System_Object_ *)0x0,
                     method->klass->rgctx_data[3].method);
  if (bVar1 == 0) {
    return 0;
  }
  pSVar2 = (this->fields).subscribableVariable;
  if (pSVar2 != (SubscribableVariable_1_System_Object_ *)0x0) {
    iVar3 = (*(code *)(pSVar2->klass->vtable).GetHashCode.method)(pSVar2);
    return iVar3;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  iVar3 = (*pcVar4)();
  return iVar3;
}


/* Void SubscribableVariableOnOnChange(Object) */

void Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[System::Object]::
     SpawnRoleVariable_1_System_Object__SubscribableVariableOnOnChange
               (SpawnRoleVariable_1_System_Object_ *this,Object *value,MethodInfo *method)

{
  if ((this->fields).OnChange != (SpawnRoleVariable_1_T_SubDelegate_System_Object_ *)0x0) {
    pSVar1 = (this->fields).OnChange;
    (*(pSVar1->fields)._._.invoke_impl)
              ((pSVar1->fields)._._.method_code,value,(pSVar1->fields)._._.method);
  }
  return;
}


/* SpawnRoleVariable`1[System.Object](Object) */

void Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[System::Object]::
     SpawnRoleVariable_1_System_Object___ctor
               (SpawnRoleVariable_1_System_Object_ *this,Object *value,MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  pIVar1 = method->klass->rgctx_data[2].klass;
  if (((uint)pIVar1->vtable[0].methodPtr & 0x100) == 0) {
    pIVar1 = (Il2CppClass *)func_?(pIVar1);
  }
  this_01 = (SubscribableVariable_1_System_Object_ *)func_?(pIVar1);
  System.dll::System::Collections::Generic::SortedList`2[TKey,TValue]+ValueList[Unity::IL2CPP::
  Metadata::__Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]
  ::
  SortedList_2_TKey_TValue_ValueList_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((SortedList_2_TKey_TValue_ValueList_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
              *)this_01,
             (SortedList_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
              *)value,method->klass->rgctx_data[10].method);
  (this->fields).subscribableVariable = this_01;
  func_?(&this->fields,this_01);
  this_00 = (SubscribableVariableBase_1_System_Single_ *)(this->fields).subscribableVariable;
  if (((uint)(method->klass->rgctx_data[0xc].klass)->vtable[0].methodPtr & 0x100) == 0) {
    func_?();
  }
  this_02 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
             *)func_?();
  DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
  DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
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


/* Boolean op_Equality(Object, SpawnRoleVariable`1[System.Object]) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[System::Object]::
     SpawnRoleVariable_1_System_Object__op_Equality
               (Object *b,SpawnRoleVariable_1_System_Object_ *a,MethodInfo *method)

{
  if (a != (SpawnRoleVariable_1_System_Object_ *)0x0) {
    pSVar1 = (a->fields).subscribableVariable;
    if (pSVar1 != (SubscribableVariable_1_System_Object_ *)0x0) {
      if (((uint)method->klass->vtable[0].methodPtr & 0x100) == 0) {
        func_?(method->klass);
      }
      if (b != (Object *)0x0) {
        bVar2 = (*(code *)(b->klass->vtable).Equals.method)
                          (b,(pSVar1->fields)._.value,(b->klass->vtable).Finalize.methodPtr);
        return bVar2;
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  bVar2 = (*pcVar3)();
  return bVar2;
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
      if (((uint)method->klass->vtable[0].methodPtr & 0x100) == 0) {
        func_?(method->klass);
      }
      if (b != (Object *)0x0) {
        bVar2 = (*(code *)(b->klass->vtable).Equals.method)
                          (b,(pSVar1->fields)._.value,(b->klass->vtable).Finalize.methodPtr);
        return bVar2;
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  bVar2 = (*pcVar3)();
  return bVar2;
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
      if (((uint)method->klass->vtable[0].methodPtr & 0x100) == 0) {
        func_?(method->klass);
      }
      pOVar2 = (pSVar1->fields)._.value;
      if ((b != (SpawnRoleVariable_1_System_Object_ *)0x0) &&
         (pSVar1 = (b->fields).subscribableVariable,
         pSVar1 != (SubscribableVariable_1_System_Object_ *)0x0)) {
        if (((uint)method->klass->vtable[0].methodPtr & 0x100) == 0) {
          func_?(method->klass);
        }
        if (pOVar2 != (Object *)0x0) {
          bVar3 = (*(code *)(pOVar2->klass->vtable).Equals.method)
                            (pOVar2,(pSVar1->fields)._.value,
                             (pOVar2->klass->vtable).Finalize.methodPtr);
          return bVar3;
        }
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  bVar3 = (*pcVar4)();
  return bVar3;
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
      if (((uint)method->klass->vtable[0].methodPtr & 0x100) == 0) {
        func_?(method->klass);
      }
      return (pSVar1->fields)._.value;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  pOVar3 = (Object *)(*pcVar2)();
  return pOVar3;
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
      if (((uint)method->klass->vtable[0].methodPtr & 0x100) == 0) {
        func_?(method->klass);
      }
      if (b != (Object *)0x0) {
        cVar2 = (*(code *)(b->klass->vtable).Equals.method)
                          (b,(pSVar1->fields)._.value,(b->klass->vtable).Finalize.methodPtr);
        return cVar2 == '\0';
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
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
      if (((uint)method->klass->vtable[0].methodPtr & 0x100) == 0) {
        func_?(method->klass);
      }
      if (b != (Object *)0x0) {
        cVar2 = (*(code *)(b->klass->vtable).Equals.method)
                          (b,(pSVar1->fields)._.value,(b->klass->vtable).Finalize.methodPtr);
        return cVar2 == '\0';
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}


/* Boolean op_Inequality(SpawnRoleVariable`1[System.Object], SpawnRoleVariable`1[System.Object]) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[System::Object]::
     SpawnRoleVariable_1_System_Object__op_Inequality_2
               (SpawnRoleVariable_1_System_Object_ *a,SpawnRoleVariable_1_System_Object_ *b,
               MethodInfo *method)

{
  pIVar1 = method->klass;
  if (((uint)pIVar1->vtable[0].methodPtr & 0x100) == 0) {
    pIVar1 = (Il2CppClass *)func_?(pIVar1);
  }
  if (a != (SpawnRoleVariable_1_System_Object_ *)0x0) {
    pSVar2 = (a->fields).subscribableVariable;
    if (pSVar2 != (SubscribableVariable_1_System_Object_ *)0x0) {
      pMVar3 = pIVar1->rgctx_data[0x11].method;
      pIVar1 = pMVar3->klass;
      if (((uint)pIVar1->vtable[0].methodPtr & 0x100) == 0) {
        func_?(pIVar1);
      }
      pOVar4 = (pSVar2->fields)._.value;
      if ((b != (SpawnRoleVariable_1_System_Object_ *)0x0) &&
         (pSVar2 = (b->fields).subscribableVariable,
         pSVar2 != (SubscribableVariable_1_System_Object_ *)0x0)) {
        pIVar1 = pMVar3->klass;
        if (((uint)pIVar1->vtable[0].methodPtr & 0x100) == 0) {
          func_?(pIVar1);
        }
        if (pOVar4 != (Object *)0x0) {
          cVar5 = (*(code *)(pOVar4->klass->vtable).Equals.method)
                            (pOVar4,(pSVar2->fields)._.value,
                             (pOVar4->klass->vtable).Finalize.methodPtr);
          return cVar5 == '\0';
        }
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  bVar7 = (*pcVar6)();
  return bVar7;
}

