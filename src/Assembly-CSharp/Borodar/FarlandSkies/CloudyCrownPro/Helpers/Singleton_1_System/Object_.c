
/* Singleton`1[System.Object]() */

void Assembly-CSharp.dll::Borodar::FarlandSkies::CloudyCrownPro::Helpers::Singleton`1[System::
     Object]::Singleton_1_System_Object___ctor(Singleton_1_System_Object_ *this,MethodInfo *method)

{
  if (this != (Singleton_1_System_Object_ *)0x0) {
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Object get_Instance() */

Object * Assembly-CSharp.dll::Borodar::FarlandSkies::CloudyCrownPro::Helpers::Singleton`1[System::
         Object]::Singleton_1_System_Object__get_Instance(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pcVar1 = method->name;
  if ((pcVar1[0xbe] & 1U) == 0) {
    func_?(pcVar1);
  }
  iVar2 = **(int **)(pcVar1 + 0x60);
  if ((*(byte *)(iVar2 + 0xbe) & 1) == 0) {
    func_?(iVar2);
  }
  x = (Object_1 *)**(undefined4 **)(iVar2 + 0x5c);
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    (x,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar3 != 0) {
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pcVar1 = method->name;
    pcVar4 = pcVar1;
    if ((pcVar1[0xbe] & 1U) == 0) {
      func_?(pcVar1);
      pcVar4 = method->name;
    }
    if ((pcVar4[0xbe] & 1U) == 0) {
      func_?(pcVar4);
    }
    iVar2 = (*(code *)**(undefined4 **)(*(int *)(pcVar4 + 0x60) + 8))
                      (*(undefined4 *)(*(int *)(pcVar1 + 0x60) + 8));
    if (iVar2 == 0) {
      func_?(0);
      pcVar5 = (code *)swi(3);
      pOVar6 = (Object *)(*pcVar5)();
      return pOVar6;
    }
    pcVar1 = method->name;
    if (*(int *)(iVar2 + 0xc) == 1) {
      uVar7 = *(undefined4 *)(iVar2 + 0x10);
      if ((pcVar1[0xbe] & 1U) == 0) {
        func_?(pcVar1);
      }
      iVar2 = **(int **)(pcVar1 + 0x60);
      if ((*(byte *)(iVar2 + 0xbe) & 1) == 0) {
        func_?(iVar2);
      }
      **(undefined4 **)(iVar2 + 0x5c) = uVar7;
    }
    else {
      if (*(int *)(iVar2 + 0xc) < 2) {
        if ((pcVar1[0xbe] & 1U) == 0) {
          func_?(pcVar1);
        }
        RVar8.value = *(void **)(*(int *)(pcVar1 + 0x60) + 0xc);
        if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__Type->_1).cctor_started == 0)) {
          func_?(TypeInfo__System__Type);
        }
        arg0 = mscorlib.dll::System::Type::Type_GetTypeFromHandle(RVar8,(MethodInfo *)0x0);
        pSVar9 = StringLiteral___Instance_doesn_t_exist_in_the_;
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          func_?();
          pSVar9 = StringLiteral___Instance_doesn_t_exist_in_the_;
        }
      }
      else {
        if ((pcVar1[0xbe] & 1U) == 0) {
          func_?(pcVar1);
        }
        RVar8.value = *(void **)(*(int *)(pcVar1 + 0x60) + 0xc);
        if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__Type->_1).cctor_started == 0)) {
          func_?(TypeInfo__System__Type);
        }
        arg0 = mscorlib.dll::System::Type::Type_GetTypeFromHandle(RVar8,(MethodInfo *)0x0);
        pSVar9 = StringLiteral___There_is_more_than_1_instance_;
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          func_?();
          pSVar9 = StringLiteral___There_is_more_than_1_instance_;
        }
      }
      pSVar9 = mscorlib.dll::System::String::String_Concat
                         ((Object *)arg0,(Object *)pSVar9,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)pSVar9,(MethodInfo *)0x0);
    }
  }
  pcVar1 = method->name;
  if ((pcVar1[0xbe] & 1U) == 0) {
    func_?(pcVar1);
  }
  iVar2 = **(int **)(pcVar1 + 0x60);
  if ((*(byte *)(iVar2 + 0xbe) & 1) == 0) {
    func_?(iVar2);
  }
  return (Object *)**(undefined4 **)(iVar2 + 0x5c);
}

