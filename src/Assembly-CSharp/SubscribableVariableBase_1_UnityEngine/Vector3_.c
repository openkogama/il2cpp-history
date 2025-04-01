
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
    uVar3 = func_?(method->klass->rgctx_data[5].rgctxDataDummy,&uStack_1);
    bVar4 = func_?(&this->fields,uVar3,method->klass->rgctx_data[9].rgctxDataDummy);
    return bVar4;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  bVar4 = (*pcVar5)();
  return bVar4;
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
  left = (XNamespace *)mscorlib.dll::System::Object::Object_GetType(obj,(MethodInfo *)0x0);
  if (this != (SubscribableVariableBase_1_UnityEngine_Vector3_ *)0x0) {
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

int32_t Assembly-CSharp.dll::SubscribableVariableBase`1[UnityEngine::Vector3]::
        SubscribableVariableBase_1_UnityEngine_Vector3__GetHashCode
                  (SubscribableVariableBase_1_UnityEngine_Vector3_ *this,MethodInfo *method)

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
  pEVar3 = *(EqualityComparer_1_UnityEngine_Vector3_ **)pIVar2->static_fields;
  func_?();
  if (pEVar3 == (EqualityComparer_1_UnityEngine_Vector3_ *)0x0) {
    pIVar2 = pMVar1->klass;
    if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
      pIVar2 = (Il2CppClass *)func_?(pIVar2);
    }
    pEVar3 = mscorlib.dll::System::Collections::Generic::EqualityComparer`1[UnityEngine::Vector3]::
             EqualityComparer_1_UnityEngine_Vector3__CreateComparer(pIVar2->rgctx_data[3].method);
    func_?();
    pIVar2 = pMVar1->klass;
    if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
      pIVar2 = (Il2CppClass *)func_?(pIVar2);
    }
    pIVar2 = pIVar2->rgctx_data[2].klass;
    if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
      pIVar2 = (Il2CppClass *)func_?(pIVar2);
    }
    *(EqualityComparer_1_UnityEngine_Vector3_ **)pIVar2->static_fields = pEVar3;
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
  if (pEVar3 != (EqualityComparer_1_UnityEngine_Vector3_ *)0x0) {
    uVar4._0_4_ = (this->fields).value.x;
    uVar4._4_4_ = (this->fields).value.y;
    iVar5 = (*(code *)(pEVar3->klass->vtable).__unknown_1.method)
                      (pEVar3,uVar4,(this->fields).value.z,(pEVar3->klass->vtable).IndexOf.methodPtr
                      );
    return iVar5;
  }
  func_?();
  pcVar6 = (code *)swi(3);
  iVar5 = (*pcVar6)();
  return iVar5;
}


/* Void Notify() */

void Assembly-CSharp.dll::SubscribableVariableBase`1[UnityEngine::Vector3]::
     SubscribableVariableBase_1_UnityEngine_Vector3__Notify
               (SubscribableVariableBase_1_UnityEngine_Vector3_ *this,MethodInfo *method)

{
  pAVar1 = (this->fields).OnChange;
  if (pAVar1 != (Action_1_UnityEngine_Vector3_ *)0x0) {
    uVar2._0_4_ = (this->fields).value.x;
    uVar2._4_4_ = (this->fields).value.y;
    (*(pAVar1->fields)._._.invoke_impl)
              ((pAVar1->fields)._._.method_code,uVar2,(this->fields).value.z,
               (pAVar1->fields)._._.method);
  }
  return;
}


/* Void add_OnChange(Action`1[UnityEngine.Vector3]) */

