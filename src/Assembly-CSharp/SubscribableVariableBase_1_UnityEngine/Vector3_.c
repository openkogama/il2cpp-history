
/* Boolean Equals(SubscribableVariableBase`1[UnityEngine.Vector3]) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[UnityEngine::Vector3]::
     SubscribableVariableBase_1_UnityEngine_Vector3__Equals
               (SubscribableVariableBase_1_UnityEngine_Vector3_ *this,
               SubscribableVariableBase_1_UnityEngine_Vector3_ *other,MethodInfo *method)

{
  if (other != (SubscribableVariableBase_1_UnityEngine_Vector3_ *)0x0) {
    uStack_1._0_4_ = (other->fields).value.x;
    uStack_1._4_4_ = (other->fields).value.y;
    fStack_2 = (other->fields).value.z;
    pvVar3 = method->klass->rgctx_data[7].rgctxDataDummy;
    if ((*(byte *)((int)pvVar3 + 0xba) & 1) == 0) {
      pvVar3 = (void *)func_?(pvVar3);
    }
    uVar4 = func_?(pvVar3,&uStack_1);
    bVar5 = func_?(&this->fields,uVar4,method->klass->rgctx_data[8].rgctxDataDummy);
    return bVar5;
  }
  func_?();
  pcVar6 = (code *)swi(3);
  bVar5 = (*pcVar6)();
  return bVar5;
}


/* Boolean Equals(Object) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[UnityEngine::Vector3]::
     SubscribableVariableBase_1_UnityEngine_Vector3__Equals_1
               (SubscribableVariableBase_1_UnityEngine_Vector3_ *this,Object *obj,MethodInfo *method
               )

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Type);
    cRam_? = '\x01';
  }
  if (obj == (Object *)0x0) {
    return 0;
  }
  if (this == (SubscribableVariableBase_1_UnityEngine_Vector3_ *)obj) {
    return 1;
  }
  left._source = (CancellationTokenSource *)
                 mscorlib.dll::System::Object::Object_GetType(obj,(MethodInfo *)0x0);
  if (this != (SubscribableVariableBase_1_UnityEngine_Vector3_ *)0x0) {
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


/* Int32 GetHashCode() */

int32_t Assembly-CSharp.dll::SubscribableVariableBase`1[UnityEngine::Vector3]::
        SubscribableVariableBase_1_UnityEngine_Vector3__GetHashCode
                  (SubscribableVariableBase_1_UnityEngine_Vector3_ *this,MethodInfo *method)

{
  piVar1 = (int *)(*(method->klass->rgctx_data[2].method)->virtualMethodPointer)
                            (method->klass->rgctx_data[2].rgctxDataDummy);
  if (piVar1 != (int *)0x0) {
    uVar2._0_4_ = (this->fields).value.x;
    uVar2._4_4_ = (this->fields).value.y;
    iVar3 = (**(code **)(*piVar1 + 0x104))
                      (piVar1,uVar2,(this->fields).value.z,*(undefined4 *)(*piVar1 + 0x108));
    return iVar3;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  iVar3 = (*pcVar4)();
  return iVar3;
}


/* Void Notify() */

void Assembly-CSharp.dll::SubscribableVariableBase`1[UnityEngine::Vector3]::
     SubscribableVariableBase_1_UnityEngine_Vector3__Notify
               (SubscribableVariableBase_1_UnityEngine_Vector3_ *this,MethodInfo *method)

{
  if ((this->fields).OnChange != (Action_1_UnityEngine_Vector3_ *)0x0) {
    uVar1._0_4_ = (this->fields).value.x;
    uVar1._4_4_ = (this->fields).value.y;
    (*(method->klass->rgctx_data[0xb].method)->virtualMethodPointer)
              ((this->fields).OnChange,uVar1,(this->fields).value.z,
               method->klass->rgctx_data[0xb].rgctxDataDummy);
  }
  return;
}


/* SubscribableVariableBase`1[UnityEngine.Vector3](Vector3) */

void Assembly-CSharp.dll::SubscribableVariableBase`1[UnityEngine::Vector3]::
     SubscribableVariableBase_1_UnityEngine_Vector3___ctor
               (SubscribableVariableBase_1_UnityEngine_Vector3_ *this,Vector3 value,
               MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  (this->fields).value.x = value.x;
  (this->fields).value.y = value.y;
  (this->fields).value.z = value.z;
  return;
}


/* Void add_OnChange(Action`1[UnityEngine.Vector3]) */

