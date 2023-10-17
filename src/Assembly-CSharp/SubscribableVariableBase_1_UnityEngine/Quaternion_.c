
/* Boolean Equals(SubscribableVariableBase`1[UnityEngine.Quaternion]) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[UnityEngine::Quaternion]::
     SubscribableVariableBase_1_UnityEngine_Quaternion__Equals
               (SubscribableVariableBase_1_UnityEngine_Quaternion_ *this,
               SubscribableVariableBase_1_UnityEngine_Quaternion_ *other,MethodInfo *method)

{
  if (other != (SubscribableVariableBase_1_UnityEngine_Quaternion_ *)0x0) {
    fStack_1 = (other->fields).value.x;
    fStack_2 = (other->fields).value.y;
    fStack_3 = (other->fields).value.z;
    fStack_4 = (other->fields).value.w;
    pvVar5 = method->klass->rgctx_data[7].rgctxDataDummy;
    if ((*(byte *)((int)pvVar5 + 0xba) & 1) == 0) {
      pvVar5 = (void *)func_?(pvVar5);
    }
    uVar6 = func_?(pvVar5,&fStack_1);
    bVar7 = func_?(&this->fields,uVar6,method->klass->rgctx_data[8].rgctxDataDummy);
    return bVar7;
  }
  func_?();
  pcVar8 = (code *)swi(3);
  bVar7 = (*pcVar8)();
  return bVar7;
}


/* Boolean Equals(Object) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[UnityEngine::Quaternion]::
     SubscribableVariableBase_1_UnityEngine_Quaternion__Equals_1
               (SubscribableVariableBase_1_UnityEngine_Quaternion_ *this,Object *obj,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Type);
    cRam_? = '\x01';
  }
  if (obj == (Object *)0x0) {
    return 0;
  }
  if (this == (SubscribableVariableBase_1_UnityEngine_Quaternion_ *)obj) {
    return 1;
  }
  left._source = (CancellationTokenSource *)
                 mscorlib.dll::System::Object::Object_GetType(obj,(MethodInfo *)0x0);
  if (this != (SubscribableVariableBase_1_UnityEngine_Quaternion_ *)0x0) {
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

int32_t Assembly-CSharp.dll::SubscribableVariableBase`1[UnityEngine::Quaternion]::
        SubscribableVariableBase_1_UnityEngine_Quaternion__GetHashCode
                  (SubscribableVariableBase_1_UnityEngine_Quaternion_ *this,MethodInfo *method)

{
  piVar1 = (int *)(*(method->klass->rgctx_data[2].method)->virtualMethodPointer)
                            (method->klass->rgctx_data[2].rgctxDataDummy);
  if (piVar1 != (int *)0x0) {
    iVar2 = (**(code **)(*piVar1 + 0x104))
                      (piVar1,(this->fields).value.x,(this->fields).value.y,(this->fields).value.z,
                       (this->fields).value.w,*(undefined4 *)(*piVar1 + 0x108));
    return iVar2;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  iVar2 = (*pcVar3)();
  return iVar2;
}


/* Void Notify() */

void Assembly-CSharp.dll::SubscribableVariableBase`1[UnityEngine::Quaternion]::
     SubscribableVariableBase_1_UnityEngine_Quaternion__Notify
               (SubscribableVariableBase_1_UnityEngine_Quaternion_ *this,MethodInfo *method)

{
  if ((this->fields).OnChange != (Action_1_UnityEngine_Quaternion_ *)0x0) {
    (*(method->klass->rgctx_data[0xb].method)->virtualMethodPointer)
              ((this->fields).OnChange,(this->fields).value.x,(this->fields).value.y,
               (this->fields).value.z,(this->fields).value.w,
               method->klass->rgctx_data[0xb].rgctxDataDummy);
  }
  return;
}


/* SubscribableVariableBase`1[UnityEngine.Quaternion](Quaternion) */

