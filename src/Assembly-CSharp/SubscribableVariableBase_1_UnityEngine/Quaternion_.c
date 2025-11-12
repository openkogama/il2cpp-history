
/* Boolean Equals(SubscribableVariableBase`1[UnityEngine.Quaternion]) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[UnityEngine::Quaternion]::
     SubscribableVariableBase_1_UnityEngine_Quaternion__Equals
               (SubscribableVariableBase_1_UnityEngine_Quaternion_ *this,
               SubscribableVariableBase_1_UnityEngine_Quaternion_ *other,MethodInfo *method)

{
  if (other == (SubscribableVariableBase_1_UnityEngine_Quaternion_ *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  QStack_3.x = (other->fields).value.x;
  QStack_3.y = (other->fields).value.y;
  QStack_3.z = (other->fields).value.z;
  QStack_3.w = (other->fields).value.w;
  plVar4 = (longlong *)FUN_?(method->klass->rgctx_data[5].rgctxDataDummy,&QStack_3);
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (plVar4 != (longlong *)0x0) {
    plVar5 = (longlong *)0x0;
    if ((Quaternion__Class *)*plVar4 == TypeInfo__UnityEngine__Quaternion) {
      plVar5 = plVar4;
    }
    if (plVar5 != (longlong *)0x0) {
      if (*(Il2CppClass **)(*plVar4 + 0x40) == (TypeInfo__UnityEngine__Quaternion->_0).element_class
         ) {
        QStack_3._0_8_ = plVar4[2];
        QStack_3._8_8_ = plVar4[3];
        bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Equals_1
                          (&(this->fields).value,&QStack_3,method);
        return bVar2;
      }
      FUN_?(plVar4);
      pcVar1 = (code *)swi(3);
      bVar2 = (*pcVar1)();
      return bVar2;
    }
  }
  return 0;
}


/* Boolean Equals(Object) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[UnityEngine::Quaternion]::
     SubscribableVariableBase_1_UnityEngine_Quaternion__Equals_1
               (SubscribableVariableBase_1_UnityEngine_Quaternion_ *this,Object *obj,
               MethodInfo *method)

{
  if (obj != (Object *)0x0) {
    if (this == (SubscribableVariableBase_1_UnityEngine_Quaternion_ *)obj) {
      return 1;
    }
    lVar1 = FUN_?(&(obj->klass->_0).byval_arg);
    if (this == (SubscribableVariableBase_1_UnityEngine_Quaternion_ *)0x0) {
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
      method_00 = obj->klass;
      if (((method_00->_1).naturalAligment < pIVar6->naturalAligment) ||
         ((method_00->_1).typeHierarchy[(ulonglong)pIVar6->naturalAligment - 1] != pIVar6)) {
        FUN_?(obj,pIVar6);
        pcVar2 = (code *)swi(3);
        bVar3 = (*pcVar2)();
        return bVar3;
      }
      auStack_8._0_8_ = obj[1].klass;
      auStack_8._8_8_ = obj[1].monitor;
      plVar9 = (longlong *)FUN_?(pMVar7->klass->rgctx_data[5].rgctxDataDummy,auStack_8);
      if (cRam_? == '\0') {
        FUN_?();
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (plVar9 != (longlong *)0x0) {
        plVar10 = (longlong *)0x0;
        if ((Quaternion__Class *)*plVar9 == TypeInfo__UnityEngine__Quaternion) {
          plVar10 = plVar9;
        }
        if (plVar10 != (longlong *)0x0) {
          if (*(Il2CppClass **)(*plVar9 + 0x40) ==
              (TypeInfo__UnityEngine__Quaternion->_0).element_class) {
            auStack_8._0_8_ = plVar9[2];
            auStack_8._8_8_ = plVar9[3];
            bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Equals_1
                              (&(this->fields).value,(Quaternion *)auStack_8,
                               (MethodInfo *)method_00);
            return bVar3;
          }
          FUN_?(plVar9);
          pcVar2 = (code *)swi(3);
          bVar3 = (*pcVar2)();
          return bVar3;
        }
      }
    }
  }
  return 0;
}


/* Int32 GetHashCode() */

