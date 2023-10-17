
/* Object AddValue(DefaultSerializationBinder+TypeNameKey) */

Object * Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ThreadSafeStore`2[Newtonsoft::Json::
         Serialization::DefaultSerializationBinder+TypeNameKey,System::Object]::
         ThreadSafeStore_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_System_Object__AddValue
                   (ThreadSafeStore_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_System_Object_
                    *this,DefaultSerializationBinder_TypeNameKey key,MethodInfo *method)

{
  pTVar1 = this;
  uStack_2 = 0xffffffff;
  puStack_3 = &DAT_?;
  uStack_4 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_4;
  pFVar5 = (this->fields)._creator;
  pOStack_6 = (Object *)0x0;
  if (pFVar5 == (Func_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_Object_
                 *)0x0) goto code_?;
  pOVar7 = (Object *)
           (*(method->klass->rgctx_data[4].method)->virtualMethodPointer)
                     (pFVar5,key.AssemblyName,key.TypeName,
                      method->klass->rgctx_data[4].rgctxDataDummy);
  this = (ThreadSafeStore_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_System_Object_
          *)((uint)this & 0xffffff);
  pOVar8 = (pTVar1->fields)._lock;
  uStack_2 = 1;
  mscorlib.dll::System::Threading::Monitor::Monitor_1_Enter_1
            (pOVar8,(bool *)((int)&this + 3),(MethodInfo *)0x0);
  pIVar9 = method->klass->rgctx_data;
  if ((pTVar1->fields)._store ==
      (Dictionary_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_System_Object_
       *)0x0) {
    if ((*(byte *)((int)pIVar9[1].rgctxDataDummy + 0xba) & 1) == 0) {
      func_?();
    }
    pDVar10 = (Dictionary_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_System_Object_
              *)func_?();
    if (pDVar10 == (Dictionary_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_System_Object_
                   *)0x0) {
code_?:
      uVar11 = func_?();
      func_?(uVar11);
      pcVar12 = (code *)swi(3);
      pOVar8 = (Object *)(*pcVar12)();
      return pOVar8;
    }
    (*(method->klass->rgctx_data[5].method)->virtualMethodPointer)
              (pDVar10,method->klass->rgctx_data[5].rgctxDataDummy);
    (pTVar1->fields)._store = pDVar10;
    func_?(&(pTVar1->fields)._store,pDVar10);
    pDVar10 = (pTVar1->fields)._store;
    if (pDVar10 == (Dictionary_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_System_Object_
                   *)0x0) goto code_?;
    (*(method->klass->rgctx_data[6].method)->virtualMethodPointer)
              (pDVar10,key.AssemblyName,key.TypeName,pOVar7,
               method->klass->rgctx_data[6].rgctxDataDummy);
  }
  else {
    cVar13 = (*(pIVar9[2].method)->virtualMethodPointer)((pTVar1->fields)._store,key.AssemblyName);
    if (cVar13 != '\0') {
      uStack_2 = 0xffffffff;
      if (this._3_1_ != '\0') {
        mscorlib.dll::System::Threading::Monitor::Monitor_1_Exit(pOVar8,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_4;
        return (Object *)0x0;
      }
      goto code_?;
    }
    pDVar10 = (pTVar1->fields)._store;
    if ((*(byte *)((int)method->klass->rgctx_data[1].rgctxDataDummy + 0xba) & 1) == 0) {
      func_?();
    }
    pDVar14 = (Dictionary_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_System_Object_
              *)func_?();
    if (pDVar14 == (Dictionary_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_System_Object_
                   *)0x0) goto code_?;
    (*(method->klass->rgctx_data[7].method)->virtualMethodPointer)
              (pDVar14,pDVar10,method->klass->rgctx_data[7].rgctxDataDummy);
    (*(method->klass->rgctx_data[6].method)->virtualMethodPointer)
              (pDVar14,key.AssemblyName,key.TypeName,pOVar7,
               method->klass->rgctx_data[6].rgctxDataDummy);
    (pTVar1->fields)._store = pDVar14;
    func_?(&(pTVar1->fields)._store,pDVar14);
  }
  uStack_2 = 0xffffffff;
  pOStack_6 = pOVar7;
  if (this._3_1_ != '\0') {
    mscorlib.dll::System::Threading::Monitor::Monitor_1_Exit(pOVar8,(MethodInfo *)0x0);
    *unaff_FS_OFFSET = uStack_4;
    return pOVar7;
  }
code_?:
  *unaff_FS_OFFSET = uStack_4;
  return pOStack_6;
}


/* Object Get(DefaultSerializationBinder+TypeNameKey) */

Object * Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ThreadSafeStore`2[Newtonsoft::Json::
         Serialization::DefaultSerializationBinder+TypeNameKey,System::Object]::
         ThreadSafeStore_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_System_Object__Get
                   (ThreadSafeStore_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_System_Object_
                    *this,DefaultSerializationBinder_TypeNameKey key,MethodInfo *method)

{
  pOStack_1 = (Object *)0x0;
  pIVar2 = method->klass->rgctx_data;
  if ((this->fields)._store !=
      (Dictionary_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_System_Object_
       *)0x0) {
    cVar3 = (*(pIVar2[2].method)->virtualMethodPointer)
                      ((this->fields)._store,key.AssemblyName,key.TypeName,&pOStack_1,
                       method->klass->rgctx_data[2].rgctxDataDummy);
    if (cVar3 != '\0') {
      return pOStack_1;
    }
    pIVar2 = method->klass->rgctx_data;
  }
  pOVar4 = (Object *)
           (*pIVar2->method->virtualMethodPointer)
                     (this,key.AssemblyName,key.TypeName,method->klass->rgctx_data->rgctxDataDummy);
  return pOVar4;
}


/* ThreadSafeStore`2[Newtonsoft.Json.Serialization.DefaultSerializationBinder+TypeNameKey,System.Object](Func`2[Newtonsoft.Json.Serialization.DefaultSerializationBinder+TypeNameKey,Object])
    */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ThreadSafeStore`2[Newtonsoft::Json::
     Serialization::DefaultSerializationBinder+TypeNameKey,System::Object]::
     ThreadSafeStore_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_System_Object___ctor
               (ThreadSafeStore_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_System_Object_
                *this,Func_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_Object_
                      *creator,MethodInfo *method)

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
    if (creator !=
        (Func_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_Object_ *)0x0)
    {
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

