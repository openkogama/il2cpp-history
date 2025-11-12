
/* Boolean Equals(SubscribableVariableBase`1[UnityEngine.Vector3]) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[UnityEngine::Vector3]::
     SubscribableVariableBase_1_UnityEngine_Vector3__Equals
               (SubscribableVariableBase_1_UnityEngine_Vector3_ *this,
               SubscribableVariableBase_1_UnityEngine_Vector3_ *other,MethodInfo *method)

{
  if (other == (SubscribableVariableBase_1_UnityEngine_Vector3_ *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  fStack_3 = (other->fields).value.z;
  uStack_4._0_4_ = (other->fields).value.x;
  uStack_4._4_4_ = (other->fields).value.y;
  plVar5 = (longlong *)FUN_?(method->klass->rgctx_data[5].rgctxDataDummy,&uStack_4);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (plVar5 != (longlong *)0x0) {
    plVar6 = (longlong *)0x0;
    if ((Vector3__Class *)*plVar5 == TypeInfo__UnityEngine__Vector3) {
      plVar6 = plVar5;
    }
    if (plVar6 != (longlong *)0x0) {
      if (*(Il2CppClass **)(*plVar5 + 0x40) != (TypeInfo__UnityEngine__Vector3->_0).element_class) {
        FUN_?(plVar5);
        pcVar1 = (code *)swi(3);
        bVar2 = (*pcVar1)();
        return bVar2;
      }
      if ((((this->fields).value.x == (float)plVar5[2]) &&
          (uStack_4._4_4_ = (float)((ulonglong)plVar5[2] >> 0x20),
          (this->fields).value.y == uStack_4._4_4_)) &&
         ((this->fields).value.z == *(float *)(plVar5 + 3))) {
        return 1;
      }
    }
  }
  return 0;
}


/* Boolean Equals(Object) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[UnityEngine::Vector3]::
     SubscribableVariableBase_1_UnityEngine_Vector3__Equals_1
               (SubscribableVariableBase_1_UnityEngine_Vector3_ *this,Object *obj,MethodInfo *method
               )

{
  if (obj != (Object *)0x0) {
    if (this == (SubscribableVariableBase_1_UnityEngine_Vector3_ *)obj) {
      return 1;
    }
    lVar1 = FUN_?(&(obj->klass->_0).byval_arg);
    if (this == (SubscribableVariableBase_1_UnityEngine_Vector3_ *)0x0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      bVar3 = (*pcVar2)();
      return bVar3;
    }
    lVar4 = FUN_?(&(this->klass->_0).byval_arg);
    if (*(int *)(lRam_? + 0xe4) == 0) {
      FUN_?();
    }
    if (lVar1 == lVar4) {
      pIVar5 = method->klass->rgctx_data;
      pIVar6 = pIVar5->klass;
      pMVar7 = pIVar5[1].method;
      if ((pIVar6->field_0x135 & 1) == 0) {
        pIVar6 = (Il2CppClass *)FUN_?(pIVar6);
      }
      if ((pIVar6->naturalAligment <= (obj->klass->_1).naturalAligment) &&
         ((obj->klass->_1).typeHierarchy[(ulonglong)pIVar6->naturalAligment - 1] == pIVar6)) {
        uStack_8 = *(undefined4 *)&obj[1].monitor;
        pOStack_9 = obj[1].klass;
        uVar10 = FUN_?(pMVar7->klass->rgctx_data[5].rgctxDataDummy,&pOStack_9);
        bVar3 = FUN_?(&this->fields,uVar10);
        return bVar3;
      }
      FUN_?(obj,pIVar6);
      pcVar2 = (code *)swi(3);
      bVar3 = (*pcVar2)();
      return bVar3;
    }
  }
  return 0;
}


/* Int32 GetHashCode() */

int32_t Assembly-CSharp.dll::SubscribableVariableBase`1[UnityEngine::Vector3]::
        SubscribableVariableBase_1_UnityEngine_Vector3__GetHashCode
                  (SubscribableVariableBase_1_UnityEngine_Vector3_ *this,MethodInfo *method)

{
  pEVar1 = mscorlib.dll::System::Collections::Generic::EqualityComparer`1[UnityEngine::Vector3]::
           EqualityComparer_1_UnityEngine_Vector3__get_Default(method->klass->rgctx_data[2].method);
  if (pEVar1 != (EqualityComparer_1_UnityEngine_Vector3_ *)0x0) {
    fStack_2 = (this->fields).value.z;
    uStack_3._0_4_ = (this->fields).value.x;
    uStack_3._4_4_ = (this->fields).value.y;
    iVar4 = (*(pEVar1->klass->vtable).__unknown_1.methodPtr)
                      (pEVar1,&uStack_3,(pEVar1->klass->vtable).__unknown_1.method);
    return iVar4;
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  iVar4 = (*pcVar5)();
  return iVar4;
}


