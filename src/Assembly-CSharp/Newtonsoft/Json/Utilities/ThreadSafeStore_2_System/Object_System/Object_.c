
/* Object AddValue(Object) */

Object * Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ThreadSafeStore`2[System::Object,System::
         Object]::ThreadSafeStore_2_System_Object_System_Object__AddValue
                   (ThreadSafeStore_2_System_Object_System_Object_ *this,Object *key,
                   MethodInfo *method)

{
  pMVar1 = method;
  pTVar2 = this;
  uStack_3 = 0xffffffff;
  puStack_4 = &DAT_?;
  uStack_5 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_5;
  pFVar6 = (this->fields)._creator;
  pOStack_7 = (Object *)0x0;
  if (pFVar6 == (Func_2_Object_Object_ *)0x0) goto code_?;
  pOVar8 = (Object *)
           (*(method->klass->rgctx_data[4].method)->virtualMethodPointer)
                     (pFVar6,key,method->klass->rgctx_data[4].rgctxDataDummy);
  this = (ThreadSafeStore_2_System_Object_System_Object_ *)((uint)this & 0xffffff);
  pOVar9 = (pTVar2->fields)._lock;
  uStack_3 = 1;
  mscorlib.dll::System::Threading::Monitor::Monitor_1_Enter_1
            (pOVar9,(bool *)((int)&this + 3),(MethodInfo *)0x0);
  pIVar10 = pMVar1->klass->rgctx_data;
  if ((pTVar2->fields)._store == (Dictionary_2_System_Object_System_Object_ *)0x0) {
    if ((*(byte *)((int)pIVar10[1].rgctxDataDummy + 0xba) & 1) == 0) {
      func_?();
    }
    pDVar11 = (Dictionary_2_System_Object_System_Object_ *)func_?();
    if (pDVar11 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
code_?:
      uVar12 = func_?();
      func_?(uVar12);
      pcVar13 = (code *)swi(3);
      pOVar9 = (Object *)(*pcVar13)();
      return pOVar9;
    }
    (*(pMVar1->klass->rgctx_data[5].method)->virtualMethodPointer)
              (pDVar11,pMVar1->klass->rgctx_data[5].rgctxDataDummy);
    (pTVar2->fields)._store = pDVar11;
    func_?(&(pTVar2->fields)._store,pDVar11);
    pDVar11 = (pTVar2->fields)._store;
    if (pDVar11 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
    (*(pMVar1->klass->rgctx_data[6].method)->virtualMethodPointer)
              (pDVar11,key,pOVar8,pMVar1->klass->rgctx_data[6].rgctxDataDummy);
  }
  else {
    cVar14 = (*(pIVar10[2].method)->virtualMethodPointer)((pTVar2->fields)._store);
    if (cVar14 != '\0') {
      uStack_3 = 0xffffffff;
      if (this._3_1_ != '\0') {
        mscorlib.dll::System::Threading::Monitor::Monitor_1_Exit(pOVar9,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_5;
        return (Object *)0x0;
      }
      goto code_?;
    }
    pDVar11 = (pTVar2->fields)._store;
    if ((*(byte *)((int)pMVar1->klass->rgctx_data[1].rgctxDataDummy + 0xba) & 1) == 0) {
      func_?();
    }
    pDVar15 = (Dictionary_2_System_Object_System_Object_ *)func_?();
    if (pDVar15 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
    (*(pMVar1->klass->rgctx_data[7].method)->virtualMethodPointer)
              (pDVar15,pDVar11,pMVar1->klass->rgctx_data[7].rgctxDataDummy);
    (*(pMVar1->klass->rgctx_data[6].method)->virtualMethodPointer)
              (pDVar15,key,pOVar8,pMVar1->klass->rgctx_data[6].rgctxDataDummy);
    (pTVar2->fields)._store = pDVar15;
    func_?(&(pTVar2->fields)._store,pDVar15);
  }
  uStack_3 = 0xffffffff;
  pOStack_7 = pOVar8;
  if (this._3_1_ != '\0') {
    mscorlib.dll::System::Threading::Monitor::Monitor_1_Exit(pOVar9,(MethodInfo *)0x0);
    *unaff_FS_OFFSET = uStack_5;
    return pOVar8;
  }
code_?:
  *unaff_FS_OFFSET = uStack_5;
  return pOStack_7;
}


/* Object Get(Object) */

Object * Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ThreadSafeStore`2[System::Object,System::
         Object]::ThreadSafeStore_2_System_Object_System_Object__Get
                   (ThreadSafeStore_2_System_Object_System_Object_ *this,Object *key,
                   MethodInfo *method)

{
  pOStack_1 = (Object *)0x0;
  pIVar2 = method->klass->rgctx_data;
  if ((this->fields)._store != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    cVar3 = (*(pIVar2[2].method)->virtualMethodPointer)
                      ((this->fields)._store,key,&pOStack_1,
                       method->klass->rgctx_data[2].rgctxDataDummy);
    if (cVar3 != '\0') {
      return pOStack_1;
    }
    pIVar2 = method->klass->rgctx_data;
  }
  pOVar4 = (Object *)
           (*pIVar2->method->virtualMethodPointer)
                     (this,key,method->klass->rgctx_data->rgctxDataDummy);
  return pOVar4;
}


/* ThreadSafeStore`2[System.Object,System.Object](Func`2[Object,Object]) */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ThreadSafeStore`2[System::Object,System::
     Object]::ThreadSafeStore_2_System_Object_System_Object___ctor
               (ThreadSafeStore_2_System_Object_System_Object_ *this,Func_2_Object_Object_ *creator,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Object);
    cRam_? = '\x01';
  }
  value = (Object *)func_?(TypeInfo__System__Object);
  if (value == (Object *)0x0) {
    func_?();
  }
  else {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (value,ExceptionArgument__Enum_obj,unaff_EDI);
    pMVar1 = (MethodInfo *)&this->fields;
    (this->fields)._lock = value;
    func_?(pMVar1,value);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)this,ExceptionArgument__Enum_obj,pMVar1);
    if (creator != (Func_2_Object_Object_ *)0x0) {
      (this->fields)._creator = creator;
      func_?(&(this->fields)._creator);
      return;
    }
  }
  uVar2 = func_?();
  this_00 = (ArgumentNullException *)func_?(uVar2);
  func_?(this_00);
  pMVar1 = (MethodInfo *)0x0;
  paramName = (String *)func_?(&StringLiteral_creator);
  mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
            (this_00,paramName,pMVar1);
  func_?();
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