void Assembly-CSharp.dll::SubscribableVariableBase`1[UnityEngine::Vector3]::
     SubscribableVariableBase_1_UnityEngine_Vector3__add_OnChange
               (SubscribableVariableBase_1_UnityEngine_Vector3_ *this,
               Action_1_UnityEngine_Vector3_ *value,MethodInfo *method)

{
  a = (this->fields).OnChange;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pvVar2 = method->klass->rgctx_data[6].rgctxDataDummy;
    if ((*(byte *)((int)pvVar2 + 0xba) & 1) == 0) {
      pvVar2 = (void *)func_?(pvVar2);
    }
    if (pDVar1 == (Delegate *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = func_?(pDVar1,pvVar2);
      if (iVar3 == 0) {
        func_?(pDVar1,pvVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pAVar5 = (Action_1_UnityEngine_Vector3_ *)func_?(&(this->fields).OnChange,iVar3,a);
    bVar6 = pAVar5 != a;
    a = pAVar5;
  } while (bVar6);
  return;
}


/* Vector3 get_Value() */

Vector3 * Assembly-CSharp.dll::SubscribableVariableBase`1[UnityEngine::Vector3]::
          SubscribableVariableBase_1_UnityEngine_Vector3__get_Value
                    (Vector3 *__return_storage_ptr__,
                    SubscribableVariableBase_1_UnityEngine_Vector3_ *this,MethodInfo *method)

{
  fVar1 = (this->fields).value.y;
  fVar2 = (this->fields).value.z;
  __return_storage_ptr__->x = (this->fields).value.x;
  __return_storage_ptr__->y = fVar1;
  __return_storage_ptr__->z = fVar2;
  return __return_storage_ptr__;
}


/* Boolean op_Equality(Vector3, SubscribableVariableBase`1[UnityEngine.Vector3]) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[UnityEngine::Vector3]::
     SubscribableVariableBase_1_UnityEngine_Vector3__op_Equality
               (Vector3 b,SubscribableVariableBase_1_UnityEngine_Vector3_ *a,MethodInfo *method)

{
  if (a != (SubscribableVariableBase_1_UnityEngine_Vector3_ *)0x0) {
    uStack_1._0_4_ = (a->fields).value.x;
    uStack_1._4_4_ = (a->fields).value.y;
    fStack_2 = (a->fields).value.z;
    pIVar3 = method->klass;
    if (pIVar3->initialized_and_no_error == 0) {
      pIVar3 = (Il2CppClass *)func_?(pIVar3);
    }
    pvVar4 = pIVar3->rgctx_data[7].rgctxDataDummy;
    if ((*(byte *)((int)pvVar4 + 0xba) & 1) == 0) {
      pvVar4 = (void *)func_?(pvVar4);
    }
    uVar5 = func_?(pvVar4,&uStack_1);
    pIVar3 = method->klass;
    if (pIVar3->initialized_and_no_error == 0) {
      pIVar3 = (Il2CppClass *)func_?(pIVar3);
    }
    bVar6 = func_?(&b,uVar5,pIVar3->rgctx_data[8].rgctxDataDummy);
    return bVar6;
  }
  func_?();
  pcVar7 = (code *)swi(3);
  bVar6 = (*pcVar7)();
  return bVar6;
}


/* Boolean op_Equality(SubscribableVariableBase`1[UnityEngine.Vector3], Vector3) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[UnityEngine::Vector3]::
     SubscribableVariableBase_1_UnityEngine_Vector3__op_Equality_1
               (SubscribableVariableBase_1_UnityEngine_Vector3_ *a,Vector3 b,MethodInfo *method)

{
  if (a != (SubscribableVariableBase_1_UnityEngine_Vector3_ *)0x0) {
    uStack_1._0_4_ = (a->fields).value.x;
    uStack_1._4_4_ = (a->fields).value.y;
    fStack_2 = (a->fields).value.z;
    pIVar3 = method->klass;
    if (pIVar3->initialized_and_no_error == 0) {
      pIVar3 = (Il2CppClass *)func_?(pIVar3);
    }
    pvVar4 = pIVar3->rgctx_data[7].rgctxDataDummy;
    if ((*(byte *)((int)pvVar4 + 0xba) & 1) == 0) {
      pvVar4 = (void *)func_?(pvVar4);
    }
    uVar5 = func_?(pvVar4,&uStack_1);
    pIVar3 = method->klass;
    if (pIVar3->initialized_and_no_error == 0) {
      pIVar3 = (Il2CppClass *)func_?(pIVar3);
    }
    bVar6 = func_?(&b,uVar5,pIVar3->rgctx_data[8].rgctxDataDummy);
    return bVar6;
  }
  func_?();
  pcVar7 = (code *)swi(3);
  bVar6 = (*pcVar7)();
  return bVar6;
}


/* Boolean op_Equality(SubscribableVariableBase`1[UnityEngine.Vector3],
   SubscribableVariableBase`1[UnityEngine.Vector3]) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[UnityEngine::Vector3]::
     SubscribableVariableBase_1_UnityEngine_Vector3__op_Equality_2
               (SubscribableVariableBase_1_UnityEngine_Vector3_ *a,
               SubscribableVariableBase_1_UnityEngine_Vector3_ *b,MethodInfo *method)

{
  if (a != (SubscribableVariableBase_1_UnityEngine_Vector3_ *)0x0) {
    if (b != (SubscribableVariableBase_1_UnityEngine_Vector3_ *)0x0) {
      uStack_1._0_4_ = (b->fields).value.x;
      uStack_1._4_4_ = (b->fields).value.y;
      fStack_2 = (b->fields).value.z;
      pIVar3 = method->klass;
      if (pIVar3->initialized_and_no_error == 0) {
        pIVar3 = (Il2CppClass *)func_?(pIVar3);
      }
      pvVar4 = pIVar3->rgctx_data[7].rgctxDataDummy;
      if ((*(byte *)((int)pvVar4 + 0xba) & 1) == 0) {
        pvVar4 = (void *)func_?(pvVar4);
      }
      uVar5 = func_?(pvVar4,&uStack_1);
      pIVar3 = method->klass;
      if (pIVar3->initialized_and_no_error == 0) {
        pIVar3 = (Il2CppClass *)func_?(pIVar3);
      }
      bVar6 = func_?(&a->fields,uVar5,pIVar3->rgctx_data[8].rgctxDataDummy);
      return bVar6;
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  bVar6 = (*pcVar7)();
  return bVar6;
}


/* Vector3 op_Implicit(SubscribableVariableBase`1[UnityEngine.Vector3]) */

