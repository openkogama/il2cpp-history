
/* Void Initialize() */

void Assembly-CSharp.dll::GenericStrippingPreventionManager::
     GenericStrippingPreventionManager_Initialize(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&void_MethodInfo__Newtonsoft__Json__Utilities__AotHelper__EnsureList<int>__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Newtonsoft__Json__Utilities__AotHelper);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__MV__WorldObject__AntiCheat__RangeValidator<int>__RangeValidator__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__AntiCheat__RangeValidator<int>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__AntiCheat__ApplicationDesc__RegistryKey);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  plVar1 = (longlong *)FUN_?(TypeInfo__MV__WorldObject__AntiCheat__RangeValidator<int>);
  if (plVar1 == (longlong *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FUN_?(*plVar1 + 0x20);
  if (*(int *)&(TypeInfo__Newtonsoft__Json__Utilities__AotHelper->_1).field_0x1c == 0) {
    FUN_?();
  }
  Newtonsoft.Json.dll::Newtonsoft::Json::Utilities::AotHelper::AotHelper_EnsureList_1
            (void_MethodInfo__Newtonsoft__Json__Utilities__AotHelper__EnsureList<int>__);
  pIVar3 = (Il2CppClass *)TypeInfo__MV__WorldObject__AntiCheat__ApplicationDesc__RegistryKey;
  FUN_?();
  if (((((ApplicationDesc_RegistryKey__Class *)pIVar3)->_0).generic_class !=
       (Il2CppGenericClass *)0x0) &&
     (((((ApplicationDesc_RegistryKey__Class *)pIVar3)->_1).field_0x6d & 8) != 0)) {
    pIVar3 = (((ApplicationDesc_RegistryKey__Class *)pIVar3)->_0).element_class;
  }
  uVar4 = pIVar3->instance_size;
  if ((pIVar3->field_0x135 & 0x20) == 0) {
    puVar5 = (undefined8 *)FUN_?(uVar4);
    *puVar5 = pIVar3;
    puVar6 = puVar5 + 2;
    puVar5[1] = 0;
    if (pIVar3->instance_size < 0x80) {
      puVar7 = (undefined8 *)((longlong)puVar5 + (ulonglong)pIVar3->instance_size);
      uVar8 = (ulonglong)((longlong)puVar7 + (7 - (longlong)puVar6)) >> 3;
      if (puVar7 < puVar6) {
        uVar8 = 0;
      }
      if (uVar8 != 0) {
        FUN_?(puVar6,0,uVar8 << 3);
      }
    }
    else {
      FUN_?(puVar6,0,(ulonglong)pIVar3->instance_size - 0x10);
    }
  }
  else {
    if (pIVar3->gc_desc != (void *)0x0) {
      puVar5 = (undefined8 *)FUN_?(uVar4,pIVar3);
      goto code_?;
    }
    puVar5 = (undefined8 *)FUN_?(uVar4,1);
    *puVar5 = pIVar3;
  }
  LOCK();
  lRam_? = lRam_? + 1;
  UNLOCK();
code_?:
  if ((pIVar3->field_0x136 & 2) != 0) {
    FUN_?(puVar5,FUN_?);
  }
  if ((bRam_? & 0x80) != 0) {
    FUN_?(puVar5,pIVar3);
  }
  FUN_?(pIVar3);
  return;
}

