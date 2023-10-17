
/* Boolean Equals(Object) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Linq::JEnumerable`1[System::Object]::
     JEnumerable_1_System_Object__Equals
               (JEnumerable_1_System_Object_ *this,Object *obj,MethodInfo *method)

{
  pIVar1 = method->klass;
  if (pIVar1->initialized_and_no_error == 0) {
    pIVar1 = (Il2CppClass *)func_?(pIVar1);
  }
  pOVar2 = pIVar1->rgctx_data[4].rgctxDataDummy;
  if ((pOVar2->_1).initialized_and_no_error == 0) {
    pOVar2 = (Object__Class *)func_?(pOVar2);
  }
  if (obj != (Object *)0x0) {
    pOVar3 = (Object *)0x0;
    if (obj->klass == pOVar2) {
      pOVar3 = obj;
    }
    if (pOVar3 != (Object *)0x0) {
      pIVar4 = this->_enumerable;
      pIVar1 = method->klass;
      if (pIVar1->initialized_and_no_error == 0) {
        pIVar1 = (Il2CppClass *)func_?(pIVar1);
      }
      pIVar1 = pIVar1->rgctx_data[4].klass;
      if (pIVar1->initialized_and_no_error == 0) {
        pIVar1 = (Il2CppClass *)func_?(pIVar1);
      }
      if ((obj->klass->_0).element_class == pIVar1->element_class) {
        puVar5 = (undefined4 *)func_?(obj);
        if (pIVar4 != (IEnumerable_1_System_Object_ *)0x0) {
          bVar6 = (*(pIVar4->klass->vtable).GetEnumerator.methodPtr)
                            (pIVar4,*puVar5,(pIVar4->klass->vtable).GetEnumerator.method);
          return bVar6;
        }
        pIVar1 = (Il2CppClass *)func_?();
      }
      func_?(obj,pIVar1);
      pcVar7 = (code *)swi(3);
      bVar6 = (*pcVar7)();
      return bVar6;
    }
  }
  return 0;
}


/* IEnumerator`1[System.Object] GetEnumerator() */

IEnumerator_1_System_Object_ *
Assembly-CSharp.dll::Newtonsoft::Json::Linq::JEnumerable`1[System::Object]::
JEnumerable_1_System_Object__GetEnumerator(JEnumerable_1_System_Object_ *this,MethodInfo *method)

{
  pIVar1 = this->_enumerable;
  if (pIVar1 != (IEnumerable_1_System_Object_ *)0x0) {
    pIVar2 = method->klass;
    if (pIVar2->initialized_and_no_error == 0) {
      pIVar2 = (Il2CppClass *)func_?(pIVar2);
    }
    pvVar3 = pIVar2->rgctx_data->rgctxDataDummy;
    if ((*(byte *)((int)pvVar3 + 0xba) & 1) == 0) {
      pvVar3 = (void *)func_?(pvVar3);
    }
    pIVar4 = (IEnumerator_1_System_Object_ *)func_?(0,pvVar3,pIVar1);
    return pIVar4;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  pIVar4 = (IEnumerator_1_System_Object_ *)(*pcVar5)();
  return pIVar4;
}


/* Int32 GetHashCode() */

int32_t Assembly-CSharp.dll::Newtonsoft::Json::Linq::JEnumerable`1[System::Object]::
        JEnumerable_1_System_Object__GetHashCode
                  (JEnumerable_1_System_Object_ *this,MethodInfo *method)

{
  pcStack_1 = &stack0xfffffffc;
  pIStack_2 = this->_enumerable;
  if (pIStack_2 != (IEnumerable_1_System_Object_ *)0x0) {
    pcStack_1 = pIStack_2->klass[1]._0.namespaze;
    iVar3 = (*(code *)pIStack_2->klass[1]._0.name)();
    return iVar3;
  }
  uVar4 = func_?(&puStack_5);
  func_?(uVar4);
  pcVar6 = (code *)swi(3);
  iVar3 = (*pcVar6)();
  return iVar3;
}


/* IEnumerator System.Collections.IEnumerable.GetEnumerator() */

