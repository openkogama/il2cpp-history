
/* Image GetBoostVisualization(BoostType) */

Image * Assembly-CSharp.dll::BoostImageController::BoostImageController_GetBoostVisualization
                  (BoostImageController *this,BoostType__Enum type,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__BoostType);
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<BoostImageController::BoosterImageDef>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<BoostImageController::BoosterImageDef>__get_Item_int_
                   );
    func_?(&StringLiteral_Boost_type__);
    func_?(&StringLiteral_No_image_found_for_boost_type_);
    cRam_? = '\x01';
  }
  index = 0;
  pLVar1 = (List_1_TabMenuButtonAccessory_AccessoryTabDef_ *)(this->fields).boosterImages;
  do {
    if (pLVar1 == (List_1_TabMenuButtonAccessory_AccessoryTabDef_ *)0x0) {
code_?:
      func_?();
      pcVar2 = (code *)swi(3);
      pIVar3 = (Image *)(*pcVar2)();
      return pIVar3;
    }
    if ((pLVar1->fields)._size <= index) {
      pSVar4 = mscorlib.dll::System::Enum::Enum_ToString((Enum *)&stack0xfffffff0,(MethodInfo *)0x0)
      ;
      pSVar4 = mscorlib.dll::System::String::String_Concat_3
                         (StringLiteral_Boost_type__,pSVar4,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                ((Object *)pSVar4,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)StringLiteral_No_image_found_for_boost_type_,(MethodInfo *)0x0);
      return (Image *)0x0;
    }
    pLVar1 = (List_1_TabMenuButtonAccessory_AccessoryTabDef_ *)(this->fields).boosterImages;
    if (pLVar1 == (List_1_TabMenuButtonAccessory_AccessoryTabDef_ *)0x0) goto code_?;
    TVar5 = mscorlib.dll::System::Collections::Generic::
            List`1[TabMenuButtonAccessory+AccessoryTabDef]::
            List_1_TabMenuButtonAccessory_AccessoryTabDef__get_Item
                      (pLVar1,index,
                       MethodInfo__System__Collections__Generic__List<BoostImageController::BoosterImageDef>__get_Item_int_
                      );
    pLVar1 = (List_1_TabMenuButtonAccessory_AccessoryTabDef_ *)(this->fields).boosterImages;
    if (TVar5.tabID == type) {
      if (pLVar1 != (List_1_TabMenuButtonAccessory_AccessoryTabDef_ *)0x0) {
        TVar5 = mscorlib.dll::System::Collections::Generic::
                List`1[TabMenuButtonAccessory+AccessoryTabDef]::
                List_1_TabMenuButtonAccessory_AccessoryTabDef__get_Item
                          (pLVar1,index,
                           MethodInfo__System__Collections__Generic__List<BoostImageController::BoosterImageDef>__get_Item_int_
                          );
        return (Image *)TVar5.streamedImagePrefab;
      }
      goto code_?;
    }
    index = index + 1;
  } while( true );
}

