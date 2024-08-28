
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
  if (((uint)pIVar1->vtable[0].methodPtr & 0x100) == 0) {
    pIVar1 = (Il2CppClass *)func_?(pIVar1);
  }
  pIVar1 = pIVar1->rgctx_data[2].klass;
  if (((uint)pIVar1->vtable[0].methodPtr & 0x100) == 0) {
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
    if (((uint)pIVar1->vtable[0].methodPtr & 0x100) == 0) {
      pIVar1 = (Il2CppClass *)func_?(pIVar1);
    }
    pOVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_FindObjectsOfType_1
                       (pIVar1->rgctx_data[3].method);
    if (pOVar3 == (Object__Array *)0x0) {
      func_?();
      pcVar4 = (code *)swi(3);
      pOVar5 = (Object *)(*pcVar4)();
      return pOVar5;
    }
    if (pOVar3->max_length == 1) {
      pOVar5 = pOVar3->vector[0];
      pIVar1 = method->klass;
      if (((uint)pIVar1->vtable[0].methodPtr & 0x100) == 0) {
        pIVar1 = (Il2CppClass *)func_?(pIVar1);
      }
      pIVar1 = pIVar1->rgctx_data[2].klass;
      if (((uint)pIVar1->vtable[0].methodPtr & 0x100) == 0) {
        pIVar1 = (Il2CppClass *)func_?(pIVar1);
      }
      *(Object **)pIVar1->static_fields = pOVar5;
      pIVar1 = method->klass;
      if (((uint)pIVar1->vtable[0].methodPtr & 0x100) == 0) {
        pIVar1 = (Il2CppClass *)func_?(pIVar1);
      }
      pIVar1 = pIVar1->rgctx_data[2].klass;
      if (((uint)pIVar1->vtable[0].methodPtr & 0x100) == 0) {
        pIVar1 = (Il2CppClass *)func_?(pIVar1);
      }
      func_?(pIVar1->static_fields,pOVar5);
    }
    else {
      pIVar1 = method->klass;
      if ((int)pOVar3->max_length < 2) {
        if (((uint)pIVar1->vtable[0].methodPtr & 0x100) == 0) {
          pIVar1 = (Il2CppClass *)func_?(pIVar1);
        }
        IVar6 = pIVar1->rgctx_data[5];
        if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__System__Type);
        }
        pTVar7 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                           ((RuntimeTypeHandle)IVar6,(MethodInfo *)0x0);
        if (pTVar7 == (Type *)0x0) {
          str0 = (String *)0x0;
          pSVar8 = StringLiteral___Instance_doesn_t_exist_in_the_;
        }
        else {
          str0 = (String *)
                 (*(code *)(pTVar7->klass->vtable).ToString.method)
                           (pTVar7,(pTVar7->klass->vtable).GetCustomAttributes.methodPtr);
          pSVar8 = StringLiteral___Instance_doesn_t_exist_in_the_;
        }
      }
      else {
        if (((uint)pIVar1->vtable[0].methodPtr & 0x100) == 0) {
          pIVar1 = (Il2CppClass *)func_?(pIVar1);
        }
        IVar6 = pIVar1->rgctx_data[5];
        if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__System__Type);
        }
        pTVar7 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                           ((RuntimeTypeHandle)IVar6,(MethodInfo *)0x0);
        if (pTVar7 == (Type *)0x0) {
          str0 = (String *)0x0;
          pSVar8 = StringLiteral___There_is_more_than_1_instance_;
        }
        else {
          str0 = (String *)
                 (*(code *)(pTVar7->klass->vtable).ToString.method)
                           (pTVar7,(pTVar7->klass->vtable).GetCustomAttributes.methodPtr);
          pSVar8 = StringLiteral___There_is_more_than_1_instance_;
        }
      }
      pSVar8 = mscorlib.dll::System::String::String_Concat_3(str0,pSVar8,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)pSVar8,(MethodInfo *)0x0);
    }
  }
  pIVar1 = method->klass;
  if (((uint)pIVar1->vtable[0].methodPtr & 0x100) == 0) {
    pIVar1 = (Il2CppClass *)func_?();
  }
  pIVar1 = pIVar1->rgctx_data[2].klass;
  if (((uint)pIVar1->vtable[0].methodPtr & 0x100) == 0) {
    pIVar1 = (Il2CppClass *)func_?();
  }
  return *(Object **)pIVar1->static_fields;
}