/* Void Notify() */

void Assembly-CSharp.dll::SubscribableVariableBase`1[UnityEngine::Vector3]::
     SubscribableVariableBase_1_UnityEngine_Vector3__Notify
               (SubscribableVariableBase_1_UnityEngine_Vector3_ *this,MethodInfo *method)

{
  if ((this->fields).OnChange != (Action_1_UnityEngine_Vector3_ *)0x0) {
    pAVar1 = (this->fields).OnChange;
    uStack_2._0_4_ = (this->fields).value.x;
    uStack_2._4_4_ = (this->fields).value.y;
    fStack_3 = (this->fields).value.z;
    (*(pAVar1->fields)._._.invoke_impl)
              ((pAVar1->fields)._._.method_code,&uStack_2,(pAVar1->fields)._._.method);
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
  a = (this->fields).OnChange;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pvVar3 = method->klass->rgctx_data[7].rgctxDataDummy;
    if ((*(byte *)((longlong)pvVar3 + 0x135) & 1) == 0) {
      pvVar3 = (void *)FUN_?();
    }
    if (pDVar2 == (Delegate *)0x0) {
      pAVar4 = (Action_1_UnityEngine_Vector3_ *)0x0;
    }
    else {
      pAVar4 = (Action_1_UnityEngine_Vector3_ *)FUN_?(pDVar2,pvVar3);
      if (pAVar4 == (Action_1_UnityEngine_Vector3_ *)0x0) {
        FUN_?(pDVar2,pvVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    LOCK();
    pAVar6 = *ppAVar1;
    bVar7 = a == pAVar6;
    if (bVar7) {
      *ppAVar1 = pAVar4;
      pAVar6 = a;
    }
    UNLOCK();
    pAVar4 = a;
    if (!bVar7) {
      pAVar4 = pAVar6;
    }
    if (iRam_? != 0) {
      uVar8 = (uint)((ulonglong)ppAVar1 >> 0xc);
      uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
      do {
        uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
        puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
        LOCK();
        bVar7 = uVar10 == *puVar11;
        if (bVar7) {
          *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
    bVar7 = pAVar4 != a;
    a = pAVar4;
  } while (bVar7);
  return;
}


/* Vector3 get_Value() */

Vector3 * Assembly-CSharp.dll::SubscribableVariableBase`1[UnityEngine::Vector3]::
          SubscribableVariableBase_1_UnityEngine_Vector3__get_Value
                    (Vector3 *__return_storage_ptr__,
                    SubscribableVariableBase_1_UnityEngine_Vector3_ *this,MethodInfo *method)

{
  fVar1 = (this->fields).value.z;
  fVar2 = (this->fields).value.y;
  __return_storage_ptr__->x = (this->fields).value.x;
  __return_storage_ptr__->y = fVar2;
  __return_storage_ptr__->z = fVar1;
  return __return_storage_ptr__;
}


