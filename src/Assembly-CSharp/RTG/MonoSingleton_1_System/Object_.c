
/* MonoSingleton`1[System.Object]() */

void Assembly-CSharp.dll::RTG::MonoSingleton`1[System::Object]::
     MonoSingleton_1_System_Object___cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Object);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__System__Object;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  pIVar1 = method->klass;
  if (((uint)pIVar1->vtable[0].methodPtr & 0x100) == 0) {
    pIVar1 = (Il2CppClass *)func_?(pIVar1);
  }
  pIVar1 = pIVar1->rgctx_data[2].klass;
  if (((uint)pIVar1->vtable[0].methodPtr & 0x100) == 0) {
    pIVar1 = (Il2CppClass *)func_?(pIVar1);
  }
  *(Object **)pIVar1->static_fields = value;
  pIVar1 = method->klass;
  if (((uint)pIVar1->vtable[0].methodPtr & 0x100) == 0) {
    pIVar1 = (Il2CppClass *)func_?(pIVar1);
  }
  pIVar1 = pIVar1->rgctx_data[2].klass;
  if (((uint)pIVar1->vtable[0].methodPtr & 0x100) == 0) {
    pIVar1 = (Il2CppClass *)func_?(pIVar1);
  }
  func_?(pIVar1->static_fields,value);
  return;
}


/* Object get_Get() */

Object * Assembly-CSharp.dll::RTG::MonoSingleton`1[System::Object]::
         MonoSingleton_1_System_Object__get_Get(MethodInfo *method)