Vector3 * Assembly-CSharp.dll::SubscribableVariableBase`1[UnityEngine::Vector3]::
          SubscribableVariableBase_1_UnityEngine_Vector3__op_Implicit
                    (Vector3 *__return_storage_ptr__,
                    SubscribableVariableBase_1_UnityEngine_Vector3_ *s,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  if (s != (SubscribableVariableBase_1_UnityEngine_Vector3_ *)0x0) {
    fVar2 = (s->fields).value.y;
    fVar3 = (s->fields).value.z;
    __return_storage_ptr__->x = (s->fields).value.x;
    __return_storage_ptr__->y = fVar2;
    __return_storage_ptr__->z = fVar3;
    return __return_storage_ptr__;
  }
  uVar4 = func_?(auStack_5);
  func_?(uVar4);
  pcVar6 = (code *)swi(3);
  pVVar7 = (Vector3 *)(*pcVar6)();
  return pVVar7;
}


/* Boolean op_Inequality(Vector3, SubscribableVariableBase`1[UnityEngine.Vector3]) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[UnityEngine::Vector3]::
     SubscribableVariableBase_1_UnityEngine_Vector3__op_Inequality
               (Vector3 b,SubscribableVariableBase_1_UnityEngine_Vector3_ *a,MethodInfo *method)

{
  if (a != (SubscribableVariableBase_1_UnityEngine_Vector3_ *)0x0) {
    uStack_1._0_4_ = (a->fields).value.x;
    uStack_1._4_4_ = (a->fields).value.y;
    fStack_2 = (a->fields).value.z;
    pIVar3 = method->klass;
    if (pIVar3->initialized_and_no_error == 0) {
      pIVar3 = (Il2CppClass *)func_?(pIVar3);
    }
    pvVar4 = pIVar3->rgctx_data[7].rgctxDataDummy;
    if ((*(byte *)((int)pvVar4 + 0xba) & 1) == 0) {
      pvVar4 = (void *)func_?(pvVar4);
    }
    uVar5 = func_?(pvVar4,&uStack_1);
    pIVar3 = method->klass;
    if (pIVar3->initialized_and_no_error == 0) {
      pIVar3 = (Il2CppClass *)func_?(pIVar3);
    }
    cVar6 = func_?(&b,uVar5,pIVar3->rgctx_data[8].rgctxDataDummy);
    return cVar6 == '\0';
  }
  func_?();
  pcVar7 = (code *)swi(3);
  bVar8 = (*pcVar7)();
  return bVar8;
}


