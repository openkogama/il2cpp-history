
/* Boolean
   <RemoveNullKeys>b__14_0(KeyValuePair`2[Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType])
    */

bool Assembly-CSharp.dll::RTG::
     SerializableDictionary`2[SerializedKeyType,SerializedValueType]+<>c[Unity::IL2CPP::Metadata::
     __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
     SerializableDictionary_2_SerializedKeyType_SerializedValueType_c_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___RemoveNullKeys_b__14_0
               (SerializableDictionary_2_SerializedKeyType_SerializedValueType_c_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                *this,KeyValuePair_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                      *keyValuePair,MethodInfo *method)

{
  uVar1 = (method->klass->rgctx_data[6].klass)->actualSize;
  uVar2 = (ulonglong)(method->klass->rgctx_data[9].klass)->actualSize;
  apuStack_3[0] = &UNK_?;
  lVar4 = FUN_?();
  lVar4 = -lVar4;
  plVar5 = (longlong *)((longlong)alStack_6 + lVar4);
  *(undefined **)((longlong)apuStack_3 + lVar4) = &UNK_?;
  lVar7 = FUN_?();
  lVar7 = -lVar7;
  plVar8 = (longlong *)((longlong)alStack_6 + lVar7 + lVar4);
  *(undefined **)((longlong)apuStack_3 + lVar7 + lVar4) = &UNK_?;
  lVar9 = FUN_?();
  lVar9 = -lVar9;
  plStackX_18 = (longlong *)((longlong)alStack_6 + lVar9 + lVar7 + lVar4);
  *(undefined **)((longlong)apuStack_3 + lVar9 + lVar7 + lVar4) = &UNK_?;
  lVar10 = FUN_?();
  lVar10 = -lVar10;
  pvStackX_20 = (void *)((longlong)alStack_6 + lVar10 + lVar9 + lVar7 + lVar4);
  *(undefined **)((longlong)apuStack_3 + lVar10 + lVar9 + lVar7 + lVar4) = &UNK_?;
  FUN_?(pvStackX_20,0,uVar1);
  uVar11 = uVar2 + 0xf;
  if (uVar11 <= uVar2) {
    uVar11 = 0xffffffffffffff0;
  }
  uVar11 = uVar11 & 0xfffffffffffffff0;
  *(undefined **)((longlong)apuStack_3 + lVar10 + lVar9 + lVar7 + lVar4) = &UNK_?;
  FUN_?();
  lVar12 = -uVar11;
  lVar13 = (longlong)alStack_6 + lVar12 + lVar10 + lVar9 + lVar7 + lVar4;
  *(undefined **)((longlong)apuStack_3 + lVar12 + lVar10 + lVar9 + lVar7 + lVar4) =
       &UNK_?;
  FUN_?(lVar13,0,uVar2);
  pIVar14 = (method->klass->rgctx_data[3].method)->methodPointer;
  *(undefined **)((longlong)apuStack_3 + lVar12 + lVar10 + lVar9 + lVar7 + lVar4) =
       &UNK_?;
  plVar15 = (longlong *)(*pIVar14)();
  *(undefined **)((longlong)apuStack_3 + lVar12 + lVar10 + lVar9 + lVar7 + lVar4) =
       &UNK_?;
  FUN_?(plStackX_18,keyValuePair,uVar1);
  *(undefined **)((longlong)apuStack_3 + lVar12 + lVar10 + lVar9 + lVar7 + lVar4) =
       &UNK_?;
  FUN_?(pvStackX_20,plStackX_18,uVar1);
  pIVar16 = method->klass;
  *(longlong **)((longlong)alStack_17 + lVar12 + lVar10 + lVar9 + lVar7 + lVar4) = plVar5;
  pMVar18 = pIVar16->rgctx_data[7].method;
  pIVar19 = pMVar18->invoker_method;
  pIVar14 = (pIVar16->rgctx_data[7].method)->methodPointer;
  *(undefined **)((longlong)apuStack_3 + lVar12 + lVar10 + lVar9 + lVar7 + lVar4) =
       &UNK_?;
  plStackX_18 = plVar5;
  (*pIVar19)(pIVar14,pMVar18,pvStackX_20,&plStackX_18,
            *(void **)((longlong)alStack_17 + lVar12 + lVar10 + lVar9 + lVar7 + lVar4));
  *(undefined **)((longlong)apuStack_3 + lVar12 + lVar10 + lVar9 + lVar7 + lVar4) =
       &UNK_?;
  FUN_?(lVar13,0,uVar2);
  *(undefined **)((longlong)apuStack_3 + lVar12 + lVar10 + lVar9 + lVar7 + lVar4) =
       &UNK_?;
  FUN_?(plVar8,lVar13,uVar2);
  if (plVar15 != (longlong *)0x0) {
    if (-1 < *(int *)&(method->klass->rgctx_data[9].method)->return_type) {
      plVar8 = (longlong *)*plVar8;
      plVar5 = (longlong *)*plVar5;
    }
    lVar13 = *(longlong *)(*plVar15 + 0x1c0);
    pcVar20 = *(code **)(lVar13 + 0x10);
    uVar21 = *(undefined8 *)(lVar13 + 8);
    alStack_6[0] = (longlong)plVar5;
    alStack_6[1] = (longlong)plVar8;
    *(longlong ***)((longlong)alStack_17 + lVar12 + lVar10 + lVar9 + lVar7 + lVar4) = &plStackX_18
    ;
    *(undefined **)((longlong)apuStack_3 + lVar12 + lVar10 + lVar9 + lVar7 + lVar4) =
         &UNK_?;
    (*pcVar20)(uVar21,lVar13,plVar15,alStack_6);
    return (char)plStackX_18 == '\0';
  }
  *(undefined **)((longlong)apuStack_3 + lVar12 + lVar10 + lVar9 + lVar7 + lVar4) =
       &UNK_?;
  FUN_?();
  pcVar20 = (code *)swi(3);
  bVar22 = (*pcVar20)();
  return bVar22;
}


/* __Il2CppFullySharedGenericType
   <RemoveNullKeys>b__14_1(KeyValuePair`2[Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType])
    */

