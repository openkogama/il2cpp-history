
/* Void Add(Object, Object) */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::BidirectionalDictionary`2[System::
     Object,System::Object]::BidirectionalDictionary_2_System_Object_System_Object__Add
               (BidirectionalDictionary_2_System_Object_System_Object_ *this,Object *first,
               Object *second,MethodInfo *method)

{
  pIVar1 = (this->fields)._firstToSecond;
  if (pIVar1 != (IDictionary_2_System_Object_System_Object_ *)0x0) {
    pvVar2 = method->klass->rgctx_data[9].rgctxDataDummy;
    if ((*(byte *)((int)pvVar2 + 0xba) & 1) == 0) {
      pvVar2 = (void *)func_?(pvVar2);
    }
    cVar3 = func_?(4,pvVar2,pIVar1,first);
    if (cVar3 != '\0') goto code_?;
    pIVar1 = (this->fields)._secondToFirst;
    if (pIVar1 != (IDictionary_2_System_Object_System_Object_ *)0x0) {
      pvVar2 = method->klass->rgctx_data[0xb].rgctxDataDummy;
      if ((*(byte *)((int)pvVar2 + 0xba) & 1) == 0) {
        pvVar2 = (void *)func_?(pvVar2);
      }
      cVar3 = func_?(4,pvVar2,pIVar1,second);
      if (cVar3 != '\0') goto code_?;
      pIVar1 = (this->fields)._firstToSecond;
      if (pIVar1 != (IDictionary_2_System_Object_System_Object_ *)0x0) {
        pvVar2 = method->klass->rgctx_data[9].rgctxDataDummy;
        if ((*(byte *)((int)pvVar2 + 0xba) & 1) == 0) {
          pvVar2 = (void *)func_?(pvVar2);
        }
        func_?(5,pvVar2,pIVar1,first,second);
        pIVar1 = (this->fields)._secondToFirst;
        if (pIVar1 != (IDictionary_2_System_Object_System_Object_ *)0x0) {
          pvVar2 = method->klass->rgctx_data[0xb].rgctxDataDummy;
          if ((*(byte *)((int)pvVar2 + 0xba) & 1) == 0) {
            pvVar2 = (void *)func_?(pvVar2);
          }
          func_?(5,pvVar2,pIVar1,second,first);
          return;
        }
      }
    }
  }
  func_?();
code_?:
  uVar4 = func_?(&TypeInfo__System__ArgumentException);
  this_00 = (ArgumentException *)func_?(uVar4);
  func_?(this_00);
  method_00 = (MethodInfo *)0x0;
  message = (String *)func_?(&StringLiteral_Duplicate_first_or_second);
  mscorlib.dll::System::ArgumentException::ArgumentException__ctor_1(this_00,message,method_00);
  uVar4 = func_?(&
                          MethodInfo__Newtonsoft__Json__Utilities__BidirectionalDictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                         );
  func_?(this_00,uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Boolean TryGetByFirst(Object, Object ByRef) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Utilities::BidirectionalDictionary`2[System::
     Object,System::Object]::BidirectionalDictionary_2_System_Object_System_Object__TryGetByFirst
               (BidirectionalDictionary_2_System_Object_System_Object_ *this,Object *first,
               Object **second,MethodInfo *method)

{
  pIVar1 = (this->fields)._firstToSecond;
  if (pIVar1 != (IDictionary_2_System_Object_System_Object_ *)0x0) {
    pvVar2 = method->klass->rgctx_data[9].rgctxDataDummy;
    if ((*(byte *)((int)pvVar2 + 0xba) & 1) == 0) {
      pvVar2 = (void *)func_?(pvVar2);
    }
    bVar3 = func_?(7,pvVar2,pIVar1,first,second);
    return bVar3;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  bVar3 = (*pcVar4)();
  return bVar3;
}


/* Boolean TryGetBySecond(Object, Object ByRef) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Utilities::BidirectionalDictionary`2[System::
     Object,System::Object]::BidirectionalDictionary_2_System_Object_System_Object__TryGetBySecond
               (BidirectionalDictionary_2_System_Object_System_Object_ *this,Object *second,
               Object **first,MethodInfo *method)

{
  pIVar1 = (this->fields)._secondToFirst;
  if (pIVar1 != (IDictionary_2_System_Object_System_Object_ *)0x0) {
    pvVar2 = method->klass->rgctx_data[0xb].rgctxDataDummy;
    if ((*(byte *)((int)pvVar2 + 0xba) & 1) == 0) {
      pvVar2 = (void *)func_?(pvVar2);
    }
    bVar3 = func_?(7,pvVar2,pIVar1,second,first);
    return bVar3;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  bVar3 = (*pcVar4)();
  return bVar3;
}


/* BidirectionalDictionary`2[System.Object,System.Object]() */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::BidirectionalDictionary`2[System::
     Object,System::Object]::BidirectionalDictionary_2_System_Object_System_Object___ctor
               (BidirectionalDictionary_2_System_Object_System_Object_ *this,MethodInfo *method)

{
  uVar1 = (*method->klass->rgctx_data->method->virtualMethodPointer)
                    (method->klass->rgctx_data->rgctxDataDummy);
  uVar2 = (*(method->klass->rgctx_data[2].method)->virtualMethodPointer)
                    (method->klass->rgctx_data[2].rgctxDataDummy);
  (*(method->klass->rgctx_data[4].method)->virtualMethodPointer)
            (this,uVar1,uVar2,method->klass->rgctx_data[4].rgctxDataDummy);
  return;
}


/* BidirectionalDictionary`2[System.Object,System.Object](IEqualityComparer`1[System.Object],
   IEqualityComparer`1[System.Object]) */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::BidirectionalDictionary`2[System::
     Object,System::Object]::BidirectionalDictionary_2_System_Object_System_Object___ctor_1
               (BidirectionalDictionary_2_System_Object_System_Object_ *this,
               IEqualityComparer_1_System_Object_ *firstEqualityComparer,
               IEqualityComparer_1_System_Object_ *secondEqualityComparer,MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  pvVar1 = method->klass->rgctx_data[5].rgctxDataDummy;
  if ((*(byte *)((int)pvVar1 + 0xba) & 1) == 0) {
    pvVar1 = (void *)func_?(pvVar1);
  }
  pIVar2 = (IDictionary_2_System_Object_System_Object_ *)func_?(pvVar1);
  if (pIVar2 != (IDictionary_2_System_Object_System_Object_ *)0x0) {
    (*(method->klass->rgctx_data[6].method)->virtualMethodPointer)
              (pIVar2,firstEqualityComparer,method->klass->rgctx_data[6].rgctxDataDummy);
    (this->fields)._firstToSecond = pIVar2;
    func_?(&this->fields,pIVar2);
    pvVar1 = method->klass->rgctx_data[7].rgctxDataDummy;
    if ((*(byte *)((int)pvVar1 + 0xba) & 1) == 0) {
      pvVar1 = (void *)func_?(pvVar1);
    }
    pIVar2 = (IDictionary_2_System_Object_System_Object_ *)func_?(pvVar1);
    if (pIVar2 != (IDictionary_2_System_Object_System_Object_ *)0x0) {
      (*(method->klass->rgctx_data[8].method)->virtualMethodPointer)
                (pIVar2,secondEqualityComparer,method->klass->rgctx_data[8].rgctxDataDummy);
      (this->fields)._secondToFirst = pIVar2;
      func_?(&(this->fields)._secondToFirst,pIVar2);
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