{
  method_00 = (MethodInfo *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &stack0xfffffff0;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Application);
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__System__Type);
    func_?(&StringLiteral_MonoSingleton_T__Instance__Only_);
    cRam_? = '\x01';
  }
  pIVar1 = method->klass;
  if (((uint)pIVar1->vtable[0].methodPtr & 0x100) == 0) {
    pIVar1 = (Il2CppClass *)func_?(pIVar1);
  }
  pIVar1 = pIVar1->rgctx_data[2].klass;
  if (((uint)pIVar1->vtable[0].methodPtr & 0x100) == 0) {
    pIVar1 = (Il2CppClass *)func_?(pIVar1);
  }
  if (pIVar1->cctor_finished_or_no_cctor == 0) {
    func_?(pIVar1);
  }
  pIVar1 = method->klass;
  if (((uint)pIVar1->vtable[0].methodPtr & 0x100) == 0) {
    pIVar1 = (Il2CppClass *)func_?(pIVar1);
  }
  pIVar1 = pIVar1->rgctx_data[2].klass;
  if (((uint)pIVar1->vtable[0].methodPtr & 0x100) == 0) {
    pIVar1 = (Il2CppClass *)func_?(pIVar1);
  }
  x = *(Object_1 **)((int)pIVar1->static_fields + 4);
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    (x,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 == 0) {
code_?:
    pIVar1 = method->klass;
    if (((uint)pIVar1->vtable[0].methodPtr & 0x100) == 0) {
      pIVar1 = (Il2CppClass *)func_?();
    }
    pIVar1 = pIVar1->rgctx_data[2].klass;
    if (((uint)pIVar1->vtable[0].methodPtr & 0x100) == 0) {
      pIVar1 = (Il2CppClass *)func_?();
    }
    if (pIVar1->cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pIVar1 = method->klass;
    if (((uint)pIVar1->vtable[0].methodPtr & 0x100) == 0) {
      pIVar1 = (Il2CppClass *)func_?();
    }
    pIVar1 = pIVar1->rgctx_data[2].klass;
    if (((uint)pIVar1->vtable[0].methodPtr & 0x100) == 0) {
      pIVar1 = (Il2CppClass *)func_?();
    }
    pOVar3 = *(Object **)((int)pIVar1->static_fields + 4);
    *unaff_FS_OFFSET = method_00;
    return pOVar3;
  }
  pIVar1 = method->klass;
  if (((uint)pIVar1->vtable[0].methodPtr & 0x100) == 0) {
    pIVar1 = (Il2CppClass *)func_?();
  }
  pIVar1 = pIVar1->rgctx_data[2].klass;
  if (((uint)pIVar1->vtable[0].methodPtr & 0x100) == 0) {
    pIVar1 = (Il2CppClass *)func_?();
  }
  if (pIVar1->cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  pIVar1 = method->klass;
  if (((uint)pIVar1->vtable[0].methodPtr & 0x100) == 0) {
    pIVar1 = (Il2CppClass *)func_?();
  }
  pIVar1 = pIVar1->rgctx_data[2].klass;
  if (((uint)pIVar1->vtable[0].methodPtr & 0x100) == 0) {
    pIVar1 = (Il2CppClass *)func_?();
  }
  mscorlib.dll::System::Threading::Monitor::Monitor_1_Enter_1
            (*(Object **)pIVar1->static_fields,&stack0xffffffeb,(MethodInfo *)0x0);
  pIVar1 = method->klass;
  if (((uint)pIVar1->vtable[0].methodPtr & 0x100) == 0) {
    pIVar1 = (Il2CppClass *)func_?();
  }
  handle = pIVar1->rgctx_data[3];
  if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  type = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                   ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  pOVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_FindObjectsOfType
                     (type,(MethodInfo *)0x0);
  bVar2 = (bool)((uint)pOVar4 >> 0x18);
  pIVar1 = method->klass;
  if (((uint)pIVar1->vtable[0].methodPtr & 0x100) == 0) {
    pIVar1 = (Il2CppClass *)func_?();
  }
  if (((uint)(pIVar1->rgctx_data[4].klass)->vtable[0].methodPtr & 0x100) == 0) {
    func_?();
  }
  pOVar3 = (Object *)&UNK_?;
  iVar5 = func_?();
  if (iVar5 == 0) {
code_?:
    func_?();
    func_?();
    pcVar6 = (code *)swi(3);
    pOVar3 = (Object *)(*pcVar6)();
    return pOVar3;
  }
  iVar7 = *(int *)(iVar5 + 0xc);
  if (iVar7 != 0) {
    if (iVar7 < 2) {
      if (iVar7 != 0) {
        uVar8 = *(undefined4 *)(iVar5 + 0x10);
        pIVar1 = method->klass;
        if (((uint)pIVar1->vtable[0].methodPtr & 0x100) == 0) {
          pIVar1 = (Il2CppClass *)func_?();
        }
        pIVar1 = pIVar1->rgctx_data[2].klass;
        if (((uint)pIVar1->vtable[0].methodPtr & 0x100) == 0) {
          pIVar1 = (Il2CppClass *)func_?();
        }
        if (pIVar1->cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pIVar1 = method->klass;
        if (((uint)pIVar1->vtable[0].methodPtr & 0x100) == 0) {
          pIVar1 = (Il2CppClass *)func_?();
        }
        pIVar1 = pIVar1->rgctx_data[2].klass;
        if (((uint)pIVar1->vtable[0].methodPtr & 0x100) == 0) {
          pIVar1 = (Il2CppClass *)func_?();
        }
        *(undefined4 *)((int)pIVar1->static_fields + 4) = uVar8;
        pIVar1 = method->klass;
        if (((uint)pIVar1->vtable[0].methodPtr & 0x100) == 0) {
          pIVar1 = (Il2CppClass *)func_?();
        }
        pIVar1 = pIVar1->rgctx_data[2].klass;
        if (((uint)pIVar1->vtable[0].methodPtr & 0x100) == 0) {
          pIVar1 = (Il2CppClass *)func_?();
        }
        bVar2 = (bool)((uint)((int)pIVar1->static_fields + 4) >> 0x18);
        pOVar3 = (Object *)&UNK_?;
        func_?();
        if (bVar2 != 0) {
          mscorlib.dll::System::Threading::Monitor::Monitor_1_Exit(pOVar3,(MethodInfo *)0x0);
        }
        goto code_?;
      }
      func_?();
      goto code_?;
    }
    if ((TypeInfo__UnityEngine__Application->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    bVar2 = 0x10;
    bVar9 = System.dll::System::Collections::Generic::SortedList`2[TKey,TValue]+ValueList[Unity::
            IL2CPP::Metadata::__Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::
            __Il2CppFullySharedGenericType]::
            SortedList_2_TKey_TValue_ValueList_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__System_Collections_ICollection_get_IsSynchronized
                      ((SortedList_2_TKey_TValue_ValueList_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                        *)0x0,method_00);
    if (bVar9 != 0) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        method_00 = (MethodInfo *)&UNK_?;
        func_?();
      }
      pOVar3 = (Object *)0x0;
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                ((Object *)StringLiteral_MonoSingleton_T__Instance__Only_,(MethodInfo *)0x0);
    }
  }
  if (bVar2 != 0) {
    mscorlib.dll::System::Threading::Monitor::Monitor_1_Exit(pOVar3,(MethodInfo *)0x0);
  }
  *unaff_FS_OFFSET = method_00;
  return (Object *)0x0;
}

