
/* Image GetBoostVisualization(BoostType) */

Image * Assembly-CSharp.dll::BoostImageController::BoostImageController_GetBoostVisualization
                  (BoostImageController *this,BoostType__Enum type,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pBVar1 = this;
  index = 0;
  pLVar2 = (this->fields).boosterImages;
  do {
    if (pLVar2 == (List_1_BoostImageController_BoosterImageDef_ *)0x0) {
code_?:
      func_?(0);
      pcVar3 = (code *)swi(3);
      pIVar4 = (Image *)(*pcVar3)();
      return pIVar4;
    }
    pOVar5 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar2,
                        MethodInfo__System__Collections__Generic__List<BoostImageController::BoosterImageDef>__get_Count__
                       );
    if ((int)pOVar5 <= index) {
      this = (BoostImageController *)type;
      pOVar5 = (Object *)func_?(TypeInfo__BoostType,&this);
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__String);
      }
      message = mscorlib.dll::System::String::String_Concat
                          ((Object *)StringLiteral_Boost_type__,pOVar5,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                ((Object *)message,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)StringLiteral_No_image_found_for_boost_type_,(MethodInfo *)0x0);
      return (Image *)0x0;
    }
    pLVar2 = (pBVar1->fields).boosterImages;
    if (pLVar2 == (List_1_BoostImageController_BoosterImageDef_ *)0x0) goto code_?;
    BVar6 = mscorlib.dll::System::Collections::Generic::List`1[BoostImageController+BoosterImageDef]
            ::List_1_BoostImageController_BoosterImageDef__get_Item
                      (pLVar2,index,
                       MethodInfo__System__Collections__Generic__List<BoostImageController::BoosterImageDef>__get_Item_int_
                      );
    pLVar2 = (pBVar1->fields).boosterImages;
    if (BVar6.type == type) {
      if (pLVar2 != (List_1_BoostImageController_BoosterImageDef_ *)0x0) {
        BVar6 = mscorlib.dll::System::Collections::Generic::
                List`1[BoostImageController+BoosterImageDef]::
                List_1_BoostImageController_BoosterImageDef__get_Item
                          (pLVar2,index,
                           MethodInfo__System__Collections__Generic__List<BoostImageController::BoosterImageDef>__get_Item_int_
                          );
        return BVar6.image;
      }
      goto code_?;
    }
    index = index + 1;
  } while( true );
}

