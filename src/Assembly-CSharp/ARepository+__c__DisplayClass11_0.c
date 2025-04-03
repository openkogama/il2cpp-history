
/* Void <GetWorldObjectTypeFromMVItemData>b__0(Dictionary`2[System.Object,System.Object],
   KogamaDataType) */

void Assembly-CSharp.dll::ARepository+<>c__DisplayClass11_0::
     ARepository_c_DisplayClass11_0__GetWorldObjectTypeFromMVItemData_b__0
               (ARepository_c_DisplayClass11_0 *this,
               Dictionary_2_System_Object_System_Object_ *returnData,KogamaDataType__Enum dataType,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__MV__WorldObject__WorldObjectDataParameters);
    cRam_? = '\x01';
  }
  if ((undefined1)dataType != KogamaDataType__Enum_WorldObjects) {
    return;
  }
  dataType = CONCAT13(3,(undefined3)dataType);
  pOVar1 = (Object *)
           func_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters,
                           (byte *)((int)&dataType + 3));
  if (returnData == (Dictionary_2_System_Object_System_Object_ *)0x0) {
code_?:
    func_?();
    TVar2.m_Index = extraout_EDX;
  }
  else {
    bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)returnData,
                       pOVar1,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar3 == 0) {
      return;
    }
    dataType = CONCAT13(3,(undefined3)dataType);
    pOVar1 = (Object *)func_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters);
    TVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)returnData,
                       pOVar1,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    uVar4 = CONCAT44(TypeInfo__System__Int32,TVar2.m_Index);
    if (TVar2.m_Index == 0) goto code_?;
    if (*(Il2CppClass **)(*(int *)TVar2.m_Index + 0x20) !=
        (TypeInfo__System__Int32->_0).element_class) goto code_?;
    puVar5 = (undefined4 *)func_?(TVar2.m_Index);
    pAVar6 = (this->fields).onWorldObjectExtracted;
    if (pAVar6 == (ARepository_OnWorldObjectTypeExtracted *)0x0) {
      return;
    }
    uVar7 = *puVar5;
    dataType = CONCAT13(7,(undefined3)dataType);
    pOVar1 = (Object *)
             func_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters,
                             (byte *)((int)&dataType + 3));
    TVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)returnData,
                       pOVar1,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    if (TVar2.m_Index == 0) {
code_?:
      (*(pAVar6->fields)._._.invoke_impl)
                ((pAVar6->fields)._._.method_code,uVar7,TVar2.m_Index,(pAVar6->fields)._._.method);
      return;
    }
    bVar8 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1)
            .naturalAligment;
    returnData = (Dictionary_2_System_Object_System_Object_ *)
                 TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
    if ((bVar8 <= *(byte *)(*(int *)TVar2.m_Index + 0xb8)) &&
       (*(Dictionary_2_System_Object_System_Object___Class **)
         (*(int *)(*(int *)TVar2.m_Index + 100) + -4 + (uint)bVar8 * 4) ==
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
    goto code_?;
  }
  uVar4 = func_?(TVar2.m_Index,returnData);
code_?:
  func_?(uVar4);
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}