/* Boolean op_Inequality(SubscribableVariableBase`1[UnityEngine.Vector3], Vector3) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[UnityEngine::Vector3]::
     SubscribableVariableBase_1_UnityEngine_Vector3__op_Inequality_1
               (SubscribableVariableBase_1_UnityEngine_Vector3_ *a,Vector3 b,MethodInfo *method)

{
  if (a != (SubscribableVariableBase_1_UnityEngine_Vector3_ *)0x0) {
    uStack_1._0_4_ = (a->fields).value.x;
    uStack_1._4_4_ = (a->fields).value.y;
    fStack_2 = (a->fields).value.z;
    pIVar3 = method->klass;
    if (pIVar3->initialized_and_no_error == 0) {
      pIVar3 = (Il2CppClass *)func_?(pIVar3);
    }
    pvVar4 = pIVar3->rgctx_data[7].rgctxDataDummy;
    if ((*(byte *)((int)pvVar4 + 0xba) & 1) == 0) {
      pvVar4 = (void *)func_?(pvVar4);
    }
    uVar5 = func_?(pvVar4,&uStack_1);
    pIVar3 = method->klass;
    if (pIVar3->initialized_and_no_error == 0) {
      pIVar3 = (Il2CppClass *)func_?(pIVar3);
    }
    cVar6 = func_?(&b,uVar5,pIVar3->rgctx_data[8].rgctxDataDummy);
    return cVar6 == '\0';
  }
  func_?();
  pcVar7 = (code *)swi(3);
  bVar8 = (*pcVar7)();
  return bVar8;
}


/* Boolean op_Inequality(SubscribableVariableBase`1[UnityEngine.Vector3],
   SubscribableVariableBase`1[UnityEngine.Vector3]) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[UnityEngine::Vector3]::
     SubscribableVariableBase_1_UnityEngine_Vector3__op_Inequality_2
               (SubscribableVariableBase_1_UnityEngine_Vector3_ *a,
               SubscribableVariableBase_1_UnityEngine_Vector3_ *b,MethodInfo *method)

{
  pIVar1 = method->klass;
  if (pIVar1->initialized_and_no_error == 0) {
    pIVar1 = (Il2CppClass *)func_?(pIVar1);
  }
  pIVar2 = (pIVar1->rgctx_data[9].method)->virtualMethodPointer;
  pIVar1 = method->klass;
  if (pIVar1->initialized_and_no_error == 0) {
    pIVar1 = (Il2CppClass *)func_?(pIVar1);
  }
  cVar3 = (*pIVar2)(a,b,pIVar1->rgctx_data[9].rgctxDataDummy);
  return cVar3 == '\0';
}


/* Void remove_OnChange(Action`1[UnityEngine.Vector3]) */

void Assembly-CSharp.dll::SubscribableVariableBase`1[UnityEngine::Vector3]::
     SubscribableVariableBase_1_UnityEngine_Vector3__remove_OnChange
               (SubscribableVariableBase_1_UnityEngine_Vector3_ *this,
               Action_1_UnityEngine_Vector3_ *value,MethodInfo *method)

{
  source = (this->fields).OnChange;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pvVar2 = method->klass->rgctx_data[6].rgctxDataDummy;
    if ((*(byte *)((int)pvVar2 + 0xba) & 1) == 0) {
      pvVar2 = (void *)func_?(pvVar2);
    }
    if (pDVar1 == (Delegate *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = func_?(pDVar1,pvVar2);
      if (iVar3 == 0) {
        func_?(pDVar1,pvVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pAVar5 = (Action_1_UnityEngine_Vector3_ *)func_?(&(this->fields).OnChange,iVar3,source)
    ;
    bVar6 = pAVar5 != source;
    source = pAVar5;
  } while (bVar6);
  return;
}