_Il2CppFullySharedGenericType *
Assembly-CSharp.dll::RTG::SerializableDictionary`2[SerializedKeyType,SerializedValueType]+<>c[Unity
::IL2CPP::Metadata::__Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::
__Il2CppFullySharedGenericType]::
SerializableDictionary_2_SerializedKeyType_SerializedValueType_c_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___RemoveNullKeys_b__14_1
          (SerializableDictionary_2_SerializedKeyType_SerializedValueType_c_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
           *this,KeyValuePair_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                 *keyValuePair,MethodInfo *method)

{
  lVar1 = *(longlong *)(*(longlong *)(in_R9 + 0x20) + 0xc0);
  uVar2 = *(undefined4 *)(*(longlong *)(lVar1 + 0x48) + 0xfc);
  apuStack_3[0] = &UNK_?;
  lVar4 = FUN_?(lVar1,keyValuePair,keyValuePair);
  lVar4 = -lVar4;
  lVar1 = *(longlong *)(*(longlong *)(in_R9 + 0x20) + 0xc0);
  *(undefined1 **)((longlong)alStack_5 + lVar4) = &stack0xfffffffffffffff8 + lVar4;
  puVar6 = *(undefined8 **)(lVar1 + 0x38);
  pcVar7 = (code *)puVar6[2];
  uVar8 = *puVar6;
  *(undefined **)((longlong)apuStack_3 + lVar4) = &UNK_?;
  (*pcVar7)(uVar8);
  *(undefined **)((longlong)apuStack_3 + lVar4) = &UNK_?;
  p_Var7 = (_Il2CppFullySharedGenericType *)
           FUN_?(method,&stack0xfffffffffffffff8 + lVar4,uVar2);
  return p_Var7;
}


/* __Il2CppFullySharedGenericType
   <RemoveNullKeys>b__14_2(KeyValuePair`2[Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType])
    */

_Il2CppFullySharedGenericType *
Assembly-CSharp.dll::RTG::SerializableDictionary`2[SerializedKeyType,SerializedValueType]+<>c[Unity
::IL2CPP::Metadata::__Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::
__Il2CppFullySharedGenericType]::
SerializableDictionary_2_SerializedKeyType_SerializedValueType_c_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___RemoveNullKeys_b__14_2
          (SerializableDictionary_2_SerializedKeyType_SerializedValueType_c_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
           *this,KeyValuePair_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                 *keyValuePair,MethodInfo *method)

{
  lVar1 = *(longlong *)(*(longlong *)(in_R9 + 0x20) + 0xc0);
  uVar2 = *(undefined4 *)(*(longlong *)(lVar1 + 0x60) + 0xfc);
  apuStack_3[0] = &UNK_?;
  lVar4 = FUN_?(lVar1,keyValuePair,keyValuePair);
  lVar4 = -lVar4;
  lVar1 = *(longlong *)(*(longlong *)(in_R9 + 0x20) + 0xc0);
  *(undefined1 **)((longlong)alStack_5 + lVar4) = &stack0xfffffffffffffff8 + lVar4;
  puVar6 = *(undefined8 **)(lVar1 + 0x58);
  pcVar7 = (code *)puVar6[2];
  uVar8 = *puVar6;
  *(undefined **)((longlong)apuStack_3 + lVar4) = &UNK_?;
  (*pcVar7)(uVar8);
  *(undefined **)((longlong)apuStack_3 + lVar4) = &UNK_?;
  p_Var7 = (_Il2CppFullySharedGenericType *)
           FUN_?(method,&stack0xfffffffffffffff8 + lVar4,uVar2);
  return p_Var7;
}

