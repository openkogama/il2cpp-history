
/* Singleton`1[System.Object]() */

void Assembly-CSharp.dll::RTG::Singleton`1[System::Object]::Singleton_1_System_Object__1__cctor
               (MethodInfo *method)

{
  pIVar1 = method->klass;
  if ((pIVar1->field_0x135 & 1) == 0) {
    pIVar1 = (Il2CppClass *)FUN_?(pIVar1);
  }
  pOVar2 = mscorlib.dll::System::Activator::Activator_CreateInstance_24
                     (pIVar1->rgctx_data[3].method);
  pIVar1 = method->klass;
  if ((pIVar1->field_0x135 & 1) == 0) {
    pIVar1 = (Il2CppClass *)FUN_?(pIVar1);
  }
  pIVar1 = pIVar1->rgctx_data[2].klass;
  if ((pIVar1->field_0x135 & 1) == 0) {
    pIVar1 = (Il2CppClass *)FUN_?(pIVar1);
  }
  *(Object **)pIVar1->static_fields = pOVar2;
  pIVar1 = method->klass;
  if ((pIVar1->field_0x135 & 1) == 0) {
    pIVar1 = (Il2CppClass *)FUN_?(pIVar1);
  }
  pIVar1 = pIVar1->rgctx_data[2].klass;
  if ((pIVar1->field_0x135 & 1) == 0) {
    pIVar1 = (Il2CppClass *)FUN_?(pIVar1);
  }
  if (iRam_? != 0) {
    uVar3 = (uint)((ulonglong)pIVar1->static_fields >> 0xc);
    puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar5 = *puVar4;
      LOCK();
      uVar6 = *puVar4;
      if (uVar5 == uVar6) {
        *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (uVar5 != uVar6);
  }
  return;
}


/* Object get_Get() */

Object * Assembly-CSharp.dll::RTG::Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                   (MethodInfo *method)

{
  pIVar1 = method->klass;
  if ((pIVar1->field_0x135 & 1) == 0) {
    pIVar1 = (Il2CppClass *)FUN_?(pIVar1);
  }
  pvVar2 = pIVar1->rgctx_data[2].rgctxDataDummy;
  if ((*(byte *)((longlong)pvVar2 + 0x135) & 1) == 0) {
    pvVar2 = (void *)FUN_?(pvVar2);
  }
  if (*(int *)((longlong)pvVar2 + 0xe4) == 0) {
    FUN_?(pvVar2);
  }
  pIVar1 = method->klass;
  if ((pIVar1->field_0x135 & 1) == 0) {
    pIVar1 = (Il2CppClass *)FUN_?(pIVar1);
  }
  if (((pIVar1->rgctx_data[2].klass)->field_0x135 & 1) != 0) {
    return *(Object **)(pIVar1->rgctx_data[2].klass)->static_fields;
  }
  lVar3 = FUN_?();
  return (Object *)**(undefined8 **)(lVar3 + 0xb8);
}