int32_t Assembly-CSharp.dll::SubscribableVariableBase`1[UnityEngine::Quaternion]::
        SubscribableVariableBase_1_UnityEngine_Quaternion__GetHashCode
                  (SubscribableVariableBase_1_UnityEngine_Quaternion_ *this,MethodInfo *method)

{
  pEVar1 = mscorlib.dll::System::Collections::Generic::EqualityComparer`1[UnityEngine::Quaternion]::
           EqualityComparer_1_UnityEngine_Quaternion__get_Default
                     (method->klass->rgctx_data[2].method);
  if (pEVar1 != (EqualityComparer_1_UnityEngine_Quaternion_ *)0x0) {
    fStack_2 = (this->fields).value.x;
    fStack_3 = (this->fields).value.y;
    fStack_4 = (this->fields).value.z;
    fStack_5 = (this->fields).value.w;
    iVar6 = (*(pEVar1->klass->vtable).__unknown_1.methodPtr)
                      (pEVar1,&fStack_2,(pEVar1->klass->vtable).__unknown_1.method);
    return iVar6;
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  iVar6 = (*pcVar7)();
  return iVar6;
}


/* Void Notify() */

void Assembly-CSharp.dll::SubscribableVariableBase`1[UnityEngine::Quaternion]::
     SubscribableVariableBase_1_UnityEngine_Quaternion__Notify
               (SubscribableVariableBase_1_UnityEngine_Quaternion_ *this,MethodInfo *method)

{
  if ((this->fields).OnChange != (Action_1_UnityEngine_Quaternion_ *)0x0) {
    pAVar1 = (this->fields).OnChange;
    fStack_2 = (this->fields).value.x;
    fStack_3 = (this->fields).value.y;
    fStack_4 = (this->fields).value.z;
    fStack_5 = (this->fields).value.w;
    (*(pAVar1->fields)._._.invoke_impl)
              ((pAVar1->fields)._._.method_code,&fStack_2,(pAVar1->fields)._._.method);
  }
  return;
}


/* Boolean op_Equality(Quaternion, SubscribableVariableBase`1[UnityEngine.Quaternion]) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[UnityEngine::Quaternion]::
     SubscribableVariableBase_1_UnityEngine_Quaternion__op_Equality
               (Quaternion *b,SubscribableVariableBase_1_UnityEngine_Quaternion_ *a,
               MethodInfo *method)

