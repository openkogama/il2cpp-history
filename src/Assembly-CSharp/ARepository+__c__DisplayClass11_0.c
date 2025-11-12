
/* Void <GetWorldObjectTypeFromMVItemData>b__0(Dictionary`2[System.Object,System.Object],
   KogamaDataType) */

void Assembly-CSharp.dll::ARepository+<>c__DisplayClass11_0::
     ARepository_c_DisplayClass11_0__GetWorldObjectTypeFromMVItemData_b__0
               (ARepository_c_DisplayClass11_0 *this,
               Dictionary_2_System_Object_System_Object_ *returnData,KogamaDataType__Enum dataType,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__WorldObjectDataParameters);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((char)dataType == '\x01') {
    auStackX_18[0] = 3;
    pOVar1 = (Object *)
             FUN_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters,auStackX_18);
    if (returnData == (Dictionary_2_System_Object_System_Object_ *)0x0) {
code_?:
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::StyleComplexSelector+PseudoStateData]::
            Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                        *)returnData,pOVar1,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                       ->klass->rgctx_data[0x21].method);
    if (-1 < iVar3) {
      auStackX_18[0] = 3;
      pOVar1 = (Object *)
               FUN_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters,auStackX_18);
      pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         (returnData,pOVar1,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      if (pOVar1 == (Object *)0x0) goto code_?;
      if ((pOVar1->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
        FUN_?(pOVar1,lRam_?);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if ((this->fields).onWorldObjectExtracted != (ARepository_OnWorldObjectTypeExtracted *)0x0) {
        pAVar4 = (this->fields).onWorldObjectExtracted;
        uVar5 = *(undefined4 *)&pOVar1[1].klass;
        auStackX_18[0] = 7;
        pOVar1 = (Object *)
                 FUN_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters,auStackX_18);
        pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                 Object]::Dictionary_2_System_Object_System_Object__get_Item
                           (returnData,pOVar1,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        if (pOVar1 != (Object *)0x0) {
          bVar6 = (
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                  ->_1).naturalAligment;
          if (((pOVar1->klass->_1).naturalAligment < bVar6) ||
             ((Dictionary_2_System_Object_System_Object___Class *)
              (pOVar1->klass->_1).typeHierarchy[(ulonglong)bVar6 - 1] !=
              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
            FUN_?();
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        (*(pAVar4->fields)._._.invoke_impl)
                  ((pAVar4->fields)._._.method_code,uVar5,pOVar1,(pAVar4->fields)._._.method);
      }
    }
  }
  return;
}

