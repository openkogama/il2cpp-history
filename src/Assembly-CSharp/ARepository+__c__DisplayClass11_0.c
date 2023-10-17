
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
    pDVar2 = extraout_EDX;
  }
  else {
    bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Object,GUILoginHandler+PlanetData]::
            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                      ((Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)returnData,pOVar1,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar3 == 0) {
      return;
    }
    dataType = CONCAT13(3,(undefined3)dataType);
    pOVar1 = (Object *)
             func_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters,
                             (byte *)((int)&dataType + 3));
    pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       (returnData,pOVar1,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    uVar4 = CONCAT44(TypeInfo__System__Int32,pOVar1);
    if (pOVar1 == (Object *)0x0) goto code_?;
    if ((pOVar1->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
    goto code_?;
    func_?(pOVar1);
    if ((this->fields).onWorldObjectExtracted == (ARepository_OnWorldObjectTypeExtracted *)0x0) {
      return;
    }
    pAVar5 = (this->fields).onWorldObjectExtracted;
    dataType = CONCAT13(7,(undefined3)dataType);
    pOVar1 = (Object *)
             func_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters,
                             (byte *)((int)&dataType + 3));
    returnData = (Dictionary_2_System_Object_System_Object_ *)
                 mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                 Object]::Dictionary_2_System_Object_System_Object__get_Item
                           (returnData,pOVar1,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
    if ((returnData == (Dictionary_2_System_Object_System_Object_ *)0x0) ||
       ((pDVar2 = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
        , (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
          typeHierarchyDepth <= (returnData->klass->_1).typeHierarchyDepth &&
        ((Dictionary_2_System_Object_System_Object___Class *)
         (returnData->klass->_1).typeHierarchy
         [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
          typeHierarchyDepth - 1] ==
         TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)))) {
      (*(pAVar5->fields)._._.invoke_impl)
                ((pAVar5->fields)._._.method_code,(pAVar5->fields)._._.method,returnData);
      return;
    }
  }
  uVar4 = func_?(returnData,pDVar2);
code_?:
  func_?(uVar4);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