{
  if (a == (SubscribableVariableBase_1_UnityEngine_Quaternion_ *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  pIVar3 = method->klass;
  QStack_4.x = (a->fields).value.x;
  QStack_4.y = (a->fields).value.y;
  QStack_4.z = (a->fields).value.z;
  QStack_4.w = (a->fields).value.w;
  method_00 = method;
  if ((pIVar3->field_0x135 & 1) == 0) {
    pIVar3 = (Il2CppClass *)FUN_?(pIVar3);
  }
  plVar5 = (longlong *)FUN_?(pIVar3->rgctx_data[5].rgctxDataDummy,&QStack_4);
  if ((method->klass->field_0x135 & 1) == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Quaternion);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (plVar5 != (longlong *)0x0) {
    plVar6 = (longlong *)0x0;
    if ((Quaternion__Class *)*plVar5 == TypeInfo__UnityEngine__Quaternion) {
      plVar6 = plVar5;
    }
    if (plVar6 != (longlong *)0x0) {
      if (*(Il2CppClass **)(*plVar5 + 0x40) == (TypeInfo__UnityEngine__Quaternion->_0).element_class
         ) {
        QStack_4._0_8_ = plVar5[2];
        QStack_4._8_8_ = plVar5[3];
        bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Equals_1
                          (b,&QStack_4,method_00);
        return bVar2;
      }
      FUN_?(plVar5);
      pcVar1 = (code *)swi(3);
      bVar2 = (*pcVar1)();
      return bVar2;
    }
  }
  return 0;
}


/* Boolean op_Equality(SubscribableVariableBase`1[UnityEngine.Quaternion], Quaternion) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[UnityEngine::Quaternion]::
     SubscribableVariableBase_1_UnityEngine_Quaternion__op_Equality_1
               (SubscribableVariableBase_1_UnityEngine_Quaternion_ *a,Quaternion *b,
               MethodInfo *method)

{
  if (a == (SubscribableVariableBase_1_UnityEngine_Quaternion_ *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  pIVar3 = method->klass;
  QStack_4.x = (a->fields).value.x;
  QStack_4.y = (a->fields).value.y;
  QStack_4.z = (a->fields).value.z;
  QStack_4.w = (a->fields).value.w;
  method_00 = method;
  if ((pIVar3->field_0x135 & 1) == 0) {
    pIVar3 = (Il2CppClass *)FUN_?(pIVar3);
  }
  plVar5 = (longlong *)FUN_?(pIVar3->rgctx_data[5].rgctxDataDummy,&QStack_4);
  if ((method->klass->field_0x135 & 1) == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Quaternion);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (plVar5 != (longlong *)0x0) {
    plVar6 = (longlong *)0x0;
    if ((Quaternion__Class *)*plVar5 == TypeInfo__UnityEngine__Quaternion) {
      plVar6 = plVar5;
    }
    if (plVar6 != (longlong *)0x0) {
      if (*(Il2CppClass **)(*plVar5 + 0x40) == (TypeInfo__UnityEngine__Quaternion->_0).element_class
         ) {
        QStack_4._0_8_ = plVar5[2];
        QStack_4._8_8_ = plVar5[3];
        bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Equals_1
                          (b,&QStack_4,method_00);
        return bVar2;
      }
      FUN_?(plVar5);
      pcVar1 = (code *)swi(3);
      bVar2 = (*pcVar1)();
      return bVar2;
    }
  }
  return 0;
}


/* Boolean op_Equality(SubscribableVariableBase`1[UnityEngine.Quaternion],
   SubscribableVariableBase`1[UnityEngine.Quaternion]) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[UnityEngine::Quaternion]::
     SubscribableVariableBase_1_UnityEngine_Quaternion__op_Equality_2
               (SubscribableVariableBase_1_UnityEngine_Quaternion_ *a,
               SubscribableVariableBase_1_UnityEngine_Quaternion_ *b,MethodInfo *method)

{
  if ((a == (SubscribableVariableBase_1_UnityEngine_Quaternion_ *)0x0) ||
     (b == (SubscribableVariableBase_1_UnityEngine_Quaternion_ *)0x0)) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  pIVar3 = method->klass;
  QStack_4.x = (b->fields).value.x;
  QStack_4.y = (b->fields).value.y;
  QStack_4.z = (b->fields).value.z;
  QStack_4.w = (b->fields).value.w;
  method_00 = method;
  if ((pIVar3->field_0x135 & 1) == 0) {
    pIVar3 = (Il2CppClass *)FUN_?(pIVar3);
  }
  plVar5 = (longlong *)FUN_?(pIVar3->rgctx_data[5].rgctxDataDummy,&QStack_4);
  if ((method->klass->field_0x135 & 1) == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Quaternion);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (plVar5 != (longlong *)0x0) {
    plVar6 = (longlong *)0x0;
    if ((Quaternion__Class *)*plVar5 == TypeInfo__UnityEngine__Quaternion) {
      plVar6 = plVar5;
    }
    if (plVar6 != (longlong *)0x0) {
      if (*(Il2CppClass **)(*plVar5 + 0x40) == (TypeInfo__UnityEngine__Quaternion->_0).element_class
         ) {
        QStack_4._0_8_ = plVar5[2];
        QStack_4._8_8_ = plVar5[3];
        bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Equals_1
                          (&(a->fields).value,&QStack_4,method_00);
        return bVar2;
      }
      FUN_?(plVar5);
      pcVar1 = (code *)swi(3);
      bVar2 = (*pcVar1)();
      return bVar2;
    }
  }
  return 0;
}


/* Quaternion op_Implicit(SubscribableVariableBase`1[UnityEngine.Quaternion]) */

Quaternion *
Assembly-CSharp.dll::SubscribableVariableBase`1[UnityEngine::Quaternion]::
SubscribableVariableBase_1_UnityEngine_Quaternion__op_Implicit
          (Quaternion *__return_storage_ptr__,SubscribableVariableBase_1_UnityEngine_Quaternion_ *s,
          MethodInfo *method)

{
  if (s != (SubscribableVariableBase_1_UnityEngine_Quaternion_ *)0x0) {
    fVar1 = (s->fields).value.y;
    fVar2 = (s->fields).value.z;
    fVar3 = (s->fields).value.w;
    __return_storage_ptr__->x = (s->fields).value.x;
    __return_storage_ptr__->y = fVar1;
    __return_storage_ptr__->z = fVar2;
    __return_storage_ptr__->w = fVar3;
    return __return_storage_ptr__;
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  pQVar5 = (Quaternion *)(*pcVar4)();
  return pQVar5;
}


/* Boolean op_Inequality(Quaternion, SubscribableVariableBase`1[UnityEngine.Quaternion]) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[UnityEngine::Quaternion]::
     SubscribableVariableBase_1_UnityEngine_Quaternion__op_Inequality
               (Quaternion *b,SubscribableVariableBase_1_UnityEngine_Quaternion_ *a,
               MethodInfo *method)

{
  if (a == (SubscribableVariableBase_1_UnityEngine_Quaternion_ *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  pIVar3 = method->klass;
  QStack_4.x = (a->fields).value.x;
  QStack_4.y = (a->fields).value.y;
  QStack_4.z = (a->fields).value.z;
  QStack_4.w = (a->fields).value.w;
  method_00 = method;
  if ((pIVar3->field_0x135 & 1) == 0) {
    pIVar3 = (Il2CppClass *)FUN_?(pIVar3);
  }
  plVar5 = (longlong *)FUN_?(pIVar3->rgctx_data[5].rgctxDataDummy,&QStack_4);
  if ((method->klass->field_0x135 & 1) == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Quaternion);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (plVar5 != (longlong *)0x0) {
    plVar6 = (longlong *)0x0;
    if ((Quaternion__Class *)*plVar5 == TypeInfo__UnityEngine__Quaternion) {
      plVar6 = plVar5;
    }
    if (plVar6 != (longlong *)0x0) {
      if (*(Il2CppClass **)(*plVar5 + 0x40) == (TypeInfo__UnityEngine__Quaternion->_0).element_class
         ) {
        QStack_4._0_8_ = plVar5[2];
        QStack_4._8_8_ = plVar5[3];
        bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Equals_1
                          (b,&QStack_4,method_00);
        return bVar2 ^ 1;
      }
      FUN_?(plVar5);
      pcVar1 = (code *)swi(3);
      bVar2 = (*pcVar1)();
      return bVar2;
    }
  }
  return 1;
}


/* Boolean op_Inequality(SubscribableVariableBase`1[UnityEngine.Quaternion], Quaternion) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[UnityEngine::Quaternion]::
     SubscribableVariableBase_1_UnityEngine_Quaternion__op_Inequality_1
               (SubscribableVariableBase_1_UnityEngine_Quaternion_ *a,Quaternion *b,
               MethodInfo *method)

{
  if (a == (SubscribableVariableBase_1_UnityEngine_Quaternion_ *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  pIVar3 = method->klass;
  QStack_4.x = (a->fields).value.x;
  QStack_4.y = (a->fields).value.y;
  QStack_4.z = (a->fields).value.z;
  QStack_4.w = (a->fields).value.w;
  method_00 = method;
  if ((pIVar3->field_0x135 & 1) == 0) {
    pIVar3 = (Il2CppClass *)FUN_?(pIVar3);
  }
  plVar5 = (longlong *)FUN_?(pIVar3->rgctx_data[5].rgctxDataDummy,&QStack_4);
  if ((method->klass->field_0x135 & 1) == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Quaternion);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (plVar5 != (longlong *)0x0) {
    plVar6 = (longlong *)0x0;
    if ((Quaternion__Class *)*plVar5 == TypeInfo__UnityEngine__Quaternion) {
      plVar6 = plVar5;
    }
    if (plVar6 != (longlong *)0x0) {
      if (*(Il2CppClass **)(*plVar5 + 0x40) == (TypeInfo__UnityEngine__Quaternion->_0).element_class
         ) {
        QStack_4._0_8_ = plVar5[2];
        QStack_4._8_8_ = plVar5[3];
        bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Equals_1
                          (b,&QStack_4,method_00);
        return bVar2 ^ 1;
      }
      FUN_?(plVar5);
      pcVar1 = (code *)swi(3);
      bVar2 = (*pcVar1)();
      return bVar2;
    }
  }
  return 1;
}


/* Boolean op_Inequality(SubscribableVariableBase`1[UnityEngine.Quaternion],
   SubscribableVariableBase`1[UnityEngine.Quaternion]) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[UnityEngine::Quaternion]::
     SubscribableVariableBase_1_UnityEngine_Quaternion__op_Inequality_2
               (SubscribableVariableBase_1_UnityEngine_Quaternion_ *a,
               SubscribableVariableBase_1_UnityEngine_Quaternion_ *b,MethodInfo *method)

{
  pIVar1 = method->klass;
  if ((pIVar1->field_0x135 & 1) == 0) {
    pIVar1 = (Il2CppClass *)FUN_?(pIVar1);
  }
  pMVar2 = pIVar1->rgctx_data[10].method;
  if ((a == (SubscribableVariableBase_1_UnityEngine_Quaternion_ *)0x0) ||
     (b == (SubscribableVariableBase_1_UnityEngine_Quaternion_ *)0x0)) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    bVar4 = (*pcVar3)();
    return bVar4;
  }
  pIVar1 = pMVar2->klass;
  QStack_5.x = (b->fields).value.x;
  QStack_5.y = (b->fields).value.y;
  QStack_5.z = (b->fields).value.z;
  QStack_5.w = (b->fields).value.w;
  if ((pIVar1->field_0x135 & 1) == 0) {
    pIVar1 = (Il2CppClass *)FUN_?(pIVar1);
  }
  plVar6 = (longlong *)FUN_?(pIVar1->rgctx_data[5].rgctxDataDummy,&QStack_5);
  if ((pMVar2->klass->field_0x135 & 1) == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Quaternion);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (plVar6 != (longlong *)0x0) {
    plVar7 = (longlong *)0x0;
    if ((Quaternion__Class *)*plVar6 == TypeInfo__UnityEngine__Quaternion) {
      plVar7 = plVar6;
    }
    if (plVar7 != (longlong *)0x0) {
      if (*(Il2CppClass **)(*plVar6 + 0x40) == (TypeInfo__UnityEngine__Quaternion->_0).element_class
         ) {
        QStack_5._0_8_ = plVar6[2];
        QStack_5._8_8_ = plVar6[3];
        bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Equals_1
                          (&(a->fields).value,&QStack_5,method);
        return bVar4 ^ 1;
      }
      FUN_?(plVar6);
      pcVar3 = (code *)swi(3);
      bVar4 = (*pcVar3)();
      return bVar4;
    }
  }
  return 1;
}