IEnumerator *
Assembly-CSharp.dll::Newtonsoft::Json::Linq::JEnumerable`1[System::Object]::
JEnumerable_1_System_Object__System_Collections_IEnumerable_GetEnumerator
          (JEnumerable_1_System_Object_ *this,MethodInfo *method)

{
  pIVar1 = method->klass;
  if (pIVar1->initialized_and_no_error == 0) {
    pIVar1 = (Il2CppClass *)func_?(pIVar1);
  }
  pIVar2 = this->_enumerable;
  if (pIVar2 != (IEnumerable_1_System_Object_ *)0x0) {
    pIVar1 = (pIVar1->rgctx_data[2].method)->klass;
    if (pIVar1->initialized_and_no_error == 0) {
      pIVar1 = (Il2CppClass *)func_?(pIVar1);
    }
    pvVar3 = pIVar1->rgctx_data->rgctxDataDummy;
    if ((*(byte *)((int)pvVar3 + 0xba) & 1) == 0) {
      pvVar3 = (void *)func_?(pvVar3);
    }
    pIVar4 = (IEnumerator *)func_?(0,pvVar3,pIVar2);
    return pIVar4;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  pIVar4 = (IEnumerator *)(*pcVar5)();
  return pIVar4;
}


/* JEnumerable`1[System.Object]() */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JEnumerable`1[System::Object]::
     JEnumerable_1_System_Object___cctor(MethodInfo *method)

{
  pMVar1 = method;
  pIVar2 = method->klass;
  if (pIVar2->initialized_and_no_error == 0) {
    pIVar2 = (Il2CppClass *)func_?(pIVar2);
  }
  pIVar3 = (pIVar2->rgctx_data[5].method)->virtualMethodPointer;
  pIVar2 = pMVar1->klass;
  if (pIVar2->initialized_and_no_error == 0) {
    pIVar2 = (Il2CppClass *)func_?(pIVar2);
  }
  pMVar4 = (MethodInfo *)(*pIVar3)(pIVar2->rgctx_data[5].rgctxDataDummy);
  if (pMVar1->klass->initialized_and_no_error == 0) {
    func_?(pMVar1->klass);
  }
  if (cRam_? == '\0') {
    func_?(&StringLiteral_enumerable);
    cRam_? = '\x01';
  }
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            ((Object *)pMVar4,StringLiteral_enumerable,(MethodInfo *)0x0);
  method = pMVar4;
  func_?(&method,pMVar4);
  pMVar4 = method;
  pIVar2 = pMVar1->klass;
  if (pIVar2->initialized_and_no_error == 0) {
    pIVar2 = (Il2CppClass *)func_?(pIVar2);
  }
  pIVar2 = pIVar2->rgctx_data[7].klass;
  if (pIVar2->initialized_and_no_error == 0) {
    pIVar2 = (Il2CppClass *)func_?(pIVar2);
  }
  *(MethodInfo **)pIVar2->static_fields = pMVar4;
  method = (MethodInfo *)pMVar1->klass;
  if (method->initialized_and_no_error == 0) {
    method = (MethodInfo *)func_?();
  }
  method = ((Il2CppClass *)method)->rgctx_data[7].method;
  if ((method[3].iflags & 1) == 0) {
    func_?();
  }
  method = (MethodInfo *)0x0;
  func_?();
  return;
}


/* JEnumerable`1[System.Object](IEnumerable`1[System.Object]) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JEnumerable`1[System::Object]::
     JEnumerable_1_System_Object___ctor
               (JEnumerable_1_System_Object_ *this,IEnumerable_1_System_Object_ *enumerable,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_enumerable);
    cRam_? = '\x01';
  }
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            ((Object *)enumerable,StringLiteral_enumerable,(MethodInfo *)0x0);
  this->_enumerable = enumerable;
  func_?(this,enumerable);
  return;
}


/* IJEnumerable`1[JToken] get_Item(Object) */

IJEnumerable_1_JToken_ *
Assembly-CSharp.dll::Newtonsoft::Json::Linq::JEnumerable`1[System::Object]::
JEnumerable_1_System_Object__get_Item
          (JEnumerable_1_System_Object_ *this,Object *key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__Newtonsoft__Json__Linq__JEnumerable<Newtonsoft::Json::Linq::JToken>__JEnumerable_System__Collections__Generic__IEnumerable<Newtonsoft::Json::Linq::JToken>_
                   );
    func_?(&TypeInfo__Newtonsoft__Json__Linq__JEnumerable<Newtonsoft::Json::Linq::JToken>);
    cRam_? = '\x01';
  }
  pMVar1 = method;
  pIVar2 = this->_enumerable;
  pIVar3 = method->klass;
  if (pIVar3->initialized_and_no_error == 0) {
    pIVar3 = (Il2CppClass *)func_?(pIVar3);
  }
  pIVar4 = (pIVar3->rgctx_data[3].method)->virtualMethodPointer;
  pIVar3 = pMVar1->klass;
  if (pIVar3->initialized_and_no_error == 0) {
    pIVar3 = (Il2CppClass *)func_?(pIVar3);
  }
  value = (Object *)(*pIVar4)(pIVar2,key,pIVar3->rgctx_data[3].rgctxDataDummy);
  if (cRam_? == '\0') {
    func_?(&StringLiteral_enumerable);
    cRam_? = '\x01';
  }
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            (value,StringLiteral_enumerable,(MethodInfo *)0x0);
  this = (JEnumerable_1_System_Object_ *)value;
  func_?(&this,value);
  method = (MethodInfo *)this;
  pIVar5 = (IJEnumerable_1_JToken_ *)
           func_?(TypeInfo__Newtonsoft__Json__Linq__JEnumerable<Newtonsoft::Json::Linq::JToken>
                           ,&method);
  return pIVar5;
}

