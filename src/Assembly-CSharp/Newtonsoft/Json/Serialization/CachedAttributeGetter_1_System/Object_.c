
/* Object GetAttribute(ICustomAttributeProvider) */

Object * Assembly-CSharp.dll::Newtonsoft::Json::Serialization::CachedAttributeGetter`1[System::
         Object]::CachedAttributeGetter_1_System_Object__GetAttribute
                   (ICustomAttributeProvider *type,MethodInfo *method)

{
  pIVar1 = method->klass;
  if (pIVar1->initialized_and_no_error == 0) {
    pIVar1 = (Il2CppClass *)func_?(pIVar1);
  }
  pIVar1 = pIVar1->rgctx_data->klass;
  if (pIVar1->initialized_and_no_error == 0) {
    pIVar1 = (Il2CppClass *)func_?(pIVar1);
  }
  if (pIVar1->cctor_finished_or_no_cctor == 0) {
    func_?(pIVar1);
  }
  pIVar1 = method->klass;
  if (pIVar1->initialized_and_no_error == 0) {
    pIVar1 = (Il2CppClass *)func_?(pIVar1);
  }
  pIVar1 = pIVar1->rgctx_data->klass;
  if (pIVar1->initialized_and_no_error == 0) {
    pIVar1 = (Il2CppClass *)func_?(pIVar1);
  }
  iVar2 = *(int *)pIVar1->static_fields;
  if (iVar2 != 0) {
    pIVar1 = method->klass;
    if (pIVar1->initialized_and_no_error == 0) {
      pIVar1 = (Il2CppClass *)func_?(pIVar1);
    }
    pIVar3 = (pIVar1->rgctx_data[2].method)->virtualMethodPointer;
    pIVar1 = method->klass;
    if (pIVar1->initialized_and_no_error == 0) {
      pIVar1 = (Il2CppClass *)func_?(pIVar1);
    }
    pOVar4 = (Object *)(*pIVar3)(iVar2,type,pIVar1->rgctx_data[2].rgctxDataDummy);
    return pOVar4;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  pOVar4 = (Object *)(*pcVar5)();
  return pOVar4;
}


/* CachedAttributeGetter`1[System.Object]() */

void Assembly-CSharp.dll::Newtonsoft::Json::Serialization::CachedAttributeGetter`1[System::Object]::
     CachedAttributeGetter_1_System_Object___cctor(MethodInfo *method)

{
  pIVar1 = method->klass;
  if (pIVar1->initialized_and_no_error == 0) {
    pIVar1 = (Il2CppClass *)func_?(pIVar1);
  }
  pvVar2 = pIVar1->rgctx_data[4].rgctxDataDummy;
  if ((*(byte *)((int)pvVar2 + 0xba) & 1) == 0) {
    pvVar2 = (void *)func_?(pvVar2);
  }
  iVar3 = func_?(pvVar2);
  if (iVar3 != 0) {
    pIVar1 = method->klass;
    if (pIVar1->initialized_and_no_error == 0) {
      pIVar1 = (Il2CppClass *)func_?(pIVar1);
    }
    pIVar4 = (pIVar1->rgctx_data[5].method)->virtualMethodPointer;
    pIVar1 = method->klass;
    if (pIVar1->initialized_and_no_error == 0) {
      pIVar1 = (Il2CppClass *)func_?(pIVar1);
    }
    pvVar2 = pIVar1->rgctx_data[5].rgctxDataDummy;
    pIVar1 = method->klass;
    if (pIVar1->initialized_and_no_error == 0) {
      pIVar1 = (Il2CppClass *)func_?(pIVar1);
    }
    (*pIVar4)(iVar3,0,pIVar1->rgctx_data[3].rgctxDataDummy,pvVar2);
    pIVar1 = method->klass;
    if (pIVar1->initialized_and_no_error == 0) {
      pIVar1 = (Il2CppClass *)func_?(pIVar1);
    }
    pvVar2 = pIVar1->rgctx_data[1].rgctxDataDummy;
    if ((*(byte *)((int)pvVar2 + 0xba) & 1) == 0) {
      pvVar2 = (void *)func_?(pvVar2);
    }
    iVar5 = func_?(pvVar2);
    if (iVar5 != 0) {
      pIVar1 = method->klass;
      if (pIVar1->initialized_and_no_error == 0) {
        pIVar1 = (Il2CppClass *)func_?(pIVar1);
      }
      pIVar4 = (pIVar1->rgctx_data[6].method)->virtualMethodPointer;
      pIVar1 = method->klass;
      if (pIVar1->initialized_and_no_error == 0) {
        pIVar1 = (Il2CppClass *)func_?(pIVar1);
      }
      (*pIVar4)(iVar5,iVar3,pIVar1->rgctx_data[6].rgctxDataDummy);
      pIVar1 = method->klass;
      if (pIVar1->initialized_and_no_error == 0) {
        pIVar1 = (Il2CppClass *)func_?(pIVar1);
      }
      pIVar1 = pIVar1->rgctx_data->klass;
      if (pIVar1->initialized_and_no_error == 0) {
        pIVar1 = (Il2CppClass *)func_?(pIVar1);
      }
      *(int *)pIVar1->static_fields = iVar5;
      pIVar1 = method->klass;
      if (pIVar1->initialized_and_no_error == 0) {
        pIVar1 = (Il2CppClass *)func_?(pIVar1);
      }
      pIVar1 = pIVar1->rgctx_data->klass;
      if (pIVar1->initialized_and_no_error == 0) {
        pIVar1 = (Il2CppClass *)func_?(pIVar1);
      }
      func_?(pIVar1->static_fields,iVar5);
      return;
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