void Assembly-CSharp.dll::SubscribableVariableBase`1[UnityEngine::Quaternion]::
     SubscribableVariableBase_1_UnityEngine_Quaternion___ctor
               (SubscribableVariableBase_1_UnityEngine_Quaternion_ *this,Quaternion value,
               MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  (this->fields).value.x = value.x;
  (this->fields).value.y = value.y;
  (this->fields).value.z = value.z;
  (this->fields).value.w = value.w;
  return;
}


/* Void add_OnChange(Action`1[UnityEngine.Quaternion]) */

void Assembly-CSharp.dll::SubscribableVariableBase`1[UnityEngine::Quaternion]::
     SubscribableVariableBase_1_UnityEngine_Quaternion__add_OnChange
               (SubscribableVariableBase_1_UnityEngine_Quaternion_ *this,
               Action_1_UnityEngine_Quaternion_ *value,MethodInfo *method)

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
    pAVar5 = (Action_1_UnityEngine_Quaternion_ *)func_?(&(this->fields).OnChange,iVar3,a);
    bVar6 = pAVar5 != a;
    a = pAVar5;
  } while (bVar6);
  return;
}


/* Quaternion get_Value() */

Quaternion *
Assembly-CSharp.dll::SubscribableVariableBase`1[UnityEngine::Quaternion]::
SubscribableVariableBase_1_UnityEngine_Quaternion__get_Value
          (Quaternion *__return_storage_ptr__,
          SubscribableVariableBase_1_UnityEngine_Quaternion_ *this,MethodInfo *method)

{
  fVar1 = (this->fields).value.y;
  fVar2 = (this->fields).value.z;
  fVar3 = (this->fields).value.w;
  __return_storage_ptr__->x = (this->fields).value.x;
  __return_storage_ptr__->y = fVar1;
  __return_storage_ptr__->z = fVar2;
  __return_storage_ptr__->w = fVar3;
  return __return_storage_ptr__;
}


