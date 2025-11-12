
/* MonoSingleton`1[System.Object]() */

void Assembly-CSharp.dll::RTG::MonoSingleton`1[System::Object]::
     MonoSingleton_1_System_Object___cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1 = FUN_?(TypeInfo__System__Object);
  pIVar2 = method->klass;
  if ((pIVar2->field_0x135 & 1) == 0) {
    pIVar2 = (Il2CppClass *)FUN_?(pIVar2);
  }
  pIVar2 = pIVar2->rgctx_data[2].klass;
  if ((pIVar2->field_0x135 & 1) == 0) {
    pIVar2 = (Il2CppClass *)FUN_?(pIVar2);
  }
  *(undefined8 *)pIVar2->static_fields = uVar1;
  pIVar2 = method->klass;
  if ((pIVar2->field_0x135 & 1) == 0) {
    pIVar2 = (Il2CppClass *)FUN_?(pIVar2);
  }
  pIVar2 = pIVar2->rgctx_data[2].klass;
  if ((pIVar2->field_0x135 & 1) == 0) {
    pIVar2 = (Il2CppClass *)FUN_?(pIVar2);
  }
  if (iRam_? != 0) {
    uVar3 = (uint)((ulonglong)pIVar2->static_fields >> 0xc);
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

Object * Assembly-CSharp.dll::RTG::MonoSingleton`1[System::Object]::
         MonoSingleton_1_System_Object__get_Get(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Application);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_MonoSingleton_T__Instance__Only_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1 = 0;
  pIVar2 = method->klass;
  if ((pIVar2->field_0x135 & 1) == 0) {
    pIVar2 = (Il2CppClass *)FUN_?(pIVar2);
  }
  pvVar3 = pIVar2->rgctx_data[2].rgctxDataDummy;
  if ((*(byte *)((longlong)pvVar3 + 0x135) & 1) == 0) {
    pvVar3 = (void *)FUN_?(pvVar3);
  }
  if (*(int *)((longlong)pvVar3 + 0xe4) == 0) {
    FUN_?(pvVar3);
  }
  pIVar2 = method->klass;
  if ((pIVar2->field_0x135 & 1) == 0) {
    pIVar2 = (Il2CppClass *)FUN_?(pIVar2);
  }
  pIVar2 = pIVar2->rgctx_data[2].klass;
  if ((pIVar2->field_0x135 & 1) == 0) {
    pIVar2 = (Il2CppClass *)FUN_?(pIVar2);
  }
  lVar4 = *(longlong *)((longlong)pIVar2->static_fields + 8);
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (lVar4 != 0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (*(longlong *)(lVar4 + 0x10) != 0) goto code_?;
  }
  pIVar2 = method->klass;
  if ((pIVar2->field_0x135 & 1) == 0) {
    pIVar2 = (Il2CppClass *)FUN_?(pIVar2);
  }
  pvVar3 = pIVar2->rgctx_data[2].rgctxDataDummy;
  if ((*(byte *)((longlong)pvVar3 + 0x135) & 1) == 0) {
    pvVar3 = (void *)FUN_?(pvVar3);
  }
  if (*(int *)((longlong)pvVar3 + 0xe4) == 0) {
    FUN_?(pvVar3);
  }
  pIVar2 = method->klass;
  if ((pIVar2->field_0x135 & 1) == 0) {
    pIVar2 = (Il2CppClass *)FUN_?(pIVar2);
  }
  pIVar2 = pIVar2->rgctx_data[2].klass;
  if ((pIVar2->field_0x135 & 1) == 0) {
    pIVar2 = (Il2CppClass *)FUN_?(pIVar2);
  }
  lVar4 = *(longlong *)pIVar2->static_fields;
  if (lVar4 == 0) goto code_?;
  cVar5 = FUN_?(lVar4,0xffffffff);
  pIVar2 = method->klass;
  if ((pIVar2->field_0x135 & 1) == 0) {
    pIVar2 = (Il2CppClass *)FUN_?(pIVar2);
  }
  pvVar3 = pIVar2->rgctx_data[3].rgctxDataDummy;
  if (*(int *)(lRam_? + 0xe4) == 0) {
    FUN_?();
  }
  if (pvVar3 != (void *)0x0) {
    if (*(int *)(lRam_? + 0xe4) == 0) {
      FUN_?();
    }
    lVar6 = FUN_?(pvVar3,1);
    uVar1 = FUN_?(lVar6 + 0x20);
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pcVar7 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
    uVar1 = func_?(&UNK_?);
    FUN_?(uVar1,0);
code_?:
    FUN_?();
code_?:
    uVar1 = FUN_?(&UNK_?);
    FUN_?(uVar1,0);
code_?:
    uVar1 = FUN_?(&UNK_?);
    FUN_?(uVar1,0);
code_?:
    uVar1 = FUN_?(&UNK_?);
    FUN_?(uVar1,0);
  }
  else {
    pcRam_? = pcVar7;
    uVar1 = (*pcRam_?)(uVar1,0);
    pIVar2 = method->klass;
    if ((pIVar2->field_0x135 & 1) == 0) {
      pIVar2 = (Il2CppClass *)FUN_?(pIVar2);
    }
    pvVar3 = pIVar2->rgctx_data[4].rgctxDataDummy;
    if ((*(byte *)((longlong)pvVar3 + 0x135) & 1) == 0) {
      pvVar3 = (void *)FUN_?(pvVar3);
    }
    lVar6 = FUN_?(uVar1,pvVar3);
    if (lVar6 != 0) {
      if (*(longlong *)(lVar6 + 0x18) != 0) {
        if (*(int *)(lVar6 + 0x18) < 2) {
          if (*(int *)(lVar6 + 0x18) == 0) goto code_?;
          uVar1 = *(undefined8 *)(lVar6 + 0x20);
          pIVar2 = method->klass;
          if ((pIVar2->field_0x135 & 1) == 0) {
            pIVar2 = (Il2CppClass *)FUN_?(pIVar2);
          }
          pvVar3 = pIVar2->rgctx_data[2].rgctxDataDummy;
          if ((*(byte *)((longlong)pvVar3 + 0x135) & 1) == 0) {
            pvVar3 = (void *)FUN_?(pvVar3);
          }
          if (*(int *)((longlong)pvVar3 + 0xe4) == 0) {
            FUN_?(pvVar3);
          }
          pIVar2 = method->klass;
          if ((pIVar2->field_0x135 & 1) == 0) {
            pIVar2 = (Il2CppClass *)FUN_?(pIVar2);
          }
          pIVar2 = pIVar2->rgctx_data[2].klass;
          if ((pIVar2->field_0x135 & 1) == 0) {
            pIVar2 = (Il2CppClass *)FUN_?(pIVar2);
          }
          *(undefined8 *)((longlong)pIVar2->static_fields + 8) = uVar1;
          pIVar2 = method->klass;
          if ((pIVar2->field_0x135 & 1) == 0) {
            pIVar2 = (Il2CppClass *)FUN_?(pIVar2);
          }
          pIVar2 = pIVar2->rgctx_data[2].klass;
          if ((pIVar2->field_0x135 & 1) == 0) {
            pIVar2 = (Il2CppClass *)FUN_?(pIVar2);
          }
          func_?((longlong)pIVar2->static_fields + 8);
          if (cVar5 == '\0') {
code_?:
            pIVar2 = method->klass;
            if ((pIVar2->field_0x135 & 1) == 0) {
              pIVar2 = (Il2CppClass *)FUN_?(pIVar2);
            }
            pvVar3 = pIVar2->rgctx_data[2].rgctxDataDummy;
            if ((*(byte *)((longlong)pvVar3 + 0x135) & 1) == 0) {
              pvVar3 = (void *)FUN_?(pvVar3);
            }
            if (*(int *)((longlong)pvVar3 + 0xe4) == 0) {
              FUN_?(pvVar3);
            }
            pIVar2 = method->klass;
            if ((pIVar2->field_0x135 & 1) == 0) {
              pIVar2 = (Il2CppClass *)FUN_?(pIVar2);
            }
            pIVar2 = pIVar2->rgctx_data[2].klass;
            if ((pIVar2->field_0x135 & 1) == 0) {
              pIVar2 = (Il2CppClass *)FUN_?(pIVar2);
            }
            return *(Object **)((longlong)pIVar2->static_fields + 8);
          }
          if (lVar4 != 0) {
            FUN_?();
            goto code_?;
          }
          goto code_?;
        }
        if (*(int *)&(TypeInfo__UnityEngine__Application->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (cVar5 == '\0') {
          return (Object *)0x0;
        }
        if (lVar4 != 0) {
          FUN_?();
          return (Object *)0x0;
        }
        goto code_?;
      }
      if (cVar5 == '\0') {
        return (Object *)0x0;
      }
      if (lVar4 != 0) {
        FUN_?();
        return (Object *)0x0;
      }
      goto code_?;
    }
  }
  FUN_?();
code_?:
  uVar1 = func_?(&TypeInfo__System__ArgumentNullException);
  this = (ArgumentNullException *)func_?(uVar1);
  paramName = (String *)func_?(&StringLiteral_obj);
  mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
            (this,paramName,(MethodInfo *)0x0);
  uVar1 = func_?(&
                              MethodInfo__System__Threading__Monitor__ReliableEnterTimeout_System__Object__int__System__Boolean__
                             );
  FUN_?(this,uVar1);
  mscorlib.dll::System::Threading::Monitor::Monitor_ThrowLockTakenException((MethodInfo *)0x0);
  FUN_?();
  pcVar7 = (code *)swi(3);
  pOVar8 = (Object *)(*pcVar7)();
  return pOVar8;
}