/* Boolean op_Equality(Vector3, SubscribableVariableBase`1[UnityEngine.Vector3]) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[UnityEngine::Vector3]::
     SubscribableVariableBase_1_UnityEngine_Vector3__op_Equality
               (Vector3 *b,SubscribableVariableBase_1_UnityEngine_Vector3_ *a,MethodInfo *method)

{
  if (a != (SubscribableVariableBase_1_UnityEngine_Vector3_ *)0x0) {
    fStack_1 = (a->fields).value.z;
    uStack_2._0_4_ = (a->fields).value.x;
    uStack_2._4_4_ = (a->fields).value.y;
    pIVar3 = method->klass;
    if ((pIVar3->field_0x135 & 1) == 0) {
      pIVar3 = (Il2CppClass *)FUN_?(pIVar3);
    }
    uVar4 = FUN_?(pIVar3->rgctx_data[5].rgctxDataDummy,&uStack_2);
    if ((method->klass->field_0x135 & 1) == 0) {
      FUN_?();
    }
    bVar5 = FUN_?(b,uVar4);
    return bVar5;
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  bVar5 = (*pcVar6)();
  return bVar5;
}


/* Boolean op_Equality(SubscribableVariableBase`1[UnityEngine.Vector3], Vector3) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[UnityEngine::Vector3]::
     SubscribableVariableBase_1_UnityEngine_Vector3__op_Equality_1
               (SubscribableVariableBase_1_UnityEngine_Vector3_ *a,Vector3 *b,MethodInfo *method)

{
  if (a != (SubscribableVariableBase_1_UnityEngine_Vector3_ *)0x0) {
    fStack_1 = (a->fields).value.z;
    uStack_2._0_4_ = (a->fields).value.x;
    uStack_2._4_4_ = (a->fields).value.y;
    pIVar3 = method->klass;
    if ((pIVar3->field_0x135 & 1) == 0) {
      pIVar3 = (Il2CppClass *)FUN_?(pIVar3);
    }
    uVar4 = FUN_?(pIVar3->rgctx_data[5].rgctxDataDummy,&uStack_2);
    if ((method->klass->field_0x135 & 1) == 0) {
      FUN_?();
    }
    bVar5 = FUN_?(b,uVar4);
    return bVar5;
  }
  FUN_?();
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
  if ((a == (SubscribableVariableBase_1_UnityEngine_Vector3_ *)0x0) ||
     (b == (SubscribableVariableBase_1_UnityEngine_Vector3_ *)0x0)) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  fStack_3 = (b->fields).value.z;
  uStack_4._0_4_ = (b->fields).value.x;
  uStack_4._4_4_ = (b->fields).value.y;
  pIVar5 = method->klass;
  if ((pIVar5->field_0x135 & 1) == 0) {
    pIVar5 = (Il2CppClass *)FUN_?(pIVar5);
  }
  plVar6 = (longlong *)FUN_?(pIVar5->rgctx_data[5].rgctxDataDummy,&uStack_4);
  if ((method->klass->field_0x135 & 1) == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (plVar6 != (longlong *)0x0) {
    plVar7 = (longlong *)0x0;
    if ((Vector3__Class *)*plVar6 == TypeInfo__UnityEngine__Vector3) {
      plVar7 = plVar6;
    }
    if (plVar7 != (longlong *)0x0) {
      if (*(Il2CppClass **)(*plVar6 + 0x40) != (TypeInfo__UnityEngine__Vector3->_0).element_class) {
        FUN_?(plVar6);
        pcVar1 = (code *)swi(3);
        bVar2 = (*pcVar1)();
        return bVar2;
      }
      if ((((a->fields).value.x == (float)plVar6[2]) &&
          (uStack_4._4_4_ = (float)((ulonglong)plVar6[2] >> 0x20),
          (a->fields).value.y == uStack_4._4_4_)) &&
         ((a->fields).value.z == *(float *)(plVar6 + 3))) {
        return 1;
      }
    }
  }
  return 0;
}


/* Vector3 op_Implicit(SubscribableVariableBase`1[UnityEngine.Vector3]) */

Vector3 * Assembly-CSharp.dll::SubscribableVariableBase`1[UnityEngine::Vector3]::
          SubscribableVariableBase_1_UnityEngine_Vector3__op_Implicit
                    (Vector3 *__return_storage_ptr__,
                    SubscribableVariableBase_1_UnityEngine_Vector3_ *s,MethodInfo *method)

{
  if (s != (SubscribableVariableBase_1_UnityEngine_Vector3_ *)0x0) {
    fVar1 = (s->fields).value.z;
    fVar2 = (s->fields).value.y;
    __return_storage_ptr__->x = (s->fields).value.x;
    __return_storage_ptr__->y = fVar2;
    __return_storage_ptr__->z = fVar1;
    return __return_storage_ptr__;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  pVVar4 = (Vector3 *)(*pcVar3)();
  return pVVar4;
}


/* Boolean op_Inequality(Vector3, SubscribableVariableBase`1[UnityEngine.Vector3]) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[UnityEngine::Vector3]::
     SubscribableVariableBase_1_UnityEngine_Vector3__op_Inequality
               (Vector3 *b,SubscribableVariableBase_1_UnityEngine_Vector3_ *a,MethodInfo *method)

