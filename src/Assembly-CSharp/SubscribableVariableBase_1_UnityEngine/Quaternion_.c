
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
    uVar5 = func_?(method->klass->rgctx_data[5].rgctxDataDummy,&fStack_1);
    bVar6 = func_?(&this->fields,uVar5,method->klass->rgctx_data[9].rgctxDataDummy);
    return bVar6;
  }
  func_?();
  pcVar7 = (code *)swi(3);
  bVar6 = (*pcVar7)();
  return bVar6;
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
  left = (XNamespace *)mscorlib.dll::System::Object::Object_GetType(obj,(MethodInfo *)0x0);
  if (this != (SubscribableVariableBase_1_UnityEngine_Quaternion_ *)0x0) {
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
    pIVar2 = method->klass->rgctx_data->klass;
    if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
      pIVar2 = (Il2CppClass *)func_?();
    }
    if ((pIVar2->naturalAligment <= (obj->klass->_1).naturalAligment) &&
       ((obj->klass->_1).typeHierarchy[pIVar2->naturalAligment - 1] == pIVar2)) {
      func_?();
      bVar1 = func_?(&this->fields);
      return bVar1;
    }
    func_?();
  }
  func_?();
  pcVar3 = (code *)swi(3);
  bVar1 = (*pcVar3)();
  return bVar1;
}


/* Int32 GetHashCode() */

int32_t Assembly-CSharp.dll::SubscribableVariableBase`1[UnityEngine::Quaternion]::
        SubscribableVariableBase_1_UnityEngine_Quaternion__GetHashCode
                  (SubscribableVariableBase_1_UnityEngine_Quaternion_ *this,MethodInfo *method)

{
  pMVar1 = method->klass->rgctx_data[2].method;
  pIVar2 = pMVar1->klass;
  if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
    pIVar2 = (Il2CppClass *)func_?(pIVar2);
  }
  pIVar2 = pIVar2->rgctx_data[2].klass;
  if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
    pIVar2 = (Il2CppClass *)func_?(pIVar2);
  }
  pEVar3 = *(EqualityComparer_1_UnityEngine_Quaternion_ **)pIVar2->static_fields;
  func_?();
  if (pEVar3 == (EqualityComparer_1_UnityEngine_Quaternion_ *)0x0) {
    pIVar2 = pMVar1->klass;
    if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
      pIVar2 = (Il2CppClass *)func_?(pIVar2);
    }
    pEVar3 = mscorlib.dll::System::Collections::Generic::EqualityComparer`1[UnityEngine::Quaternion]
             ::EqualityComparer_1_UnityEngine_Quaternion__CreateComparer
                       (pIVar2->rgctx_data[3].method);
    func_?();
    pIVar2 = pMVar1->klass;
    if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
      pIVar2 = (Il2CppClass *)func_?(pIVar2);
    }
    pIVar2 = pIVar2->rgctx_data[2].klass;
    if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
      pIVar2 = (Il2CppClass *)func_?(pIVar2);
    }
    *(EqualityComparer_1_UnityEngine_Quaternion_ **)pIVar2->static_fields = pEVar3;
    pIVar2 = pMVar1->klass;
    if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
      pIVar2 = (Il2CppClass *)func_?(pIVar2);
    }
    pIVar2 = pIVar2->rgctx_data[2].klass;
    if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
      pIVar2 = (Il2CppClass *)func_?(pIVar2);
    }
    func_?(pIVar2->static_fields,pEVar3);
  }
  if (pEVar3 != (EqualityComparer_1_UnityEngine_Quaternion_ *)0x0) {
    iVar4 = (*(code *)(pEVar3->klass->vtable).__unknown_1.method)
                      (pEVar3,(this->fields).value.x,(this->fields).value.y,(this->fields).value.z,
                       (this->fields).value.w,(pEVar3->klass->vtable).IndexOf.methodPtr);
    return iVar4;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  iVar4 = (*pcVar5)();
  return iVar4;
}


/* Void Notify() */

