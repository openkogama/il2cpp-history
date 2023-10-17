
/* Singleton`1[System.Object]() */

void Assembly-CSharp.dll::Borodar::FarlandSkies::CloudyCrownPro::Helpers::Singleton`1[System::
     Object]::Singleton_1_System_Object___ctor(Singleton_1_System_Object_ *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}


/* Object get_Instance() */

Object * Assembly-CSharp.dll::Borodar::FarlandSkies::CloudyCrownPro::Helpers::Singleton`1[System::
         Object]::Singleton_1_System_Object__get_Instance(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__System__Type);
    func_?(&StringLiteral___There_is_more_than_1_instance_);
    func_?(&StringLiteral___Instance_doesn_t_exist_in_the_);
    cRam_? = '\x01';
  }
  pIVar1 = method->klass;
  if (pIVar1->initialized_and_no_error == 0) {
    pIVar1 = (Il2CppClass *)func_?(pIVar1);
  }
  pIVar1 = pIVar1->rgctx_data->klass;
  if (pIVar1->initialized_and_no_error == 0) {
    pIVar1 = (Il2CppClass *)func_?(pIVar1);
  }
  x = *(Object_1 **)pIVar1->static_fields;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    (x,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pIVar1 = method->klass;
    if (pIVar1->initialized_and_no_error == 0) {
      pIVar1 = (Il2CppClass *)func_?(pIVar1);
    }
    pIVar3 = (pIVar1->rgctx_data[2].method)->virtualMethodPointer;
    pIVar1 = method->klass;
    if (pIVar1->initialized_and_no_error == 0) {
      pIVar1 = (Il2CppClass *)func_?(pIVar1);
    }
    iVar4 = (*pIVar3)(pIVar1->rgctx_data[2].rgctxDataDummy);
    if (iVar4 == 0) {
      func_?();
code_?:
      func_?();
      pcVar5 = (code *)swi(3);
      pOVar6 = (Object *)(*pcVar5)();
      return pOVar6;
    }
    if (*(int *)(iVar4 + 0xc) == 1) {
      if (*(int *)(iVar4 + 0xc) == 0) goto code_?;
      pIVar1 = method->klass;
      uVar7 = *(undefined4 *)(iVar4 + 0x10);
      if (pIVar1->initialized_and_no_error == 0) {
        pIVar1 = (Il2CppClass *)func_?(pIVar1);
      }
      pIVar1 = pIVar1->rgctx_data->klass;
      if (pIVar1->initialized_and_no_error == 0) {
        pIVar1 = (Il2CppClass *)func_?(pIVar1);
      }
      *(undefined4 *)pIVar1->static_fields = uVar7;
      pIVar1 = method->klass;
      if (pIVar1->initialized_and_no_error == 0) {
        pIVar1 = (Il2CppClass *)func_?(pIVar1);
      }
      pIVar1 = pIVar1->rgctx_data->klass;
      if (pIVar1->initialized_and_no_error == 0) {
        pIVar1 = (Il2CppClass *)func_?(pIVar1);
      }
      func_?(pIVar1->static_fields,uVar7);
    }
    else {
      pIVar1 = method->klass;
      if (*(int *)(iVar4 + 0xc) < 2) {
        if (pIVar1->initialized_and_no_error == 0) {
          pIVar1 = (Il2CppClass *)func_?(pIVar1);
        }
        IVar8 = pIVar1->rgctx_data[3];
        if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__System__Type);
        }
        pTVar9 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                           ((RuntimeTypeHandle)IVar8,(MethodInfo *)0x0);
        if (pTVar9 == (Type *)0x0) {
          str0 = (String *)0x0;
          pSVar10 = StringLiteral___Instance_doesn_t_exist_in_the_;
        }
        else {
          str0 = (String *)
                 (*(pTVar9->klass->vtable).ToString.methodPtr)
                           (pTVar9,(pTVar9->klass->vtable).ToString.method);
          pSVar10 = StringLiteral___Instance_doesn_t_exist_in_the_;
        }
      }
      else {
        if (pIVar1->initialized_and_no_error == 0) {
          pIVar1 = (Il2CppClass *)func_?(pIVar1);
        }
        IVar8 = pIVar1->rgctx_data[3];
        if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__System__Type);
        }
        pTVar9 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                           ((RuntimeTypeHandle)IVar8,(MethodInfo *)0x0);
        if (pTVar9 == (Type *)0x0) {
          str0 = (String *)0x0;
          pSVar10 = StringLiteral___There_is_more_than_1_instance_;
        }
        else {
          str0 = (String *)
                 (*(pTVar9->klass->vtable).ToString.methodPtr)
                           (pTVar9,(pTVar9->klass->vtable).ToString.method);
          pSVar10 = StringLiteral___There_is_more_than_1_instance_;
        }
      }
      pSVar10 = mscorlib.dll::System::String::String_Concat_3(str0,pSVar10,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)pSVar10,(MethodInfo *)0x0);
    }
  }
  pIVar1 = method->klass;
  if (pIVar1->initialized_and_no_error == 0) {
    pIVar1 = (Il2CppClass *)func_?();
  }
  pIVar1 = pIVar1->rgctx_data->klass;
  if (pIVar1->initialized_and_no_error == 0) {
    pIVar1 = (Il2CppClass *)func_?();
  }
  return *(Object **)pIVar1->static_fields;
}