{
  if (a != (SubscribableVariableBase_1_UnityEngine_Vector3_ *)0x0) {
    fStack_1 = (a->fields).value.z;
    uStack_2._0_4_ = (a->fields).value.x;
    uStack_2._4_4_ = (a->fields).value.y;
    pIVar3 = method->klass;
    if ((pIVar3->field_0x135 & 1) == 0) {
      pIVar3 = (Il2CppClass *)FUN_?(pIVar3);
    }
    uVar4 = FUN_?(pIVar3->rgctx_data[5].rgctxDataDummy,&uStack_2);
    if ((method->klass->field_0x135 & 1) == 0) {
      FUN_?();
    }
    bVar5 = FUN_?(b,uVar4);
    return bVar5 ^ 1;
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  bVar7 = (*pcVar6)();
  return bVar7;
}


/* Boolean op_Inequality(SubscribableVariableBase`1[UnityEngine.Vector3], Vector3) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[UnityEngine::Vector3]::
     SubscribableVariableBase_1_UnityEngine_Vector3__op_Inequality_1
               (SubscribableVariableBase_1_UnityEngine_Vector3_ *a,Vector3 *b,MethodInfo *method)

{
  if (a != (SubscribableVariableBase_1_UnityEngine_Vector3_ *)0x0) {
    fStack_1 = (a->fields).value.z;
    uStack_2._0_4_ = (a->fields).value.x;
    uStack_2._4_4_ = (a->fields).value.y;
    pIVar3 = method->klass;
    if ((pIVar3->field_0x135 & 1) == 0) {
      pIVar3 = (Il2CppClass *)FUN_?(pIVar3);
    }
    uVar4 = FUN_?(pIVar3->rgctx_data[5].rgctxDataDummy,&uStack_2);
    if ((method->klass->field_0x135 & 1) == 0) {
      FUN_?();
    }
    bVar5 = FUN_?(b,uVar4);
    return bVar5 ^ 1;
  }
  FUN_?();
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
  if ((pIVar1->field_0x135 & 1) == 0) {
    pIVar1 = (Il2CppClass *)FUN_?(pIVar1);
  }
  pMVar2 = pIVar1->rgctx_data[10].method;
  if ((a != (SubscribableVariableBase_1_UnityEngine_Vector3_ *)0x0) &&
     (b != (SubscribableVariableBase_1_UnityEngine_Vector3_ *)0x0)) {
    fStack_3 = (b->fields).value.z;
    uStack_4._0_4_ = (b->fields).value.x;
    uStack_4._4_4_ = (b->fields).value.y;
    pIVar1 = pMVar2->klass;
    if ((pIVar1->field_0x135 & 1) == 0) {
      pIVar1 = (Il2CppClass *)FUN_?(pIVar1);
    }
    uVar5 = FUN_?(pIVar1->rgctx_data[5].rgctxDataDummy,&uStack_4);
    if ((pMVar2->klass->field_0x135 & 1) == 0) {
      FUN_?();
    }
    bVar6 = FUN_?(&a->fields,uVar5);
    return bVar6 ^ 1;
  }
  FUN_?();
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
  source = (this->fields).OnChange;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pvVar3 = method->klass->rgctx_data[7].rgctxDataDummy;
    if ((*(byte *)((longlong)pvVar3 + 0x135) & 1) == 0) {
      pvVar3 = (void *)FUN_?();
    }
    if (pDVar2 == (Delegate *)0x0) {
      pAVar4 = (Action_1_UnityEngine_Vector3_ *)0x0;
    }
    else {
      pAVar4 = (Action_1_UnityEngine_Vector3_ *)FUN_?(pDVar2,pvVar3);
      if (pAVar4 == (Action_1_UnityEngine_Vector3_ *)0x0) {
        FUN_?(pDVar2,pvVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    LOCK();
    pAVar6 = *ppAVar1;
    bVar7 = source == pAVar6;
    if (bVar7) {
      *ppAVar1 = pAVar4;
      pAVar6 = source;
    }
    UNLOCK();
    pAVar4 = source;
    if (!bVar7) {
      pAVar4 = pAVar6;
    }
    if (iRam_? != 0) {
      uVar8 = (uint)((ulonglong)ppAVar1 >> 0xc);
      uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
      do {
        uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
        puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
        LOCK();
        bVar7 = uVar10 == *puVar11;
        if (bVar7) {
          *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
    bVar7 = pAVar4 != source;
    source = pAVar4;
  } while (bVar7);
  return;
}