/* Boolean op_Equality(Quaternion, SubscribableVariableBase`1[UnityEngine.Quaternion]) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[UnityEngine::Quaternion]::
     SubscribableVariableBase_1_UnityEngine_Quaternion__op_Equality
               (Quaternion b,SubscribableVariableBase_1_UnityEngine_Quaternion_ *a,
               MethodInfo *method)

{
  if (a != (SubscribableVariableBase_1_UnityEngine_Quaternion_ *)0x0) {
    fStack_1 = (a->fields).value.x;
    fStack_2 = (a->fields).value.y;
    fStack_3 = (a->fields).value.z;
    fStack_4 = (a->fields).value.w;
    pIVar5 = method->klass;
    if (pIVar5->initialized_and_no_error == 0) {
      pIVar5 = (Il2CppClass *)func_?(pIVar5);
    }
    pvVar6 = pIVar5->rgctx_data[7].rgctxDataDummy;
    if ((*(byte *)((int)pvVar6 + 0xba) & 1) == 0) {
      pvVar6 = (void *)func_?(pvVar6);
    }
    uVar7 = func_?(pvVar6,&fStack_1);
    pIVar5 = method->klass;
    if (pIVar5->initialized_and_no_error == 0) {
      pIVar5 = (Il2CppClass *)func_?(pIVar5);
    }
    bVar8 = func_?(&b,uVar7,pIVar5->rgctx_data[8].rgctxDataDummy);
    return bVar8;
  }
  func_?();
  pcVar9 = (code *)swi(3);
  bVar8 = (*pcVar9)();
  return bVar8;
}


/* Boolean op_Equality(SubscribableVariableBase`1[UnityEngine.Quaternion], Quaternion) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[UnityEngine::Quaternion]::
     SubscribableVariableBase_1_UnityEngine_Quaternion__op_Equality_1
               (SubscribableVariableBase_1_UnityEngine_Quaternion_ *a,Quaternion b,
               MethodInfo *method)

{
  if (a != (SubscribableVariableBase_1_UnityEngine_Quaternion_ *)0x0) {
    fStack_1 = (a->fields).value.x;
    fStack_2 = (a->fields).value.y;
    fStack_3 = (a->fields).value.z;
    fStack_4 = (a->fields).value.w;
    pIVar5 = method->klass;
    if (pIVar5->initialized_and_no_error == 0) {
      pIVar5 = (Il2CppClass *)func_?(pIVar5);
    }
    pvVar6 = pIVar5->rgctx_data[7].rgctxDataDummy;
    if ((*(byte *)((int)pvVar6 + 0xba) & 1) == 0) {
      pvVar6 = (void *)func_?(pvVar6);
    }
    uVar7 = func_?(pvVar6,&fStack_1);
    pIVar5 = method->klass;
    if (pIVar5->initialized_and_no_error == 0) {
      pIVar5 = (Il2CppClass *)func_?(pIVar5);
    }
    bVar8 = func_?(&b,uVar7,pIVar5->rgctx_data[8].rgctxDataDummy);
    return bVar8;
  }
  func_?();
  pcVar9 = (code *)swi(3);
  bVar8 = (*pcVar9)();
  return bVar8;
}


/* Boolean op_Equality(SubscribableVariableBase`1[UnityEngine.Quaternion],
   SubscribableVariableBase`1[UnityEngine.Quaternion]) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[UnityEngine::Quaternion]::
     SubscribableVariableBase_1_UnityEngine_Quaternion__op_Equality_2
               (SubscribableVariableBase_1_UnityEngine_Quaternion_ *a,
               SubscribableVariableBase_1_UnityEngine_Quaternion_ *b,MethodInfo *method)

{
  if (a != (SubscribableVariableBase_1_UnityEngine_Quaternion_ *)0x0) {
    if (b != (SubscribableVariableBase_1_UnityEngine_Quaternion_ *)0x0) {
      fStack_1 = (b->fields).value.x;
      fStack_2 = (b->fields).value.y;
      fStack_3 = (b->fields).value.z;
      fStack_4 = (b->fields).value.w;
      pIVar5 = method->klass;
      if (pIVar5->initialized_and_no_error == 0) {
        pIVar5 = (Il2CppClass *)func_?(pIVar5);
      }
      pvVar6 = pIVar5->rgctx_data[7].rgctxDataDummy;
      if ((*(byte *)((int)pvVar6 + 0xba) & 1) == 0) {
        pvVar6 = (void *)func_?(pvVar6);
      }
      uVar7 = func_?(pvVar6,&fStack_1);
      pIVar5 = method->klass;
      if (pIVar5->initialized_and_no_error == 0) {
        pIVar5 = (Il2CppClass *)func_?(pIVar5);
      }
      bVar8 = func_?(&a->fields,uVar7,pIVar5->rgctx_data[8].rgctxDataDummy);
      return bVar8;
    }
  }
  func_?();
  pcVar9 = (code *)swi(3);
  bVar8 = (*pcVar9)();
  return bVar8;
}


/* Quaternion op_Implicit(SubscribableVariableBase`1[UnityEngine.Quaternion]) */

Quaternion *
Assembly-CSharp.dll::SubscribableVariableBase`1[UnityEngine::Quaternion]::
SubscribableVariableBase_1_UnityEngine_Quaternion__op_Implicit
          (Quaternion *__return_storage_ptr__,SubscribableVariableBase_1_UnityEngine_Quaternion_ *s,
          MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  if (s != (SubscribableVariableBase_1_UnityEngine_Quaternion_ *)0x0) {
    fVar2 = (s->fields).value.y;
    fVar3 = (s->fields).value.z;
    fVar4 = (s->fields).value.w;
    __return_storage_ptr__->x = (s->fields).value.x;
    __return_storage_ptr__->y = fVar2;
    __return_storage_ptr__->z = fVar3;
    __return_storage_ptr__->w = fVar4;
    return __return_storage_ptr__;
  }
  uVar5 = func_?(auStack_6);
  func_?(uVar5);
  pcVar7 = (code *)swi(3);
  pQVar8 = (Quaternion *)(*pcVar7)();
  return pQVar8;
}


/* Boolean op_Inequality(Quaternion, SubscribableVariableBase`1[UnityEngine.Quaternion]) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[UnityEngine::Quaternion]::
     SubscribableVariableBase_1_UnityEngine_Quaternion__op_Inequality
               (Quaternion b,SubscribableVariableBase_1_UnityEngine_Quaternion_ *a,
               MethodInfo *method)