void Assembly-CSharp.dll::SubscribableVariableBase`1[UnityEngine::Quaternion]::
     SubscribableVariableBase_1_UnityEngine_Quaternion__Notify
               (SubscribableVariableBase_1_UnityEngine_Quaternion_ *this,MethodInfo *method)

{
  if ((this->fields).OnChange != (Action_1_UnityEngine_Quaternion_ *)0x0) {
    pAVar1 = (this->fields).OnChange;
    (*(pAVar1->fields)._._.invoke_impl)
              ((pAVar1->fields)._._.method_code,(this->fields).value.x,(this->fields).value.y,
               (this->fields).value.z,(this->fields).value.w,(pAVar1->fields)._._.method);
  }
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
    pIVar2 = method->klass->rgctx_data[7].klass;
    if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
      pIVar2 = (Il2CppClass *)func_?(pIVar2);
    }
    if (pDVar1 == (Delegate *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = func_?(pDVar1,pIVar2);
      if (iVar3 == 0) {
        func_?(pDVar1,pIVar2);
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
    if (((uint)pIVar5->vtable[0].methodPtr & 0x100) == 0) {
      pIVar5 = (Il2CppClass *)func_?(pIVar5);
    }
    uVar6 = func_?(pIVar5->rgctx_data[5].rgctxDataDummy,&fStack_1);
    pIVar5 = method->klass;
    if (((uint)pIVar5->vtable[0].methodPtr & 0x100) == 0) {
      pIVar5 = (Il2CppClass *)func_?(pIVar5);
    }
    bVar7 = func_?(&b,uVar6,pIVar5->rgctx_data[9].rgctxDataDummy);
    return bVar7;
  }
  func_?();
  pcVar8 = (code *)swi(3);
  bVar7 = (*pcVar8)();
  return bVar7;
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
    if (((uint)pIVar5->vtable[0].methodPtr & 0x100) == 0) {
      pIVar5 = (Il2CppClass *)func_?(pIVar5);
    }
    uVar6 = func_?(pIVar5->rgctx_data[5].rgctxDataDummy,&fStack_1);
    pIVar5 = method->klass;
    if (((uint)pIVar5->vtable[0].methodPtr & 0x100) == 0) {
      pIVar5 = (Il2CppClass *)func_?(pIVar5);
    }
    bVar7 = func_?(&b,uVar6,pIVar5->rgctx_data[9].rgctxDataDummy);
    return bVar7;
  }
  func_?();
  pcVar8 = (code *)swi(3);
  bVar7 = (*pcVar8)();
  return bVar7;
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
      if (((uint)pIVar5->vtable[0].methodPtr & 0x100) == 0) {
        pIVar5 = (Il2CppClass *)func_?(pIVar5);
      }
      uVar6 = func_?(pIVar5->rgctx_data[5].rgctxDataDummy,&fStack_1);
      pIVar5 = method->klass;
      if (((uint)pIVar5->vtable[0].methodPtr & 0x100) == 0) {
        pIVar5 = (Il2CppClass *)func_?(pIVar5);
      }
      bVar7 = func_?(&a->fields,uVar6,pIVar5->rgctx_data[9].rgctxDataDummy);
      return bVar7;
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  bVar7 = (*pcVar8)();
  return bVar7;
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
    if (((uint)pIVar5->vtable[0].methodPtr & 0x100) == 0) {
      pIVar5 = (Il2CppClass *)func_?(pIVar5);
    }
    uVar6 = func_?(pIVar5->rgctx_data[5].rgctxDataDummy,&fStack_1);
    pIVar5 = method->klass;
    if (((uint)pIVar5->vtable[0].methodPtr & 0x100) == 0) {
      pIVar5 = (Il2CppClass *)func_?(pIVar5);
    }
    cVar7 = func_?(&b,uVar6,pIVar5->rgctx_data[9].rgctxDataDummy);
    return cVar7 == '\0';
  }
  func_?();
  pcVar8 = (code *)swi(3);
  bVar9 = (*pcVar8)();
  return bVar9;
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
    if (((uint)pIVar5->vtable[0].methodPtr & 0x100) == 0) {
      pIVar5 = (Il2CppClass *)func_?(pIVar5);
    }
    uVar6 = func_?(pIVar5->rgctx_data[5].rgctxDataDummy,&fStack_1);
    pIVar5 = method->klass;
    if (((uint)pIVar5->vtable[0].methodPtr & 0x100) == 0) {
      pIVar5 = (Il2CppClass *)func_?(pIVar5);
    }
    cVar7 = func_?(&b,uVar6,pIVar5->rgctx_data[9].rgctxDataDummy);
    return cVar7 == '\0';
  }
  func_?();
  pcVar8 = (code *)swi(3);
  bVar9 = (*pcVar8)();
  return bVar9;
}


/* Boolean op_Inequality(SubscribableVariableBase`1[UnityEngine.Quaternion],
   SubscribableVariableBase`1[UnityEngine.Quaternion]) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[UnityEngine::Quaternion]::
     SubscribableVariableBase_1_UnityEngine_Quaternion__op_Inequality_2
               (SubscribableVariableBase_1_UnityEngine_Quaternion_ *a,
               SubscribableVariableBase_1_UnityEngine_Quaternion_ *b,MethodInfo *method)

{
  pIVar1 = method->klass;
  if (((uint)pIVar1->vtable[0].methodPtr & 0x100) == 0) {
    pIVar1 = (Il2CppClass *)func_?(pIVar1);
  }
  pMVar2 = pIVar1->rgctx_data[10].method;
  if (a != (SubscribableVariableBase_1_UnityEngine_Quaternion_ *)0x0) {
    if (b != (SubscribableVariableBase_1_UnityEngine_Quaternion_ *)0x0) {
      fStack_3 = (b->fields).value.x;
      fStack_4 = (b->fields).value.y;
      fStack_5 = (b->fields).value.z;
      fStack_6 = (b->fields).value.w;
      pIVar1 = pMVar2->klass;
      if (((uint)pIVar1->vtable[0].methodPtr & 0x100) == 0) {
        pIVar1 = (Il2CppClass *)func_?(pIVar1);
      }
      uVar7 = func_?(pIVar1->rgctx_data[5].rgctxDataDummy,&fStack_3);
      pIVar1 = pMVar2->klass;
      if (((uint)pIVar1->vtable[0].methodPtr & 0x100) == 0) {
        pIVar1 = (Il2CppClass *)func_?(pIVar1);
      }
      cVar8 = func_?(&a->fields,uVar7,pIVar1->rgctx_data[9].rgctxDataDummy);
      return cVar8 == '\0';
    }
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
    pIVar2 = method->klass->rgctx_data[7].klass;
    if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
      pIVar2 = (Il2CppClass *)func_?(pIVar2);
    }
    if (pDVar1 == (Delegate *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = func_?(pDVar1,pIVar2);
      if (iVar3 == 0) {
        func_?(pDVar1,pIVar2);
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