void Assembly-CSharp.dll::SubscribableVariableBase`1[UnityEngine::Vector3]::
     SubscribableVariableBase_1_UnityEngine_Vector3__add_OnChange
               (SubscribableVariableBase_1_UnityEngine_Vector3_ *this,
               Action_1_UnityEngine_Vector3_ *value,MethodInfo *method)

{
  ppAVar1 = &(this->fields).OnChange;
  a = *ppAVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pIVar3 = method->klass->rgctx_data[7].klass;
    if (((uint)pIVar3->vtable[0].methodPtr & 0x100) == 0) {
      pIVar3 = (Il2CppClass *)func_?(pIVar3);
    }
    if (pDVar2 == (Delegate *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = func_?(pDVar2,pIVar3);
      if (iVar4 == 0) {
        func_?(pDVar2,pIVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pAVar6 = (Action_1_UnityEngine_Vector3_ *)func_?(ppAVar1,iVar4,a);
    bVar7 = pAVar6 != a;
    a = pAVar6;
  } while (bVar7);
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
    if (((uint)pIVar3->vtable[0].methodPtr & 0x100) == 0) {
      pIVar3 = (Il2CppClass *)func_?(pIVar3);
    }
    uVar4 = func_?(pIVar3->rgctx_data[5].rgctxDataDummy,&uStack_1);
    pIVar3 = method->klass;
    if (((uint)pIVar3->vtable[0].methodPtr & 0x100) == 0) {
      pIVar3 = (Il2CppClass *)func_?(pIVar3);
    }
    bVar5 = func_?(&b,uVar4,pIVar3->rgctx_data[9].rgctxDataDummy);
    return bVar5;
  }
  func_?();
  pcVar6 = (code *)swi(3);
  bVar5 = (*pcVar6)();
  return bVar5;
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
    if (((uint)pIVar3->vtable[0].methodPtr & 0x100) == 0) {
      pIVar3 = (Il2CppClass *)func_?(pIVar3);
    }
    uVar4 = func_?(pIVar3->rgctx_data[5].rgctxDataDummy,&uStack_1);
    pIVar3 = method->klass;
    if (((uint)pIVar3->vtable[0].methodPtr & 0x100) == 0) {
      pIVar3 = (Il2CppClass *)func_?(pIVar3);
    }
    bVar5 = func_?(&b,uVar4,pIVar3->rgctx_data[9].rgctxDataDummy);
    return bVar5;
  }
  func_?();
  pcVar6 = (code *)swi(3);
  bVar5 = (*pcVar6)();
  return bVar5;
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
      if (((uint)pIVar3->vtable[0].methodPtr & 0x100) == 0) {
        pIVar3 = (Il2CppClass *)func_?(pIVar3);
      }
      uVar4 = func_?(pIVar3->rgctx_data[5].rgctxDataDummy,&uStack_1);
      pIVar3 = method->klass;
      if (((uint)pIVar3->vtable[0].methodPtr & 0x100) == 0) {
        pIVar3 = (Il2CppClass *)func_?(pIVar3);
      }
      bVar5 = func_?(&a->fields,uVar4,pIVar3->rgctx_data[9].rgctxDataDummy);
      return bVar5;
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  bVar5 = (*pcVar6)();
  return bVar5;
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
    if (((uint)pIVar3->vtable[0].methodPtr & 0x100) == 0) {
      pIVar3 = (Il2CppClass *)func_?(pIVar3);
    }
    uVar4 = func_?(pIVar3->rgctx_data[5].rgctxDataDummy,&uStack_1);
    pIVar3 = method->klass;
    if (((uint)pIVar3->vtable[0].methodPtr & 0x100) == 0) {
      pIVar3 = (Il2CppClass *)func_?(pIVar3);
    }
    cVar5 = func_?(&b,uVar4,pIVar3->rgctx_data[9].rgctxDataDummy);
    return cVar5 == '\0';
  }
  func_?();
  pcVar6 = (code *)swi(3);
  bVar7 = (*pcVar6)();
  return bVar7;
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
    if (((uint)pIVar3->vtable[0].methodPtr & 0x100) == 0) {
      pIVar3 = (Il2CppClass *)func_?(pIVar3);
    }
    uVar4 = func_?(pIVar3->rgctx_data[5].rgctxDataDummy,&uStack_1);
    pIVar3 = method->klass;
    if (((uint)pIVar3->vtable[0].methodPtr & 0x100) == 0) {
      pIVar3 = (Il2CppClass *)func_?(pIVar3);
    }
    cVar5 = func_?(&b,uVar4,pIVar3->rgctx_data[9].rgctxDataDummy);
    return cVar5 == '\0';
  }
  func_?();
  pcVar6 = (code *)swi(3);
  bVar7 = (*pcVar6)();
  return bVar7;
}


/* Boolean op_Inequality(SubscribableVariableBase`1[UnityEngine.Vector3],
   SubscribableVariableBase`1[UnityEngine.Vector3]) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[UnityEngine::Vector3]::
     SubscribableVariableBase_1_UnityEngine_Vector3__op_Inequality_2
               (SubscribableVariableBase_1_UnityEngine_Vector3_ *a,
               SubscribableVariableBase_1_UnityEngine_Vector3_ *b,MethodInfo *method)

{
  pIVar1 = method->klass;
  if (((uint)pIVar1->vtable[0].methodPtr & 0x100) == 0) {
    pIVar1 = (Il2CppClass *)func_?(pIVar1);
  }
  pMVar2 = pIVar1->rgctx_data[10].method;
  if (a != (SubscribableVariableBase_1_UnityEngine_Vector3_ *)0x0) {
    if (b != (SubscribableVariableBase_1_UnityEngine_Vector3_ *)0x0) {
      uStack_3._0_4_ = (b->fields).value.x;
      uStack_3._4_4_ = (b->fields).value.y;
      fStack_4 = (b->fields).value.z;
      pIVar1 = pMVar2->klass;
      if (((uint)pIVar1->vtable[0].methodPtr & 0x100) == 0) {
        pIVar1 = (Il2CppClass *)func_?(pIVar1);
      }
      uVar5 = func_?(pIVar1->rgctx_data[5].rgctxDataDummy,&uStack_3);
      pIVar1 = pMVar2->klass;
      if (((uint)pIVar1->vtable[0].methodPtr & 0x100) == 0) {
        pIVar1 = (Il2CppClass *)func_?(pIVar1);
      }
      cVar6 = func_?(&a->fields,uVar5,pIVar1->rgctx_data[9].rgctxDataDummy);
      return cVar6 == '\0';
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  bVar8 = (*pcVar7)();
  return bVar8;
}


/* Void remove_OnChange(Action`1[UnityEngine.Vector3]) */

void Assembly-CSharp.dll::SubscribableVariableBase`1[UnityEngine::Vector3]::
     SubscribableVariableBase_1_UnityEngine_Vector3__remove_OnChange
               (SubscribableVariableBase_1_UnityEngine_Vector3_ *this,
               Action_1_UnityEngine_Vector3_ *value,MethodInfo *method)

{
  ppAVar1 = &(this->fields).OnChange;
  source = *ppAVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pIVar3 = method->klass->rgctx_data[7].klass;
    if (((uint)pIVar3->vtable[0].methodPtr & 0x100) == 0) {
      pIVar3 = (Il2CppClass *)func_?(pIVar3);
    }
    if (pDVar2 == (Delegate *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = func_?(pDVar2,pIVar3);
      if (iVar4 == 0) {
        func_?(pDVar2,pIVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pAVar6 = (Action_1_UnityEngine_Vector3_ *)func_?(ppAVar1,iVar4,source);
    bVar7 = pAVar6 != source;
    source = pAVar6;
  } while (bVar7);
  return;
}