{
  if (a != (SubscribableVariableBase_1_UnityEngine_Quaternion_ *)0x0) {
    fStack_1 = (a->fields).value.x;
    fStack_2 = (a->fields).value.y;
    fStack_3 = (a->fields).value.z;
    fStack_4 = (a->fields).value.w;
    pIVar5 = method->klass;
    if (pIVar5->initialized_and_no_error == 0) {
      pIVar5 = (Il2CppClass *)func_?(pIVar5);
    }
    pvVar6 = pIVar5->rgctx_data[7].rgctxDataDummy;
    if ((*(byte *)((int)pvVar6 + 0xba) & 1) == 0) {
      pvVar6 = (void *)func_?(pvVar6);
    }
    uVar7 = func_?(pvVar6,&fStack_1);
    pIVar5 = method->klass;
    if (pIVar5->initialized_and_no_error == 0) {
      pIVar5 = (Il2CppClass *)func_?(pIVar5);
    }
    cVar8 = func_?(&b,uVar7,pIVar5->rgctx_data[8].rgctxDataDummy);
    return cVar8 == '\0';
  }
  func_?();
  pcVar9 = (code *)swi(3);
  bVar10 = (*pcVar9)();
  return bVar10;
}


/* Boolean op_Inequality(SubscribableVariableBase`1[UnityEngine.Quaternion], Quaternion) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[UnityEngine::Quaternion]::
     SubscribableVariableBase_1_UnityEngine_Quaternion__op_Inequality_1
               (SubscribableVariableBase_1_UnityEngine_Quaternion_ *a,Quaternion b,
               MethodInfo *method)

{
  if (a != (SubscribableVariableBase_1_UnityEngine_Quaternion_ *)0x0) {
    fStack_1 = (a->fields).value.x;
    fStack_2 = (a->fields).value.y;
    fStack_3 = (a->fields).value.z;
    fStack_4 = (a->fields).value.w;
    pIVar5 = method->klass;
    if (pIVar5->initialized_and_no_error == 0) {
      pIVar5 = (Il2CppClass *)func_?(pIVar5);
    }
    pvVar6 = pIVar5->rgctx_data[7].rgctxDataDummy;
    if ((*(byte *)((int)pvVar6 + 0xba) & 1) == 0) {
      pvVar6 = (void *)func_?(pvVar6);
    }
    uVar7 = func_?(pvVar6,&fStack_1);
    pIVar5 = method->klass;
    if (pIVar5->initialized_and_no_error == 0) {
      pIVar5 = (Il2CppClass *)func_?(pIVar5);
    }
    cVar8 = func_?(&b,uVar7,pIVar5->rgctx_data[8].rgctxDataDummy);
    return cVar8 == '\0';
  }
  func_?();
  pcVar9 = (code *)swi(3);
  bVar10 = (*pcVar9)();
  return bVar10;
}


/* Void remove_OnChange(Action`1[UnityEngine.Quaternion]) */

void Assembly-CSharp.dll::SubscribableVariableBase`1[UnityEngine::Quaternion]::
     SubscribableVariableBase_1_UnityEngine_Quaternion__remove_OnChange
               (SubscribableVariableBase_1_UnityEngine_Quaternion_ *this,
               Action_1_UnityEngine_Quaternion_ *value,MethodInfo *method)

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
    pAVar5 = (Action_1_UnityEngine_Quaternion_ *)
             func_?(&(this->fields).OnChange,iVar3,source);
    bVar6 = pAVar5 != source;
    source = pAVar5;
  } while (bVar6);
  return;
}

